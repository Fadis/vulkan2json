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
#ifndef VULKAN2JSON_MEMORYPROPERTYFLAGS_HPP
#define VULKAN2JSON_MEMORYPROPERTYFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const MemoryPropertyFlagBits &p ) {
  if( MemoryPropertyFlagBits :: eDeviceLocal == p ) {
    j = "DeviceLocal";
    return;
  }
  if( MemoryPropertyFlagBits :: eHostVisible == p ) {
    j = "HostVisible";
    return;
  }
  if( MemoryPropertyFlagBits :: eHostCoherent == p ) {
    j = "HostCoherent";
    return;
  }
  if( MemoryPropertyFlagBits :: eHostCached == p ) {
    j = "HostCached";
    return;
  }
  if( MemoryPropertyFlagBits :: eLazilyAllocated == p ) {
    j = "LazilyAllocated";
    return;
  }
  if( MemoryPropertyFlagBits :: eProtected == p ) {
    j = "Protected";
    return;
  }
  if( MemoryPropertyFlagBits :: eDeviceCoherentAMD == p ) {
    j = "DeviceCoherentAMD";
    return;
  }
}
inline void from_json( const nlohmann::json &j, MemoryPropertyFlagBits &p ) {
  if( j.is_string() ) {
    if( "DeviceLocal" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceLocal ;
      return;
    }
    if( "eDeviceLocal" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceLocal ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceLocal ;
      return;
    }
    if( "HostVisible" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostVisible ;
      return;
    }
    if( "eHostVisible" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostVisible ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostVisible ;
      return;
    }
    if( "HostCoherent" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCoherent ;
      return;
    }
    if( "eHostCoherent" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCoherent ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCoherent ;
      return;
    }
    if( "HostCached" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCached ;
      return;
    }
    if( "eHostCached" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCached ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_HOST_CACHED_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eHostCached ;
      return;
    }
    if( "LazilyAllocated" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eLazilyAllocated ;
      return;
    }
    if( "eLazilyAllocated" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eLazilyAllocated ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eLazilyAllocated ;
      return;
    }
    if( "Protected" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eProtected ;
      return;
    }
    if( "eProtected" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eProtected ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_PROTECTED_BIT" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eProtected ;
      return;
    }
    if( "DeviceCoherentAMD" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceCoherentAMD ;
      return;
    }
    if( "eDeviceCoherentAMD" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceCoherentAMD ;
      return;
    }
    if( "VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD" == j.get< std::string >() ) {
      p = MemoryPropertyFlagBits :: eDeviceCoherentAMD ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for MemoryPropertyFlagBits" );
  }
  if( j.is_number() ) {
    p = MemoryPropertyFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for MemoryPropertyFlagBits" );
}
inline void to_json( nlohmann::json &j, const MemoryPropertyFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( MemoryPropertyFlagBits ) * 8u; ++n ) {
    if( p & MemoryPropertyFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, MemoryPropertyFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, MemoryPropertyFlags &p ) {
  if( j.is_array() ) {
    p = MemoryPropertyFlags ( 0 );
    for( auto &e:  j ) {
      MemoryPropertyFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for MemoryPropertyFlags" );
}
}
#endif


#endif
