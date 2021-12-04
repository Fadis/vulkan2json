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
#ifndef VULKAN2JSON_PHYSICALDEVICEMESHSHADERPROPERTIESNV_HPP
#define VULKAN2JSON_PHYSICALDEVICEMESHSHADERPROPERTIESNV_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceMeshShaderPropertiesNV &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "maxDrawMeshTasksCount" ] = p.maxDrawMeshTasksCount;
  j[ "maxTaskWorkGroupInvocations" ] = p.maxTaskWorkGroupInvocations;
  j[ "maxTaskWorkGroupSize" ] = nlohmann::json::array();
  std::copy( p.maxTaskWorkGroupSize.begin(), p.maxTaskWorkGroupSize.end(), std::back_inserter( j[ "maxTaskWorkGroupSize" ] ) );
  j[ "maxTaskTotalMemorySize" ] = p.maxTaskTotalMemorySize;
  j[ "maxTaskOutputCount" ] = p.maxTaskOutputCount;
  j[ "maxMeshWorkGroupInvocations" ] = p.maxMeshWorkGroupInvocations;
  j[ "maxMeshWorkGroupSize" ] = nlohmann::json::array();
  std::copy( p.maxMeshWorkGroupSize.begin(), p.maxMeshWorkGroupSize.end(), std::back_inserter( j[ "maxMeshWorkGroupSize" ] ) );
  j[ "maxMeshTotalMemorySize" ] = p.maxMeshTotalMemorySize;
  j[ "maxMeshOutputVertices" ] = p.maxMeshOutputVertices;
  j[ "maxMeshOutputPrimitives" ] = p.maxMeshOutputPrimitives;
  j[ "maxMeshMultiviewViewCount" ] = p.maxMeshMultiviewViewCount;
  j[ "meshOutputPerVertexGranularity" ] = p.meshOutputPerVertexGranularity;
  j[ "meshOutputPerPrimitiveGranularity" ] = p.meshOutputPerPrimitiveGranularity;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceMeshShaderPropertiesNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceMeshShaderPropertiesNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceMeshShaderPropertiesNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceMeshShaderPropertiesNV" );
  p.maxDrawMeshTasksCount = j[ "maxDrawMeshTasksCount" ];
  p.maxTaskWorkGroupInvocations = j[ "maxTaskWorkGroupInvocations" ];
  if( !j[ "maxTaskWorkGroupSize" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMeshShaderPropertiesNV.maxTaskWorkGroupSize" );
  if( !j[ "maxTaskWorkGroupSize" ].size() > p.maxTaskWorkGroupSize.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceMeshShaderPropertiesNV.maxTaskWorkGroupSize" );
  std::fill( p.maxTaskWorkGroupSize.begin(), p.maxTaskWorkGroupSize.end(), 0 );
  std::copy( j[ "maxTaskWorkGroupSize" ].begin(), j[ "maxTaskWorkGroupSize" ].end(), p.maxTaskWorkGroupSize.begin() );
  p.maxTaskTotalMemorySize = j[ "maxTaskTotalMemorySize" ];
  p.maxTaskOutputCount = j[ "maxTaskOutputCount" ];
  p.maxMeshWorkGroupInvocations = j[ "maxMeshWorkGroupInvocations" ];
  if( !j[ "maxMeshWorkGroupSize" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceMeshShaderPropertiesNV.maxMeshWorkGroupSize" );
  if( !j[ "maxMeshWorkGroupSize" ].size() > p.maxMeshWorkGroupSize.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceMeshShaderPropertiesNV.maxMeshWorkGroupSize" );
  std::fill( p.maxMeshWorkGroupSize.begin(), p.maxMeshWorkGroupSize.end(), 0 );
  std::copy( j[ "maxMeshWorkGroupSize" ].begin(), j[ "maxMeshWorkGroupSize" ].end(), p.maxMeshWorkGroupSize.begin() );
  p.maxMeshTotalMemorySize = j[ "maxMeshTotalMemorySize" ];
  p.maxMeshOutputVertices = j[ "maxMeshOutputVertices" ];
  p.maxMeshOutputPrimitives = j[ "maxMeshOutputPrimitives" ];
  p.maxMeshMultiviewViewCount = j[ "maxMeshMultiviewViewCount" ];
  p.meshOutputPerVertexGranularity = j[ "meshOutputPerVertexGranularity" ];
  p.meshOutputPerPrimitiveGranularity = j[ "meshOutputPerPrimitiveGranularity" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceMeshShaderPropertiesNV &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceMeshShaderPropertiesNV temp;
  from_json( j, temp );
  p = VkPhysicalDeviceMeshShaderPropertiesNV ( temp );
}


#endif
