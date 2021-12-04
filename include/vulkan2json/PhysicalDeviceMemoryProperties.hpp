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
#ifndef VULKAN2JSON_PHYSICALDEVICEMEMORYPROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEMEMORYPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/MemoryType.hpp>
#include <vulkan2json/MemoryHeap.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceMemoryProperties &p ) {
  j = nlohmann::json::object();
  j[ "memoryTypeCount" ] = p.memoryTypeCount;
  j[ "memoryTypes" ] = nlohmann::json::array();
  std::copy( p.memoryTypes.begin(), p.memoryTypes.end(), std::back_inserter( j[ "memoryTypes" ] ) );
  j[ "memoryHeapCount" ] = p.memoryHeapCount;
  j[ "memoryHeaps" ] = nlohmann::json::array();
  std::copy( p.memoryHeaps.begin(), p.memoryHeaps.end(), std::back_inserter( j[ "memoryHeaps" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceMemoryProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceMemoryProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceMemoryProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceMemoryProperties" );
  p.memoryTypeCount = j[ "memoryTypeCount" ];
  if( !j[ "memoryTypes" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMemoryProperties.memoryTypes" );
  if( !j[ "memoryTypes" ].size() > p.memoryTypes.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for PhysicalDeviceMemoryProperties.memoryTypes" );
  std::fill( p.memoryTypes.begin(), p.memoryTypes.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.memoryTypes.begin() ) > >() );
  std::copy( j[ "memoryTypes" ].begin(), j[ "memoryTypes" ].end(), p.memoryTypes.begin() );
  p.memoryHeapCount = j[ "memoryHeapCount" ];
  if( !j[ "memoryHeaps" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMemoryProperties.memoryHeaps" );
  if( !j[ "memoryHeaps" ].size() > p.memoryHeaps.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for PhysicalDeviceMemoryProperties.memoryHeaps" );
  std::fill( p.memoryHeaps.begin(), p.memoryHeaps.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.memoryHeaps.begin() ) > >() );
  std::copy( j[ "memoryHeaps" ].begin(), j[ "memoryHeaps" ].end(), p.memoryHeaps.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceMemoryProperties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceMemoryProperties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceMemoryProperties ( temp );
}


#endif
