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
#ifndef VULKAN2JSON_EXTERNALFENCEHANDLETYPEFLAGS_HPP
#define VULKAN2JSON_EXTERNALFENCEHANDLETYPEFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_1
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ExternalFenceHandleTypeFlagBits &p ) {
  if( ExternalFenceHandleTypeFlagBits :: eOpaqueFd == p ) {
    j = "OpaqueFd";
    return;
  }
  if( ExternalFenceHandleTypeFlagBits :: eOpaqueWin32 == p ) {
    j = "OpaqueWin32";
    return;
  }
  if( ExternalFenceHandleTypeFlagBits :: eOpaqueWin32Kmt == p ) {
    j = "OpaqueWin32Kmt";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ExternalFenceHandleTypeFlagBits &p ) {
  if( j.is_string() ) {
    if( "OpaqueFd" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "eOpaqueFd" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "OpaqueWin32" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "eOpaqueWin32" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "OpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "eOpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT" == j.get< std::string >() ) {
      p = ExternalFenceHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ExternalFenceHandleTypeFlagBits" );
  }
  if( j.is_number() ) {
    p = ExternalFenceHandleTypeFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ExternalFenceHandleTypeFlagBits" );
}
inline void to_json( nlohmann::json &j, const ExternalFenceHandleTypeFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ExternalFenceHandleTypeFlagBits ) * 8u; ++n ) {
    if( p & ExternalFenceHandleTypeFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ExternalFenceHandleTypeFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ExternalFenceHandleTypeFlags &p ) {
  if( j.is_array() ) {
    p = ExternalFenceHandleTypeFlags ( 0 );
    for( auto &e:  j ) {
      ExternalFenceHandleTypeFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ExternalFenceHandleTypeFlags" );
}
}
#endif


#endif
