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
#ifndef VULKAN2JSON_PHYSICALDEVICEDESCRIPTORINDEXINGPROPERTIES_HPP
#define VULKAN2JSON_PHYSICALDEVICEDESCRIPTORINDEXINGPROPERTIES_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceDescriptorIndexingProperties &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
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
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceDescriptorIndexingProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceDescriptorIndexingProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceDescriptorIndexingProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceDescriptorIndexingProperties" );
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
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceDescriptorIndexingProperties &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceDescriptorIndexingProperties temp;
  from_json( j, temp );
  p = VkPhysicalDeviceDescriptorIndexingProperties ( temp );
}


#endif
