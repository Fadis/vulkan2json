/*
 * Copyright (c) 2021 Naomasa Matsubayashi
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef VULKAN2JSON_QUEUEFLAGS_HPP
#define VULKAN2JSON_QUEUEFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const QueueFlagBits &p ) {
  if( QueueFlagBits :: eGraphics == p ) {
    j = "Graphics";
    return;
  }
  if( QueueFlagBits :: eCompute == p ) {
    j = "Compute";
    return;
  }
  if( QueueFlagBits :: eTransfer == p ) {
    j = "Transfer";
    return;
  }
  if( QueueFlagBits :: eSparseBinding == p ) {
    j = "SparseBinding";
    return;
  }
  if( QueueFlagBits :: eProtected == p ) {
    j = "Protected";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( QueueFlagBits :: eVideoDecodeKHR == p ) {
    j = "VideoDecodeKHR";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, QueueFlagBits &p ) {
  if( j.is_string() ) {
    if( "Graphics" == j.get< std::string >() ) {
      p = QueueFlagBits :: eGraphics ;
      return;
    }
    if( "eGraphics" == j.get< std::string >() ) {
      p = QueueFlagBits :: eGraphics ;
      return;
    }
    if( "VK_QUEUE_GRAPHICS_BIT" == j.get< std::string >() ) {
      p = QueueFlagBits :: eGraphics ;
      return;
    }
    if( "Compute" == j.get< std::string >() ) {
      p = QueueFlagBits :: eCompute ;
      return;
    }
    if( "eCompute" == j.get< std::string >() ) {
      p = QueueFlagBits :: eCompute ;
      return;
    }
    if( "VK_QUEUE_COMPUTE_BIT" == j.get< std::string >() ) {
      p = QueueFlagBits :: eCompute ;
      return;
    }
    if( "Transfer" == j.get< std::string >() ) {
      p = QueueFlagBits :: eTransfer ;
      return;
    }
    if( "eTransfer" == j.get< std::string >() ) {
      p = QueueFlagBits :: eTransfer ;
      return;
    }
    if( "VK_QUEUE_TRANSFER_BIT" == j.get< std::string >() ) {
      p = QueueFlagBits :: eTransfer ;
      return;
    }
    if( "SparseBinding" == j.get< std::string >() ) {
      p = QueueFlagBits :: eSparseBinding ;
      return;
    }
    if( "eSparseBinding" == j.get< std::string >() ) {
      p = QueueFlagBits :: eSparseBinding ;
      return;
    }
    if( "VK_QUEUE_SPARSE_BINDING_BIT" == j.get< std::string >() ) {
      p = QueueFlagBits :: eSparseBinding ;
      return;
    }
    if( "Protected" == j.get< std::string >() ) {
      p = QueueFlagBits :: eProtected ;
      return;
    }
    if( "eProtected" == j.get< std::string >() ) {
      p = QueueFlagBits :: eProtected ;
      return;
    }
    if( "VK_QUEUE_PROTECTED_BIT" == j.get< std::string >() ) {
      p = QueueFlagBits :: eProtected ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeKHR" == j.get< std::string >() ) {
      p = QueueFlagBits :: eVideoDecodeKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeKHR" == j.get< std::string >() ) {
      p = QueueFlagBits :: eVideoDecodeKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_QUEUE_VIDEO_DECODE_BIT_KHR" == j.get< std::string >() ) {
      p = QueueFlagBits :: eVideoDecodeKHR ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for QueueFlagBits" );
  }
  if( j.is_number() ) {
    p = QueueFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for QueueFlagBits" );
}
inline void to_json( nlohmann::json &j, const QueueFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( QueueFlagBits ) * 8u; ++n ) {
    if( p & QueueFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, QueueFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, QueueFlags &p ) {
  if( j.is_array() ) {
    p = QueueFlags ( 0 );
    for( auto &e:  j ) {
      QueueFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for QueueFlags" );
}
}
#endif


#endif
