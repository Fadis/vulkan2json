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
#ifndef VULKAN2JSON_PHYSICALDEVICESHADERCLOCKFEATURESKHR_HPP
#define VULKAN2JSON_PHYSICALDEVICESHADERCLOCKFEATURESKHR_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceShaderClockFeaturesKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "shaderSubgroupClock" ] = bool( p.shaderSubgroupClock );
  j[ "shaderDeviceClock" ] = bool( p.shaderDeviceClock );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceShaderClockFeaturesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceShaderClockFeaturesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceShaderClockFeaturesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceShaderClockFeaturesKHR" );
  p.shaderSubgroupClock = j[ "shaderSubgroupClock" ];
  p.shaderDeviceClock = j[ "shaderDeviceClock" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceShaderClockFeaturesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceShaderClockFeaturesKHR temp;
  from_json( j, temp );
  p = VkPhysicalDeviceShaderClockFeaturesKHR ( temp );
}


#endif
