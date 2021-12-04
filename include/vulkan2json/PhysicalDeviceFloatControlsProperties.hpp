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
#ifndef VULKAN2JSON_PHYSICALDEVICEFLOATCONTROLSPROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEFLOATCONTROLSPROPERTIES_HPP

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
#include <vulkan2json/ShaderFloatControlsIndependence.hpp>
#include <vulkan2json/ShaderFloatControlsIndependence.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceFloatControlsProperties &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "denormBehaviorIndependence" ] = p.denormBehaviorIndependence;
  j[ "roundingModeIndependence" ] = p.roundingModeIndependence;
  j[ "shaderSignedZeroInfNanPreserveFloat16" ] = bool( p.shaderSignedZeroInfNanPreserveFloat16 );
  j[ "shaderSignedZeroInfNanPreserveFloat32" ] = bool( p.shaderSignedZeroInfNanPreserveFloat32 );
  j[ "shaderSignedZeroInfNanPreserveFloat64" ] = bool( p.shaderSignedZeroInfNanPreserveFloat64 );
  j[ "shaderDenormPreserveFloat16" ] = bool( p.shaderDenormPreserveFloat16 );
  j[ "shaderDenormPreserveFloat32" ] = bool( p.shaderDenormPreserveFloat32 );
  j[ "shaderDenormPreserveFloat64" ] = bool( p.shaderDenormPreserveFloat64 );
  j[ "shaderDenormFlushToZeroFloat16" ] = bool( p.shaderDenormFlushToZeroFloat16 );
  j[ "shaderDenormFlushToZeroFloat32" ] = bool( p.shaderDenormFlushToZeroFloat32 );
  j[ "shaderDenormFlushToZeroFloat64" ] = bool( p.shaderDenormFlushToZeroFloat64 );
  j[ "shaderRoundingModeRTEFloat16" ] = bool( p.shaderRoundingModeRTEFloat16 );
  j[ "shaderRoundingModeRTEFloat32" ] = bool( p.shaderRoundingModeRTEFloat32 );
  j[ "shaderRoundingModeRTEFloat64" ] = bool( p.shaderRoundingModeRTEFloat64 );
  j[ "shaderRoundingModeRTZFloat16" ] = bool( p.shaderRoundingModeRTZFloat16 );
  j[ "shaderRoundingModeRTZFloat32" ] = bool( p.shaderRoundingModeRTZFloat32 );
  j[ "shaderRoundingModeRTZFloat64" ] = bool( p.shaderRoundingModeRTZFloat64 );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceFloatControlsProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceFloatControlsProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceFloatControlsProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceFloatControlsProperties" );
  p.denormBehaviorIndependence = ShaderFloatControlsIndependence ( j[ "denormBehaviorIndependence" ] );
  p.roundingModeIndependence = ShaderFloatControlsIndependence ( j[ "roundingModeIndependence" ] );
  p.shaderSignedZeroInfNanPreserveFloat16 = j[ "shaderSignedZeroInfNanPreserveFloat16" ];
  p.shaderSignedZeroInfNanPreserveFloat32 = j[ "shaderSignedZeroInfNanPreserveFloat32" ];
  p.shaderSignedZeroInfNanPreserveFloat64 = j[ "shaderSignedZeroInfNanPreserveFloat64" ];
  p.shaderDenormPreserveFloat16 = j[ "shaderDenormPreserveFloat16" ];
  p.shaderDenormPreserveFloat32 = j[ "shaderDenormPreserveFloat32" ];
  p.shaderDenormPreserveFloat64 = j[ "shaderDenormPreserveFloat64" ];
  p.shaderDenormFlushToZeroFloat16 = j[ "shaderDenormFlushToZeroFloat16" ];
  p.shaderDenormFlushToZeroFloat32 = j[ "shaderDenormFlushToZeroFloat32" ];
  p.shaderDenormFlushToZeroFloat64 = j[ "shaderDenormFlushToZeroFloat64" ];
  p.shaderRoundingModeRTEFloat16 = j[ "shaderRoundingModeRTEFloat16" ];
  p.shaderRoundingModeRTEFloat32 = j[ "shaderRoundingModeRTEFloat32" ];
  p.shaderRoundingModeRTEFloat64 = j[ "shaderRoundingModeRTEFloat64" ];
  p.shaderRoundingModeRTZFloat16 = j[ "shaderRoundingModeRTZFloat16" ];
  p.shaderRoundingModeRTZFloat32 = j[ "shaderRoundingModeRTZFloat32" ];
  p.shaderRoundingModeRTZFloat64 = j[ "shaderRoundingModeRTZFloat64" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceFloatControlsProperties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceFloatControlsProperties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceFloatControlsProperties ( temp );
}


#endif
