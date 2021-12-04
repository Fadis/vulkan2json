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
#ifndef VULKAN2JSON_PHYSICALDEVICELIMITS_HPP
#define VULKAN2JSON_PHYSICALDEVICELIMITS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceLimits &p ) {
  j = nlohmann::json::object();
  j[ "maxImageDimension1D" ] = p.maxImageDimension1D;
  j[ "maxImageDimension2D" ] = p.maxImageDimension2D;
  j[ "maxImageDimension3D" ] = p.maxImageDimension3D;
  j[ "maxImageDimensionCube" ] = p.maxImageDimensionCube;
  j[ "maxImageArrayLayers" ] = p.maxImageArrayLayers;
  j[ "maxTexelBufferElements" ] = p.maxTexelBufferElements;
  j[ "maxUniformBufferRange" ] = p.maxUniformBufferRange;
  j[ "maxStorageBufferRange" ] = p.maxStorageBufferRange;
  j[ "maxPushConstantsSize" ] = p.maxPushConstantsSize;
  j[ "maxMemoryAllocationCount" ] = p.maxMemoryAllocationCount;
  j[ "maxSamplerAllocationCount" ] = p.maxSamplerAllocationCount;
  j[ "bufferImageGranularity" ] = p.bufferImageGranularity;
  j[ "sparseAddressSpaceSize" ] = p.sparseAddressSpaceSize;
  j[ "maxBoundDescriptorSets" ] = p.maxBoundDescriptorSets;
  j[ "maxPerStageDescriptorSamplers" ] = p.maxPerStageDescriptorSamplers;
  j[ "maxPerStageDescriptorUniformBuffers" ] = p.maxPerStageDescriptorUniformBuffers;
  j[ "maxPerStageDescriptorStorageBuffers" ] = p.maxPerStageDescriptorStorageBuffers;
  j[ "maxPerStageDescriptorSampledImages" ] = p.maxPerStageDescriptorSampledImages;
  j[ "maxPerStageDescriptorStorageImages" ] = p.maxPerStageDescriptorStorageImages;
  j[ "maxPerStageDescriptorInputAttachments" ] = p.maxPerStageDescriptorInputAttachments;
  j[ "maxPerStageResources" ] = p.maxPerStageResources;
  j[ "maxDescriptorSetSamplers" ] = p.maxDescriptorSetSamplers;
  j[ "maxDescriptorSetUniformBuffers" ] = p.maxDescriptorSetUniformBuffers;
  j[ "maxDescriptorSetUniformBuffersDynamic" ] = p.maxDescriptorSetUniformBuffersDynamic;
  j[ "maxDescriptorSetStorageBuffers" ] = p.maxDescriptorSetStorageBuffers;
  j[ "maxDescriptorSetStorageBuffersDynamic" ] = p.maxDescriptorSetStorageBuffersDynamic;
  j[ "maxDescriptorSetSampledImages" ] = p.maxDescriptorSetSampledImages;
  j[ "maxDescriptorSetStorageImages" ] = p.maxDescriptorSetStorageImages;
  j[ "maxDescriptorSetInputAttachments" ] = p.maxDescriptorSetInputAttachments;
  j[ "maxVertexInputAttributes" ] = p.maxVertexInputAttributes;
  j[ "maxVertexInputBindings" ] = p.maxVertexInputBindings;
  j[ "maxVertexInputAttributeOffset" ] = p.maxVertexInputAttributeOffset;
  j[ "maxVertexInputBindingStride" ] = p.maxVertexInputBindingStride;
  j[ "maxVertexOutputComponents" ] = p.maxVertexOutputComponents;
  j[ "maxTessellationGenerationLevel" ] = p.maxTessellationGenerationLevel;
  j[ "maxTessellationPatchSize" ] = p.maxTessellationPatchSize;
  j[ "maxTessellationControlPerVertexInputComponents" ] = p.maxTessellationControlPerVertexInputComponents;
  j[ "maxTessellationControlPerVertexOutputComponents" ] = p.maxTessellationControlPerVertexOutputComponents;
  j[ "maxTessellationControlPerPatchOutputComponents" ] = p.maxTessellationControlPerPatchOutputComponents;
  j[ "maxTessellationControlTotalOutputComponents" ] = p.maxTessellationControlTotalOutputComponents;
  j[ "maxTessellationEvaluationInputComponents" ] = p.maxTessellationEvaluationInputComponents;
  j[ "maxTessellationEvaluationOutputComponents" ] = p.maxTessellationEvaluationOutputComponents;
  j[ "maxGeometryShaderInvocations" ] = p.maxGeometryShaderInvocations;
  j[ "maxGeometryInputComponents" ] = p.maxGeometryInputComponents;
  j[ "maxGeometryOutputComponents" ] = p.maxGeometryOutputComponents;
  j[ "maxGeometryOutputVertices" ] = p.maxGeometryOutputVertices;
  j[ "maxGeometryTotalOutputComponents" ] = p.maxGeometryTotalOutputComponents;
  j[ "maxFragmentInputComponents" ] = p.maxFragmentInputComponents;
  j[ "maxFragmentOutputAttachments" ] = p.maxFragmentOutputAttachments;
  j[ "maxFragmentDualSrcAttachments" ] = p.maxFragmentDualSrcAttachments;
  j[ "maxFragmentCombinedOutputResources" ] = p.maxFragmentCombinedOutputResources;
  j[ "maxComputeSharedMemorySize" ] = p.maxComputeSharedMemorySize;
  j[ "maxComputeWorkGroupCount" ] = nlohmann::json::array();
  std::copy( p.maxComputeWorkGroupCount.begin(), p.maxComputeWorkGroupCount.end(), std::back_inserter( j[ "maxComputeWorkGroupCount" ] ) );
  j[ "maxComputeWorkGroupInvocations" ] = p.maxComputeWorkGroupInvocations;
  j[ "maxComputeWorkGroupSize" ] = nlohmann::json::array();
  std::copy( p.maxComputeWorkGroupSize.begin(), p.maxComputeWorkGroupSize.end(), std::back_inserter( j[ "maxComputeWorkGroupSize" ] ) );
  j[ "subPixelPrecisionBits" ] = p.subPixelPrecisionBits;
  j[ "subTexelPrecisionBits" ] = p.subTexelPrecisionBits;
  j[ "mipmapPrecisionBits" ] = p.mipmapPrecisionBits;
  j[ "maxDrawIndexedIndexValue" ] = p.maxDrawIndexedIndexValue;
  j[ "maxDrawIndirectCount" ] = p.maxDrawIndirectCount;
  j[ "maxSamplerLodBias" ] = p.maxSamplerLodBias;
  j[ "maxSamplerAnisotropy" ] = p.maxSamplerAnisotropy;
  j[ "maxViewports" ] = p.maxViewports;
  j[ "maxViewportDimensions" ] = nlohmann::json::array();
  std::copy( p.maxViewportDimensions.begin(), p.maxViewportDimensions.end(), std::back_inserter( j[ "maxViewportDimensions" ] ) );
  j[ "viewportBoundsRange" ] = nlohmann::json::array();
  std::copy( p.viewportBoundsRange.begin(), p.viewportBoundsRange.end(), std::back_inserter( j[ "viewportBoundsRange" ] ) );
  j[ "viewportSubPixelBits" ] = p.viewportSubPixelBits;
  j[ "minMemoryMapAlignment" ] = p.minMemoryMapAlignment;
  j[ "minTexelBufferOffsetAlignment" ] = p.minTexelBufferOffsetAlignment;
  j[ "minUniformBufferOffsetAlignment" ] = p.minUniformBufferOffsetAlignment;
  j[ "minStorageBufferOffsetAlignment" ] = p.minStorageBufferOffsetAlignment;
  j[ "minTexelOffset" ] = p.minTexelOffset;
  j[ "maxTexelOffset" ] = p.maxTexelOffset;
  j[ "minTexelGatherOffset" ] = p.minTexelGatherOffset;
  j[ "maxTexelGatherOffset" ] = p.maxTexelGatherOffset;
  j[ "minInterpolationOffset" ] = p.minInterpolationOffset;
  j[ "maxInterpolationOffset" ] = p.maxInterpolationOffset;
  j[ "subPixelInterpolationOffsetBits" ] = p.subPixelInterpolationOffsetBits;
  j[ "maxFramebufferWidth" ] = p.maxFramebufferWidth;
  j[ "maxFramebufferHeight" ] = p.maxFramebufferHeight;
  j[ "maxFramebufferLayers" ] = p.maxFramebufferLayers;
  j[ "framebufferColorSampleCounts" ] = p.framebufferColorSampleCounts;
  j[ "framebufferDepthSampleCounts" ] = p.framebufferDepthSampleCounts;
  j[ "framebufferStencilSampleCounts" ] = p.framebufferStencilSampleCounts;
  j[ "framebufferNoAttachmentsSampleCounts" ] = p.framebufferNoAttachmentsSampleCounts;
  j[ "maxColorAttachments" ] = p.maxColorAttachments;
  j[ "sampledImageColorSampleCounts" ] = p.sampledImageColorSampleCounts;
  j[ "sampledImageIntegerSampleCounts" ] = p.sampledImageIntegerSampleCounts;
  j[ "sampledImageDepthSampleCounts" ] = p.sampledImageDepthSampleCounts;
  j[ "sampledImageStencilSampleCounts" ] = p.sampledImageStencilSampleCounts;
  j[ "storageImageSampleCounts" ] = p.storageImageSampleCounts;
  j[ "maxSampleMaskWords" ] = p.maxSampleMaskWords;
  j[ "timestampComputeAndGraphics" ] = bool( p.timestampComputeAndGraphics );
  j[ "timestampPeriod" ] = p.timestampPeriod;
  j[ "maxClipDistances" ] = p.maxClipDistances;
  j[ "maxCullDistances" ] = p.maxCullDistances;
  j[ "maxCombinedClipAndCullDistances" ] = p.maxCombinedClipAndCullDistances;
  j[ "discreteQueuePriorities" ] = p.discreteQueuePriorities;
  j[ "pointSizeRange" ] = nlohmann::json::array();
  std::copy( p.pointSizeRange.begin(), p.pointSizeRange.end(), std::back_inserter( j[ "pointSizeRange" ] ) );
  j[ "lineWidthRange" ] = nlohmann::json::array();
  std::copy( p.lineWidthRange.begin(), p.lineWidthRange.end(), std::back_inserter( j[ "lineWidthRange" ] ) );
  j[ "pointSizeGranularity" ] = p.pointSizeGranularity;
  j[ "lineWidthGranularity" ] = p.lineWidthGranularity;
  j[ "strictLines" ] = bool( p.strictLines );
  j[ "standardSampleLocations" ] = bool( p.standardSampleLocations );
  j[ "optimalBufferCopyOffsetAlignment" ] = p.optimalBufferCopyOffsetAlignment;
  j[ "optimalBufferCopyRowPitchAlignment" ] = p.optimalBufferCopyRowPitchAlignment;
  j[ "nonCoherentAtomSize" ] = p.nonCoherentAtomSize;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceLimits &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceLimits ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceLimits &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceLimits" );
  p.maxImageDimension1D = j[ "maxImageDimension1D" ];
  p.maxImageDimension2D = j[ "maxImageDimension2D" ];
  p.maxImageDimension3D = j[ "maxImageDimension3D" ];
  p.maxImageDimensionCube = j[ "maxImageDimensionCube" ];
  p.maxImageArrayLayers = j[ "maxImageArrayLayers" ];
  p.maxTexelBufferElements = j[ "maxTexelBufferElements" ];
  p.maxUniformBufferRange = j[ "maxUniformBufferRange" ];
  p.maxStorageBufferRange = j[ "maxStorageBufferRange" ];
  p.maxPushConstantsSize = j[ "maxPushConstantsSize" ];
  p.maxMemoryAllocationCount = j[ "maxMemoryAllocationCount" ];
  p.maxSamplerAllocationCount = j[ "maxSamplerAllocationCount" ];
  p.bufferImageGranularity = j[ "bufferImageGranularity" ];
  p.sparseAddressSpaceSize = j[ "sparseAddressSpaceSize" ];
  p.maxBoundDescriptorSets = j[ "maxBoundDescriptorSets" ];
  p.maxPerStageDescriptorSamplers = j[ "maxPerStageDescriptorSamplers" ];
  p.maxPerStageDescriptorUniformBuffers = j[ "maxPerStageDescriptorUniformBuffers" ];
  p.maxPerStageDescriptorStorageBuffers = j[ "maxPerStageDescriptorStorageBuffers" ];
  p.maxPerStageDescriptorSampledImages = j[ "maxPerStageDescriptorSampledImages" ];
  p.maxPerStageDescriptorStorageImages = j[ "maxPerStageDescriptorStorageImages" ];
  p.maxPerStageDescriptorInputAttachments = j[ "maxPerStageDescriptorInputAttachments" ];
  p.maxPerStageResources = j[ "maxPerStageResources" ];
  p.maxDescriptorSetSamplers = j[ "maxDescriptorSetSamplers" ];
  p.maxDescriptorSetUniformBuffers = j[ "maxDescriptorSetUniformBuffers" ];
  p.maxDescriptorSetUniformBuffersDynamic = j[ "maxDescriptorSetUniformBuffersDynamic" ];
  p.maxDescriptorSetStorageBuffers = j[ "maxDescriptorSetStorageBuffers" ];
  p.maxDescriptorSetStorageBuffersDynamic = j[ "maxDescriptorSetStorageBuffersDynamic" ];
  p.maxDescriptorSetSampledImages = j[ "maxDescriptorSetSampledImages" ];
  p.maxDescriptorSetStorageImages = j[ "maxDescriptorSetStorageImages" ];
  p.maxDescriptorSetInputAttachments = j[ "maxDescriptorSetInputAttachments" ];
  p.maxVertexInputAttributes = j[ "maxVertexInputAttributes" ];
  p.maxVertexInputBindings = j[ "maxVertexInputBindings" ];
  p.maxVertexInputAttributeOffset = j[ "maxVertexInputAttributeOffset" ];
  p.maxVertexInputBindingStride = j[ "maxVertexInputBindingStride" ];
  p.maxVertexOutputComponents = j[ "maxVertexOutputComponents" ];
  p.maxTessellationGenerationLevel = j[ "maxTessellationGenerationLevel" ];
  p.maxTessellationPatchSize = j[ "maxTessellationPatchSize" ];
  p.maxTessellationControlPerVertexInputComponents = j[ "maxTessellationControlPerVertexInputComponents" ];
  p.maxTessellationControlPerVertexOutputComponents = j[ "maxTessellationControlPerVertexOutputComponents" ];
  p.maxTessellationControlPerPatchOutputComponents = j[ "maxTessellationControlPerPatchOutputComponents" ];
  p.maxTessellationControlTotalOutputComponents = j[ "maxTessellationControlTotalOutputComponents" ];
  p.maxTessellationEvaluationInputComponents = j[ "maxTessellationEvaluationInputComponents" ];
  p.maxTessellationEvaluationOutputComponents = j[ "maxTessellationEvaluationOutputComponents" ];
  p.maxGeometryShaderInvocations = j[ "maxGeometryShaderInvocations" ];
  p.maxGeometryInputComponents = j[ "maxGeometryInputComponents" ];
  p.maxGeometryOutputComponents = j[ "maxGeometryOutputComponents" ];
  p.maxGeometryOutputVertices = j[ "maxGeometryOutputVertices" ];
  p.maxGeometryTotalOutputComponents = j[ "maxGeometryTotalOutputComponents" ];
  p.maxFragmentInputComponents = j[ "maxFragmentInputComponents" ];
  p.maxFragmentOutputAttachments = j[ "maxFragmentOutputAttachments" ];
  p.maxFragmentDualSrcAttachments = j[ "maxFragmentDualSrcAttachments" ];
  p.maxFragmentCombinedOutputResources = j[ "maxFragmentCombinedOutputResources" ];
  p.maxComputeSharedMemorySize = j[ "maxComputeSharedMemorySize" ];
  if( !j[ "maxComputeWorkGroupCount" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.maxComputeWorkGroupCount" );
  if( !j[ "maxComputeWorkGroupCount" ].size() > p.maxComputeWorkGroupCount.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.maxComputeWorkGroupCount" );
  std::fill( p.maxComputeWorkGroupCount.begin(), p.maxComputeWorkGroupCount.end(), 0 );
  std::copy( j[ "maxComputeWorkGroupCount" ].begin(), j[ "maxComputeWorkGroupCount" ].end(), p.maxComputeWorkGroupCount.begin() );
  p.maxComputeWorkGroupInvocations = j[ "maxComputeWorkGroupInvocations" ];
  if( !j[ "maxComputeWorkGroupSize" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.maxComputeWorkGroupSize" );
  if( !j[ "maxComputeWorkGroupSize" ].size() > p.maxComputeWorkGroupSize.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.maxComputeWorkGroupSize" );
  std::fill( p.maxComputeWorkGroupSize.begin(), p.maxComputeWorkGroupSize.end(), 0 );
  std::copy( j[ "maxComputeWorkGroupSize" ].begin(), j[ "maxComputeWorkGroupSize" ].end(), p.maxComputeWorkGroupSize.begin() );
  p.subPixelPrecisionBits = j[ "subPixelPrecisionBits" ];
  p.subTexelPrecisionBits = j[ "subTexelPrecisionBits" ];
  p.mipmapPrecisionBits = j[ "mipmapPrecisionBits" ];
  p.maxDrawIndexedIndexValue = j[ "maxDrawIndexedIndexValue" ];
  p.maxDrawIndirectCount = j[ "maxDrawIndirectCount" ];
  p.maxSamplerLodBias = j[ "maxSamplerLodBias" ];
  p.maxSamplerAnisotropy = j[ "maxSamplerAnisotropy" ];
  p.maxViewports = j[ "maxViewports" ];
  if( !j[ "maxViewportDimensions" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.maxViewportDimensions" );
  if( !j[ "maxViewportDimensions" ].size() > p.maxViewportDimensions.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.maxViewportDimensions" );
  std::fill( p.maxViewportDimensions.begin(), p.maxViewportDimensions.end(), 0 );
  std::copy( j[ "maxViewportDimensions" ].begin(), j[ "maxViewportDimensions" ].end(), p.maxViewportDimensions.begin() );
  if( !j[ "viewportBoundsRange" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.viewportBoundsRange" );
  if( !j[ "viewportBoundsRange" ].size() > p.viewportBoundsRange.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.viewportBoundsRange" );
  std::fill( p.viewportBoundsRange.begin(), p.viewportBoundsRange.end(), 0 );
  std::copy( j[ "viewportBoundsRange" ].begin(), j[ "viewportBoundsRange" ].end(), p.viewportBoundsRange.begin() );
  p.viewportSubPixelBits = j[ "viewportSubPixelBits" ];
  p.minMemoryMapAlignment = j[ "minMemoryMapAlignment" ];
  p.minTexelBufferOffsetAlignment = j[ "minTexelBufferOffsetAlignment" ];
  p.minUniformBufferOffsetAlignment = j[ "minUniformBufferOffsetAlignment" ];
  p.minStorageBufferOffsetAlignment = j[ "minStorageBufferOffsetAlignment" ];
  p.minTexelOffset = j[ "minTexelOffset" ];
  p.maxTexelOffset = j[ "maxTexelOffset" ];
  p.minTexelGatherOffset = j[ "minTexelGatherOffset" ];
  p.maxTexelGatherOffset = j[ "maxTexelGatherOffset" ];
  p.minInterpolationOffset = j[ "minInterpolationOffset" ];
  p.maxInterpolationOffset = j[ "maxInterpolationOffset" ];
  p.subPixelInterpolationOffsetBits = j[ "subPixelInterpolationOffsetBits" ];
  p.maxFramebufferWidth = j[ "maxFramebufferWidth" ];
  p.maxFramebufferHeight = j[ "maxFramebufferHeight" ];
  p.maxFramebufferLayers = j[ "maxFramebufferLayers" ];
  p.framebufferColorSampleCounts = SampleCountFlags ( j[ "framebufferColorSampleCounts" ] );
  p.framebufferDepthSampleCounts = SampleCountFlags ( j[ "framebufferDepthSampleCounts" ] );
  p.framebufferStencilSampleCounts = SampleCountFlags ( j[ "framebufferStencilSampleCounts" ] );
  p.framebufferNoAttachmentsSampleCounts = SampleCountFlags ( j[ "framebufferNoAttachmentsSampleCounts" ] );
  p.maxColorAttachments = j[ "maxColorAttachments" ];
  p.sampledImageColorSampleCounts = SampleCountFlags ( j[ "sampledImageColorSampleCounts" ] );
  p.sampledImageIntegerSampleCounts = SampleCountFlags ( j[ "sampledImageIntegerSampleCounts" ] );
  p.sampledImageDepthSampleCounts = SampleCountFlags ( j[ "sampledImageDepthSampleCounts" ] );
  p.sampledImageStencilSampleCounts = SampleCountFlags ( j[ "sampledImageStencilSampleCounts" ] );
  p.storageImageSampleCounts = SampleCountFlags ( j[ "storageImageSampleCounts" ] );
  p.maxSampleMaskWords = j[ "maxSampleMaskWords" ];
  p.timestampComputeAndGraphics = j[ "timestampComputeAndGraphics" ];
  p.timestampPeriod = j[ "timestampPeriod" ];
  p.maxClipDistances = j[ "maxClipDistances" ];
  p.maxCullDistances = j[ "maxCullDistances" ];
  p.maxCombinedClipAndCullDistances = j[ "maxCombinedClipAndCullDistances" ];
  p.discreteQueuePriorities = j[ "discreteQueuePriorities" ];
  if( !j[ "pointSizeRange" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.pointSizeRange" );
  if( !j[ "pointSizeRange" ].size() > p.pointSizeRange.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.pointSizeRange" );
  std::fill( p.pointSizeRange.begin(), p.pointSizeRange.end(), 0 );
  std::copy( j[ "pointSizeRange" ].begin(), j[ "pointSizeRange" ].end(), p.pointSizeRange.begin() );
  if( !j[ "lineWidthRange" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PhysicalDeviceLimits.lineWidthRange" );
  if( !j[ "lineWidthRange" ].size() > p.lineWidthRange.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PhysicalDeviceLimits.lineWidthRange" );
  std::fill( p.lineWidthRange.begin(), p.lineWidthRange.end(), 0 );
  std::copy( j[ "lineWidthRange" ].begin(), j[ "lineWidthRange" ].end(), p.lineWidthRange.begin() );
  p.pointSizeGranularity = j[ "pointSizeGranularity" ];
  p.lineWidthGranularity = j[ "lineWidthGranularity" ];
  p.strictLines = j[ "strictLines" ];
  p.standardSampleLocations = j[ "standardSampleLocations" ];
  p.optimalBufferCopyOffsetAlignment = j[ "optimalBufferCopyOffsetAlignment" ];
  p.optimalBufferCopyRowPitchAlignment = j[ "optimalBufferCopyRowPitchAlignment" ];
  p.nonCoherentAtomSize = j[ "nonCoherentAtomSize" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceLimits &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceLimits temp;
  from_json( j, temp );
  p = VkPhysicalDeviceLimits ( temp );
}


#endif
