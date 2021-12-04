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
#ifndef VULKAN2JSON_EXTERNALSEMAPHOREHANDLETYPEFLAGS_HPP
#define VULKAN2JSON_EXTERNALSEMAPHOREHANDLETYPEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ExternalSemaphoreHandleTypeFlagBits &p ) {
  if( ExternalSemaphoreHandleTypeFlagBits :: eOpaqueFd == p ) {
    j = "OpaqueFd";
    return;
  }
  if( ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32 == p ) {
    j = "OpaqueWin32";
    return;
  }
  if( ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32Kmt == p ) {
    j = "OpaqueWin32Kmt";
    return;
  }
  if( ExternalSemaphoreHandleTypeFlagBits :: eD3D12Fence == p ) {
    j = "D3D12Fence";
    return;
  }
  if( ExternalSemaphoreHandleTypeFlagBits :: eSyncFd == p ) {
    j = "SyncFd";
    return;
  }
#if defined(VK_USE_PLATFORM_FUCHSIA)
  if( ExternalSemaphoreHandleTypeFlagBits :: eZirconEventFUCHSIA == p ) {
    j = "ZirconEventFUCHSIA";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, ExternalSemaphoreHandleTypeFlagBits &p ) {
  if( j.is_string() ) {
    if( "OpaqueFd" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "eOpaqueFd" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "OpaqueWin32" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "eOpaqueWin32" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "OpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "eOpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "D3D12Fence" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eD3D12Fence ;
      return;
    }
    if( "eD3D12Fence" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eD3D12Fence ;
      return;
    }
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eD3D12Fence ;
      return;
    }
    if( "SyncFd" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eSyncFd ;
      return;
    }
    if( "eSyncFd" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eSyncFd ;
      return;
    }
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eSyncFd ;
      return;
    }
#if defined(VK_USE_PLATFORM_FUCHSIA)
    if( "ZirconEventFUCHSIA" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eZirconEventFUCHSIA ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    if( "eZirconEventFUCHSIA" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eZirconEventFUCHSIA ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    if( "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_ZIRCON_EVENT_BIT_FUCHSIA" == j.get< std::string >() ) {
      p = ExternalSemaphoreHandleTypeFlagBits :: eZirconEventFUCHSIA ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for ExternalSemaphoreHandleTypeFlagBits" );
  }
  if( j.is_number() ) {
    p = ExternalSemaphoreHandleTypeFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ExternalSemaphoreHandleTypeFlagBits" );
}
inline void to_json( nlohmann::json &j, const ExternalSemaphoreHandleTypeFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ExternalSemaphoreHandleTypeFlagBits ) * 8u; ++n ) {
    if( p & ExternalSemaphoreHandleTypeFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ExternalSemaphoreHandleTypeFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ExternalSemaphoreHandleTypeFlags &p ) {
  if( j.is_array() ) {
    p = ExternalSemaphoreHandleTypeFlags ( 0 );
    for( auto &e:  j ) {
      ExternalSemaphoreHandleTypeFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ExternalSemaphoreHandleTypeFlags" );
}
}
#endif


#endif
