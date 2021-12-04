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
#ifndef VULKAN2JSON_DEPENDENCYFLAGS_HPP
#define VULKAN2JSON_DEPENDENCYFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const DependencyFlagBits &p ) {
  if( DependencyFlagBits :: eByRegion == p ) {
    j = "ByRegion";
    return;
  }
  if( DependencyFlagBits :: eDeviceGroup == p ) {
    j = "DeviceGroup";
    return;
  }
  if( DependencyFlagBits :: eViewLocal == p ) {
    j = "ViewLocal";
    return;
  }
  if( DependencyFlagBits :: eDeviceGroupKHR == p ) {
    j = "DeviceGroupKHR";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DependencyFlagBits &p ) {
  if( j.is_string() ) {
    if( "ByRegion" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eByRegion ;
      return;
    }
    if( "eByRegion" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eByRegion ;
      return;
    }
    if( "VK_DEPENDENCY_BY_REGION_BIT" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eByRegion ;
      return;
    }
    if( "DeviceGroup" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroup ;
      return;
    }
    if( "eDeviceGroup" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroup ;
      return;
    }
    if( "VK_DEPENDENCY_DEVICE_GROUP_BIT" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroup ;
      return;
    }
    if( "ViewLocal" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eViewLocal ;
      return;
    }
    if( "eViewLocal" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eViewLocal ;
      return;
    }
    if( "VK_DEPENDENCY_VIEW_LOCAL_BIT" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eViewLocal ;
      return;
    }
    if( "DeviceGroupKHR" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroupKHR ;
      return;
    }
    if( "eDeviceGroupKHR" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroupKHR ;
      return;
    }
    if( "VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR" == j.get< std::string >() ) {
      p = DependencyFlagBits :: eDeviceGroupKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DependencyFlagBits" );
  }
  if( j.is_number() ) {
    p = DependencyFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DependencyFlagBits" );
}
inline void to_json( nlohmann::json &j, const DependencyFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DependencyFlagBits ) * 8u; ++n ) {
    if( p & DependencyFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DependencyFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DependencyFlags &p ) {
  if( j.is_array() ) {
    p = DependencyFlags ( 0 );
    for( auto &e:  j ) {
      DependencyFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DependencyFlags" );
}
}
#endif


#endif
