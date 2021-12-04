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
#ifndef VULKAN2JSON_PHYSICALDEVICEVULKAN11PROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEVULKAN11PROPERTIES_HPP

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
#include <vulkan2json/ShaderStageFlags.hpp>
#include <vulkan2json/SubgroupFeatureFlags.hpp>
#include <vulkan2json/PointClippingBehavior.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceVulkan11Properties &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "deviceUUID" ] = nlohmann::json::array();
  std::copy( p.deviceUUID.begin(), p.deviceUUID.end(), std::back_inserter( j[ "deviceUUID" ] ) );
  j[ "driverUUID" ] = nlohmann::json::array();
  std::copy( p.driverUUID.begin(), p.driverUUID.end(), std::back_inserter( j[ "driverUUID" ] ) );
  j[ "deviceLUID" ] = nlohmann::json::array();
  std::copy( p.deviceLUID.begin(), p.deviceLUID.end(), std::back_inserter( j[ "deviceLUID" ] ) );
  j[ "deviceNodeMask" ] = p.deviceNodeMask;
  j[ "deviceLUIDValid" ] = bool( p.deviceLUIDValid );
  j[ "subgroupSize" ] = p.subgroupSize;
  j[ "subgroupSupportedStages" ] = p.subgroupSupportedStages;
  j[ "subgroupSupportedOperations" ] = p.subgroupSupportedOperations;
  j[ "subgroupQuadOperationsInAllStages" ] = bool( p.subgroupQuadOperationsInAllStages );
  j[ "pointClippingBehavior" ] = p.pointClippingBehavior;
  j[ "maxMultiviewViewCount" ] = p.maxMultiviewViewCount;
  j[ "maxMultiviewInstanceIndex" ] = p.maxMultiviewInstanceIndex;
  j[ "protectedNoFault" ] = bool( p.protectedNoFault );
  j[ "maxPerSetDescriptors" ] = p.maxPerSetDescriptors;
  j[ "maxMemoryAllocationSize" ] = p.maxMemoryAllocationSize;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceVulkan11Properties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan11Properties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceVulkan11Properties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceVulkan11Properties" );
  if( !j[ "deviceUUID" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceVulkan11Properties.deviceUUID" );
  if( !j[ "deviceUUID" ].size() > p.deviceUUID.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceVulkan11Properties.deviceUUID" );
  std::fill( p.deviceUUID.begin(), p.deviceUUID.end(), 0 );
  std::copy( j[ "deviceUUID" ].begin(), j[ "deviceUUID" ].end(), p.deviceUUID.begin() );
  if( !j[ "driverUUID" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceVulkan11Properties.driverUUID" );
  if( !j[ "driverUUID" ].size() > p.driverUUID.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceVulkan11Properties.driverUUID" );
  std::fill( p.driverUUID.begin(), p.driverUUID.end(), 0 );
  std::copy( j[ "driverUUID" ].begin(), j[ "driverUUID" ].end(), p.driverUUID.begin() );
  if( !j[ "deviceLUID" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceVulkan11Properties.deviceLUID" );
  if( !j[ "deviceLUID" ].size() > p.deviceLUID.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceVulkan11Properties.deviceLUID" );
  std::fill( p.deviceLUID.begin(), p.deviceLUID.end(), 0 );
  std::copy( j[ "deviceLUID" ].begin(), j[ "deviceLUID" ].end(), p.deviceLUID.begin() );
  p.deviceNodeMask = j[ "deviceNodeMask" ];
  p.deviceLUIDValid = j[ "deviceLUIDValid" ];
  p.subgroupSize = j[ "subgroupSize" ];
  p.subgroupSupportedStages = ShaderStageFlags ( j[ "subgroupSupportedStages" ] );
  p.subgroupSupportedOperations = SubgroupFeatureFlags ( j[ "subgroupSupportedOperations" ] );
  p.subgroupQuadOperationsInAllStages = j[ "subgroupQuadOperationsInAllStages" ];
  p.pointClippingBehavior = PointClippingBehavior ( j[ "pointClippingBehavior" ] );
  p.maxMultiviewViewCount = j[ "maxMultiviewViewCount" ];
  p.maxMultiviewInstanceIndex = j[ "maxMultiviewInstanceIndex" ];
  p.protectedNoFault = j[ "protectedNoFault" ];
  p.maxPerSetDescriptors = j[ "maxPerSetDescriptors" ];
  p.maxMemoryAllocationSize = j[ "maxMemoryAllocationSize" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceVulkan11Properties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan11Properties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceVulkan11Properties ( temp );
}


#endif
