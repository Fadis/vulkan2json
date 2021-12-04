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
#ifndef VULKAN2JSON_PHYSICALDEVICEDRIVERPROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEDRIVERPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/DriverId.hpp>
#include <vulkan2json/ConformanceVersion.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceDriverProperties &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "driverID" ] = p.driverID;
  j[ "driverName" ] = std::string( p.driverName.begin(), std::find( p.driverName.begin(), p.driverName.end(), '\0' ) );
  j[ "driverInfo" ] = std::string( p.driverInfo.begin(), std::find( p.driverInfo.begin(), p.driverInfo.end(), '\0' ) );
  j[ "conformanceVersion" ] = p.conformanceVersion;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceDriverProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceDriverProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceDriverProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceDriverProperties" );
  p.driverID = DriverId ( j[ "driverID" ] );
  {
    std::string s = j[ "driverName" ];
    if( !p.driverName.empty() ) {
      p.driverName[ p.driverName.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.driverName.size() - 1u ) ), p.driverName.begin() );
    }
  }
  {
    std::string s = j[ "driverInfo" ];
    if( !p.driverInfo.empty() ) {
      p.driverInfo[ p.driverInfo.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.driverInfo.size() - 1u ) ), p.driverInfo.begin() );
    }
  }
  p.conformanceVersion = ConformanceVersion ( j[ "conformanceVersion" ] );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceDriverProperties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceDriverProperties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceDriverProperties ( temp );
}


#endif
