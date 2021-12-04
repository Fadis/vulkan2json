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
#ifndef VULKAN2JSON_VIDEOCOMPONENTBITDEPTHFLAGSKHR_HPP
#define VULKAN2JSON_VIDEOCOMPONENTBITDEPTHFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_VIDEO_QUEUE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoComponentBitDepthFlagBitsKHR &p ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoComponentBitDepthFlagBitsKHR :: eInvalid == p ) {
    j = "Invalid";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoComponentBitDepthFlagBitsKHR :: e8 == p ) {
    j = "8";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoComponentBitDepthFlagBitsKHR :: e10 == p ) {
    j = "10";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoComponentBitDepthFlagBitsKHR &p ) {
  if( j.is_string() ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "Invalid" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: eInvalid ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eInvalid" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: eInvalid ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_COMPONENT_BIT_DEPTH_INVALID_KHR" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: eInvalid ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "8" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "e8" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_COMPONENT_BIT_DEPTH_8_BIT_KHR" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "10" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e10 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "e10" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e10 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_COMPONENT_BIT_DEPTH_10_BIT_KHR" == j.get< std::string >() ) {
      p = VideoComponentBitDepthFlagBitsKHR :: e10 ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoComponentBitDepthFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = VideoComponentBitDepthFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoComponentBitDepthFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const VideoComponentBitDepthFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoComponentBitDepthFlagBitsKHR ) * 8u; ++n ) {
    if( p & VideoComponentBitDepthFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoComponentBitDepthFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoComponentBitDepthFlagsKHR &p ) {
  if( j.is_array() ) {
    p = VideoComponentBitDepthFlagsKHR ( 0 );
    for( auto &e:  j ) {
      VideoComponentBitDepthFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoComponentBitDepthFlagsKHR" );
}
}
#endif


#endif
