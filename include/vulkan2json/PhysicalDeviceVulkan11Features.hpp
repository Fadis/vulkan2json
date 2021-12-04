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
#ifndef VULKAN2JSON_PHYSICALDEVICEVULKAN11FEATURES_HPP
#define VULKAN2JSON_PHYSICALDEVICEVULKAN11FEATURES_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceVulkan11Features &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "storageBuffer16BitAccess" ] = bool( p.storageBuffer16BitAccess );
  j[ "uniformAndStorageBuffer16BitAccess" ] = bool( p.uniformAndStorageBuffer16BitAccess );
  j[ "storagePushConstant16" ] = bool( p.storagePushConstant16 );
  j[ "storageInputOutput16" ] = bool( p.storageInputOutput16 );
  j[ "multiview" ] = bool( p.multiview );
  j[ "multiviewGeometryShader" ] = bool( p.multiviewGeometryShader );
  j[ "multiviewTessellationShader" ] = bool( p.multiviewTessellationShader );
  j[ "variablePointersStorageBuffer" ] = bool( p.variablePointersStorageBuffer );
  j[ "variablePointers" ] = bool( p.variablePointers );
  j[ "protectedMemory" ] = bool( p.protectedMemory );
  j[ "samplerYcbcrConversion" ] = bool( p.samplerYcbcrConversion );
  j[ "shaderDrawParameters" ] = bool( p.shaderDrawParameters );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceVulkan11Features &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan11Features ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceVulkan11Features &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceVulkan11Features" );
  p.storageBuffer16BitAccess = j[ "storageBuffer16BitAccess" ];
  p.uniformAndStorageBuffer16BitAccess = j[ "uniformAndStorageBuffer16BitAccess" ];
  p.storagePushConstant16 = j[ "storagePushConstant16" ];
  p.storageInputOutput16 = j[ "storageInputOutput16" ];
  p.multiview = j[ "multiview" ];
  p.multiviewGeometryShader = j[ "multiviewGeometryShader" ];
  p.multiviewTessellationShader = j[ "multiviewTessellationShader" ];
  p.variablePointersStorageBuffer = j[ "variablePointersStorageBuffer" ];
  p.variablePointers = j[ "variablePointers" ];
  p.protectedMemory = j[ "protectedMemory" ];
  p.samplerYcbcrConversion = j[ "samplerYcbcrConversion" ];
  p.shaderDrawParameters = j[ "shaderDrawParameters" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceVulkan11Features &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan11Features temp;
  from_json( j, temp );
  p = VkPhysicalDeviceVulkan11Features ( temp );
}


#endif
