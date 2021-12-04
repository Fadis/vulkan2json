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
#ifndef VULKAN2JSON_EXTERNALMEMORYHANDLETYPEFLAGS_HPP
#define VULKAN2JSON_EXTERNALMEMORYHANDLETYPEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ExternalMemoryHandleTypeFlagBits &p ) {
  if( ExternalMemoryHandleTypeFlagBits :: eOpaqueFd == p ) {
    j = "OpaqueFd";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32 == p ) {
    j = "OpaqueWin32";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32Kmt == p ) {
    j = "OpaqueWin32Kmt";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eD3D11Texture == p ) {
    j = "D3D11Texture";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eD3D11TextureKmt == p ) {
    j = "D3D11TextureKmt";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eD3D12Heap == p ) {
    j = "D3D12Heap";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eD3D12Resource == p ) {
    j = "D3D12Resource";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eDmaBufEXT == p ) {
    j = "DmaBufEXT";
    return;
  }
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  if( ExternalMemoryHandleTypeFlagBits :: eAndroidHardwareBufferANDROID == p ) {
    j = "AndroidHardwareBufferANDROID";
    return;
  }
#endif
  if( ExternalMemoryHandleTypeFlagBits :: eHostAllocationEXT == p ) {
    j = "HostAllocationEXT";
    return;
  }
  if( ExternalMemoryHandleTypeFlagBits :: eHostMappedForeignMemoryEXT == p ) {
    j = "HostMappedForeignMemoryEXT";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ExternalMemoryHandleTypeFlagBits &p ) {
  if( j.is_string() ) {
    if( "OpaqueFd" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "eOpaqueFd" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueFd ;
      return;
    }
    if( "OpaqueWin32" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "eOpaqueWin32" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32 ;
      return;
    }
    if( "OpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "eOpaqueWin32Kmt" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eOpaqueWin32Kmt ;
      return;
    }
    if( "D3D11Texture" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11Texture ;
      return;
    }
    if( "eD3D11Texture" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11Texture ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11Texture ;
      return;
    }
    if( "D3D11TextureKmt" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11TextureKmt ;
      return;
    }
    if( "eD3D11TextureKmt" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11TextureKmt ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D11TextureKmt ;
      return;
    }
    if( "D3D12Heap" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Heap ;
      return;
    }
    if( "eD3D12Heap" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Heap ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Heap ;
      return;
    }
    if( "D3D12Resource" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Resource ;
      return;
    }
    if( "eD3D12Resource" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Resource ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eD3D12Resource ;
      return;
    }
    if( "DmaBufEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eDmaBufEXT ;
      return;
    }
    if( "eDmaBufEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eDmaBufEXT ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eDmaBufEXT ;
      return;
    }
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    if( "AndroidHardwareBufferANDROID" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eAndroidHardwareBufferANDROID ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    if( "eAndroidHardwareBufferANDROID" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eAndroidHardwareBufferANDROID ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eAndroidHardwareBufferANDROID ;
      return;
    }
#endif
    if( "HostAllocationEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostAllocationEXT ;
      return;
    }
    if( "eHostAllocationEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostAllocationEXT ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostAllocationEXT ;
      return;
    }
    if( "HostMappedForeignMemoryEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostMappedForeignMemoryEXT ;
      return;
    }
    if( "eHostMappedForeignMemoryEXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostMappedForeignMemoryEXT ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT" == j.get< std::string >() ) {
      p = ExternalMemoryHandleTypeFlagBits :: eHostMappedForeignMemoryEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ExternalMemoryHandleTypeFlagBits" );
  }
  if( j.is_number() ) {
    p = ExternalMemoryHandleTypeFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ExternalMemoryHandleTypeFlagBits" );
}
inline void to_json( nlohmann::json &j, const ExternalMemoryHandleTypeFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ExternalMemoryHandleTypeFlagBits ) * 8u; ++n ) {
    if( p & ExternalMemoryHandleTypeFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ExternalMemoryHandleTypeFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ExternalMemoryHandleTypeFlags &p ) {
  if( j.is_array() ) {
    p = ExternalMemoryHandleTypeFlags ( 0 );
    for( auto &e:  j ) {
      ExternalMemoryHandleTypeFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ExternalMemoryHandleTypeFlags" );
}
}
#endif


#endif
