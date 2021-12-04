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
#ifndef VULKAN2JSON_PHYSICALDEVICEFEATURES_HPP
#define VULKAN2JSON_PHYSICALDEVICEFEATURES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceFeatures &p ) {
  j = nlohmann::json::object();
  j[ "robustBufferAccess" ] = bool( p.robustBufferAccess );
  j[ "fullDrawIndexUint32" ] = bool( p.fullDrawIndexUint32 );
  j[ "imageCubeArray" ] = bool( p.imageCubeArray );
  j[ "independentBlend" ] = bool( p.independentBlend );
  j[ "geometryShader" ] = bool( p.geometryShader );
  j[ "tessellationShader" ] = bool( p.tessellationShader );
  j[ "sampleRateShading" ] = bool( p.sampleRateShading );
  j[ "dualSrcBlend" ] = bool( p.dualSrcBlend );
  j[ "logicOp" ] = bool( p.logicOp );
  j[ "multiDrawIndirect" ] = bool( p.multiDrawIndirect );
  j[ "drawIndirectFirstInstance" ] = bool( p.drawIndirectFirstInstance );
  j[ "depthClamp" ] = bool( p.depthClamp );
  j[ "depthBiasClamp" ] = bool( p.depthBiasClamp );
  j[ "fillModeNonSolid" ] = bool( p.fillModeNonSolid );
  j[ "depthBounds" ] = bool( p.depthBounds );
  j[ "wideLines" ] = bool( p.wideLines );
  j[ "largePoints" ] = bool( p.largePoints );
  j[ "alphaToOne" ] = bool( p.alphaToOne );
  j[ "multiViewport" ] = bool( p.multiViewport );
  j[ "samplerAnisotropy" ] = bool( p.samplerAnisotropy );
  j[ "textureCompressionETC2" ] = bool( p.textureCompressionETC2 );
  j[ "textureCompressionASTC_LDR" ] = bool( p.textureCompressionASTC_LDR );
  j[ "textureCompressionBC" ] = bool( p.textureCompressionBC );
  j[ "occlusionQueryPrecise" ] = bool( p.occlusionQueryPrecise );
  j[ "pipelineStatisticsQuery" ] = bool( p.pipelineStatisticsQuery );
  j[ "vertexPipelineStoresAndAtomics" ] = bool( p.vertexPipelineStoresAndAtomics );
  j[ "fragmentStoresAndAtomics" ] = bool( p.fragmentStoresAndAtomics );
  j[ "shaderTessellationAndGeometryPointSize" ] = bool( p.shaderTessellationAndGeometryPointSize );
  j[ "shaderImageGatherExtended" ] = bool( p.shaderImageGatherExtended );
  j[ "shaderStorageImageExtendedFormats" ] = bool( p.shaderStorageImageExtendedFormats );
  j[ "shaderStorageImageMultisample" ] = bool( p.shaderStorageImageMultisample );
  j[ "shaderStorageImageReadWithoutFormat" ] = bool( p.shaderStorageImageReadWithoutFormat );
  j[ "shaderStorageImageWriteWithoutFormat" ] = bool( p.shaderStorageImageWriteWithoutFormat );
  j[ "shaderUniformBufferArrayDynamicIndexing" ] = bool( p.shaderUniformBufferArrayDynamicIndexing );
  j[ "shaderSampledImageArrayDynamicIndexing" ] = bool( p.shaderSampledImageArrayDynamicIndexing );
  j[ "shaderStorageBufferArrayDynamicIndexing" ] = bool( p.shaderStorageBufferArrayDynamicIndexing );
  j[ "shaderStorageImageArrayDynamicIndexing" ] = bool( p.shaderStorageImageArrayDynamicIndexing );
  j[ "shaderClipDistance" ] = bool( p.shaderClipDistance );
  j[ "shaderCullDistance" ] = bool( p.shaderCullDistance );
  j[ "shaderFloat64" ] = bool( p.shaderFloat64 );
  j[ "shaderInt64" ] = bool( p.shaderInt64 );
  j[ "shaderInt16" ] = bool( p.shaderInt16 );
  j[ "shaderResourceResidency" ] = bool( p.shaderResourceResidency );
  j[ "shaderResourceMinLod" ] = bool( p.shaderResourceMinLod );
  j[ "sparseBinding" ] = bool( p.sparseBinding );
  j[ "sparseResidencyBuffer" ] = bool( p.sparseResidencyBuffer );
  j[ "sparseResidencyImage2D" ] = bool( p.sparseResidencyImage2D );
  j[ "sparseResidencyImage3D" ] = bool( p.sparseResidencyImage3D );
  j[ "sparseResidency2Samples" ] = bool( p.sparseResidency2Samples );
  j[ "sparseResidency4Samples" ] = bool( p.sparseResidency4Samples );
  j[ "sparseResidency8Samples" ] = bool( p.sparseResidency8Samples );
  j[ "sparseResidency16Samples" ] = bool( p.sparseResidency16Samples );
  j[ "sparseResidencyAliased" ] = bool( p.sparseResidencyAliased );
  j[ "variableMultisampleRate" ] = bool( p.variableMultisampleRate );
  j[ "inheritedQueries" ] = bool( p.inheritedQueries );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceFeatures &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceFeatures ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceFeatures &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceFeatures" );
  p.robustBufferAccess = j[ "robustBufferAccess" ];
  p.fullDrawIndexUint32 = j[ "fullDrawIndexUint32" ];
  p.imageCubeArray = j[ "imageCubeArray" ];
  p.independentBlend = j[ "independentBlend" ];
  p.geometryShader = j[ "geometryShader" ];
  p.tessellationShader = j[ "tessellationShader" ];
  p.sampleRateShading = j[ "sampleRateShading" ];
  p.dualSrcBlend = j[ "dualSrcBlend" ];
  p.logicOp = j[ "logicOp" ];
  p.multiDrawIndirect = j[ "multiDrawIndirect" ];
  p.drawIndirectFirstInstance = j[ "drawIndirectFirstInstance" ];
  p.depthClamp = j[ "depthClamp" ];
  p.depthBiasClamp = j[ "depthBiasClamp" ];
  p.fillModeNonSolid = j[ "fillModeNonSolid" ];
  p.depthBounds = j[ "depthBounds" ];
  p.wideLines = j[ "wideLines" ];
  p.largePoints = j[ "largePoints" ];
  p.alphaToOne = j[ "alphaToOne" ];
  p.multiViewport = j[ "multiViewport" ];
  p.samplerAnisotropy = j[ "samplerAnisotropy" ];
  p.textureCompressionETC2 = j[ "textureCompressionETC2" ];
  p.textureCompressionASTC_LDR = j[ "textureCompressionASTC_LDR" ];
  p.textureCompressionBC = j[ "textureCompressionBC" ];
  p.occlusionQueryPrecise = j[ "occlusionQueryPrecise" ];
  p.pipelineStatisticsQuery = j[ "pipelineStatisticsQuery" ];
  p.vertexPipelineStoresAndAtomics = j[ "vertexPipelineStoresAndAtomics" ];
  p.fragmentStoresAndAtomics = j[ "fragmentStoresAndAtomics" ];
  p.shaderTessellationAndGeometryPointSize = j[ "shaderTessellationAndGeometryPointSize" ];
  p.shaderImageGatherExtended = j[ "shaderImageGatherExtended" ];
  p.shaderStorageImageExtendedFormats = j[ "shaderStorageImageExtendedFormats" ];
  p.shaderStorageImageMultisample = j[ "shaderStorageImageMultisample" ];
  p.shaderStorageImageReadWithoutFormat = j[ "shaderStorageImageReadWithoutFormat" ];
  p.shaderStorageImageWriteWithoutFormat = j[ "shaderStorageImageWriteWithoutFormat" ];
  p.shaderUniformBufferArrayDynamicIndexing = j[ "shaderUniformBufferArrayDynamicIndexing" ];
  p.shaderSampledImageArrayDynamicIndexing = j[ "shaderSampledImageArrayDynamicIndexing" ];
  p.shaderStorageBufferArrayDynamicIndexing = j[ "shaderStorageBufferArrayDynamicIndexing" ];
  p.shaderStorageImageArrayDynamicIndexing = j[ "shaderStorageImageArrayDynamicIndexing" ];
  p.shaderClipDistance = j[ "shaderClipDistance" ];
  p.shaderCullDistance = j[ "shaderCullDistance" ];
  p.shaderFloat64 = j[ "shaderFloat64" ];
  p.shaderInt64 = j[ "shaderInt64" ];
  p.shaderInt16 = j[ "shaderInt16" ];
  p.shaderResourceResidency = j[ "shaderResourceResidency" ];
  p.shaderResourceMinLod = j[ "shaderResourceMinLod" ];
  p.sparseBinding = j[ "sparseBinding" ];
  p.sparseResidencyBuffer = j[ "sparseResidencyBuffer" ];
  p.sparseResidencyImage2D = j[ "sparseResidencyImage2D" ];
  p.sparseResidencyImage3D = j[ "sparseResidencyImage3D" ];
  p.sparseResidency2Samples = j[ "sparseResidency2Samples" ];
  p.sparseResidency4Samples = j[ "sparseResidency4Samples" ];
  p.sparseResidency8Samples = j[ "sparseResidency8Samples" ];
  p.sparseResidency16Samples = j[ "sparseResidency16Samples" ];
  p.sparseResidencyAliased = j[ "sparseResidencyAliased" ];
  p.variableMultisampleRate = j[ "variableMultisampleRate" ];
  p.inheritedQueries = j[ "inheritedQueries" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceFeatures &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceFeatures temp;
  from_json( j, temp );
  p = VkPhysicalDeviceFeatures ( temp );
}


#endif
