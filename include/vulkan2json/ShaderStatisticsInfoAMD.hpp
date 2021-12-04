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
#ifndef VULKAN2JSON_SHADERSTATISTICSINFOAMD_HPP
#define VULKAN2JSON_SHADERSTATISTICSINFOAMD_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/ShaderStageFlags.hpp>
#include <vulkan2json/ShaderResourceUsageAMD.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ShaderStatisticsInfoAMD &p ) {
  j = nlohmann::json::object();
  j[ "shaderStageMask" ] = p.shaderStageMask;
  j[ "resourceUsage" ] = p.resourceUsage;
  j[ "numPhysicalVgprs" ] = p.numPhysicalVgprs;
  j[ "numPhysicalSgprs" ] = p.numPhysicalSgprs;
  j[ "numAvailableVgprs" ] = p.numAvailableVgprs;
  j[ "numAvailableSgprs" ] = p.numAvailableSgprs;
  j[ "computeWorkGroupSize" ] = nlohmann::json::array();
  std::copy( p.computeWorkGroupSize.begin(), p.computeWorkGroupSize.end(), std::back_inserter( j[ "computeWorkGroupSize" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkShaderStatisticsInfoAMD &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ShaderStatisticsInfoAMD ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ShaderStatisticsInfoAMD &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ShaderStatisticsInfoAMD" );
  p.shaderStageMask = ShaderStageFlags ( j[ "shaderStageMask" ] );
  p.resourceUsage = ShaderResourceUsageAMD ( j[ "resourceUsage" ] );
  p.numPhysicalVgprs = j[ "numPhysicalVgprs" ];
  p.numPhysicalSgprs = j[ "numPhysicalSgprs" ];
  p.numAvailableVgprs = j[ "numAvailableVgprs" ];
  p.numAvailableSgprs = j[ "numAvailableSgprs" ];
  if( !j[ "computeWorkGroupSize" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for ShaderStatisticsInfoAMD.computeWorkGroupSize" );
  if( !j[ "computeWorkGroupSize" ].size() > p.computeWorkGroupSize.size() ) throw vulkan2json::invalid_array_value( "too many values in array for ShaderStatisticsInfoAMD.computeWorkGroupSize" );
  std::fill( p.computeWorkGroupSize.begin(), p.computeWorkGroupSize.end(), 0 );
  std::copy( j[ "computeWorkGroupSize" ].begin(), j[ "computeWorkGroupSize" ].end(), p.computeWorkGroupSize.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkShaderStatisticsInfoAMD &p ) {
  VULKAN_HPP_NAMESPACE :: ShaderStatisticsInfoAMD temp;
  from_json( j, temp );
  p = VkShaderStatisticsInfoAMD ( temp );
}


#endif
