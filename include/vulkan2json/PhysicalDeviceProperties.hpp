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
#ifndef VULKAN2JSON_PHYSICALDEVICEPROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/PhysicalDeviceType.hpp>
#include <vulkan2json/PhysicalDeviceLimits.hpp>
#include <vulkan2json/PhysicalDeviceSparseProperties.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceProperties &p ) {
  j = nlohmann::json::object();
  j[ "apiVersion" ] = p.apiVersion;
  j[ "driverVersion" ] = p.driverVersion;
  j[ "vendorID" ] = p.vendorID;
  j[ "deviceID" ] = p.deviceID;
  j[ "deviceType" ] = p.deviceType;
  j[ "deviceName" ] = std::string( p.deviceName.begin(), std::find( p.deviceName.begin(), p.deviceName.end(), '\0' ) );
  j[ "pipelineCacheUUID" ] = nlohmann::json::array();
  std::copy( p.pipelineCacheUUID.begin(), p.pipelineCacheUUID.end(), std::back_inserter( j[ "pipelineCacheUUID" ] ) );
  j[ "limits" ] = p.limits;
  j[ "sparseProperties" ] = p.sparseProperties;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceProperties" );
  p.apiVersion = j[ "apiVersion" ];
  p.driverVersion = j[ "driverVersion" ];
  p.vendorID = j[ "vendorID" ];
  p.deviceID = j[ "deviceID" ];
  p.deviceType = PhysicalDeviceType ( j[ "deviceType" ] );
  {
    std::string s = j[ "deviceName" ];
    if( !p.deviceName.empty() ) {
      p.deviceName[ p.deviceName.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.deviceName.size() - 1u ) ), p.deviceName.begin() );
    }
  }
  if( !j[ "pipelineCacheUUID" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceProperties.pipelineCacheUUID" );
  if( !j[ "pipelineCacheUUID" ].size() > p.pipelineCacheUUID.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceProperties.pipelineCacheUUID" );
  std::fill( p.pipelineCacheUUID.begin(), p.pipelineCacheUUID.end(), 0 );
  std::copy( j[ "pipelineCacheUUID" ].begin(), j[ "pipelineCacheUUID" ].end(), p.pipelineCacheUUID.begin() );
  p.limits = PhysicalDeviceLimits ( j[ "limits" ] );
  p.sparseProperties = PhysicalDeviceSparseProperties ( j[ "sparseProperties" ] );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceProperties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceProperties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceProperties ( temp );
}


#endif
