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
#ifndef VULKAN2JSON_MEMORYALLOCATEFLAGS_HPP
#define VULKAN2JSON_MEMORYALLOCATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const MemoryAllocateFlagBits &p ) {
  if( MemoryAllocateFlagBits :: eDeviceMask == p ) {
    j = "DeviceMask";
    return;
  }
  if( MemoryAllocateFlagBits :: eDeviceAddress == p ) {
    j = "DeviceAddress";
    return;
  }
}
inline void from_json( const nlohmann::json &j, MemoryAllocateFlagBits &p ) {
  if( j.is_string() ) {
    if( "DeviceMask" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceMask ;
      return;
    }
    if( "eDeviceMask" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceMask ;
      return;
    }
    if( "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceMask ;
      return;
    }
    if( "DeviceAddress" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceAddress ;
      return;
    }
    if( "eDeviceAddress" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceAddress ;
      return;
    }
    if( "VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT" == j.get< std::string >() ) {
      p = MemoryAllocateFlagBits :: eDeviceAddress ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for MemoryAllocateFlagBits" );
  }
  if( j.is_number() ) {
    p = MemoryAllocateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for MemoryAllocateFlagBits" );
}
inline void to_json( nlohmann::json &j, const MemoryAllocateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( MemoryAllocateFlagBits ) * 8u; ++n ) {
    if( p & MemoryAllocateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, MemoryAllocateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, MemoryAllocateFlags &p ) {
  if( j.is_array() ) {
    p = MemoryAllocateFlags ( 0 );
    for( auto &e:  j ) {
      MemoryAllocateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for MemoryAllocateFlags" );
}
}
#endif


#endif
