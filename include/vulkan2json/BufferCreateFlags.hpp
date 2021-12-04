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
#ifndef VULKAN2JSON_BUFFERCREATEFLAGS_HPP
#define VULKAN2JSON_BUFFERCREATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const BufferCreateFlagBits &p ) {
  if( BufferCreateFlagBits :: eSparseBinding == p ) {
    j = "SparseBinding";
    return;
  }
  if( BufferCreateFlagBits :: eSparseResidency == p ) {
    j = "SparseResidency";
    return;
  }
  if( BufferCreateFlagBits :: eSparseAliased == p ) {
    j = "SparseAliased";
    return;
  }
  if( BufferCreateFlagBits :: eProtected == p ) {
    j = "Protected";
    return;
  }
  if( BufferCreateFlagBits :: eDeviceAddressCaptureReplay == p ) {
    j = "DeviceAddressCaptureReplay";
    return;
  }
  if( BufferCreateFlagBits :: eDeviceAddressCaptureReplayEXT == p ) {
    j = "DeviceAddressCaptureReplayEXT";
    return;
  }
}
inline void from_json( const nlohmann::json &j, BufferCreateFlagBits &p ) {
  if( j.is_string() ) {
    if( "SparseBinding" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "eSparseBinding" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "VK_BUFFER_CREATE_SPARSE_BINDING_BIT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "SparseResidency" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "eSparseResidency" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "SparseAliased" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "eSparseAliased" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "VK_BUFFER_CREATE_SPARSE_ALIASED_BIT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "Protected" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eProtected ;
      return;
    }
    if( "eProtected" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eProtected ;
      return;
    }
    if( "VK_BUFFER_CREATE_PROTECTED_BIT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eProtected ;
      return;
    }
    if( "DeviceAddressCaptureReplay" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplay ;
      return;
    }
    if( "eDeviceAddressCaptureReplay" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplay ;
      return;
    }
    if( "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplay ;
      return;
    }
    if( "DeviceAddressCaptureReplayEXT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplayEXT ;
      return;
    }
    if( "eDeviceAddressCaptureReplayEXT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplayEXT ;
      return;
    }
    if( "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT" == j.get< std::string >() ) {
      p = BufferCreateFlagBits :: eDeviceAddressCaptureReplayEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BufferCreateFlagBits" );
  }
  if( j.is_number() ) {
    p = BufferCreateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BufferCreateFlagBits" );
}
inline void to_json( nlohmann::json &j, const BufferCreateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( BufferCreateFlagBits ) * 8u; ++n ) {
    if( p & BufferCreateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, BufferCreateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, BufferCreateFlags &p ) {
  if( j.is_array() ) {
    p = BufferCreateFlags ( 0 );
    for( auto &e:  j ) {
      BufferCreateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for BufferCreateFlags" );
}
}
#endif


#endif
