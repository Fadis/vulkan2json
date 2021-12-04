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
#ifndef VULKAN2JSON_PHYSICALDEVICESHADERATOMICFLOATFEATURESEXT_HPP
#define VULKAN2JSON_PHYSICALDEVICESHADERATOMICFLOATFEATURESEXT_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceShaderAtomicFloatFeaturesEXT &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "shaderBufferFloat32Atomics" ] = bool( p.shaderBufferFloat32Atomics );
  j[ "shaderBufferFloat32AtomicAdd" ] = bool( p.shaderBufferFloat32AtomicAdd );
  j[ "shaderBufferFloat64Atomics" ] = bool( p.shaderBufferFloat64Atomics );
  j[ "shaderBufferFloat64AtomicAdd" ] = bool( p.shaderBufferFloat64AtomicAdd );
  j[ "shaderSharedFloat32Atomics" ] = bool( p.shaderSharedFloat32Atomics );
  j[ "shaderSharedFloat32AtomicAdd" ] = bool( p.shaderSharedFloat32AtomicAdd );
  j[ "shaderSharedFloat64Atomics" ] = bool( p.shaderSharedFloat64Atomics );
  j[ "shaderSharedFloat64AtomicAdd" ] = bool( p.shaderSharedFloat64AtomicAdd );
  j[ "shaderImageFloat32Atomics" ] = bool( p.shaderImageFloat32Atomics );
  j[ "shaderImageFloat32AtomicAdd" ] = bool( p.shaderImageFloat32AtomicAdd );
  j[ "sparseImageFloat32Atomics" ] = bool( p.sparseImageFloat32Atomics );
  j[ "sparseImageFloat32AtomicAdd" ] = bool( p.sparseImageFloat32AtomicAdd );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceShaderAtomicFloatFeaturesEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceShaderAtomicFloatFeaturesEXT &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceShaderAtomicFloatFeaturesEXT" );
  p.shaderBufferFloat32Atomics = j[ "shaderBufferFloat32Atomics" ];
  p.shaderBufferFloat32AtomicAdd = j[ "shaderBufferFloat32AtomicAdd" ];
  p.shaderBufferFloat64Atomics = j[ "shaderBufferFloat64Atomics" ];
  p.shaderBufferFloat64AtomicAdd = j[ "shaderBufferFloat64AtomicAdd" ];
  p.shaderSharedFloat32Atomics = j[ "shaderSharedFloat32Atomics" ];
  p.shaderSharedFloat32AtomicAdd = j[ "shaderSharedFloat32AtomicAdd" ];
  p.shaderSharedFloat64Atomics = j[ "shaderSharedFloat64Atomics" ];
  p.shaderSharedFloat64AtomicAdd = j[ "shaderSharedFloat64AtomicAdd" ];
  p.shaderImageFloat32Atomics = j[ "shaderImageFloat32Atomics" ];
  p.shaderImageFloat32AtomicAdd = j[ "shaderImageFloat32AtomicAdd" ];
  p.sparseImageFloat32Atomics = j[ "sparseImageFloat32Atomics" ];
  p.sparseImageFloat32AtomicAdd = j[ "sparseImageFloat32AtomicAdd" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceShaderAtomicFloatFeaturesEXT temp;
  from_json( j, temp );
  p = VkPhysicalDeviceShaderAtomicFloatFeaturesEXT ( temp );
}


#endif
