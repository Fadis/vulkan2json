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
#ifndef VULKAN2JSON_QUEUEFAMILYGLOBALPRIORITYPROPERTIESEXT_HPP
#define VULKAN2JSON_QUEUEFAMILYGLOBALPRIORITYPROPERTIESEXT_HPP

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
#include <vulkan2json/QueueGlobalPriorityEXT.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const QueueFamilyGlobalPriorityPropertiesEXT &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "priorityCount" ] = p.priorityCount;
  j[ "priorities" ] = nlohmann::json::array();
  std::copy( p.priorities.begin(), p.priorities.end(), std::back_inserter( j[ "priorities" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkQueueFamilyGlobalPriorityPropertiesEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: QueueFamilyGlobalPriorityPropertiesEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, QueueFamilyGlobalPriorityPropertiesEXT &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for QueueFamilyGlobalPriorityPropertiesEXT" );
  p.priorityCount = j[ "priorityCount" ];
  if( !j[ "priorities" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for QueueFamilyGlobalPriorityPropertiesEXT.priorities" );
  if( !j[ "priorities" ].size() > p.priorities.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for QueueFamilyGlobalPriorityPropertiesEXT.priorities" );
  std::fill( p.priorities.begin(), p.priorities.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.priorities.begin() ) > >() );
  std::copy( j[ "priorities" ].begin(), j[ "priorities" ].end(), p.priorities.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkQueueFamilyGlobalPriorityPropertiesEXT &p ) {
  VULKAN_HPP_NAMESPACE :: QueueFamilyGlobalPriorityPropertiesEXT temp;
  from_json( j, temp );
  p = VkQueueFamilyGlobalPriorityPropertiesEXT ( temp );
}


#endif
