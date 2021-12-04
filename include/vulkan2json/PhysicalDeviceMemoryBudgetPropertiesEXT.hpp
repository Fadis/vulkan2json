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
#ifndef VULKAN2JSON_PHYSICALDEVICEMEMORYBUDGETPROPERTIESEXT_HPP
#define VULKAN2JSON_PHYSICALDEVICEMEMORYBUDGETPROPERTIESEXT_HPP

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
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceMemoryBudgetPropertiesEXT &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "heapBudget" ] = nlohmann::json::array();
  std::copy( p.heapBudget.begin(), p.heapBudget.end(), std::back_inserter( j[ "heapBudget" ] ) );
  j[ "heapUsage" ] = nlohmann::json::array();
  std::copy( p.heapUsage.begin(), p.heapUsage.end(), std::back_inserter( j[ "heapUsage" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceMemoryBudgetPropertiesEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceMemoryBudgetPropertiesEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceMemoryBudgetPropertiesEXT &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceMemoryBudgetPropertiesEXT" );
  if( !j[ "heapBudget" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMemoryBudgetPropertiesEXT.heapBudget" );
  if( !j[ "heapBudget" ].size() > p.heapBudget.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceMemoryBudgetPropertiesEXT.heapBudget" );
  std::fill( p.heapBudget.begin(), p.heapBudget.end(), 0 );
  std::copy( j[ "heapBudget" ].begin(), j[ "heapBudget" ].end(), p.heapBudget.begin() );
  if( !j[ "heapUsage" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMemoryBudgetPropertiesEXT.heapUsage" );
  if( !j[ "heapUsage" ].size() > p.heapUsage.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceMemoryBudgetPropertiesEXT.heapUsage" );
  std::fill( p.heapUsage.begin(), p.heapUsage.end(), 0 );
  std::copy( j[ "heapUsage" ].begin(), j[ "heapUsage" ].end(), p.heapUsage.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceMemoryBudgetPropertiesEXT &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceMemoryBudgetPropertiesEXT temp;
  from_json( j, temp );
  p = VkPhysicalDeviceMemoryBudgetPropertiesEXT ( temp );
}


#endif
