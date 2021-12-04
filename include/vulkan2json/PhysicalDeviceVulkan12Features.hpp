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
#ifndef VULKAN2JSON_PHYSICALDEVICEVULKAN12FEATURES_HPP
#define VULKAN2JSON_PHYSICALDEVICEVULKAN12FEATURES_HPP

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
inline void to_json( nlohmann::json &j, const PhysicalDeviceVulkan12Features &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "samplerMirrorClampToEdge" ] = bool( p.samplerMirrorClampToEdge );
  j[ "drawIndirectCount" ] = bool( p.drawIndirectCount );
  j[ "storageBuffer8BitAccess" ] = bool( p.storageBuffer8BitAccess );
  j[ "uniformAndStorageBuffer8BitAccess" ] = bool( p.uniformAndStorageBuffer8BitAccess );
  j[ "storagePushConstant8" ] = bool( p.storagePushConstant8 );
  j[ "shaderBufferInt64Atomics" ] = bool( p.shaderBufferInt64Atomics );
  j[ "shaderSharedInt64Atomics" ] = bool( p.shaderSharedInt64Atomics );
  j[ "shaderFloat16" ] = bool( p.shaderFloat16 );
  j[ "shaderInt8" ] = bool( p.shaderInt8 );
  j[ "descriptorIndexing" ] = bool( p.descriptorIndexing );
  j[ "shaderInputAttachmentArrayDynamicIndexing" ] = bool( p.shaderInputAttachmentArrayDynamicIndexing );
  j[ "shaderUniformTexelBufferArrayDynamicIndexing" ] = bool( p.shaderUniformTexelBufferArrayDynamicIndexing );
  j[ "shaderStorageTexelBufferArrayDynamicIndexing" ] = bool( p.shaderStorageTexelBufferArrayDynamicIndexing );
  j[ "shaderUniformBufferArrayNonUniformIndexing" ] = bool( p.shaderUniformBufferArrayNonUniformIndexing );
  j[ "shaderSampledImageArrayNonUniformIndexing" ] = bool( p.shaderSampledImageArrayNonUniformIndexing );
  j[ "shaderStorageBufferArrayNonUniformIndexing" ] = bool( p.shaderStorageBufferArrayNonUniformIndexing );
  j[ "shaderStorageImageArrayNonUniformIndexing" ] = bool( p.shaderStorageImageArrayNonUniformIndexing );
  j[ "shaderInputAttachmentArrayNonUniformIndexing" ] = bool( p.shaderInputAttachmentArrayNonUniformIndexing );
  j[ "shaderUniformTexelBufferArrayNonUniformIndexing" ] = bool( p.shaderUniformTexelBufferArrayNonUniformIndexing );
  j[ "shaderStorageTexelBufferArrayNonUniformIndexing" ] = bool( p.shaderStorageTexelBufferArrayNonUniformIndexing );
  j[ "descriptorBindingUniformBufferUpdateAfterBind" ] = bool( p.descriptorBindingUniformBufferUpdateAfterBind );
  j[ "descriptorBindingSampledImageUpdateAfterBind" ] = bool( p.descriptorBindingSampledImageUpdateAfterBind );
  j[ "descriptorBindingStorageImageUpdateAfterBind" ] = bool( p.descriptorBindingStorageImageUpdateAfterBind );
  j[ "descriptorBindingStorageBufferUpdateAfterBind" ] = bool( p.descriptorBindingStorageBufferUpdateAfterBind );
  j[ "descriptorBindingUniformTexelBufferUpdateAfterBind" ] = bool( p.descriptorBindingUniformTexelBufferUpdateAfterBind );
  j[ "descriptorBindingStorageTexelBufferUpdateAfterBind" ] = bool( p.descriptorBindingStorageTexelBufferUpdateAfterBind );
  j[ "descriptorBindingUpdateUnusedWhilePending" ] = bool( p.descriptorBindingUpdateUnusedWhilePending );
  j[ "descriptorBindingPartiallyBound" ] = bool( p.descriptorBindingPartiallyBound );
  j[ "descriptorBindingVariableDescriptorCount" ] = bool( p.descriptorBindingVariableDescriptorCount );
  j[ "runtimeDescriptorArray" ] = bool( p.runtimeDescriptorArray );
  j[ "samplerFilterMinmax" ] = bool( p.samplerFilterMinmax );
  j[ "scalarBlockLayout" ] = bool( p.scalarBlockLayout );
  j[ "imagelessFramebuffer" ] = bool( p.imagelessFramebuffer );
  j[ "uniformBufferStandardLayout" ] = bool( p.uniformBufferStandardLayout );
  j[ "shaderSubgroupExtendedTypes" ] = bool( p.shaderSubgroupExtendedTypes );
  j[ "separateDepthStencilLayouts" ] = bool( p.separateDepthStencilLayouts );
  j[ "hostQueryReset" ] = bool( p.hostQueryReset );
  j[ "timelineSemaphore" ] = bool( p.timelineSemaphore );
  j[ "bufferDeviceAddress" ] = bool( p.bufferDeviceAddress );
  j[ "bufferDeviceAddressCaptureReplay" ] = bool( p.bufferDeviceAddressCaptureReplay );
  j[ "bufferDeviceAddressMultiDevice" ] = bool( p.bufferDeviceAddressMultiDevice );
  j[ "vulkanMemoryModel" ] = bool( p.vulkanMemoryModel );
  j[ "vulkanMemoryModelDeviceScope" ] = bool( p.vulkanMemoryModelDeviceScope );
  j[ "vulkanMemoryModelAvailabilityVisibilityChains" ] = bool( p.vulkanMemoryModelAvailabilityVisibilityChains );
  j[ "shaderOutputViewportIndex" ] = bool( p.shaderOutputViewportIndex );
  j[ "shaderOutputLayer" ] = bool( p.shaderOutputLayer );
  j[ "subgroupBroadcastDynamicId" ] = bool( p.subgroupBroadcastDynamicId );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceVulkan12Features &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan12Features ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceVulkan12Features &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceVulkan12Features" );
  p.samplerMirrorClampToEdge = j[ "samplerMirrorClampToEdge" ];
  p.drawIndirectCount = j[ "drawIndirectCount" ];
  p.storageBuffer8BitAccess = j[ "storageBuffer8BitAccess" ];
  p.uniformAndStorageBuffer8BitAccess = j[ "uniformAndStorageBuffer8BitAccess" ];
  p.storagePushConstant8 = j[ "storagePushConstant8" ];
  p.shaderBufferInt64Atomics = j[ "shaderBufferInt64Atomics" ];
  p.shaderSharedInt64Atomics = j[ "shaderSharedInt64Atomics" ];
  p.shaderFloat16 = j[ "shaderFloat16" ];
  p.shaderInt8 = j[ "shaderInt8" ];
  p.descriptorIndexing = j[ "descriptorIndexing" ];
  p.shaderInputAttachmentArrayDynamicIndexing = j[ "shaderInputAttachmentArrayDynamicIndexing" ];
  p.shaderUniformTexelBufferArrayDynamicIndexing = j[ "shaderUniformTexelBufferArrayDynamicIndexing" ];
  p.shaderStorageTexelBufferArrayDynamicIndexing = j[ "shaderStorageTexelBufferArrayDynamicIndexing" ];
  p.shaderUniformBufferArrayNonUniformIndexing = j[ "shaderUniformBufferArrayNonUniformIndexing" ];
  p.shaderSampledImageArrayNonUniformIndexing = j[ "shaderSampledImageArrayNonUniformIndexing" ];
  p.shaderStorageBufferArrayNonUniformIndexing = j[ "shaderStorageBufferArrayNonUniformIndexing" ];
  p.shaderStorageImageArrayNonUniformIndexing = j[ "shaderStorageImageArrayNonUniformIndexing" ];
  p.shaderInputAttachmentArrayNonUniformIndexing = j[ "shaderInputAttachmentArrayNonUniformIndexing" ];
  p.shaderUniformTexelBufferArrayNonUniformIndexing = j[ "shaderUniformTexelBufferArrayNonUniformIndexing" ];
  p.shaderStorageTexelBufferArrayNonUniformIndexing = j[ "shaderStorageTexelBufferArrayNonUniformIndexing" ];
  p.descriptorBindingUniformBufferUpdateAfterBind = j[ "descriptorBindingUniformBufferUpdateAfterBind" ];
  p.descriptorBindingSampledImageUpdateAfterBind = j[ "descriptorBindingSampledImageUpdateAfterBind" ];
  p.descriptorBindingStorageImageUpdateAfterBind = j[ "descriptorBindingStorageImageUpdateAfterBind" ];
  p.descriptorBindingStorageBufferUpdateAfterBind = j[ "descriptorBindingStorageBufferUpdateAfterBind" ];
  p.descriptorBindingUniformTexelBufferUpdateAfterBind = j[ "descriptorBindingUniformTexelBufferUpdateAfterBind" ];
  p.descriptorBindingStorageTexelBufferUpdateAfterBind = j[ "descriptorBindingStorageTexelBufferUpdateAfterBind" ];
  p.descriptorBindingUpdateUnusedWhilePending = j[ "descriptorBindingUpdateUnusedWhilePending" ];
  p.descriptorBindingPartiallyBound = j[ "descriptorBindingPartiallyBound" ];
  p.descriptorBindingVariableDescriptorCount = j[ "descriptorBindingVariableDescriptorCount" ];
  p.runtimeDescriptorArray = j[ "runtimeDescriptorArray" ];
  p.samplerFilterMinmax = j[ "samplerFilterMinmax" ];
  p.scalarBlockLayout = j[ "scalarBlockLayout" ];
  p.imagelessFramebuffer = j[ "imagelessFramebuffer" ];
  p.uniformBufferStandardLayout = j[ "uniformBufferStandardLayout" ];
  p.shaderSubgroupExtendedTypes = j[ "shaderSubgroupExtendedTypes" ];
  p.separateDepthStencilLayouts = j[ "separateDepthStencilLayouts" ];
  p.hostQueryReset = j[ "hostQueryReset" ];
  p.timelineSemaphore = j[ "timelineSemaphore" ];
  p.bufferDeviceAddress = j[ "bufferDeviceAddress" ];
  p.bufferDeviceAddressCaptureReplay = j[ "bufferDeviceAddressCaptureReplay" ];
  p.bufferDeviceAddressMultiDevice = j[ "bufferDeviceAddressMultiDevice" ];
  p.vulkanMemoryModel = j[ "vulkanMemoryModel" ];
  p.vulkanMemoryModelDeviceScope = j[ "vulkanMemoryModelDeviceScope" ];
  p.vulkanMemoryModelAvailabilityVisibilityChains = j[ "vulkanMemoryModelAvailabilityVisibilityChains" ];
  p.shaderOutputViewportIndex = j[ "shaderOutputViewportIndex" ];
  p.shaderOutputLayer = j[ "shaderOutputLayer" ];
  p.subgroupBroadcastDynamicId = j[ "subgroupBroadcastDynamicId" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceVulkan12Features &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceVulkan12Features temp;
  from_json( j, temp );
  p = VkPhysicalDeviceVulkan12Features ( temp );
}


#endif
