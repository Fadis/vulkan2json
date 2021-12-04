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
#ifndef VULKAN2JSON_PHYSICALDEVICEVULKAN12PROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEVULKAN12PROPERTIES_HPP

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
#include <vulkan2json/DriverId.hpp>
#include <vulkan2json/ConformanceVersion.hpp>
#include <vulkan2json/ShaderFloatControlsIndependence.hpp>
#include <vulkan2json/ShaderFloatControlsIndependence.hpp>
#include <vulkan2json/ResolveModeFlags.hpp>
#include <vulkan2json/ResolveModeFlags.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceVulkan12Properties &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "driverID" ] = p.driverID;
  j[ "driverName" ] = std::string( p.driverName.begin(), std::find( p.driverName.begin(), p.driverName.end(), '\0' ) );
  j[ "driverInfo" ] = std::string( p.driverInfo.begin(), std::find( p.driverInfo.begin(), p.driverInfo.end(), '\0' ) );
  j[ "conformanceVersion" ] = p.conformanceVersion;
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
  j[ "maxUpdateAfterBindDescriptorsInAllPools" ] = p.maxUpdateAfterBindDescriptorsInAllPools;
  j[ "shaderUniformBufferArrayNonUniformIndexingNative" ] = bool( p.shaderUniformBufferArrayNonUniformIndexingNative );
  j[ "shaderSampledImageArrayNonUniformIndexingNative" ] = bool( p.shaderSampledImageArrayNonUniformIndexingNative );
  j[ "shaderStorageBufferArrayNonUniformIndexingNative" ] = bool( p.shaderStorageBufferArrayNonUniformIndexingNative );
  j[ "shaderStorageImageArrayNonUniformIndexingNative" ] = bool( p.shaderStorageImageArrayNonUniformIndexingNative );
  j[ "shaderInputAttachmentArrayNonUniformIndexingNative" ] = bool( p.shaderInputAttachmentArrayNonUniformIndexingNative );
  j[ "robustBufferAccessUpdateAfterBind" ] = bool( p.robustBufferAccessUpdateAfterBind );
  j[ "quadDivergentImplicitLod" ] = bool( p.quadDivergentImplicitLod );
  j[ "maxPerStageDescriptorUpdateAfterBindSamplers" ] = p.maxPerStageDescriptorUpdateAfterBindSamplers;
  j[ "maxPerStageDescriptorUpdateAfterBindUniformBuffers" ] = p.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
  j[ "maxPerStageDescriptorUpdateAfterBindStorageBuffers" ] = p.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
  j[ "maxPerStageDescriptorUpdateAfterBindSampledImages" ] = p.maxPerStageDescriptorUpdateAfterBindSampledImages;
  j[ "maxPerStageDescriptorUpdateAfterBindStorageImages" ] = p.maxPerStageDescriptorUpdateAfterBindStorageImages;
  j[ "maxPerStageDescriptorUpdateAfterBindInputAttachments" ] = p.maxPerStageDescriptorUpdateAfterBindInputAttachments;
  j[ "maxPerStageUpdateAfterBindResources" ] = p.maxPerStageUpdateAfterBindResources;
  j[ "maxDescriptorSetUpdateAfterBindSamplers" ] = p.maxDescriptorSetUpdateAfterBindSamplers;
  j[ "maxDescriptorSetUpdateAfterBindUniformBuffers" ] = p.maxDescriptorSetUpdateAfterBindUniformBuffers;
  j[ "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic" ] = p.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
  j[ "maxDescriptorSetUpdateAfterBindStorageBuffers" ] = p.maxDescriptorSetUpdateAfterBindStorageBuffers;
  j[ "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic" ] = p.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
  j[ "maxDescriptorSetUpdateAfterBindSampledImages" ] = p.maxDescriptorSetUpdateAfterBindSampledImages;
  j[ "maxDescriptorSetUpdateAfterBindStorageImages" ] = p.maxDescriptorSetUpdateAfterBindStorageImages;
  j[ "maxDescriptorSetUpdateAfterBindInputAttachments" ] = p.maxDescriptorSetUpdateAfterBindInputAttachments;
  j[ "supportedDepthResolveModes" ] = p.supportedDepthResolveModes;
  j[ "supportedStencilResolveModes" ] = p.supportedStencilResolveModes;
  j[ "independentResolveNone" ] = bool( p.independentResolveNone );
  j[ "independentResolve" ] = bool( p.independentResolve );
  j[ "filterMinmaxSingleComponentFormats" ] = bool( p.filterMinmaxSingleComponentFormats );
  j[ "filterMinmaxImageComponentMapping" ] = bool( p.filterMinmaxImageComponentMapping );
  j[ "maxTimelineSemaphoreValueDifference" ] = p.maxTimelineSemaphoreValueDifference;
  j[ "framebufferIntegerColorSampleCounts" ] = p.framebufferIntegerColorSampleCounts;
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceVulkan12Properties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan12Properties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceVulkan12Properties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceVulkan12Properties" );
  p.driverID = DriverId ( j[ "driverID" ] );
  {
    std::string s = j[ "driverName" ];
    if( !p.driverName.empty() ) {
      p.driverName[ p.driverName.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.driverName.size() - 1u ) ), p.driverName.begin() );
    }
  }
  {
    std::string s = j[ "driverInfo" ];
    if( !p.driverInfo.empty() ) {
      p.driverInfo[ p.driverInfo.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.driverInfo.size() - 1u ) ), p.driverInfo.begin() );
    }
  }
  p.conformanceVersion = ConformanceVersion ( j[ "conformanceVersion" ] );
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
  p.maxUpdateAfterBindDescriptorsInAllPools = j[ "maxUpdateAfterBindDescriptorsInAllPools" ];
  p.shaderUniformBufferArrayNonUniformIndexingNative = j[ "shaderUniformBufferArrayNonUniformIndexingNative" ];
  p.shaderSampledImageArrayNonUniformIndexingNative = j[ "shaderSampledImageArrayNonUniformIndexingNative" ];
  p.shaderStorageBufferArrayNonUniformIndexingNative = j[ "shaderStorageBufferArrayNonUniformIndexingNative" ];
  p.shaderStorageImageArrayNonUniformIndexingNative = j[ "shaderStorageImageArrayNonUniformIndexingNative" ];
  p.shaderInputAttachmentArrayNonUniformIndexingNative = j[ "shaderInputAttachmentArrayNonUniformIndexingNative" ];
  p.robustBufferAccessUpdateAfterBind = j[ "robustBufferAccessUpdateAfterBind" ];
  p.quadDivergentImplicitLod = j[ "quadDivergentImplicitLod" ];
  p.maxPerStageDescriptorUpdateAfterBindSamplers = j[ "maxPerStageDescriptorUpdateAfterBindSamplers" ];
  p.maxPerStageDescriptorUpdateAfterBindUniformBuffers = j[ "maxPerStageDescriptorUpdateAfterBindUniformBuffers" ];
  p.maxPerStageDescriptorUpdateAfterBindStorageBuffers = j[ "maxPerStageDescriptorUpdateAfterBindStorageBuffers" ];
  p.maxPerStageDescriptorUpdateAfterBindSampledImages = j[ "maxPerStageDescriptorUpdateAfterBindSampledImages" ];
  p.maxPerStageDescriptorUpdateAfterBindStorageImages = j[ "maxPerStageDescriptorUpdateAfterBindStorageImages" ];
  p.maxPerStageDescriptorUpdateAfterBindInputAttachments = j[ "maxPerStageDescriptorUpdateAfterBindInputAttachments" ];
  p.maxPerStageUpdateAfterBindResources = j[ "maxPerStageUpdateAfterBindResources" ];
  p.maxDescriptorSetUpdateAfterBindSamplers = j[ "maxDescriptorSetUpdateAfterBindSamplers" ];
  p.maxDescriptorSetUpdateAfterBindUniformBuffers = j[ "maxDescriptorSetUpdateAfterBindUniformBuffers" ];
  p.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = j[ "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic" ];
  p.maxDescriptorSetUpdateAfterBindStorageBuffers = j[ "maxDescriptorSetUpdateAfterBindStorageBuffers" ];
  p.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = j[ "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic" ];
  p.maxDescriptorSetUpdateAfterBindSampledImages = j[ "maxDescriptorSetUpdateAfterBindSampledImages" ];
  p.maxDescriptorSetUpdateAfterBindStorageImages = j[ "maxDescriptorSetUpdateAfterBindStorageImages" ];
  p.maxDescriptorSetUpdateAfterBindInputAttachments = j[ "maxDescriptorSetUpdateAfterBindInputAttachments" ];
  p.supportedDepthResolveModes = ResolveModeFlags ( j[ "supportedDepthResolveModes" ] );
  p.supportedStencilResolveModes = ResolveModeFlags ( j[ "supportedStencilResolveModes" ] );
  p.independentResolveNone = j[ "independentResolveNone" ];
  p.independentResolve = j[ "independentResolve" ];
  p.filterMinmaxSingleComponentFormats = j[ "filterMinmaxSingleComponentFormats" ];
  p.filterMinmaxImageComponentMapping = j[ "filterMinmaxImageComponentMapping" ];
  p.maxTimelineSemaphoreValueDifference = j[ "maxTimelineSemaphoreValueDifference" ];
  p.framebufferIntegerColorSampleCounts = SampleCountFlags ( j[ "framebufferIntegerColorSampleCounts" ] );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceVulkan12Properties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan12Properties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceVulkan12Properties ( temp );
}


#endif
