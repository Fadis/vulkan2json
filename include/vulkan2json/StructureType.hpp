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
#ifndef VULKAN2JSON_STRUCTURETYPE_HPP
#define VULKAN2JSON_STRUCTURETYPE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 189, "Wrong VK_HEADER_VERSION!" );

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const StructureType &p ) {
  if( StructureType :: eApplicationInfo == p ) {
    j = "ApplicationInfo";
    return;
  }
  if( StructureType :: eInstanceCreateInfo == p ) {
    j = "InstanceCreateInfo";
    return;
  }
  if( StructureType :: eDeviceQueueCreateInfo == p ) {
    j = "DeviceQueueCreateInfo";
    return;
  }
  if( StructureType :: eDeviceCreateInfo == p ) {
    j = "DeviceCreateInfo";
    return;
  }
  if( StructureType :: eSubmitInfo == p ) {
    j = "SubmitInfo";
    return;
  }
  if( StructureType :: eMemoryAllocateInfo == p ) {
    j = "MemoryAllocateInfo";
    return;
  }
  if( StructureType :: eMappedMemoryRange == p ) {
    j = "MappedMemoryRange";
    return;
  }
  if( StructureType :: eBindSparseInfo == p ) {
    j = "BindSparseInfo";
    return;
  }
  if( StructureType :: eFenceCreateInfo == p ) {
    j = "FenceCreateInfo";
    return;
  }
  if( StructureType :: eSemaphoreCreateInfo == p ) {
    j = "SemaphoreCreateInfo";
    return;
  }
  if( StructureType :: eEventCreateInfo == p ) {
    j = "EventCreateInfo";
    return;
  }
  if( StructureType :: eQueryPoolCreateInfo == p ) {
    j = "QueryPoolCreateInfo";
    return;
  }
  if( StructureType :: eBufferCreateInfo == p ) {
    j = "BufferCreateInfo";
    return;
  }
  if( StructureType :: eBufferViewCreateInfo == p ) {
    j = "BufferViewCreateInfo";
    return;
  }
  if( StructureType :: eImageCreateInfo == p ) {
    j = "ImageCreateInfo";
    return;
  }
  if( StructureType :: eImageViewCreateInfo == p ) {
    j = "ImageViewCreateInfo";
    return;
  }
  if( StructureType :: eShaderModuleCreateInfo == p ) {
    j = "ShaderModuleCreateInfo";
    return;
  }
  if( StructureType :: ePipelineCacheCreateInfo == p ) {
    j = "PipelineCacheCreateInfo";
    return;
  }
  if( StructureType :: ePipelineShaderStageCreateInfo == p ) {
    j = "PipelineShaderStageCreateInfo";
    return;
  }
  if( StructureType :: ePipelineVertexInputStateCreateInfo == p ) {
    j = "PipelineVertexInputStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineInputAssemblyStateCreateInfo == p ) {
    j = "PipelineInputAssemblyStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineTessellationStateCreateInfo == p ) {
    j = "PipelineTessellationStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineViewportStateCreateInfo == p ) {
    j = "PipelineViewportStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineRasterizationStateCreateInfo == p ) {
    j = "PipelineRasterizationStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineMultisampleStateCreateInfo == p ) {
    j = "PipelineMultisampleStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineDepthStencilStateCreateInfo == p ) {
    j = "PipelineDepthStencilStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineColorBlendStateCreateInfo == p ) {
    j = "PipelineColorBlendStateCreateInfo";
    return;
  }
  if( StructureType :: ePipelineDynamicStateCreateInfo == p ) {
    j = "PipelineDynamicStateCreateInfo";
    return;
  }
  if( StructureType :: eGraphicsPipelineCreateInfo == p ) {
    j = "GraphicsPipelineCreateInfo";
    return;
  }
  if( StructureType :: eComputePipelineCreateInfo == p ) {
    j = "ComputePipelineCreateInfo";
    return;
  }
  if( StructureType :: ePipelineLayoutCreateInfo == p ) {
    j = "PipelineLayoutCreateInfo";
    return;
  }
  if( StructureType :: eSamplerCreateInfo == p ) {
    j = "SamplerCreateInfo";
    return;
  }
  if( StructureType :: eDescriptorSetLayoutCreateInfo == p ) {
    j = "DescriptorSetLayoutCreateInfo";
    return;
  }
  if( StructureType :: eDescriptorPoolCreateInfo == p ) {
    j = "DescriptorPoolCreateInfo";
    return;
  }
  if( StructureType :: eDescriptorSetAllocateInfo == p ) {
    j = "DescriptorSetAllocateInfo";
    return;
  }
  if( StructureType :: eWriteDescriptorSet == p ) {
    j = "WriteDescriptorSet";
    return;
  }
  if( StructureType :: eCopyDescriptorSet == p ) {
    j = "CopyDescriptorSet";
    return;
  }
  if( StructureType :: eFramebufferCreateInfo == p ) {
    j = "FramebufferCreateInfo";
    return;
  }
  if( StructureType :: eRenderPassCreateInfo == p ) {
    j = "RenderPassCreateInfo";
    return;
  }
  if( StructureType :: eCommandPoolCreateInfo == p ) {
    j = "CommandPoolCreateInfo";
    return;
  }
  if( StructureType :: eCommandBufferAllocateInfo == p ) {
    j = "CommandBufferAllocateInfo";
    return;
  }
  if( StructureType :: eCommandBufferInheritanceInfo == p ) {
    j = "CommandBufferInheritanceInfo";
    return;
  }
  if( StructureType :: eCommandBufferBeginInfo == p ) {
    j = "CommandBufferBeginInfo";
    return;
  }
  if( StructureType :: eRenderPassBeginInfo == p ) {
    j = "RenderPassBeginInfo";
    return;
  }
  if( StructureType :: eBufferMemoryBarrier == p ) {
    j = "BufferMemoryBarrier";
    return;
  }
  if( StructureType :: eImageMemoryBarrier == p ) {
    j = "ImageMemoryBarrier";
    return;
  }
  if( StructureType :: eMemoryBarrier == p ) {
    j = "MemoryBarrier";
    return;
  }
  if( StructureType :: eLoaderInstanceCreateInfo == p ) {
    j = "LoaderInstanceCreateInfo";
    return;
  }
  if( StructureType :: eLoaderDeviceCreateInfo == p ) {
    j = "LoaderDeviceCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceSubgroupProperties == p ) {
    j = "PhysicalDeviceSubgroupProperties";
    return;
  }
  if( StructureType :: eBindBufferMemoryInfo == p ) {
    j = "BindBufferMemoryInfo";
    return;
  }
  if( StructureType :: eBindImageMemoryInfo == p ) {
    j = "BindImageMemoryInfo";
    return;
  }
  if( StructureType :: ePhysicalDevice16BitStorageFeatures == p ) {
    j = "PhysicalDevice16BitStorageFeatures";
    return;
  }
  if( StructureType :: eMemoryDedicatedRequirements == p ) {
    j = "MemoryDedicatedRequirements";
    return;
  }
  if( StructureType :: eMemoryDedicatedAllocateInfo == p ) {
    j = "MemoryDedicatedAllocateInfo";
    return;
  }
  if( StructureType :: eMemoryAllocateFlagsInfo == p ) {
    j = "MemoryAllocateFlagsInfo";
    return;
  }
  if( StructureType :: eDeviceGroupRenderPassBeginInfo == p ) {
    j = "DeviceGroupRenderPassBeginInfo";
    return;
  }
  if( StructureType :: eDeviceGroupCommandBufferBeginInfo == p ) {
    j = "DeviceGroupCommandBufferBeginInfo";
    return;
  }
  if( StructureType :: eDeviceGroupSubmitInfo == p ) {
    j = "DeviceGroupSubmitInfo";
    return;
  }
  if( StructureType :: eDeviceGroupBindSparseInfo == p ) {
    j = "DeviceGroupBindSparseInfo";
    return;
  }
  if( StructureType :: eBindBufferMemoryDeviceGroupInfo == p ) {
    j = "BindBufferMemoryDeviceGroupInfo";
    return;
  }
  if( StructureType :: eBindImageMemoryDeviceGroupInfo == p ) {
    j = "BindImageMemoryDeviceGroupInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceGroupProperties == p ) {
    j = "PhysicalDeviceGroupProperties";
    return;
  }
  if( StructureType :: eDeviceGroupDeviceCreateInfo == p ) {
    j = "DeviceGroupDeviceCreateInfo";
    return;
  }
  if( StructureType :: eBufferMemoryRequirementsInfo2 == p ) {
    j = "BufferMemoryRequirementsInfo2";
    return;
  }
  if( StructureType :: eImageMemoryRequirementsInfo2 == p ) {
    j = "ImageMemoryRequirementsInfo2";
    return;
  }
  if( StructureType :: eImageSparseMemoryRequirementsInfo2 == p ) {
    j = "ImageSparseMemoryRequirementsInfo2";
    return;
  }
  if( StructureType :: eMemoryRequirements2 == p ) {
    j = "MemoryRequirements2";
    return;
  }
  if( StructureType :: eSparseImageMemoryRequirements2 == p ) {
    j = "SparseImageMemoryRequirements2";
    return;
  }
  if( StructureType :: ePhysicalDeviceFeatures2 == p ) {
    j = "PhysicalDeviceFeatures2";
    return;
  }
  if( StructureType :: ePhysicalDeviceProperties2 == p ) {
    j = "PhysicalDeviceProperties2";
    return;
  }
  if( StructureType :: eFormatProperties2 == p ) {
    j = "FormatProperties2";
    return;
  }
  if( StructureType :: eImageFormatProperties2 == p ) {
    j = "ImageFormatProperties2";
    return;
  }
  if( StructureType :: ePhysicalDeviceImageFormatInfo2 == p ) {
    j = "PhysicalDeviceImageFormatInfo2";
    return;
  }
  if( StructureType :: eQueueFamilyProperties2 == p ) {
    j = "QueueFamilyProperties2";
    return;
  }
  if( StructureType :: ePhysicalDeviceMemoryProperties2 == p ) {
    j = "PhysicalDeviceMemoryProperties2";
    return;
  }
  if( StructureType :: eSparseImageFormatProperties2 == p ) {
    j = "SparseImageFormatProperties2";
    return;
  }
  if( StructureType :: ePhysicalDeviceSparseImageFormatInfo2 == p ) {
    j = "PhysicalDeviceSparseImageFormatInfo2";
    return;
  }
  if( StructureType :: ePhysicalDevicePointClippingProperties == p ) {
    j = "PhysicalDevicePointClippingProperties";
    return;
  }
  if( StructureType :: eRenderPassInputAttachmentAspectCreateInfo == p ) {
    j = "RenderPassInputAttachmentAspectCreateInfo";
    return;
  }
  if( StructureType :: eImageViewUsageCreateInfo == p ) {
    j = "ImageViewUsageCreateInfo";
    return;
  }
  if( StructureType :: eRenderPassMultiviewCreateInfo == p ) {
    j = "RenderPassMultiviewCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiviewFeatures == p ) {
    j = "PhysicalDeviceMultiviewFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiviewProperties == p ) {
    j = "PhysicalDeviceMultiviewProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceVariablePointersFeatures == p ) {
    j = "PhysicalDeviceVariablePointersFeatures";
    return;
  }
  if( StructureType :: eProtectedSubmitInfo == p ) {
    j = "ProtectedSubmitInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceProtectedMemoryFeatures == p ) {
    j = "PhysicalDeviceProtectedMemoryFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceProtectedMemoryProperties == p ) {
    j = "PhysicalDeviceProtectedMemoryProperties";
    return;
  }
  if( StructureType :: eDeviceQueueInfo2 == p ) {
    j = "DeviceQueueInfo2";
    return;
  }
  if( StructureType :: eSamplerYcbcrConversionCreateInfo == p ) {
    j = "SamplerYcbcrConversionCreateInfo";
    return;
  }
  if( StructureType :: eSamplerYcbcrConversionInfo == p ) {
    j = "SamplerYcbcrConversionInfo";
    return;
  }
  if( StructureType :: eBindImagePlaneMemoryInfo == p ) {
    j = "BindImagePlaneMemoryInfo";
    return;
  }
  if( StructureType :: eImagePlaneMemoryRequirementsInfo == p ) {
    j = "ImagePlaneMemoryRequirementsInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceSamplerYcbcrConversionFeatures == p ) {
    j = "PhysicalDeviceSamplerYcbcrConversionFeatures";
    return;
  }
  if( StructureType :: eSamplerYcbcrConversionImageFormatProperties == p ) {
    j = "SamplerYcbcrConversionImageFormatProperties";
    return;
  }
  if( StructureType :: eDescriptorUpdateTemplateCreateInfo == p ) {
    j = "DescriptorUpdateTemplateCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalImageFormatInfo == p ) {
    j = "PhysicalDeviceExternalImageFormatInfo";
    return;
  }
  if( StructureType :: eExternalImageFormatProperties == p ) {
    j = "ExternalImageFormatProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalBufferInfo == p ) {
    j = "PhysicalDeviceExternalBufferInfo";
    return;
  }
  if( StructureType :: eExternalBufferProperties == p ) {
    j = "ExternalBufferProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceIdProperties == p ) {
    j = "PhysicalDeviceIdProperties";
    return;
  }
  if( StructureType :: eExternalMemoryBufferCreateInfo == p ) {
    j = "ExternalMemoryBufferCreateInfo";
    return;
  }
  if( StructureType :: eExternalMemoryImageCreateInfo == p ) {
    j = "ExternalMemoryImageCreateInfo";
    return;
  }
  if( StructureType :: eExportMemoryAllocateInfo == p ) {
    j = "ExportMemoryAllocateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalFenceInfo == p ) {
    j = "PhysicalDeviceExternalFenceInfo";
    return;
  }
  if( StructureType :: eExternalFenceProperties == p ) {
    j = "ExternalFenceProperties";
    return;
  }
  if( StructureType :: eExportFenceCreateInfo == p ) {
    j = "ExportFenceCreateInfo";
    return;
  }
  if( StructureType :: eExportSemaphoreCreateInfo == p ) {
    j = "ExportSemaphoreCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalSemaphoreInfo == p ) {
    j = "PhysicalDeviceExternalSemaphoreInfo";
    return;
  }
  if( StructureType :: eExternalSemaphoreProperties == p ) {
    j = "ExternalSemaphoreProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceMaintenance3Properties == p ) {
    j = "PhysicalDeviceMaintenance3Properties";
    return;
  }
  if( StructureType :: eDescriptorSetLayoutSupport == p ) {
    j = "DescriptorSetLayoutSupport";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderDrawParametersFeatures == p ) {
    j = "PhysicalDeviceShaderDrawParametersFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkan11Features == p ) {
    j = "PhysicalDeviceVulkan11Features";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkan11Properties == p ) {
    j = "PhysicalDeviceVulkan11Properties";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkan12Features == p ) {
    j = "PhysicalDeviceVulkan12Features";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkan12Properties == p ) {
    j = "PhysicalDeviceVulkan12Properties";
    return;
  }
  if( StructureType :: eImageFormatListCreateInfo == p ) {
    j = "ImageFormatListCreateInfo";
    return;
  }
  if( StructureType :: eAttachmentDescription2 == p ) {
    j = "AttachmentDescription2";
    return;
  }
  if( StructureType :: eAttachmentReference2 == p ) {
    j = "AttachmentReference2";
    return;
  }
  if( StructureType :: eSubpassDescription2 == p ) {
    j = "SubpassDescription2";
    return;
  }
  if( StructureType :: eSubpassDependency2 == p ) {
    j = "SubpassDependency2";
    return;
  }
  if( StructureType :: eRenderPassCreateInfo2 == p ) {
    j = "RenderPassCreateInfo2";
    return;
  }
  if( StructureType :: eSubpassBeginInfo == p ) {
    j = "SubpassBeginInfo";
    return;
  }
  if( StructureType :: eSubpassEndInfo == p ) {
    j = "SubpassEndInfo";
    return;
  }
  if( StructureType :: ePhysicalDevice8BitStorageFeatures == p ) {
    j = "PhysicalDevice8BitStorageFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceDriverProperties == p ) {
    j = "PhysicalDeviceDriverProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderAtomicInt64Features == p ) {
    j = "PhysicalDeviceShaderAtomicInt64Features";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderFloat16Int8Features == p ) {
    j = "PhysicalDeviceShaderFloat16Int8Features";
    return;
  }
  if( StructureType :: ePhysicalDeviceFloatControlsProperties == p ) {
    j = "PhysicalDeviceFloatControlsProperties";
    return;
  }
  if( StructureType :: eDescriptorSetLayoutBindingFlagsCreateInfo == p ) {
    j = "DescriptorSetLayoutBindingFlagsCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceDescriptorIndexingFeatures == p ) {
    j = "PhysicalDeviceDescriptorIndexingFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceDescriptorIndexingProperties == p ) {
    j = "PhysicalDeviceDescriptorIndexingProperties";
    return;
  }
  if( StructureType :: ePhysicalDeviceDepthStencilResolveProperties == p ) {
    j = "PhysicalDeviceDepthStencilResolveProperties";
    return;
  }
  if( StructureType :: eSubpassDescriptionDepthStencilResolve == p ) {
    j = "SubpassDescriptionDepthStencilResolve";
    return;
  }
  if( StructureType :: ePhysicalDeviceScalarBlockLayoutFeatures == p ) {
    j = "PhysicalDeviceScalarBlockLayoutFeatures";
    return;
  }
  if( StructureType :: eImageStencilUsageCreateInfo == p ) {
    j = "ImageStencilUsageCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceSamplerFilterMinmaxProperties == p ) {
    j = "PhysicalDeviceSamplerFilterMinmaxProperties";
    return;
  }
  if( StructureType :: eSamplerReductionModeCreateInfo == p ) {
    j = "SamplerReductionModeCreateInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkanMemoryModelFeatures == p ) {
    j = "PhysicalDeviceVulkanMemoryModelFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceImagelessFramebufferFeatures == p ) {
    j = "PhysicalDeviceImagelessFramebufferFeatures";
    return;
  }
  if( StructureType :: eFramebufferAttachmentsCreateInfo == p ) {
    j = "FramebufferAttachmentsCreateInfo";
    return;
  }
  if( StructureType :: eFramebufferAttachmentImageInfo == p ) {
    j = "FramebufferAttachmentImageInfo";
    return;
  }
  if( StructureType :: eRenderPassAttachmentBeginInfo == p ) {
    j = "RenderPassAttachmentBeginInfo";
    return;
  }
  if( StructureType :: eAttachmentReferenceStencilLayout == p ) {
    j = "AttachmentReferenceStencilLayout";
    return;
  }
  if( StructureType :: eAttachmentDescriptionStencilLayout == p ) {
    j = "AttachmentDescriptionStencilLayout";
    return;
  }
  if( StructureType :: ePhysicalDeviceHostQueryResetFeatures == p ) {
    j = "PhysicalDeviceHostQueryResetFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceTimelineSemaphoreFeatures == p ) {
    j = "PhysicalDeviceTimelineSemaphoreFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceTimelineSemaphoreProperties == p ) {
    j = "PhysicalDeviceTimelineSemaphoreProperties";
    return;
  }
  if( StructureType :: eSemaphoreTypeCreateInfo == p ) {
    j = "SemaphoreTypeCreateInfo";
    return;
  }
  if( StructureType :: eTimelineSemaphoreSubmitInfo == p ) {
    j = "TimelineSemaphoreSubmitInfo";
    return;
  }
  if( StructureType :: eSemaphoreWaitInfo == p ) {
    j = "SemaphoreWaitInfo";
    return;
  }
  if( StructureType :: eSemaphoreSignalInfo == p ) {
    j = "SemaphoreSignalInfo";
    return;
  }
  if( StructureType :: ePhysicalDeviceBufferDeviceAddressFeatures == p ) {
    j = "PhysicalDeviceBufferDeviceAddressFeatures";
    return;
  }
  if( StructureType :: eBufferDeviceAddressInfo == p ) {
    j = "BufferDeviceAddressInfo";
    return;
  }
  if( StructureType :: eBufferOpaqueCaptureAddressCreateInfo == p ) {
    j = "BufferOpaqueCaptureAddressCreateInfo";
    return;
  }
  if( StructureType :: eMemoryOpaqueCaptureAddressAllocateInfo == p ) {
    j = "MemoryOpaqueCaptureAddressAllocateInfo";
    return;
  }
  if( StructureType :: eDeviceMemoryOpaqueCaptureAddressInfo == p ) {
    j = "DeviceMemoryOpaqueCaptureAddressInfo";
    return;
  }
  if( StructureType :: eSwapchainCreateInfoKHR == p ) {
    j = "SwapchainCreateInfoKHR";
    return;
  }
  if( StructureType :: ePresentInfoKHR == p ) {
    j = "PresentInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupPresentCapabilitiesKHR == p ) {
    j = "DeviceGroupPresentCapabilitiesKHR";
    return;
  }
  if( StructureType :: eImageSwapchainCreateInfoKHR == p ) {
    j = "ImageSwapchainCreateInfoKHR";
    return;
  }
  if( StructureType :: eBindImageMemorySwapchainInfoKHR == p ) {
    j = "BindImageMemorySwapchainInfoKHR";
    return;
  }
  if( StructureType :: eAcquireNextImageInfoKHR == p ) {
    j = "AcquireNextImageInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupPresentInfoKHR == p ) {
    j = "DeviceGroupPresentInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupSwapchainCreateInfoKHR == p ) {
    j = "DeviceGroupSwapchainCreateInfoKHR";
    return;
  }
  if( StructureType :: eDisplayModeCreateInfoKHR == p ) {
    j = "DisplayModeCreateInfoKHR";
    return;
  }
  if( StructureType :: eDisplaySurfaceCreateInfoKHR == p ) {
    j = "DisplaySurfaceCreateInfoKHR";
    return;
  }
  if( StructureType :: eDisplayPresentInfoKHR == p ) {
    j = "DisplayPresentInfoKHR";
    return;
  }
#if defined( VK_USE_PLATFORM_XLIB_KHR )
  if( StructureType :: eXlibSurfaceCreateInfoKHR == p ) {
    j = "XlibSurfaceCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_XCB_KHR )
  if( StructureType :: eXcbSurfaceCreateInfoKHR == p ) {
    j = "XcbSurfaceCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  if( StructureType :: eWaylandSurfaceCreateInfoKHR == p ) {
    j = "WaylandSurfaceCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eAndroidSurfaceCreateInfoKHR == p ) {
    j = "AndroidSurfaceCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eWin32SurfaceCreateInfoKHR == p ) {
    j = "Win32SurfaceCreateInfoKHR";
    return;
  }
#endif
  if( StructureType :: eDebugReportCallbackCreateInfoEXT == p ) {
    j = "DebugReportCallbackCreateInfoEXT";
    return;
  }
  if( StructureType :: eDebugMarkerObjectNameInfoEXT == p ) {
    j = "DebugMarkerObjectNameInfoEXT";
    return;
  }
  if( StructureType :: eDebugMarkerObjectTagInfoEXT == p ) {
    j = "DebugMarkerObjectTagInfoEXT";
    return;
  }
  if( StructureType :: eDebugMarkerMarkerInfoEXT == p ) {
    j = "DebugMarkerMarkerInfoEXT";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoProfileKHR == p ) {
    j = "VideoProfileKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoCapabilitiesKHR == p ) {
    j = "VideoCapabilitiesKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoPictureResourceKHR == p ) {
    j = "VideoPictureResourceKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoGetMemoryPropertiesKHR == p ) {
    j = "VideoGetMemoryPropertiesKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoBindMemoryKHR == p ) {
    j = "VideoBindMemoryKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoSessionCreateInfoKHR == p ) {
    j = "VideoSessionCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoSessionParametersCreateInfoKHR == p ) {
    j = "VideoSessionParametersCreateInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoSessionParametersUpdateInfoKHR == p ) {
    j = "VideoSessionParametersUpdateInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoBeginCodingInfoKHR == p ) {
    j = "VideoBeginCodingInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEndCodingInfoKHR == p ) {
    j = "VideoEndCodingInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoCodingControlInfoKHR == p ) {
    j = "VideoCodingControlInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoReferenceSlotKHR == p ) {
    j = "VideoReferenceSlotKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoQueueFamilyProperties2KHR == p ) {
    j = "VideoQueueFamilyProperties2KHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoProfilesKHR == p ) {
    j = "VideoProfilesKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: ePhysicalDeviceVideoFormatInfoKHR == p ) {
    j = "PhysicalDeviceVideoFormatInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoFormatPropertiesKHR == p ) {
    j = "VideoFormatPropertiesKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeInfoKHR == p ) {
    j = "VideoDecodeInfoKHR";
    return;
  }
#endif
  if( StructureType :: eDedicatedAllocationImageCreateInfoNV == p ) {
    j = "DedicatedAllocationImageCreateInfoNV";
    return;
  }
  if( StructureType :: eDedicatedAllocationBufferCreateInfoNV == p ) {
    j = "DedicatedAllocationBufferCreateInfoNV";
    return;
  }
  if( StructureType :: eDedicatedAllocationMemoryAllocateInfoNV == p ) {
    j = "DedicatedAllocationMemoryAllocateInfoNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceTransformFeedbackFeaturesEXT == p ) {
    j = "PhysicalDeviceTransformFeedbackFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceTransformFeedbackPropertiesEXT == p ) {
    j = "PhysicalDeviceTransformFeedbackPropertiesEXT";
    return;
  }
  if( StructureType :: eCuModuleCreateInfoNVX == p ) {
    j = "CuModuleCreateInfoNVX";
    return;
  }
  if( StructureType :: eCuFunctionCreateInfoNVX == p ) {
    j = "CuFunctionCreateInfoNVX";
    return;
  }
  if( StructureType :: eCuLaunchInfoNVX == p ) {
    j = "CuLaunchInfoNVX";
    return;
  }
  if( StructureType :: eImageViewHandleInfoNVX == p ) {
    j = "ImageViewHandleInfoNVX";
    return;
  }
  if( StructureType :: eImageViewAddressPropertiesNVX == p ) {
    j = "ImageViewAddressPropertiesNVX";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264CapabilitiesEXT == p ) {
    j = "VideoEncodeH264CapabilitiesEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264SessionCreateInfoEXT == p ) {
    j = "VideoEncodeH264SessionCreateInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264SessionParametersAddInfoEXT == p ) {
    j = "VideoEncodeH264SessionParametersAddInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264VclFrameInfoEXT == p ) {
    j = "VideoEncodeH264VclFrameInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264DpbSlotInfoEXT == p ) {
    j = "VideoEncodeH264DpbSlotInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264NaluSliceEXT == p ) {
    j = "VideoEncodeH264NaluSliceEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264EmitPictureParametersEXT == p ) {
    j = "VideoEncodeH264EmitPictureParametersEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeH264ProfileEXT == p ) {
    j = "VideoEncodeH264ProfileEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264CapabilitiesEXT == p ) {
    j = "VideoDecodeH264CapabilitiesEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264SessionCreateInfoEXT == p ) {
    j = "VideoDecodeH264SessionCreateInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264PictureInfoEXT == p ) {
    j = "VideoDecodeH264PictureInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264MvcEXT == p ) {
    j = "VideoDecodeH264MvcEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264ProfileEXT == p ) {
    j = "VideoDecodeH264ProfileEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264SessionParametersAddInfoEXT == p ) {
    j = "VideoDecodeH264SessionParametersAddInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH264DpbSlotInfoEXT == p ) {
    j = "VideoDecodeH264DpbSlotInfoEXT";
    return;
  }
#endif
  if( StructureType :: eTextureLodGatherFormatPropertiesAMD == p ) {
    j = "TextureLodGatherFormatPropertiesAMD";
    return;
  }
#if defined( VK_USE_PLATFORM_GGP )
  if( StructureType :: eStreamDescriptorSurfaceCreateInfoGGP == p ) {
    j = "StreamDescriptorSurfaceCreateInfoGGP";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceCornerSampledImageFeaturesNV == p ) {
    j = "PhysicalDeviceCornerSampledImageFeaturesNV";
    return;
  }
  if( StructureType :: eExternalMemoryImageCreateInfoNV == p ) {
    j = "ExternalMemoryImageCreateInfoNV";
    return;
  }
  if( StructureType :: eExportMemoryAllocateInfoNV == p ) {
    j = "ExportMemoryAllocateInfoNV";
    return;
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eImportMemoryWin32HandleInfoNV == p ) {
    j = "ImportMemoryWin32HandleInfoNV";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eExportMemoryWin32HandleInfoNV == p ) {
    j = "ExportMemoryWin32HandleInfoNV";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eWin32KeyedMutexAcquireReleaseInfoNV == p ) {
    j = "Win32KeyedMutexAcquireReleaseInfoNV";
    return;
  }
#endif
  if( StructureType :: eValidationFlagsEXT == p ) {
    j = "ValidationFlagsEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_VI_NN )
  if( StructureType :: eViSurfaceCreateInfoNN == p ) {
    j = "ViSurfaceCreateInfoNN";
    return;
  }
#endif
  if( StructureType :: eImageViewAstcDecodeModeEXT == p ) {
    j = "ImageViewAstcDecodeModeEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceAstcDecodeFeaturesEXT == p ) {
    j = "PhysicalDeviceAstcDecodeFeaturesEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eImportMemoryWin32HandleInfoKHR == p ) {
    j = "ImportMemoryWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eExportMemoryWin32HandleInfoKHR == p ) {
    j = "ExportMemoryWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eMemoryWin32HandlePropertiesKHR == p ) {
    j = "MemoryWin32HandlePropertiesKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eMemoryGetWin32HandleInfoKHR == p ) {
    j = "MemoryGetWin32HandleInfoKHR";
    return;
  }
#endif
  if( StructureType :: eImportMemoryFdInfoKHR == p ) {
    j = "ImportMemoryFdInfoKHR";
    return;
  }
  if( StructureType :: eMemoryFdPropertiesKHR == p ) {
    j = "MemoryFdPropertiesKHR";
    return;
  }
  if( StructureType :: eMemoryGetFdInfoKHR == p ) {
    j = "MemoryGetFdInfoKHR";
    return;
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eWin32KeyedMutexAcquireReleaseInfoKHR == p ) {
    j = "Win32KeyedMutexAcquireReleaseInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eImportSemaphoreWin32HandleInfoKHR == p ) {
    j = "ImportSemaphoreWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eExportSemaphoreWin32HandleInfoKHR == p ) {
    j = "ExportSemaphoreWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eD3D12FenceSubmitInfoKHR == p ) {
    j = "D3D12FenceSubmitInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eSemaphoreGetWin32HandleInfoKHR == p ) {
    j = "SemaphoreGetWin32HandleInfoKHR";
    return;
  }
#endif
  if( StructureType :: eImportSemaphoreFdInfoKHR == p ) {
    j = "ImportSemaphoreFdInfoKHR";
    return;
  }
  if( StructureType :: eSemaphoreGetFdInfoKHR == p ) {
    j = "SemaphoreGetFdInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePushDescriptorPropertiesKHR == p ) {
    j = "PhysicalDevicePushDescriptorPropertiesKHR";
    return;
  }
  if( StructureType :: eConditionalRenderingBeginInfoEXT == p ) {
    j = "ConditionalRenderingBeginInfoEXT";
    return;
  }
  if( StructureType :: ePresentRegionsKHR == p ) {
    j = "PresentRegionsKHR";
    return;
  }
  if( StructureType :: ePipelineViewportWScalingStateCreateInfoNV == p ) {
    j = "PipelineViewportWScalingStateCreateInfoNV";
    return;
  }
  if( StructureType :: eSurfaceCapabilities2EXT == p ) {
    j = "SurfaceCapabilities2EXT";
    return;
  }
  if( StructureType :: eDisplayPowerInfoEXT == p ) {
    j = "DisplayPowerInfoEXT";
    return;
  }
  if( StructureType :: eDeviceEventInfoEXT == p ) {
    j = "DeviceEventInfoEXT";
    return;
  }
  if( StructureType :: eDisplayEventInfoEXT == p ) {
    j = "DisplayEventInfoEXT";
    return;
  }
  if( StructureType :: eSwapchainCounterCreateInfoEXT == p ) {
    j = "SwapchainCounterCreateInfoEXT";
    return;
  }
  if( StructureType :: ePresentTimesInfoGOOGLE == p ) {
    j = "PresentTimesInfoGOOGLE";
    return;
  }
  if( StructureType :: ePipelineViewportSwizzleStateCreateInfoNV == p ) {
    j = "PipelineViewportSwizzleStateCreateInfoNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceDiscardRectanglePropertiesEXT == p ) {
    j = "PhysicalDeviceDiscardRectanglePropertiesEXT";
    return;
  }
  if( StructureType :: ePipelineDiscardRectangleStateCreateInfoEXT == p ) {
    j = "PipelineDiscardRectangleStateCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceDepthClipEnableFeaturesEXT == p ) {
    j = "PhysicalDeviceDepthClipEnableFeaturesEXT";
    return;
  }
  if( StructureType :: eHdrMetadataEXT == p ) {
    j = "HdrMetadataEXT";
    return;
  }
  if( StructureType :: eSharedPresentSurfaceCapabilitiesKHR == p ) {
    j = "SharedPresentSurfaceCapabilitiesKHR";
    return;
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eImportFenceWin32HandleInfoKHR == p ) {
    j = "ImportFenceWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eExportFenceWin32HandleInfoKHR == p ) {
    j = "ExportFenceWin32HandleInfoKHR";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eFenceGetWin32HandleInfoKHR == p ) {
    j = "FenceGetWin32HandleInfoKHR";
    return;
  }
#endif
  if( StructureType :: eImportFenceFdInfoKHR == p ) {
    j = "ImportFenceFdInfoKHR";
    return;
  }
  if( StructureType :: eFenceGetFdInfoKHR == p ) {
    j = "FenceGetFdInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePerformanceQueryFeaturesKHR == p ) {
    j = "PhysicalDevicePerformanceQueryFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePerformanceQueryPropertiesKHR == p ) {
    j = "PhysicalDevicePerformanceQueryPropertiesKHR";
    return;
  }
  if( StructureType :: eQueryPoolPerformanceCreateInfoKHR == p ) {
    j = "QueryPoolPerformanceCreateInfoKHR";
    return;
  }
  if( StructureType :: ePerformanceQuerySubmitInfoKHR == p ) {
    j = "PerformanceQuerySubmitInfoKHR";
    return;
  }
  if( StructureType :: eAcquireProfilingLockInfoKHR == p ) {
    j = "AcquireProfilingLockInfoKHR";
    return;
  }
  if( StructureType :: ePerformanceCounterKHR == p ) {
    j = "PerformanceCounterKHR";
    return;
  }
  if( StructureType :: ePerformanceCounterDescriptionKHR == p ) {
    j = "PerformanceCounterDescriptionKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceSurfaceInfo2KHR == p ) {
    j = "PhysicalDeviceSurfaceInfo2KHR";
    return;
  }
  if( StructureType :: eSurfaceCapabilities2KHR == p ) {
    j = "SurfaceCapabilities2KHR";
    return;
  }
  if( StructureType :: eSurfaceFormat2KHR == p ) {
    j = "SurfaceFormat2KHR";
    return;
  }
  if( StructureType :: eDisplayProperties2KHR == p ) {
    j = "DisplayProperties2KHR";
    return;
  }
  if( StructureType :: eDisplayPlaneProperties2KHR == p ) {
    j = "DisplayPlaneProperties2KHR";
    return;
  }
  if( StructureType :: eDisplayModeProperties2KHR == p ) {
    j = "DisplayModeProperties2KHR";
    return;
  }
  if( StructureType :: eDisplayPlaneInfo2KHR == p ) {
    j = "DisplayPlaneInfo2KHR";
    return;
  }
  if( StructureType :: eDisplayPlaneCapabilities2KHR == p ) {
    j = "DisplayPlaneCapabilities2KHR";
    return;
  }
#if defined( VK_USE_PLATFORM_IOS_MVK )
  if( StructureType :: eIosSurfaceCreateInfoMVK == p ) {
    j = "IosSurfaceCreateInfoMVK";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_MACOS_MVK )
  if( StructureType :: eMacosSurfaceCreateInfoMVK == p ) {
    j = "MacosSurfaceCreateInfoMVK";
    return;
  }
#endif
  if( StructureType :: eDebugUtilsObjectNameInfoEXT == p ) {
    j = "DebugUtilsObjectNameInfoEXT";
    return;
  }
  if( StructureType :: eDebugUtilsObjectTagInfoEXT == p ) {
    j = "DebugUtilsObjectTagInfoEXT";
    return;
  }
  if( StructureType :: eDebugUtilsLabelEXT == p ) {
    j = "DebugUtilsLabelEXT";
    return;
  }
  if( StructureType :: eDebugUtilsMessengerCallbackDataEXT == p ) {
    j = "DebugUtilsMessengerCallbackDataEXT";
    return;
  }
  if( StructureType :: eDebugUtilsMessengerCreateInfoEXT == p ) {
    j = "DebugUtilsMessengerCreateInfoEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eAndroidHardwareBufferUsageANDROID == p ) {
    j = "AndroidHardwareBufferUsageANDROID";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eAndroidHardwareBufferPropertiesANDROID == p ) {
    j = "AndroidHardwareBufferPropertiesANDROID";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eAndroidHardwareBufferFormatPropertiesANDROID == p ) {
    j = "AndroidHardwareBufferFormatPropertiesANDROID";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eImportAndroidHardwareBufferInfoANDROID == p ) {
    j = "ImportAndroidHardwareBufferInfoANDROID";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eMemoryGetAndroidHardwareBufferInfoANDROID == p ) {
    j = "MemoryGetAndroidHardwareBufferInfoANDROID";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  if( StructureType :: eExternalFormatANDROID == p ) {
    j = "ExternalFormatANDROID";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceInlineUniformBlockFeaturesEXT == p ) {
    j = "PhysicalDeviceInlineUniformBlockFeaturesEXT";
    return;
  }
  if( StructureType :: eWriteDescriptorSetInlineUniformBlockEXT == p ) {
    j = "WriteDescriptorSetInlineUniformBlockEXT";
    return;
  }
  if( StructureType :: eSampleLocationsInfoEXT == p ) {
    j = "SampleLocationsInfoEXT";
    return;
  }
  if( StructureType :: eRenderPassSampleLocationsBeginInfoEXT == p ) {
    j = "RenderPassSampleLocationsBeginInfoEXT";
    return;
  }
  if( StructureType :: ePipelineSampleLocationsStateCreateInfoEXT == p ) {
    j = "PipelineSampleLocationsStateCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceSampleLocationsPropertiesEXT == p ) {
    j = "PhysicalDeviceSampleLocationsPropertiesEXT";
    return;
  }
  if( StructureType :: eMultisamplePropertiesEXT == p ) {
    j = "MultisamplePropertiesEXT";
    return;
  }
  if( StructureType :: ePipelineCoverageToColorStateCreateInfoNV == p ) {
    j = "PipelineCoverageToColorStateCreateInfoNV";
    return;
  }
  if( StructureType :: eWriteDescriptorSetAccelerationStructureKHR == p ) {
    j = "WriteDescriptorSetAccelerationStructureKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureBuildGeometryInfoKHR == p ) {
    j = "AccelerationStructureBuildGeometryInfoKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureDeviceAddressInfoKHR == p ) {
    j = "AccelerationStructureDeviceAddressInfoKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureGeometryAabbsDataKHR == p ) {
    j = "AccelerationStructureGeometryAabbsDataKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureGeometryKHR == p ) {
    j = "AccelerationStructureGeometryKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureVersionInfoKHR == p ) {
    j = "AccelerationStructureVersionInfoKHR";
    return;
  }
  if( StructureType :: eCopyAccelerationStructureInfoKHR == p ) {
    j = "CopyAccelerationStructureInfoKHR";
    return;
  }
  if( StructureType :: eCopyAccelerationStructureToMemoryInfoKHR == p ) {
    j = "CopyAccelerationStructureToMemoryInfoKHR";
    return;
  }
  if( StructureType :: eCopyMemoryToAccelerationStructureInfoKHR == p ) {
    j = "CopyMemoryToAccelerationStructureInfoKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureCreateInfoKHR == p ) {
    j = "AccelerationStructureCreateInfoKHR";
    return;
  }
  if( StructureType :: eAccelerationStructureBuildSizesInfoKHR == p ) {
    j = "AccelerationStructureBuildSizesInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceRayTracingPipelineFeaturesKHR == p ) {
    j = "PhysicalDeviceRayTracingPipelineFeaturesKHR";
    return;
  }
  if( StructureType :: eRayTracingPipelineCreateInfoKHR == p ) {
    j = "RayTracingPipelineCreateInfoKHR";
    return;
  }
  if( StructureType :: eRayTracingShaderGroupCreateInfoKHR == p ) {
    j = "RayTracingShaderGroupCreateInfoKHR";
    return;
  }
  if( StructureType :: eRayTracingPipelineInterfaceCreateInfoKHR == p ) {
    j = "RayTracingPipelineInterfaceCreateInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceRayQueryFeaturesKHR == p ) {
    j = "PhysicalDeviceRayQueryFeaturesKHR";
    return;
  }
  if( StructureType :: ePipelineCoverageModulationStateCreateInfoNV == p ) {
    j = "PipelineCoverageModulationStateCreateInfoNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderSmBuiltinsFeaturesNV == p ) {
    j = "PhysicalDeviceShaderSmBuiltinsFeaturesNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderSmBuiltinsPropertiesNV == p ) {
    j = "PhysicalDeviceShaderSmBuiltinsPropertiesNV";
    return;
  }
  if( StructureType :: eDrmFormatModifierPropertiesListEXT == p ) {
    j = "DrmFormatModifierPropertiesListEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceImageDrmFormatModifierInfoEXT == p ) {
    j = "PhysicalDeviceImageDrmFormatModifierInfoEXT";
    return;
  }
  if( StructureType :: eImageDrmFormatModifierListCreateInfoEXT == p ) {
    j = "ImageDrmFormatModifierListCreateInfoEXT";
    return;
  }
  if( StructureType :: eImageDrmFormatModifierExplicitCreateInfoEXT == p ) {
    j = "ImageDrmFormatModifierExplicitCreateInfoEXT";
    return;
  }
  if( StructureType :: eImageDrmFormatModifierPropertiesEXT == p ) {
    j = "ImageDrmFormatModifierPropertiesEXT";
    return;
  }
  if( StructureType :: eValidationCacheCreateInfoEXT == p ) {
    j = "ValidationCacheCreateInfoEXT";
    return;
  }
  if( StructureType :: eShaderModuleValidationCacheCreateInfoEXT == p ) {
    j = "ShaderModuleValidationCacheCreateInfoEXT";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: ePhysicalDevicePortabilitySubsetFeaturesKHR == p ) {
    j = "PhysicalDevicePortabilitySubsetFeaturesKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: ePhysicalDevicePortabilitySubsetPropertiesKHR == p ) {
    j = "PhysicalDevicePortabilitySubsetPropertiesKHR";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceShadingRateImageFeaturesNV == p ) {
    j = "PhysicalDeviceShadingRateImageFeaturesNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceShadingRateImagePropertiesNV == p ) {
    j = "PhysicalDeviceShadingRateImagePropertiesNV";
    return;
  }
  if( StructureType :: eRayTracingPipelineCreateInfoNV == p ) {
    j = "RayTracingPipelineCreateInfoNV";
    return;
  }
  if( StructureType :: eAccelerationStructureCreateInfoNV == p ) {
    j = "AccelerationStructureCreateInfoNV";
    return;
  }
  if( StructureType :: eGeometryNV == p ) {
    j = "GeometryNV";
    return;
  }
  if( StructureType :: eGeometryTrianglesNV == p ) {
    j = "GeometryTrianglesNV";
    return;
  }
  if( StructureType :: eGeometryAabbNV == p ) {
    j = "GeometryAabbNV";
    return;
  }
  if( StructureType :: eBindAccelerationStructureMemoryInfoNV == p ) {
    j = "BindAccelerationStructureMemoryInfoNV";
    return;
  }
  if( StructureType :: eWriteDescriptorSetAccelerationStructureNV == p ) {
    j = "WriteDescriptorSetAccelerationStructureNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceRayTracingPropertiesNV == p ) {
    j = "PhysicalDeviceRayTracingPropertiesNV";
    return;
  }
  if( StructureType :: eRayTracingShaderGroupCreateInfoNV == p ) {
    j = "RayTracingShaderGroupCreateInfoNV";
    return;
  }
  if( StructureType :: eAccelerationStructureInfoNV == p ) {
    j = "AccelerationStructureInfoNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceImageViewImageFormatInfoEXT == p ) {
    j = "PhysicalDeviceImageViewImageFormatInfoEXT";
    return;
  }
  if( StructureType :: eDeviceQueueGlobalPriorityCreateInfoEXT == p ) {
    j = "DeviceQueueGlobalPriorityCreateInfoEXT";
    return;
  }
  if( StructureType :: eImportMemoryHostPointerInfoEXT == p ) {
    j = "ImportMemoryHostPointerInfoEXT";
    return;
  }
  if( StructureType :: eMemoryHostPointerPropertiesEXT == p ) {
    j = "MemoryHostPointerPropertiesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderClockFeaturesKHR == p ) {
    j = "PhysicalDeviceShaderClockFeaturesKHR";
    return;
  }
  if( StructureType :: ePipelineCompilerControlCreateInfoAMD == p ) {
    j = "PipelineCompilerControlCreateInfoAMD";
    return;
  }
  if( StructureType :: eCalibratedTimestampInfoEXT == p ) {
    j = "CalibratedTimestampInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderCorePropertiesAMD == p ) {
    j = "PhysicalDeviceShaderCorePropertiesAMD";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265CapabilitiesEXT == p ) {
    j = "VideoDecodeH265CapabilitiesEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265SessionCreateInfoEXT == p ) {
    j = "VideoDecodeH265SessionCreateInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265SessionParametersAddInfoEXT == p ) {
    j = "VideoDecodeH265SessionParametersAddInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265ProfileEXT == p ) {
    j = "VideoDecodeH265ProfileEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265PictureInfoEXT == p ) {
    j = "VideoDecodeH265PictureInfoEXT";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoDecodeH265DpbSlotInfoEXT == p ) {
    j = "VideoDecodeH265DpbSlotInfoEXT";
    return;
  }
#endif
  if( StructureType :: eDeviceMemoryOverallocationCreateInfoAMD == p ) {
    j = "DeviceMemoryOverallocationCreateInfoAMD";
    return;
  }
#if defined( VK_USE_PLATFORM_GGP )
  if( StructureType :: ePresentFrameTokenGGP == p ) {
    j = "PresentFrameTokenGGP";
    return;
  }
#endif
  if( StructureType :: ePipelineCreationFeedbackCreateInfoEXT == p ) {
    j = "PipelineCreationFeedbackCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceMeshShaderFeaturesNV == p ) {
    j = "PhysicalDeviceMeshShaderFeaturesNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceMeshShaderPropertiesNV == p ) {
    j = "PhysicalDeviceMeshShaderPropertiesNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceExclusiveScissorFeaturesNV == p ) {
    j = "PhysicalDeviceExclusiveScissorFeaturesNV";
    return;
  }
  if( StructureType :: eCheckpointDataNV == p ) {
    j = "CheckpointDataNV";
    return;
  }
  if( StructureType :: eQueueFamilyCheckpointPropertiesNV == p ) {
    j = "QueueFamilyCheckpointPropertiesNV";
    return;
  }
  if( StructureType :: eQueryPoolPerformanceQueryCreateInfoINTEL == p ) {
    j = "QueryPoolPerformanceQueryCreateInfoINTEL";
    return;
  }
  if( StructureType :: eInitializePerformanceApiInfoINTEL == p ) {
    j = "InitializePerformanceApiInfoINTEL";
    return;
  }
  if( StructureType :: ePerformanceMarkerInfoINTEL == p ) {
    j = "PerformanceMarkerInfoINTEL";
    return;
  }
  if( StructureType :: ePerformanceStreamMarkerInfoINTEL == p ) {
    j = "PerformanceStreamMarkerInfoINTEL";
    return;
  }
  if( StructureType :: ePerformanceOverrideInfoINTEL == p ) {
    j = "PerformanceOverrideInfoINTEL";
    return;
  }
  if( StructureType :: ePerformanceConfigurationAcquireInfoINTEL == p ) {
    j = "PerformanceConfigurationAcquireInfoINTEL";
    return;
  }
  if( StructureType :: ePhysicalDevicePciBusInfoPropertiesEXT == p ) {
    j = "PhysicalDevicePciBusInfoPropertiesEXT";
    return;
  }
  if( StructureType :: eDisplayNativeHdrSurfaceCapabilitiesAMD == p ) {
    j = "DisplayNativeHdrSurfaceCapabilitiesAMD";
    return;
  }
  if( StructureType :: eSwapchainDisplayNativeHdrCreateInfoAMD == p ) {
    j = "SwapchainDisplayNativeHdrCreateInfoAMD";
    return;
  }
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eImagepipeSurfaceCreateInfoFUCHSIA == p ) {
    j = "ImagepipeSurfaceCreateInfoFUCHSIA";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_METAL_EXT )
  if( StructureType :: eMetalSurfaceCreateInfoEXT == p ) {
    j = "MetalSurfaceCreateInfoEXT";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceFragmentDensityMapFeaturesEXT == p ) {
    j = "PhysicalDeviceFragmentDensityMapFeaturesEXT";
    return;
  }
  if( StructureType :: eRenderPassFragmentDensityMapCreateInfoEXT == p ) {
    j = "RenderPassFragmentDensityMapCreateInfoEXT";
    return;
  }
  if( StructureType :: eFragmentShadingRateAttachmentInfoKHR == p ) {
    j = "FragmentShadingRateAttachmentInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceFragmentShadingRateKHR == p ) {
    j = "PhysicalDeviceFragmentShadingRateKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderCoreProperties2AMD == p ) {
    j = "PhysicalDeviceShaderCoreProperties2AMD";
    return;
  }
  if( StructureType :: ePhysicalDeviceCoherentMemoryFeaturesAMD == p ) {
    j = "PhysicalDeviceCoherentMemoryFeaturesAMD";
    return;
  }
  if( StructureType :: ePhysicalDeviceMemoryBudgetPropertiesEXT == p ) {
    j = "PhysicalDeviceMemoryBudgetPropertiesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceMemoryPriorityFeaturesEXT == p ) {
    j = "PhysicalDeviceMemoryPriorityFeaturesEXT";
    return;
  }
  if( StructureType :: eMemoryPriorityAllocateInfoEXT == p ) {
    j = "MemoryPriorityAllocateInfoEXT";
    return;
  }
  if( StructureType :: eSurfaceProtectedCapabilitiesKHR == p ) {
    j = "SurfaceProtectedCapabilitiesKHR";
    return;
  }
  if( StructureType :: eBufferDeviceAddressCreateInfoEXT == p ) {
    j = "BufferDeviceAddressCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceToolPropertiesEXT == p ) {
    j = "PhysicalDeviceToolPropertiesEXT";
    return;
  }
  if( StructureType :: eValidationFeaturesEXT == p ) {
    j = "ValidationFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDevicePresentWaitFeaturesKHR == p ) {
    j = "PhysicalDevicePresentWaitFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceCooperativeMatrixFeaturesNV == p ) {
    j = "PhysicalDeviceCooperativeMatrixFeaturesNV";
    return;
  }
  if( StructureType :: eCooperativeMatrixPropertiesNV == p ) {
    j = "CooperativeMatrixPropertiesNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceCooperativeMatrixPropertiesNV == p ) {
    j = "PhysicalDeviceCooperativeMatrixPropertiesNV";
    return;
  }
  if( StructureType :: ePipelineCoverageReductionStateCreateInfoNV == p ) {
    j = "PipelineCoverageReductionStateCreateInfoNV";
    return;
  }
  if( StructureType :: eFramebufferMixedSamplesCombinationNV == p ) {
    j = "FramebufferMixedSamplesCombinationNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceYcbcrImageArraysFeaturesEXT == p ) {
    j = "PhysicalDeviceYcbcrImageArraysFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceProvokingVertexFeaturesEXT == p ) {
    j = "PhysicalDeviceProvokingVertexFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceProvokingVertexPropertiesEXT == p ) {
    j = "PhysicalDeviceProvokingVertexPropertiesEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eSurfaceFullScreenExclusiveInfoEXT == p ) {
    j = "SurfaceFullScreenExclusiveInfoEXT";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eSurfaceCapabilitiesFullScreenExclusiveEXT == p ) {
    j = "SurfaceCapabilitiesFullScreenExclusiveEXT";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  if( StructureType :: eSurfaceFullScreenExclusiveWin32InfoEXT == p ) {
    j = "SurfaceFullScreenExclusiveWin32InfoEXT";
    return;
  }
#endif
  if( StructureType :: eHeadlessSurfaceCreateInfoEXT == p ) {
    j = "HeadlessSurfaceCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceLineRasterizationFeaturesEXT == p ) {
    j = "PhysicalDeviceLineRasterizationFeaturesEXT";
    return;
  }
  if( StructureType :: ePipelineRasterizationLineStateCreateInfoEXT == p ) {
    j = "PipelineRasterizationLineStateCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceLineRasterizationPropertiesEXT == p ) {
    j = "PhysicalDeviceLineRasterizationPropertiesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderAtomicFloatFeaturesEXT == p ) {
    j = "PhysicalDeviceShaderAtomicFloatFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceIndexTypeUint8FeaturesEXT == p ) {
    j = "PhysicalDeviceIndexTypeUint8FeaturesEXT";
    return;
  }
  if( StructureType :: ePipelineInfoKHR == p ) {
    j = "PipelineInfoKHR";
    return;
  }
  if( StructureType :: ePipelineExecutablePropertiesKHR == p ) {
    j = "PipelineExecutablePropertiesKHR";
    return;
  }
  if( StructureType :: ePipelineExecutableInfoKHR == p ) {
    j = "PipelineExecutableInfoKHR";
    return;
  }
  if( StructureType :: ePipelineExecutableStatisticKHR == p ) {
    j = "PipelineExecutableStatisticKHR";
    return;
  }
  if( StructureType :: ePipelineExecutableInternalRepresentationKHR == p ) {
    j = "PipelineExecutableInternalRepresentationKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderAtomicFloat2FeaturesEXT == p ) {
    j = "PhysicalDeviceShaderAtomicFloat2FeaturesEXT";
    return;
  }
  if( StructureType :: eGraphicsShaderGroupCreateInfoNV == p ) {
    j = "GraphicsShaderGroupCreateInfoNV";
    return;
  }
  if( StructureType :: eGraphicsPipelineShaderGroupsCreateInfoNV == p ) {
    j = "GraphicsPipelineShaderGroupsCreateInfoNV";
    return;
  }
  if( StructureType :: eIndirectCommandsLayoutTokenNV == p ) {
    j = "IndirectCommandsLayoutTokenNV";
    return;
  }
  if( StructureType :: eIndirectCommandsLayoutCreateInfoNV == p ) {
    j = "IndirectCommandsLayoutCreateInfoNV";
    return;
  }
  if( StructureType :: eGeneratedCommandsInfoNV == p ) {
    j = "GeneratedCommandsInfoNV";
    return;
  }
  if( StructureType :: eGeneratedCommandsMemoryRequirementsInfoNV == p ) {
    j = "GeneratedCommandsMemoryRequirementsInfoNV";
    return;
  }
  if( StructureType :: eRenderPassTransformBeginInfoQCOM == p ) {
    j = "RenderPassTransformBeginInfoQCOM";
    return;
  }
  if( StructureType :: ePhysicalDeviceDeviceMemoryReportFeaturesEXT == p ) {
    j = "PhysicalDeviceDeviceMemoryReportFeaturesEXT";
    return;
  }
  if( StructureType :: eDeviceDeviceMemoryReportCreateInfoEXT == p ) {
    j = "DeviceDeviceMemoryReportCreateInfoEXT";
    return;
  }
  if( StructureType :: eDeviceMemoryReportCallbackDataEXT == p ) {
    j = "DeviceMemoryReportCallbackDataEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceRobustness2FeaturesEXT == p ) {
    j = "PhysicalDeviceRobustness2FeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceRobustness2PropertiesEXT == p ) {
    j = "PhysicalDeviceRobustness2PropertiesEXT";
    return;
  }
  if( StructureType :: eSamplerCustomBorderColorCreateInfoEXT == p ) {
    j = "SamplerCustomBorderColorCreateInfoEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceCustomBorderColorFeaturesEXT == p ) {
    j = "PhysicalDeviceCustomBorderColorFeaturesEXT";
    return;
  }
  if( StructureType :: ePipelineLibraryCreateInfoKHR == p ) {
    j = "PipelineLibraryCreateInfoKHR";
    return;
  }
  if( StructureType :: ePresentIdKHR == p ) {
    j = "PresentIdKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePresentIdFeaturesKHR == p ) {
    j = "PhysicalDevicePresentIdFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePrivateDataFeaturesEXT == p ) {
    j = "PhysicalDevicePrivateDataFeaturesEXT";
    return;
  }
  if( StructureType :: eDevicePrivateDataCreateInfoEXT == p ) {
    j = "DevicePrivateDataCreateInfoEXT";
    return;
  }
  if( StructureType :: ePrivateDataSlotCreateInfoEXT == p ) {
    j = "PrivateDataSlotCreateInfoEXT";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeInfoKHR == p ) {
    j = "VideoEncodeInfoKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( StructureType :: eVideoEncodeRateControlInfoKHR == p ) {
    j = "VideoEncodeRateControlInfoKHR";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceDiagnosticsConfigFeaturesNV == p ) {
    j = "PhysicalDeviceDiagnosticsConfigFeaturesNV";
    return;
  }
  if( StructureType :: eDeviceDiagnosticsConfigCreateInfoNV == p ) {
    j = "DeviceDiagnosticsConfigCreateInfoNV";
    return;
  }
  if( StructureType :: eMemoryBarrier2KHR == p ) {
    j = "MemoryBarrier2KHR";
    return;
  }
  if( StructureType :: eBufferMemoryBarrier2KHR == p ) {
    j = "BufferMemoryBarrier2KHR";
    return;
  }
  if( StructureType :: eImageMemoryBarrier2KHR == p ) {
    j = "ImageMemoryBarrier2KHR";
    return;
  }
  if( StructureType :: eDependencyInfoKHR == p ) {
    j = "DependencyInfoKHR";
    return;
  }
  if( StructureType :: eSubmitInfo2KHR == p ) {
    j = "SubmitInfo2KHR";
    return;
  }
  if( StructureType :: eSemaphoreSubmitInfoKHR == p ) {
    j = "SemaphoreSubmitInfoKHR";
    return;
  }
  if( StructureType :: eCommandBufferSubmitInfoKHR == p ) {
    j = "CommandBufferSubmitInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceSynchronization2FeaturesKHR == p ) {
    j = "PhysicalDeviceSynchronization2FeaturesKHR";
    return;
  }
  if( StructureType :: eQueueFamilyCheckpointProperties2NV == p ) {
    j = "QueueFamilyCheckpointProperties2NV";
    return;
  }
  if( StructureType :: eCheckpointData2NV == p ) {
    j = "CheckpointData2NV";
    return;
  }
  if( StructureType :: eAccelerationStructureMotionInfoNV == p ) {
    j = "AccelerationStructureMotionInfoNV";
    return;
  }
  if( StructureType :: eCopyCommandTransformInfoQCOM == p ) {
    j = "CopyCommandTransformInfoQCOM";
    return;
  }
  if( StructureType :: ePhysicalDeviceImageRobustnessFeaturesEXT == p ) {
    j = "PhysicalDeviceImageRobustnessFeaturesEXT";
    return;
  }
  if( StructureType :: eCopyBufferInfo2KHR == p ) {
    j = "CopyBufferInfo2KHR";
    return;
  }
  if( StructureType :: eCopyImageInfo2KHR == p ) {
    j = "CopyImageInfo2KHR";
    return;
  }
  if( StructureType :: eCopyBufferToImageInfo2KHR == p ) {
    j = "CopyBufferToImageInfo2KHR";
    return;
  }
  if( StructureType :: eCopyImageToBufferInfo2KHR == p ) {
    j = "CopyImageToBufferInfo2KHR";
    return;
  }
  if( StructureType :: eBlitImageInfo2KHR == p ) {
    j = "BlitImageInfo2KHR";
    return;
  }
  if( StructureType :: eResolveImageInfo2KHR == p ) {
    j = "ResolveImageInfo2KHR";
    return;
  }
  if( StructureType :: eBufferCopy2KHR == p ) {
    j = "BufferCopy2KHR";
    return;
  }
  if( StructureType :: eImageCopy2KHR == p ) {
    j = "ImageCopy2KHR";
    return;
  }
  if( StructureType :: eImageBlit2KHR == p ) {
    j = "ImageBlit2KHR";
    return;
  }
  if( StructureType :: eBufferImageCopy2KHR == p ) {
    j = "BufferImageCopy2KHR";
    return;
  }
  if( StructureType :: eImageResolve2KHR == p ) {
    j = "ImageResolve2KHR";
    return;
  }
  if( StructureType :: ePhysicalDevice4444FormatsFeaturesEXT == p ) {
    j = "PhysicalDevice4444FormatsFeaturesEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  if( StructureType :: eDirectfbSurfaceCreateInfoEXT == p ) {
    j = "DirectfbSurfaceCreateInfoEXT";
    return;
  }
#endif
  if( StructureType :: eMutableDescriptorTypeCreateInfoVALVE == p ) {
    j = "MutableDescriptorTypeCreateInfoVALVE";
    return;
  }
  if( StructureType :: eVertexInputBindingDescription2EXT == p ) {
    j = "VertexInputBindingDescription2EXT";
    return;
  }
  if( StructureType :: eVertexInputAttributeDescription2EXT == p ) {
    j = "VertexInputAttributeDescription2EXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceDrmPropertiesEXT == p ) {
    j = "PhysicalDeviceDrmPropertiesEXT";
    return;
  }
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eImportMemoryZirconHandleInfoFUCHSIA == p ) {
    j = "ImportMemoryZirconHandleInfoFUCHSIA";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eMemoryZirconHandlePropertiesFUCHSIA == p ) {
    j = "MemoryZirconHandlePropertiesFUCHSIA";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eMemoryGetZirconHandleInfoFUCHSIA == p ) {
    j = "MemoryGetZirconHandleInfoFUCHSIA";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eImportSemaphoreZirconHandleInfoFUCHSIA == p ) {
    j = "ImportSemaphoreZirconHandleInfoFUCHSIA";
    return;
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  if( StructureType :: eSemaphoreGetZirconHandleInfoFUCHSIA == p ) {
    j = "SemaphoreGetZirconHandleInfoFUCHSIA";
    return;
  }
#endif
  if( StructureType :: eSubpassShadingPipelineCreateInfoHUAWEI == p ) {
    j = "SubpassShadingPipelineCreateInfoHUAWEI";
    return;
  }
  if( StructureType :: ePhysicalDeviceSubpassShadingFeaturesHUAWEI == p ) {
    j = "PhysicalDeviceSubpassShadingFeaturesHUAWEI";
    return;
  }
  if( StructureType :: ePhysicalDeviceSubpassShadingPropertiesHUAWEI == p ) {
    j = "PhysicalDeviceSubpassShadingPropertiesHUAWEI";
    return;
  }
  if( StructureType :: ePhysicalDeviceInvocationMaskFeaturesHUAWEI == p ) {
    j = "PhysicalDeviceInvocationMaskFeaturesHUAWEI";
    return;
  }
  if( StructureType :: eMemoryGetRemoteAddressInfoNV == p ) {
    j = "MemoryGetRemoteAddressInfoNV";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalMemoryRdmaFeaturesNV == p ) {
    j = "PhysicalDeviceExternalMemoryRdmaFeaturesNV";
    return;
  }
#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  if( StructureType :: eScreenSurfaceCreateInfoQNX == p ) {
    j = "ScreenSurfaceCreateInfoQNX";
    return;
  }
#endif
  if( StructureType :: ePhysicalDeviceColorWriteEnableFeaturesEXT == p ) {
    j = "PhysicalDeviceColorWriteEnableFeaturesEXT";
    return;
  }
  if( StructureType :: ePipelineColorWriteCreateInfoEXT == p ) {
    j = "PipelineColorWriteCreateInfoEXT";
    return;
  }
  if( StructureType :: eQueueFamilyGlobalPriorityPropertiesEXT == p ) {
    j = "QueueFamilyGlobalPriorityPropertiesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiDrawFeaturesEXT == p ) {
    j = "PhysicalDeviceMultiDrawFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiDrawPropertiesEXT == p ) {
    j = "PhysicalDeviceMultiDrawPropertiesEXT";
    return;
  }
  if( StructureType :: eAttachmentDescription2KHR == p ) {
    j = "AttachmentDescription2KHR";
    return;
  }
  if( StructureType :: eAttachmentDescriptionStencilLayoutKHR == p ) {
    j = "AttachmentDescriptionStencilLayoutKHR";
    return;
  }
  if( StructureType :: eAttachmentReference2KHR == p ) {
    j = "AttachmentReference2KHR";
    return;
  }
  if( StructureType :: eAttachmentReferenceStencilLayoutKHR == p ) {
    j = "AttachmentReferenceStencilLayoutKHR";
    return;
  }
  if( StructureType :: eBindBufferMemoryDeviceGroupInfoKHR == p ) {
    j = "BindBufferMemoryDeviceGroupInfoKHR";
    return;
  }
  if( StructureType :: eBindBufferMemoryInfoKHR == p ) {
    j = "BindBufferMemoryInfoKHR";
    return;
  }
  if( StructureType :: eBindImageMemoryDeviceGroupInfoKHR == p ) {
    j = "BindImageMemoryDeviceGroupInfoKHR";
    return;
  }
  if( StructureType :: eBindImageMemoryInfoKHR == p ) {
    j = "BindImageMemoryInfoKHR";
    return;
  }
  if( StructureType :: eBindImagePlaneMemoryInfoKHR == p ) {
    j = "BindImagePlaneMemoryInfoKHR";
    return;
  }
  if( StructureType :: eBufferDeviceAddressInfoEXT == p ) {
    j = "BufferDeviceAddressInfoEXT";
    return;
  }
  if( StructureType :: eBufferDeviceAddressInfoKHR == p ) {
    j = "BufferDeviceAddressInfoKHR";
    return;
  }
  if( StructureType :: eBufferMemoryRequirementsInfo2KHR == p ) {
    j = "BufferMemoryRequirementsInfo2KHR";
    return;
  }
  if( StructureType :: eBufferOpaqueCaptureAddressCreateInfoKHR == p ) {
    j = "BufferOpaqueCaptureAddressCreateInfoKHR";
    return;
  }
  if( StructureType :: eDebugReportCreateInfoEXT == p ) {
    j = "DebugReportCreateInfoEXT";
    return;
  }
  if( StructureType :: eDescriptorSetLayoutSupportKHR == p ) {
    j = "DescriptorSetLayoutSupportKHR";
    return;
  }
  if( StructureType :: eDescriptorUpdateTemplateCreateInfoKHR == p ) {
    j = "DescriptorUpdateTemplateCreateInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupBindSparseInfoKHR == p ) {
    j = "DeviceGroupBindSparseInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupCommandBufferBeginInfoKHR == p ) {
    j = "DeviceGroupCommandBufferBeginInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupDeviceCreateInfoKHR == p ) {
    j = "DeviceGroupDeviceCreateInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupRenderPassBeginInfoKHR == p ) {
    j = "DeviceGroupRenderPassBeginInfoKHR";
    return;
  }
  if( StructureType :: eDeviceGroupSubmitInfoKHR == p ) {
    j = "DeviceGroupSubmitInfoKHR";
    return;
  }
  if( StructureType :: eDeviceMemoryOpaqueCaptureAddressInfoKHR == p ) {
    j = "DeviceMemoryOpaqueCaptureAddressInfoKHR";
    return;
  }
  if( StructureType :: eExportFenceCreateInfoKHR == p ) {
    j = "ExportFenceCreateInfoKHR";
    return;
  }
  if( StructureType :: eExportMemoryAllocateInfoKHR == p ) {
    j = "ExportMemoryAllocateInfoKHR";
    return;
  }
  if( StructureType :: eExportSemaphoreCreateInfoKHR == p ) {
    j = "ExportSemaphoreCreateInfoKHR";
    return;
  }
  if( StructureType :: eExternalBufferPropertiesKHR == p ) {
    j = "ExternalBufferPropertiesKHR";
    return;
  }
  if( StructureType :: eExternalFencePropertiesKHR == p ) {
    j = "ExternalFencePropertiesKHR";
    return;
  }
  if( StructureType :: eExternalImageFormatPropertiesKHR == p ) {
    j = "ExternalImageFormatPropertiesKHR";
    return;
  }
  if( StructureType :: eExternalMemoryBufferCreateInfoKHR == p ) {
    j = "ExternalMemoryBufferCreateInfoKHR";
    return;
  }
  if( StructureType :: eExternalMemoryImageCreateInfoKHR == p ) {
    j = "ExternalMemoryImageCreateInfoKHR";
    return;
  }
  if( StructureType :: eExternalSemaphorePropertiesKHR == p ) {
    j = "ExternalSemaphorePropertiesKHR";
    return;
  }
  if( StructureType :: eFormatProperties2KHR == p ) {
    j = "FormatProperties2KHR";
    return;
  }
  if( StructureType :: eFramebufferAttachmentsCreateInfoKHR == p ) {
    j = "FramebufferAttachmentsCreateInfoKHR";
    return;
  }
  if( StructureType :: eFramebufferAttachmentImageInfoKHR == p ) {
    j = "FramebufferAttachmentImageInfoKHR";
    return;
  }
  if( StructureType :: eImageFormatListCreateInfoKHR == p ) {
    j = "ImageFormatListCreateInfoKHR";
    return;
  }
  if( StructureType :: eImageFormatProperties2KHR == p ) {
    j = "ImageFormatProperties2KHR";
    return;
  }
  if( StructureType :: eImageMemoryRequirementsInfo2KHR == p ) {
    j = "ImageMemoryRequirementsInfo2KHR";
    return;
  }
  if( StructureType :: eImagePlaneMemoryRequirementsInfoKHR == p ) {
    j = "ImagePlaneMemoryRequirementsInfoKHR";
    return;
  }
  if( StructureType :: eImageSparseMemoryRequirementsInfo2KHR == p ) {
    j = "ImageSparseMemoryRequirementsInfo2KHR";
    return;
  }
  if( StructureType :: eImageStencilUsageCreateInfoEXT == p ) {
    j = "ImageStencilUsageCreateInfoEXT";
    return;
  }
  if( StructureType :: eImageViewUsageCreateInfoKHR == p ) {
    j = "ImageViewUsageCreateInfoKHR";
    return;
  }
  if( StructureType :: eMemoryAllocateFlagsInfoKHR == p ) {
    j = "MemoryAllocateFlagsInfoKHR";
    return;
  }
  if( StructureType :: eMemoryDedicatedAllocateInfoKHR == p ) {
    j = "MemoryDedicatedAllocateInfoKHR";
    return;
  }
  if( StructureType :: eMemoryDedicatedRequirementsKHR == p ) {
    j = "MemoryDedicatedRequirementsKHR";
    return;
  }
  if( StructureType :: eMemoryOpaqueCaptureAddressAllocateInfoKHR == p ) {
    j = "MemoryOpaqueCaptureAddressAllocateInfoKHR";
    return;
  }
  if( StructureType :: eMemoryRequirements2KHR == p ) {
    j = "MemoryRequirements2KHR";
    return;
  }
  if( StructureType :: ePhysicalDevice16BitStorageFeaturesKHR == p ) {
    j = "PhysicalDevice16BitStorageFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDevice8BitStorageFeaturesKHR == p ) {
    j = "PhysicalDevice8BitStorageFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceBufferAddressFeaturesEXT == p ) {
    j = "PhysicalDeviceBufferAddressFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceDescriptorIndexingFeaturesEXT == p ) {
    j = "PhysicalDeviceDescriptorIndexingFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceDriverPropertiesKHR == p ) {
    j = "PhysicalDeviceDriverPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalBufferInfoKHR == p ) {
    j = "PhysicalDeviceExternalBufferInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalFenceInfoKHR == p ) {
    j = "PhysicalDeviceExternalFenceInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalImageFormatInfoKHR == p ) {
    j = "PhysicalDeviceExternalImageFormatInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceExternalSemaphoreInfoKHR == p ) {
    j = "PhysicalDeviceExternalSemaphoreInfoKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceFeatures2KHR == p ) {
    j = "PhysicalDeviceFeatures2KHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceFloat16Int8FeaturesKHR == p ) {
    j = "PhysicalDeviceFloat16Int8FeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceFloatControlsPropertiesKHR == p ) {
    j = "PhysicalDeviceFloatControlsPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceGroupPropertiesKHR == p ) {
    j = "PhysicalDeviceGroupPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceHostQueryResetFeaturesEXT == p ) {
    j = "PhysicalDeviceHostQueryResetFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceIdPropertiesKHR == p ) {
    j = "PhysicalDeviceIdPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceImageFormatInfo2KHR == p ) {
    j = "PhysicalDeviceImageFormatInfo2KHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceMaintenance3PropertiesKHR == p ) {
    j = "PhysicalDeviceMaintenance3PropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceMemoryProperties2KHR == p ) {
    j = "PhysicalDeviceMemoryProperties2KHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiviewFeaturesKHR == p ) {
    j = "PhysicalDeviceMultiviewFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceMultiviewPropertiesKHR == p ) {
    j = "PhysicalDeviceMultiviewPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDevicePointClippingPropertiesKHR == p ) {
    j = "PhysicalDevicePointClippingPropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceProperties2KHR == p ) {
    j = "PhysicalDeviceProperties2KHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceScalarBlockLayoutFeaturesEXT == p ) {
    j = "PhysicalDeviceScalarBlockLayoutFeaturesEXT";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderAtomicInt64FeaturesKHR == p ) {
    j = "PhysicalDeviceShaderAtomicInt64FeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderDrawParameterFeatures == p ) {
    j = "PhysicalDeviceShaderDrawParameterFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceShaderFloat16Int8FeaturesKHR == p ) {
    j = "PhysicalDeviceShaderFloat16Int8FeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceSparseImageFormatInfo2KHR == p ) {
    j = "PhysicalDeviceSparseImageFormatInfo2KHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceTimelineSemaphoreFeaturesKHR == p ) {
    j = "PhysicalDeviceTimelineSemaphoreFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceTimelineSemaphorePropertiesKHR == p ) {
    j = "PhysicalDeviceTimelineSemaphorePropertiesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceVariablePointersFeaturesKHR == p ) {
    j = "PhysicalDeviceVariablePointersFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceVariablePointerFeatures == p ) {
    j = "PhysicalDeviceVariablePointerFeatures";
    return;
  }
  if( StructureType :: ePhysicalDeviceVariablePointerFeaturesKHR == p ) {
    j = "PhysicalDeviceVariablePointerFeaturesKHR";
    return;
  }
  if( StructureType :: ePhysicalDeviceVulkanMemoryModelFeaturesKHR == p ) {
    j = "PhysicalDeviceVulkanMemoryModelFeaturesKHR";
    return;
  }
  if( StructureType :: eQueryPoolCreateInfoINTEL == p ) {
    j = "QueryPoolCreateInfoINTEL";
    return;
  }
  if( StructureType :: eQueueFamilyProperties2KHR == p ) {
    j = "QueueFamilyProperties2KHR";
    return;
  }
  if( StructureType :: eRenderPassAttachmentBeginInfoKHR == p ) {
    j = "RenderPassAttachmentBeginInfoKHR";
    return;
  }
  if( StructureType :: eRenderPassCreateInfo2KHR == p ) {
    j = "RenderPassCreateInfo2KHR";
    return;
  }
  if( StructureType :: eRenderPassMultiviewCreateInfoKHR == p ) {
    j = "RenderPassMultiviewCreateInfoKHR";
    return;
  }
  if( StructureType :: eSamplerReductionModeCreateInfoEXT == p ) {
    j = "SamplerReductionModeCreateInfoEXT";
    return;
  }
  if( StructureType :: eSamplerYcbcrConversionCreateInfoKHR == p ) {
    j = "SamplerYcbcrConversionCreateInfoKHR";
    return;
  }
  if( StructureType :: eSamplerYcbcrConversionInfoKHR == p ) {
    j = "SamplerYcbcrConversionInfoKHR";
    return;
  }
  if( StructureType :: eSemaphoreSignalInfoKHR == p ) {
    j = "SemaphoreSignalInfoKHR";
    return;
  }
  if( StructureType :: eSemaphoreTypeCreateInfoKHR == p ) {
    j = "SemaphoreTypeCreateInfoKHR";
    return;
  }
  if( StructureType :: eSemaphoreWaitInfoKHR == p ) {
    j = "SemaphoreWaitInfoKHR";
    return;
  }
  if( StructureType :: eSparseImageFormatProperties2KHR == p ) {
    j = "SparseImageFormatProperties2KHR";
    return;
  }
  if( StructureType :: eSparseImageMemoryRequirements2KHR == p ) {
    j = "SparseImageMemoryRequirements2KHR";
    return;
  }
  if( StructureType :: eSubpassBeginInfoKHR == p ) {
    j = "SubpassBeginInfoKHR";
    return;
  }
  if( StructureType :: eSubpassDependency2KHR == p ) {
    j = "SubpassDependency2KHR";
    return;
  }
  if( StructureType :: eSubpassDescription2KHR == p ) {
    j = "SubpassDescription2KHR";
    return;
  }
  if( StructureType :: eSubpassDescriptionDepthStencilResolveKHR == p ) {
    j = "SubpassDescriptionDepthStencilResolveKHR";
    return;
  }
  if( StructureType :: eSubpassEndInfoKHR == p ) {
    j = "SubpassEndInfoKHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkStructureType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: StructureType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, StructureType &p ) {
  if( j.is_string() ) {
    if( "ApplicationInfo" == j.get< std::string >() ) {
      p = StructureType :: eApplicationInfo ;
      return;
    }
    if( "eApplicationInfo" == j.get< std::string >() ) {
      p = StructureType :: eApplicationInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_APPLICATION_INFO" == j.get< std::string >() ) {
      p = StructureType :: eApplicationInfo ;
      return;
    }
    if( "InstanceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eInstanceCreateInfo ;
      return;
    }
    if( "eInstanceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eInstanceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eInstanceCreateInfo ;
      return;
    }
    if( "DeviceQueueCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueCreateInfo ;
      return;
    }
    if( "eDeviceQueueCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueCreateInfo ;
      return;
    }
    if( "DeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceCreateInfo ;
      return;
    }
    if( "eDeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceCreateInfo ;
      return;
    }
    if( "SubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo ;
      return;
    }
    if( "eSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBMIT_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo ;
      return;
    }
    if( "MemoryAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateInfo ;
      return;
    }
    if( "eMemoryAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateInfo ;
      return;
    }
    if( "MappedMemoryRange" == j.get< std::string >() ) {
      p = StructureType :: eMappedMemoryRange ;
      return;
    }
    if( "eMappedMemoryRange" == j.get< std::string >() ) {
      p = StructureType :: eMappedMemoryRange ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE" == j.get< std::string >() ) {
      p = StructureType :: eMappedMemoryRange ;
      return;
    }
    if( "BindSparseInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindSparseInfo ;
      return;
    }
    if( "eBindSparseInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindSparseInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindSparseInfo ;
      return;
    }
    if( "FenceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFenceCreateInfo ;
      return;
    }
    if( "eFenceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFenceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eFenceCreateInfo ;
      return;
    }
    if( "SemaphoreCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreCreateInfo ;
      return;
    }
    if( "eSemaphoreCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreCreateInfo ;
      return;
    }
    if( "EventCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eEventCreateInfo ;
      return;
    }
    if( "eEventCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eEventCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eEventCreateInfo ;
      return;
    }
    if( "QueryPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfo ;
      return;
    }
    if( "eQueryPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfo ;
      return;
    }
    if( "BufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferCreateInfo ;
      return;
    }
    if( "eBufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBufferCreateInfo ;
      return;
    }
    if( "BufferViewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferViewCreateInfo ;
      return;
    }
    if( "eBufferViewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferViewCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBufferViewCreateInfo ;
      return;
    }
    if( "ImageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageCreateInfo ;
      return;
    }
    if( "eImageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImageCreateInfo ;
      return;
    }
    if( "ImageViewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageViewCreateInfo ;
      return;
    }
    if( "eImageViewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageViewCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImageViewCreateInfo ;
      return;
    }
    if( "ShaderModuleCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleCreateInfo ;
      return;
    }
    if( "eShaderModuleCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleCreateInfo ;
      return;
    }
    if( "PipelineCacheCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCacheCreateInfo ;
      return;
    }
    if( "ePipelineCacheCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCacheCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCacheCreateInfo ;
      return;
    }
    if( "PipelineShaderStageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineShaderStageCreateInfo ;
      return;
    }
    if( "ePipelineShaderStageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineShaderStageCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineShaderStageCreateInfo ;
      return;
    }
    if( "PipelineVertexInputStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineVertexInputStateCreateInfo ;
      return;
    }
    if( "ePipelineVertexInputStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineVertexInputStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineVertexInputStateCreateInfo ;
      return;
    }
    if( "PipelineInputAssemblyStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInputAssemblyStateCreateInfo ;
      return;
    }
    if( "ePipelineInputAssemblyStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInputAssemblyStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInputAssemblyStateCreateInfo ;
      return;
    }
    if( "PipelineTessellationStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineTessellationStateCreateInfo ;
      return;
    }
    if( "ePipelineTessellationStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineTessellationStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineTessellationStateCreateInfo ;
      return;
    }
    if( "PipelineViewportStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportStateCreateInfo ;
      return;
    }
    if( "ePipelineViewportStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportStateCreateInfo ;
      return;
    }
    if( "PipelineRasterizationStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationStateCreateInfo ;
      return;
    }
    if( "ePipelineRasterizationStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationStateCreateInfo ;
      return;
    }
    if( "PipelineMultisampleStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineMultisampleStateCreateInfo ;
      return;
    }
    if( "ePipelineMultisampleStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineMultisampleStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineMultisampleStateCreateInfo ;
      return;
    }
    if( "PipelineDepthStencilStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDepthStencilStateCreateInfo ;
      return;
    }
    if( "ePipelineDepthStencilStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDepthStencilStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDepthStencilStateCreateInfo ;
      return;
    }
    if( "PipelineColorBlendStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorBlendStateCreateInfo ;
      return;
    }
    if( "ePipelineColorBlendStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorBlendStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorBlendStateCreateInfo ;
      return;
    }
    if( "PipelineDynamicStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDynamicStateCreateInfo ;
      return;
    }
    if( "ePipelineDynamicStateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDynamicStateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDynamicStateCreateInfo ;
      return;
    }
    if( "GraphicsPipelineCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineCreateInfo ;
      return;
    }
    if( "eGraphicsPipelineCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineCreateInfo ;
      return;
    }
    if( "ComputePipelineCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eComputePipelineCreateInfo ;
      return;
    }
    if( "eComputePipelineCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eComputePipelineCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eComputePipelineCreateInfo ;
      return;
    }
    if( "PipelineLayoutCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLayoutCreateInfo ;
      return;
    }
    if( "ePipelineLayoutCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLayoutCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLayoutCreateInfo ;
      return;
    }
    if( "SamplerCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCreateInfo ;
      return;
    }
    if( "eSamplerCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCreateInfo ;
      return;
    }
    if( "DescriptorSetLayoutCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutCreateInfo ;
      return;
    }
    if( "eDescriptorSetLayoutCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutCreateInfo ;
      return;
    }
    if( "DescriptorPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorPoolCreateInfo ;
      return;
    }
    if( "eDescriptorPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorPoolCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorPoolCreateInfo ;
      return;
    }
    if( "DescriptorSetAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetAllocateInfo ;
      return;
    }
    if( "eDescriptorSetAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetAllocateInfo ;
      return;
    }
    if( "WriteDescriptorSet" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSet ;
      return;
    }
    if( "eWriteDescriptorSet" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSet ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSet ;
      return;
    }
    if( "CopyDescriptorSet" == j.get< std::string >() ) {
      p = StructureType :: eCopyDescriptorSet ;
      return;
    }
    if( "eCopyDescriptorSet" == j.get< std::string >() ) {
      p = StructureType :: eCopyDescriptorSet ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET" == j.get< std::string >() ) {
      p = StructureType :: eCopyDescriptorSet ;
      return;
    }
    if( "FramebufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferCreateInfo ;
      return;
    }
    if( "eFramebufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferCreateInfo ;
      return;
    }
    if( "RenderPassCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo ;
      return;
    }
    if( "eRenderPassCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo ;
      return;
    }
    if( "CommandPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandPoolCreateInfo ;
      return;
    }
    if( "eCommandPoolCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandPoolCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eCommandPoolCreateInfo ;
      return;
    }
    if( "CommandBufferAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferAllocateInfo ;
      return;
    }
    if( "eCommandBufferAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferAllocateInfo ;
      return;
    }
    if( "CommandBufferInheritanceInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferInheritanceInfo ;
      return;
    }
    if( "eCommandBufferInheritanceInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferInheritanceInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferInheritanceInfo ;
      return;
    }
    if( "CommandBufferBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferBeginInfo ;
      return;
    }
    if( "eCommandBufferBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferBeginInfo ;
      return;
    }
    if( "RenderPassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassBeginInfo ;
      return;
    }
    if( "eRenderPassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassBeginInfo ;
      return;
    }
    if( "BufferMemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier ;
      return;
    }
    if( "eBufferMemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier ;
      return;
    }
    if( "ImageMemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier ;
      return;
    }
    if( "eImageMemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier ;
      return;
    }
    if( "MemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier ;
      return;
    }
    if( "eMemoryBarrier" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_BARRIER" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier ;
      return;
    }
    if( "LoaderInstanceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eLoaderInstanceCreateInfo ;
      return;
    }
    if( "eLoaderInstanceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eLoaderInstanceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eLoaderInstanceCreateInfo ;
      return;
    }
    if( "LoaderDeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eLoaderDeviceCreateInfo ;
      return;
    }
    if( "eLoaderDeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eLoaderDeviceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eLoaderDeviceCreateInfo ;
      return;
    }
    if( "PhysicalDeviceSubgroupProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubgroupProperties ;
      return;
    }
    if( "ePhysicalDeviceSubgroupProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubgroupProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubgroupProperties ;
      return;
    }
    if( "BindBufferMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfo ;
      return;
    }
    if( "eBindBufferMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfo ;
      return;
    }
    if( "BindImageMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfo ;
      return;
    }
    if( "eBindImageMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfo ;
      return;
    }
    if( "PhysicalDevice16BitStorageFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeatures ;
      return;
    }
    if( "ePhysicalDevice16BitStorageFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeatures ;
      return;
    }
    if( "MemoryDedicatedRequirements" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirements ;
      return;
    }
    if( "eMemoryDedicatedRequirements" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirements ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirements ;
      return;
    }
    if( "MemoryDedicatedAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfo ;
      return;
    }
    if( "eMemoryDedicatedAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfo ;
      return;
    }
    if( "MemoryAllocateFlagsInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfo ;
      return;
    }
    if( "eMemoryAllocateFlagsInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfo ;
      return;
    }
    if( "DeviceGroupRenderPassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfo ;
      return;
    }
    if( "eDeviceGroupRenderPassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfo ;
      return;
    }
    if( "DeviceGroupCommandBufferBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfo ;
      return;
    }
    if( "eDeviceGroupCommandBufferBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfo ;
      return;
    }
    if( "DeviceGroupSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfo ;
      return;
    }
    if( "eDeviceGroupSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfo ;
      return;
    }
    if( "DeviceGroupBindSparseInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfo ;
      return;
    }
    if( "eDeviceGroupBindSparseInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfo ;
      return;
    }
    if( "BindBufferMemoryDeviceGroupInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfo ;
      return;
    }
    if( "eBindBufferMemoryDeviceGroupInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfo ;
      return;
    }
    if( "BindImageMemoryDeviceGroupInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfo ;
      return;
    }
    if( "eBindImageMemoryDeviceGroupInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfo ;
      return;
    }
    if( "PhysicalDeviceGroupProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupProperties ;
      return;
    }
    if( "ePhysicalDeviceGroupProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupProperties ;
      return;
    }
    if( "DeviceGroupDeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfo ;
      return;
    }
    if( "eDeviceGroupDeviceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfo ;
      return;
    }
    if( "BufferMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2 ;
      return;
    }
    if( "eBufferMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2 ;
      return;
    }
    if( "ImageMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2 ;
      return;
    }
    if( "eImageMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2 ;
      return;
    }
    if( "ImageSparseMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2 ;
      return;
    }
    if( "eImageSparseMemoryRequirementsInfo2" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2 ;
      return;
    }
    if( "MemoryRequirements2" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2 ;
      return;
    }
    if( "eMemoryRequirements2" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2 ;
      return;
    }
    if( "SparseImageMemoryRequirements2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2 ;
      return;
    }
    if( "eSparseImageMemoryRequirements2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2 ;
      return;
    }
    if( "PhysicalDeviceFeatures2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2 ;
      return;
    }
    if( "ePhysicalDeviceFeatures2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2 ;
      return;
    }
    if( "PhysicalDeviceProperties2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2 ;
      return;
    }
    if( "ePhysicalDeviceProperties2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2 ;
      return;
    }
    if( "FormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2 ;
      return;
    }
    if( "eFormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2 ;
      return;
    }
    if( "ImageFormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2 ;
      return;
    }
    if( "eImageFormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2 ;
      return;
    }
    if( "PhysicalDeviceImageFormatInfo2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2 ;
      return;
    }
    if( "ePhysicalDeviceImageFormatInfo2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2 ;
      return;
    }
    if( "QueueFamilyProperties2" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2 ;
      return;
    }
    if( "eQueueFamilyProperties2" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2 ;
      return;
    }
    if( "PhysicalDeviceMemoryProperties2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2 ;
      return;
    }
    if( "ePhysicalDeviceMemoryProperties2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2 ;
      return;
    }
    if( "SparseImageFormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2 ;
      return;
    }
    if( "eSparseImageFormatProperties2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2 ;
      return;
    }
    if( "PhysicalDeviceSparseImageFormatInfo2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2 ;
      return;
    }
    if( "ePhysicalDeviceSparseImageFormatInfo2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2 ;
      return;
    }
    if( "PhysicalDevicePointClippingProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingProperties ;
      return;
    }
    if( "ePhysicalDevicePointClippingProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingProperties ;
      return;
    }
    if( "RenderPassInputAttachmentAspectCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassInputAttachmentAspectCreateInfo ;
      return;
    }
    if( "eRenderPassInputAttachmentAspectCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassInputAttachmentAspectCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassInputAttachmentAspectCreateInfo ;
      return;
    }
    if( "ImageViewUsageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfo ;
      return;
    }
    if( "eImageViewUsageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfo ;
      return;
    }
    if( "RenderPassMultiviewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfo ;
      return;
    }
    if( "eRenderPassMultiviewCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfo ;
      return;
    }
    if( "PhysicalDeviceMultiviewFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeatures ;
      return;
    }
    if( "ePhysicalDeviceMultiviewFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeatures ;
      return;
    }
    if( "PhysicalDeviceMultiviewProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewProperties ;
      return;
    }
    if( "ePhysicalDeviceMultiviewProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewProperties ;
      return;
    }
    if( "PhysicalDeviceVariablePointersFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeatures ;
      return;
    }
    if( "ePhysicalDeviceVariablePointersFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeatures ;
      return;
    }
    if( "ProtectedSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eProtectedSubmitInfo ;
      return;
    }
    if( "eProtectedSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eProtectedSubmitInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO" == j.get< std::string >() ) {
      p = StructureType :: eProtectedSubmitInfo ;
      return;
    }
    if( "PhysicalDeviceProtectedMemoryFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryFeatures ;
      return;
    }
    if( "ePhysicalDeviceProtectedMemoryFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryFeatures ;
      return;
    }
    if( "PhysicalDeviceProtectedMemoryProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryProperties ;
      return;
    }
    if( "ePhysicalDeviceProtectedMemoryProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProtectedMemoryProperties ;
      return;
    }
    if( "DeviceQueueInfo2" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueInfo2 ;
      return;
    }
    if( "eDeviceQueueInfo2" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueInfo2 ;
      return;
    }
    if( "SamplerYcbcrConversionCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfo ;
      return;
    }
    if( "eSamplerYcbcrConversionCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfo ;
      return;
    }
    if( "SamplerYcbcrConversionInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfo ;
      return;
    }
    if( "eSamplerYcbcrConversionInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfo ;
      return;
    }
    if( "BindImagePlaneMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfo ;
      return;
    }
    if( "eBindImagePlaneMemoryInfo" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfo ;
      return;
    }
    if( "ImagePlaneMemoryRequirementsInfo" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfo ;
      return;
    }
    if( "eImagePlaneMemoryRequirementsInfo" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfo ;
      return;
    }
    if( "PhysicalDeviceSamplerYcbcrConversionFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerYcbcrConversionFeatures ;
      return;
    }
    if( "ePhysicalDeviceSamplerYcbcrConversionFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerYcbcrConversionFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerYcbcrConversionFeatures ;
      return;
    }
    if( "SamplerYcbcrConversionImageFormatProperties" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionImageFormatProperties ;
      return;
    }
    if( "eSamplerYcbcrConversionImageFormatProperties" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionImageFormatProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionImageFormatProperties ;
      return;
    }
    if( "DescriptorUpdateTemplateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfo ;
      return;
    }
    if( "eDescriptorUpdateTemplateCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfo ;
      return;
    }
    if( "PhysicalDeviceExternalImageFormatInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfo ;
      return;
    }
    if( "ePhysicalDeviceExternalImageFormatInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfo ;
      return;
    }
    if( "ExternalImageFormatProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatProperties ;
      return;
    }
    if( "eExternalImageFormatProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatProperties ;
      return;
    }
    if( "PhysicalDeviceExternalBufferInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfo ;
      return;
    }
    if( "ePhysicalDeviceExternalBufferInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfo ;
      return;
    }
    if( "ExternalBufferProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferProperties ;
      return;
    }
    if( "eExternalBufferProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferProperties ;
      return;
    }
    if( "PhysicalDeviceIdProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdProperties ;
      return;
    }
    if( "ePhysicalDeviceIdProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdProperties ;
      return;
    }
    if( "ExternalMemoryBufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfo ;
      return;
    }
    if( "eExternalMemoryBufferCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfo ;
      return;
    }
    if( "ExternalMemoryImageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfo ;
      return;
    }
    if( "eExternalMemoryImageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfo ;
      return;
    }
    if( "ExportMemoryAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfo ;
      return;
    }
    if( "eExportMemoryAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfo ;
      return;
    }
    if( "PhysicalDeviceExternalFenceInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfo ;
      return;
    }
    if( "ePhysicalDeviceExternalFenceInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfo ;
      return;
    }
    if( "ExternalFenceProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalFenceProperties ;
      return;
    }
    if( "eExternalFenceProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalFenceProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: eExternalFenceProperties ;
      return;
    }
    if( "ExportFenceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfo ;
      return;
    }
    if( "eExportFenceCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfo ;
      return;
    }
    if( "ExportSemaphoreCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfo ;
      return;
    }
    if( "eExportSemaphoreCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfo ;
      return;
    }
    if( "PhysicalDeviceExternalSemaphoreInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfo ;
      return;
    }
    if( "ePhysicalDeviceExternalSemaphoreInfo" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfo ;
      return;
    }
    if( "ExternalSemaphoreProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphoreProperties ;
      return;
    }
    if( "eExternalSemaphoreProperties" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphoreProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphoreProperties ;
      return;
    }
    if( "PhysicalDeviceMaintenance3Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3Properties ;
      return;
    }
    if( "ePhysicalDeviceMaintenance3Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3Properties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3Properties ;
      return;
    }
    if( "DescriptorSetLayoutSupport" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupport ;
      return;
    }
    if( "eDescriptorSetLayoutSupport" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupport ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupport ;
      return;
    }
    if( "PhysicalDeviceShaderDrawParametersFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParametersFeatures ;
      return;
    }
    if( "ePhysicalDeviceShaderDrawParametersFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParametersFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParametersFeatures ;
      return;
    }
    if( "PhysicalDeviceVulkan11Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Features ;
      return;
    }
    if( "ePhysicalDeviceVulkan11Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Features ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Features ;
      return;
    }
    if( "PhysicalDeviceVulkan11Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Properties ;
      return;
    }
    if( "ePhysicalDeviceVulkan11Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Properties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan11Properties ;
      return;
    }
    if( "PhysicalDeviceVulkan12Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Features ;
      return;
    }
    if( "ePhysicalDeviceVulkan12Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Features ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Features ;
      return;
    }
    if( "PhysicalDeviceVulkan12Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Properties ;
      return;
    }
    if( "ePhysicalDeviceVulkan12Properties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Properties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkan12Properties ;
      return;
    }
    if( "ImageFormatListCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfo ;
      return;
    }
    if( "eImageFormatListCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfo ;
      return;
    }
    if( "AttachmentDescription2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2 ;
      return;
    }
    if( "eAttachmentDescription2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2 ;
      return;
    }
    if( "AttachmentReference2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2 ;
      return;
    }
    if( "eAttachmentReference2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2 ;
      return;
    }
    if( "SubpassDescription2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2 ;
      return;
    }
    if( "eSubpassDescription2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2 ;
      return;
    }
    if( "SubpassDependency2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2 ;
      return;
    }
    if( "eSubpassDependency2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2 ;
      return;
    }
    if( "RenderPassCreateInfo2" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2 ;
      return;
    }
    if( "eRenderPassCreateInfo2" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2 ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2 ;
      return;
    }
    if( "SubpassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfo ;
      return;
    }
    if( "eSubpassBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfo ;
      return;
    }
    if( "SubpassEndInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfo ;
      return;
    }
    if( "eSubpassEndInfo" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_END_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfo ;
      return;
    }
    if( "PhysicalDevice8BitStorageFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeatures ;
      return;
    }
    if( "ePhysicalDevice8BitStorageFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeatures ;
      return;
    }
    if( "PhysicalDeviceDriverProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverProperties ;
      return;
    }
    if( "ePhysicalDeviceDriverProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverProperties ;
      return;
    }
    if( "PhysicalDeviceShaderAtomicInt64Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64Features ;
      return;
    }
    if( "ePhysicalDeviceShaderAtomicInt64Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64Features ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64Features ;
      return;
    }
    if( "PhysicalDeviceShaderFloat16Int8Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8Features ;
      return;
    }
    if( "ePhysicalDeviceShaderFloat16Int8Features" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8Features ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8Features ;
      return;
    }
    if( "PhysicalDeviceFloatControlsProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsProperties ;
      return;
    }
    if( "ePhysicalDeviceFloatControlsProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsProperties ;
      return;
    }
    if( "DescriptorSetLayoutBindingFlagsCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutBindingFlagsCreateInfo ;
      return;
    }
    if( "eDescriptorSetLayoutBindingFlagsCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutBindingFlagsCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutBindingFlagsCreateInfo ;
      return;
    }
    if( "PhysicalDeviceDescriptorIndexingFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeatures ;
      return;
    }
    if( "ePhysicalDeviceDescriptorIndexingFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeatures ;
      return;
    }
    if( "PhysicalDeviceDescriptorIndexingProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingProperties ;
      return;
    }
    if( "ePhysicalDeviceDescriptorIndexingProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingProperties ;
      return;
    }
    if( "PhysicalDeviceDepthStencilResolveProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthStencilResolveProperties ;
      return;
    }
    if( "ePhysicalDeviceDepthStencilResolveProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthStencilResolveProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthStencilResolveProperties ;
      return;
    }
    if( "SubpassDescriptionDepthStencilResolve" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolve ;
      return;
    }
    if( "eSubpassDescriptionDepthStencilResolve" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolve ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolve ;
      return;
    }
    if( "PhysicalDeviceScalarBlockLayoutFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeatures ;
      return;
    }
    if( "ePhysicalDeviceScalarBlockLayoutFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeatures ;
      return;
    }
    if( "ImageStencilUsageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfo ;
      return;
    }
    if( "eImageStencilUsageCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfo ;
      return;
    }
    if( "PhysicalDeviceSamplerFilterMinmaxProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerFilterMinmaxProperties ;
      return;
    }
    if( "ePhysicalDeviceSamplerFilterMinmaxProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerFilterMinmaxProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSamplerFilterMinmaxProperties ;
      return;
    }
    if( "SamplerReductionModeCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfo ;
      return;
    }
    if( "eSamplerReductionModeCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfo ;
      return;
    }
    if( "PhysicalDeviceVulkanMemoryModelFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeatures ;
      return;
    }
    if( "ePhysicalDeviceVulkanMemoryModelFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeatures ;
      return;
    }
    if( "PhysicalDeviceImagelessFramebufferFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImagelessFramebufferFeatures ;
      return;
    }
    if( "ePhysicalDeviceImagelessFramebufferFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImagelessFramebufferFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImagelessFramebufferFeatures ;
      return;
    }
    if( "FramebufferAttachmentsCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfo ;
      return;
    }
    if( "eFramebufferAttachmentsCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfo ;
      return;
    }
    if( "FramebufferAttachmentImageInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfo ;
      return;
    }
    if( "eFramebufferAttachmentImageInfo" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfo ;
      return;
    }
    if( "RenderPassAttachmentBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfo ;
      return;
    }
    if( "eRenderPassAttachmentBeginInfo" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfo ;
      return;
    }
    if( "AttachmentReferenceStencilLayout" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayout ;
      return;
    }
    if( "eAttachmentReferenceStencilLayout" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayout ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayout ;
      return;
    }
    if( "AttachmentDescriptionStencilLayout" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayout ;
      return;
    }
    if( "eAttachmentDescriptionStencilLayout" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayout ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayout ;
      return;
    }
    if( "PhysicalDeviceHostQueryResetFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeatures ;
      return;
    }
    if( "ePhysicalDeviceHostQueryResetFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeatures ;
      return;
    }
    if( "PhysicalDeviceTimelineSemaphoreFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeatures ;
      return;
    }
    if( "ePhysicalDeviceTimelineSemaphoreFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeatures ;
      return;
    }
    if( "PhysicalDeviceTimelineSemaphoreProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreProperties ;
      return;
    }
    if( "ePhysicalDeviceTimelineSemaphoreProperties" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreProperties ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreProperties ;
      return;
    }
    if( "SemaphoreTypeCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfo ;
      return;
    }
    if( "eSemaphoreTypeCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfo ;
      return;
    }
    if( "TimelineSemaphoreSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eTimelineSemaphoreSubmitInfo ;
      return;
    }
    if( "eTimelineSemaphoreSubmitInfo" == j.get< std::string >() ) {
      p = StructureType :: eTimelineSemaphoreSubmitInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO" == j.get< std::string >() ) {
      p = StructureType :: eTimelineSemaphoreSubmitInfo ;
      return;
    }
    if( "SemaphoreWaitInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfo ;
      return;
    }
    if( "eSemaphoreWaitInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfo ;
      return;
    }
    if( "SemaphoreSignalInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfo ;
      return;
    }
    if( "eSemaphoreSignalInfo" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfo ;
      return;
    }
    if( "PhysicalDeviceBufferDeviceAddressFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferDeviceAddressFeatures ;
      return;
    }
    if( "ePhysicalDeviceBufferDeviceAddressFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferDeviceAddressFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferDeviceAddressFeatures ;
      return;
    }
    if( "BufferDeviceAddressInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfo ;
      return;
    }
    if( "eBufferDeviceAddressInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfo ;
      return;
    }
    if( "BufferOpaqueCaptureAddressCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfo ;
      return;
    }
    if( "eBufferOpaqueCaptureAddressCreateInfo" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfo ;
      return;
    }
    if( "MemoryOpaqueCaptureAddressAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfo ;
      return;
    }
    if( "eMemoryOpaqueCaptureAddressAllocateInfo" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfo ;
      return;
    }
    if( "DeviceMemoryOpaqueCaptureAddressInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfo ;
      return;
    }
    if( "eDeviceMemoryOpaqueCaptureAddressInfo" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfo ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfo ;
      return;
    }
    if( "SwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCreateInfoKHR ;
      return;
    }
    if( "eSwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCreateInfoKHR ;
      return;
    }
    if( "PresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentInfoKHR ;
      return;
    }
    if( "ePresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentInfoKHR ;
      return;
    }
    if( "DeviceGroupPresentCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentCapabilitiesKHR ;
      return;
    }
    if( "eDeviceGroupPresentCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentCapabilitiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentCapabilitiesKHR ;
      return;
    }
    if( "ImageSwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSwapchainCreateInfoKHR ;
      return;
    }
    if( "eImageSwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSwapchainCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSwapchainCreateInfoKHR ;
      return;
    }
    if( "BindImageMemorySwapchainInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemorySwapchainInfoKHR ;
      return;
    }
    if( "eBindImageMemorySwapchainInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemorySwapchainInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemorySwapchainInfoKHR ;
      return;
    }
    if( "AcquireNextImageInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireNextImageInfoKHR ;
      return;
    }
    if( "eAcquireNextImageInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireNextImageInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireNextImageInfoKHR ;
      return;
    }
    if( "DeviceGroupPresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentInfoKHR ;
      return;
    }
    if( "eDeviceGroupPresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupPresentInfoKHR ;
      return;
    }
    if( "DeviceGroupSwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSwapchainCreateInfoKHR ;
      return;
    }
    if( "eDeviceGroupSwapchainCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSwapchainCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSwapchainCreateInfoKHR ;
      return;
    }
    if( "DisplayModeCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeCreateInfoKHR ;
      return;
    }
    if( "eDisplayModeCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeCreateInfoKHR ;
      return;
    }
    if( "DisplaySurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplaySurfaceCreateInfoKHR ;
      return;
    }
    if( "eDisplaySurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplaySurfaceCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplaySurfaceCreateInfoKHR ;
      return;
    }
    if( "DisplayPresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPresentInfoKHR ;
      return;
    }
    if( "eDisplayPresentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPresentInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPresentInfoKHR ;
      return;
    }
#if defined( VK_USE_PLATFORM_XLIB_KHR )
    if( "XlibSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eXlibSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_XLIB_KHR )
    if( "eXlibSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eXlibSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_XLIB_KHR )
    if( "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eXlibSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_XCB_KHR )
    if( "XcbSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eXcbSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_XCB_KHR )
    if( "eXcbSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eXcbSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_XCB_KHR )
    if( "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eXcbSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    if( "WaylandSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWaylandSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    if( "eWaylandSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWaylandSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    if( "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eWaylandSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "AndroidSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAndroidSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eAndroidSurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAndroidSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAndroidSurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "Win32SurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32SurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eWin32SurfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32SurfaceCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32SurfaceCreateInfoKHR ;
      return;
    }
#endif
    if( "DebugReportCallbackCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCallbackCreateInfoEXT ;
      return;
    }
    if( "eDebugReportCallbackCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCallbackCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCallbackCreateInfoEXT ;
      return;
    }
    if( "DebugMarkerObjectNameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectNameInfoEXT ;
      return;
    }
    if( "eDebugMarkerObjectNameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectNameInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectNameInfoEXT ;
      return;
    }
    if( "DebugMarkerObjectTagInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectTagInfoEXT ;
      return;
    }
    if( "eDebugMarkerObjectTagInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectTagInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerObjectTagInfoEXT ;
      return;
    }
    if( "DebugMarkerMarkerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerMarkerInfoEXT ;
      return;
    }
    if( "eDebugMarkerMarkerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerMarkerInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugMarkerMarkerInfoEXT ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoProfileKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfileKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoProfileKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfileKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_PROFILE_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfileKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCapabilitiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCapabilitiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCapabilitiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoPictureResourceKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoPictureResourceKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoPictureResourceKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoPictureResourceKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoPictureResourceKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoGetMemoryPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoGetMemoryPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoGetMemoryPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoGetMemoryPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_GET_MEMORY_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoGetMemoryPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoBindMemoryKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBindMemoryKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoBindMemoryKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBindMemoryKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_BIND_MEMORY_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBindMemoryKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoSessionCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoSessionCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoSessionParametersCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoSessionParametersCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersCreateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoSessionParametersUpdateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersUpdateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoSessionParametersUpdateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersUpdateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoSessionParametersUpdateInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoBeginCodingInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBeginCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoBeginCodingInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBeginCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoBeginCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEndCodingInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEndCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEndCodingInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEndCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEndCodingInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoCodingControlInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCodingControlInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoCodingControlInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCodingControlInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoCodingControlInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoReferenceSlotKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoReferenceSlotKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoReferenceSlotKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoReferenceSlotKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoReferenceSlotKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoQueueFamilyProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoQueueFamilyProperties2KHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoQueueFamilyProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoQueueFamilyProperties2KHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_QUEUE_FAMILY_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoQueueFamilyProperties2KHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoProfilesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfilesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoProfilesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfilesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_PROFILES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoProfilesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "PhysicalDeviceVideoFormatInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVideoFormatInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ePhysicalDeviceVideoFormatInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVideoFormatInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVideoFormatInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoFormatPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoFormatPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoFormatPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoFormatPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoFormatPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeInfoKHR ;
      return;
    }
#endif
    if( "DedicatedAllocationImageCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationImageCreateInfoNV ;
      return;
    }
    if( "eDedicatedAllocationImageCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationImageCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationImageCreateInfoNV ;
      return;
    }
    if( "DedicatedAllocationBufferCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationBufferCreateInfoNV ;
      return;
    }
    if( "eDedicatedAllocationBufferCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationBufferCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationBufferCreateInfoNV ;
      return;
    }
    if( "DedicatedAllocationMemoryAllocateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationMemoryAllocateInfoNV ;
      return;
    }
    if( "eDedicatedAllocationMemoryAllocateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationMemoryAllocateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eDedicatedAllocationMemoryAllocateInfoNV ;
      return;
    }
    if( "PhysicalDeviceTransformFeedbackFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceTransformFeedbackFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceTransformFeedbackPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceTransformFeedbackPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTransformFeedbackPropertiesEXT ;
      return;
    }
    if( "CuModuleCreateInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuModuleCreateInfoNVX ;
      return;
    }
    if( "eCuModuleCreateInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuModuleCreateInfoNVX ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX" == j.get< std::string >() ) {
      p = StructureType :: eCuModuleCreateInfoNVX ;
      return;
    }
    if( "CuFunctionCreateInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuFunctionCreateInfoNVX ;
      return;
    }
    if( "eCuFunctionCreateInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuFunctionCreateInfoNVX ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX" == j.get< std::string >() ) {
      p = StructureType :: eCuFunctionCreateInfoNVX ;
      return;
    }
    if( "CuLaunchInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuLaunchInfoNVX ;
      return;
    }
    if( "eCuLaunchInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eCuLaunchInfoNVX ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX" == j.get< std::string >() ) {
      p = StructureType :: eCuLaunchInfoNVX ;
      return;
    }
    if( "ImageViewHandleInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewHandleInfoNVX ;
      return;
    }
    if( "eImageViewHandleInfoNVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewHandleInfoNVX ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewHandleInfoNVX ;
      return;
    }
    if( "ImageViewAddressPropertiesNVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAddressPropertiesNVX ;
      return;
    }
    if( "eImageViewAddressPropertiesNVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAddressPropertiesNVX ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAddressPropertiesNVX ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264VclFrameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264VclFrameInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264VclFrameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264VclFrameInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_VCL_FRAME_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264VclFrameInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264NaluSliceEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264NaluSliceEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264NaluSliceEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264NaluSliceEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_NALU_SLICE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264NaluSliceEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264EmitPictureParametersEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264EmitPictureParametersEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264EmitPictureParametersEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264EmitPictureParametersEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_EMIT_PICTURE_PARAMETERS_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264EmitPictureParametersEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeH264ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeH264ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264PictureInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264PictureInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264MvcEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264MvcEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264MvcEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264MvcEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_MVC_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264MvcEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH264DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH264DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH264DpbSlotInfoEXT ;
      return;
    }
#endif
    if( "TextureLodGatherFormatPropertiesAMD" == j.get< std::string >() ) {
      p = StructureType :: eTextureLodGatherFormatPropertiesAMD ;
      return;
    }
    if( "eTextureLodGatherFormatPropertiesAMD" == j.get< std::string >() ) {
      p = StructureType :: eTextureLodGatherFormatPropertiesAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD" == j.get< std::string >() ) {
      p = StructureType :: eTextureLodGatherFormatPropertiesAMD ;
      return;
    }
#if defined( VK_USE_PLATFORM_GGP )
    if( "StreamDescriptorSurfaceCreateInfoGGP" == j.get< std::string >() ) {
      p = StructureType :: eStreamDescriptorSurfaceCreateInfoGGP ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_GGP )
    if( "eStreamDescriptorSurfaceCreateInfoGGP" == j.get< std::string >() ) {
      p = StructureType :: eStreamDescriptorSurfaceCreateInfoGGP ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_GGP )
    if( "VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP" == j.get< std::string >() ) {
      p = StructureType :: eStreamDescriptorSurfaceCreateInfoGGP ;
      return;
    }
#endif
    if( "PhysicalDeviceCornerSampledImageFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCornerSampledImageFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceCornerSampledImageFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCornerSampledImageFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCornerSampledImageFeaturesNV ;
      return;
    }
    if( "ExternalMemoryImageCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoNV ;
      return;
    }
    if( "eExternalMemoryImageCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoNV ;
      return;
    }
    if( "ExportMemoryAllocateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoNV ;
      return;
    }
    if( "eExportMemoryAllocateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoNV ;
      return;
    }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ImportMemoryWin32HandleInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eImportMemoryWin32HandleInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ExportMemoryWin32HandleInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eExportMemoryWin32HandleInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "Win32KeyedMutexAcquireReleaseInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eWin32KeyedMutexAcquireReleaseInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoNV ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoNV ;
      return;
    }
#endif
    if( "ValidationFlagsEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFlagsEXT ;
      return;
    }
    if( "eValidationFlagsEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFlagsEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFlagsEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_VI_NN )
    if( "ViSurfaceCreateInfoNN" == j.get< std::string >() ) {
      p = StructureType :: eViSurfaceCreateInfoNN ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_VI_NN )
    if( "eViSurfaceCreateInfoNN" == j.get< std::string >() ) {
      p = StructureType :: eViSurfaceCreateInfoNN ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_VI_NN )
    if( "VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN" == j.get< std::string >() ) {
      p = StructureType :: eViSurfaceCreateInfoNN ;
      return;
    }
#endif
    if( "ImageViewAstcDecodeModeEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAstcDecodeModeEXT ;
      return;
    }
    if( "eImageViewAstcDecodeModeEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAstcDecodeModeEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImageViewAstcDecodeModeEXT ;
      return;
    }
    if( "PhysicalDeviceAstcDecodeFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceAstcDecodeFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceAstcDecodeFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceAstcDecodeFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceAstcDecodeFeaturesEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ImportMemoryWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eImportMemoryWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ExportMemoryWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eExportMemoryWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "MemoryWin32HandlePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryWin32HandlePropertiesKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eMemoryWin32HandlePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryWin32HandlePropertiesKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryWin32HandlePropertiesKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "MemoryGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eMemoryGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetWin32HandleInfoKHR ;
      return;
    }
#endif
    if( "ImportMemoryFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryFdInfoKHR ;
      return;
    }
    if( "eImportMemoryFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryFdInfoKHR ;
      return;
    }
    if( "MemoryFdPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryFdPropertiesKHR ;
      return;
    }
    if( "eMemoryFdPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryFdPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryFdPropertiesKHR ;
      return;
    }
    if( "MemoryGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetFdInfoKHR ;
      return;
    }
    if( "eMemoryGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetFdInfoKHR ;
      return;
    }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "Win32KeyedMutexAcquireReleaseInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eWin32KeyedMutexAcquireReleaseInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eWin32KeyedMutexAcquireReleaseInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ImportSemaphoreWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eImportSemaphoreWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ExportSemaphoreWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eExportSemaphoreWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "D3D12FenceSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eD3D12FenceSubmitInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eD3D12FenceSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eD3D12FenceSubmitInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eD3D12FenceSubmitInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "SemaphoreGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eSemaphoreGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetWin32HandleInfoKHR ;
      return;
    }
#endif
    if( "ImportSemaphoreFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreFdInfoKHR ;
      return;
    }
    if( "eImportSemaphoreFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreFdInfoKHR ;
      return;
    }
    if( "SemaphoreGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetFdInfoKHR ;
      return;
    }
    if( "eSemaphoreGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetFdInfoKHR ;
      return;
    }
    if( "PhysicalDevicePushDescriptorPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePushDescriptorPropertiesKHR ;
      return;
    }
    if( "ePhysicalDevicePushDescriptorPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePushDescriptorPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePushDescriptorPropertiesKHR ;
      return;
    }
    if( "ConditionalRenderingBeginInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eConditionalRenderingBeginInfoEXT ;
      return;
    }
    if( "eConditionalRenderingBeginInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eConditionalRenderingBeginInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eConditionalRenderingBeginInfoEXT ;
      return;
    }
    if( "PresentRegionsKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentRegionsKHR ;
      return;
    }
    if( "ePresentRegionsKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentRegionsKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentRegionsKHR ;
      return;
    }
    if( "PipelineViewportWScalingStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportWScalingStateCreateInfoNV ;
      return;
    }
    if( "ePipelineViewportWScalingStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportWScalingStateCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportWScalingStateCreateInfoNV ;
      return;
    }
    if( "SurfaceCapabilities2EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2EXT ;
      return;
    }
    if( "eSurfaceCapabilities2EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2EXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2EXT ;
      return;
    }
    if( "DisplayPowerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPowerInfoEXT ;
      return;
    }
    if( "eDisplayPowerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPowerInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPowerInfoEXT ;
      return;
    }
    if( "DeviceEventInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceEventInfoEXT ;
      return;
    }
    if( "eDeviceEventInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceEventInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceEventInfoEXT ;
      return;
    }
    if( "DisplayEventInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayEventInfoEXT ;
      return;
    }
    if( "eDisplayEventInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayEventInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDisplayEventInfoEXT ;
      return;
    }
    if( "SwapchainCounterCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCounterCreateInfoEXT ;
      return;
    }
    if( "eSwapchainCounterCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCounterCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainCounterCreateInfoEXT ;
      return;
    }
    if( "PresentTimesInfoGOOGLE" == j.get< std::string >() ) {
      p = StructureType :: ePresentTimesInfoGOOGLE ;
      return;
    }
    if( "ePresentTimesInfoGOOGLE" == j.get< std::string >() ) {
      p = StructureType :: ePresentTimesInfoGOOGLE ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE" == j.get< std::string >() ) {
      p = StructureType :: ePresentTimesInfoGOOGLE ;
      return;
    }
    if( "PipelineViewportSwizzleStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportSwizzleStateCreateInfoNV ;
      return;
    }
    if( "ePipelineViewportSwizzleStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportSwizzleStateCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineViewportSwizzleStateCreateInfoNV ;
      return;
    }
    if( "PhysicalDeviceDiscardRectanglePropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiscardRectanglePropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceDiscardRectanglePropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiscardRectanglePropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiscardRectanglePropertiesEXT ;
      return;
    }
    if( "PipelineDiscardRectangleStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDiscardRectangleStateCreateInfoEXT ;
      return;
    }
    if( "ePipelineDiscardRectangleStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDiscardRectangleStateCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineDiscardRectangleStateCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceDepthClipEnableFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthClipEnableFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceDepthClipEnableFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthClipEnableFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDepthClipEnableFeaturesEXT ;
      return;
    }
    if( "HdrMetadataEXT" == j.get< std::string >() ) {
      p = StructureType :: eHdrMetadataEXT ;
      return;
    }
    if( "eHdrMetadataEXT" == j.get< std::string >() ) {
      p = StructureType :: eHdrMetadataEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_HDR_METADATA_EXT" == j.get< std::string >() ) {
      p = StructureType :: eHdrMetadataEXT ;
      return;
    }
    if( "SharedPresentSurfaceCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eSharedPresentSurfaceCapabilitiesKHR ;
      return;
    }
    if( "eSharedPresentSurfaceCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eSharedPresentSurfaceCapabilitiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSharedPresentSurfaceCapabilitiesKHR ;
      return;
    }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ImportFenceWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eImportFenceWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "ExportFenceWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eExportFenceWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "FenceGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eFenceGetWin32HandleInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetWin32HandleInfoKHR ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetWin32HandleInfoKHR ;
      return;
    }
#endif
    if( "ImportFenceFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceFdInfoKHR ;
      return;
    }
    if( "eImportFenceFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImportFenceFdInfoKHR ;
      return;
    }
    if( "FenceGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetFdInfoKHR ;
      return;
    }
    if( "eFenceGetFdInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetFdInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFenceGetFdInfoKHR ;
      return;
    }
    if( "PhysicalDevicePerformanceQueryFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryFeaturesKHR ;
      return;
    }
    if( "ePhysicalDevicePerformanceQueryFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryFeaturesKHR ;
      return;
    }
    if( "PhysicalDevicePerformanceQueryPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryPropertiesKHR ;
      return;
    }
    if( "ePhysicalDevicePerformanceQueryPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePerformanceQueryPropertiesKHR ;
      return;
    }
    if( "QueryPoolPerformanceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceCreateInfoKHR ;
      return;
    }
    if( "eQueryPoolPerformanceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceCreateInfoKHR ;
      return;
    }
    if( "PerformanceQuerySubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceQuerySubmitInfoKHR ;
      return;
    }
    if( "ePerformanceQuerySubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceQuerySubmitInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceQuerySubmitInfoKHR ;
      return;
    }
    if( "AcquireProfilingLockInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireProfilingLockInfoKHR ;
      return;
    }
    if( "eAcquireProfilingLockInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireProfilingLockInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAcquireProfilingLockInfoKHR ;
      return;
    }
    if( "PerformanceCounterKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterKHR ;
      return;
    }
    if( "ePerformanceCounterKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterKHR ;
      return;
    }
    if( "PerformanceCounterDescriptionKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterDescriptionKHR ;
      return;
    }
    if( "ePerformanceCounterDescriptionKHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterDescriptionKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceCounterDescriptionKHR ;
      return;
    }
    if( "PhysicalDeviceSurfaceInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSurfaceInfo2KHR ;
      return;
    }
    if( "ePhysicalDeviceSurfaceInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSurfaceInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSurfaceInfo2KHR ;
      return;
    }
    if( "SurfaceCapabilities2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2KHR ;
      return;
    }
    if( "eSurfaceCapabilities2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilities2KHR ;
      return;
    }
    if( "SurfaceFormat2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFormat2KHR ;
      return;
    }
    if( "eSurfaceFormat2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFormat2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFormat2KHR ;
      return;
    }
    if( "DisplayProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayProperties2KHR ;
      return;
    }
    if( "eDisplayProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayProperties2KHR ;
      return;
    }
    if( "DisplayPlaneProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneProperties2KHR ;
      return;
    }
    if( "eDisplayPlaneProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneProperties2KHR ;
      return;
    }
    if( "DisplayModeProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeProperties2KHR ;
      return;
    }
    if( "eDisplayModeProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayModeProperties2KHR ;
      return;
    }
    if( "DisplayPlaneInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneInfo2KHR ;
      return;
    }
    if( "eDisplayPlaneInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneInfo2KHR ;
      return;
    }
    if( "DisplayPlaneCapabilities2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneCapabilities2KHR ;
      return;
    }
    if( "eDisplayPlaneCapabilities2KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneCapabilities2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDisplayPlaneCapabilities2KHR ;
      return;
    }
#if defined( VK_USE_PLATFORM_IOS_MVK )
    if( "IosSurfaceCreateInfoMVK" == j.get< std::string >() ) {
      p = StructureType :: eIosSurfaceCreateInfoMVK ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_IOS_MVK )
    if( "eIosSurfaceCreateInfoMVK" == j.get< std::string >() ) {
      p = StructureType :: eIosSurfaceCreateInfoMVK ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_IOS_MVK )
    if( "VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK" == j.get< std::string >() ) {
      p = StructureType :: eIosSurfaceCreateInfoMVK ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_MACOS_MVK )
    if( "MacosSurfaceCreateInfoMVK" == j.get< std::string >() ) {
      p = StructureType :: eMacosSurfaceCreateInfoMVK ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_MACOS_MVK )
    if( "eMacosSurfaceCreateInfoMVK" == j.get< std::string >() ) {
      p = StructureType :: eMacosSurfaceCreateInfoMVK ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_MACOS_MVK )
    if( "VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK" == j.get< std::string >() ) {
      p = StructureType :: eMacosSurfaceCreateInfoMVK ;
      return;
    }
#endif
    if( "DebugUtilsObjectNameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectNameInfoEXT ;
      return;
    }
    if( "eDebugUtilsObjectNameInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectNameInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectNameInfoEXT ;
      return;
    }
    if( "DebugUtilsObjectTagInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectTagInfoEXT ;
      return;
    }
    if( "eDebugUtilsObjectTagInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectTagInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsObjectTagInfoEXT ;
      return;
    }
    if( "DebugUtilsLabelEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsLabelEXT ;
      return;
    }
    if( "eDebugUtilsLabelEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsLabelEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsLabelEXT ;
      return;
    }
    if( "DebugUtilsMessengerCallbackDataEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCallbackDataEXT ;
      return;
    }
    if( "eDebugUtilsMessengerCallbackDataEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCallbackDataEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCallbackDataEXT ;
      return;
    }
    if( "DebugUtilsMessengerCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCreateInfoEXT ;
      return;
    }
    if( "eDebugUtilsMessengerCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugUtilsMessengerCreateInfoEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "AndroidHardwareBufferUsageANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferUsageANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eAndroidHardwareBufferUsageANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferUsageANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferUsageANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "AndroidHardwareBufferPropertiesANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eAndroidHardwareBufferPropertiesANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "AndroidHardwareBufferFormatPropertiesANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferFormatPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eAndroidHardwareBufferFormatPropertiesANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferFormatPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eAndroidHardwareBufferFormatPropertiesANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "ImportAndroidHardwareBufferInfoANDROID" == j.get< std::string >() ) {
      p = StructureType :: eImportAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eImportAndroidHardwareBufferInfoANDROID" == j.get< std::string >() ) {
      p = StructureType :: eImportAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eImportAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "MemoryGetAndroidHardwareBufferInfoANDROID" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eMemoryGetAndroidHardwareBufferInfoANDROID" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetAndroidHardwareBufferInfoANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "ExternalFormatANDROID" == j.get< std::string >() ) {
      p = StructureType :: eExternalFormatANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "eExternalFormatANDROID" == j.get< std::string >() ) {
      p = StructureType :: eExternalFormatANDROID ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    if( "VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID" == j.get< std::string >() ) {
      p = StructureType :: eExternalFormatANDROID ;
      return;
    }
#endif
    if( "PhysicalDeviceInlineUniformBlockFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInlineUniformBlockFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceInlineUniformBlockFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInlineUniformBlockFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInlineUniformBlockFeaturesEXT ;
      return;
    }
    if( "WriteDescriptorSetInlineUniformBlockEXT" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetInlineUniformBlockEXT ;
      return;
    }
    if( "eWriteDescriptorSetInlineUniformBlockEXT" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetInlineUniformBlockEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetInlineUniformBlockEXT ;
      return;
    }
    if( "SampleLocationsInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSampleLocationsInfoEXT ;
      return;
    }
    if( "eSampleLocationsInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSampleLocationsInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSampleLocationsInfoEXT ;
      return;
    }
    if( "RenderPassSampleLocationsBeginInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassSampleLocationsBeginInfoEXT ;
      return;
    }
    if( "eRenderPassSampleLocationsBeginInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassSampleLocationsBeginInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassSampleLocationsBeginInfoEXT ;
      return;
    }
    if( "PipelineSampleLocationsStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineSampleLocationsStateCreateInfoEXT ;
      return;
    }
    if( "ePipelineSampleLocationsStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineSampleLocationsStateCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineSampleLocationsStateCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceSampleLocationsPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSampleLocationsPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceSampleLocationsPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSampleLocationsPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSampleLocationsPropertiesEXT ;
      return;
    }
    if( "MultisamplePropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eMultisamplePropertiesEXT ;
      return;
    }
    if( "eMultisamplePropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eMultisamplePropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eMultisamplePropertiesEXT ;
      return;
    }
    if( "PipelineCoverageToColorStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageToColorStateCreateInfoNV ;
      return;
    }
    if( "ePipelineCoverageToColorStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageToColorStateCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageToColorStateCreateInfoNV ;
      return;
    }
    if( "WriteDescriptorSetAccelerationStructureKHR" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureKHR ;
      return;
    }
    if( "eWriteDescriptorSetAccelerationStructureKHR" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureKHR ;
      return;
    }
    if( "AccelerationStructureBuildGeometryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildGeometryInfoKHR ;
      return;
    }
    if( "eAccelerationStructureBuildGeometryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildGeometryInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildGeometryInfoKHR ;
      return;
    }
    if( "AccelerationStructureDeviceAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureDeviceAddressInfoKHR ;
      return;
    }
    if( "eAccelerationStructureDeviceAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureDeviceAddressInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureDeviceAddressInfoKHR ;
      return;
    }
    if( "AccelerationStructureGeometryAabbsDataKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryAabbsDataKHR ;
      return;
    }
    if( "eAccelerationStructureGeometryAabbsDataKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryAabbsDataKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryAabbsDataKHR ;
      return;
    }
    if( "AccelerationStructureGeometryKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryKHR ;
      return;
    }
    if( "eAccelerationStructureGeometryKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureGeometryKHR ;
      return;
    }
    if( "AccelerationStructureVersionInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureVersionInfoKHR ;
      return;
    }
    if( "eAccelerationStructureVersionInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureVersionInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureVersionInfoKHR ;
      return;
    }
    if( "CopyAccelerationStructureInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureInfoKHR ;
      return;
    }
    if( "eCopyAccelerationStructureInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureInfoKHR ;
      return;
    }
    if( "CopyAccelerationStructureToMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureToMemoryInfoKHR ;
      return;
    }
    if( "eCopyAccelerationStructureToMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureToMemoryInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyAccelerationStructureToMemoryInfoKHR ;
      return;
    }
    if( "CopyMemoryToAccelerationStructureInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyMemoryToAccelerationStructureInfoKHR ;
      return;
    }
    if( "eCopyMemoryToAccelerationStructureInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyMemoryToAccelerationStructureInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyMemoryToAccelerationStructureInfoKHR ;
      return;
    }
    if( "AccelerationStructureCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoKHR ;
      return;
    }
    if( "eAccelerationStructureCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoKHR ;
      return;
    }
    if( "AccelerationStructureBuildSizesInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildSizesInfoKHR ;
      return;
    }
    if( "eAccelerationStructureBuildSizesInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildSizesInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureBuildSizesInfoKHR ;
      return;
    }
    if( "PhysicalDeviceRayTracingPipelineFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPipelineFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceRayTracingPipelineFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPipelineFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPipelineFeaturesKHR ;
      return;
    }
    if( "RayTracingPipelineCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoKHR ;
      return;
    }
    if( "eRayTracingPipelineCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoKHR ;
      return;
    }
    if( "RayTracingShaderGroupCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoKHR ;
      return;
    }
    if( "eRayTracingShaderGroupCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoKHR ;
      return;
    }
    if( "RayTracingPipelineInterfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineInterfaceCreateInfoKHR ;
      return;
    }
    if( "eRayTracingPipelineInterfaceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineInterfaceCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineInterfaceCreateInfoKHR ;
      return;
    }
    if( "PhysicalDeviceRayQueryFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayQueryFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceRayQueryFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayQueryFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayQueryFeaturesKHR ;
      return;
    }
    if( "PipelineCoverageModulationStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageModulationStateCreateInfoNV ;
      return;
    }
    if( "ePipelineCoverageModulationStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageModulationStateCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageModulationStateCreateInfoNV ;
      return;
    }
    if( "PhysicalDeviceShaderSmBuiltinsFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceShaderSmBuiltinsFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsFeaturesNV ;
      return;
    }
    if( "PhysicalDeviceShaderSmBuiltinsPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsPropertiesNV ;
      return;
    }
    if( "ePhysicalDeviceShaderSmBuiltinsPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderSmBuiltinsPropertiesNV ;
      return;
    }
    if( "DrmFormatModifierPropertiesListEXT" == j.get< std::string >() ) {
      p = StructureType :: eDrmFormatModifierPropertiesListEXT ;
      return;
    }
    if( "eDrmFormatModifierPropertiesListEXT" == j.get< std::string >() ) {
      p = StructureType :: eDrmFormatModifierPropertiesListEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDrmFormatModifierPropertiesListEXT ;
      return;
    }
    if( "PhysicalDeviceImageDrmFormatModifierInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageDrmFormatModifierInfoEXT ;
      return;
    }
    if( "ePhysicalDeviceImageDrmFormatModifierInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageDrmFormatModifierInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageDrmFormatModifierInfoEXT ;
      return;
    }
    if( "ImageDrmFormatModifierListCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierListCreateInfoEXT ;
      return;
    }
    if( "eImageDrmFormatModifierListCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierListCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierListCreateInfoEXT ;
      return;
    }
    if( "ImageDrmFormatModifierExplicitCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierExplicitCreateInfoEXT ;
      return;
    }
    if( "eImageDrmFormatModifierExplicitCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierExplicitCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierExplicitCreateInfoEXT ;
      return;
    }
    if( "ImageDrmFormatModifierPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierPropertiesEXT ;
      return;
    }
    if( "eImageDrmFormatModifierPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImageDrmFormatModifierPropertiesEXT ;
      return;
    }
    if( "ValidationCacheCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationCacheCreateInfoEXT ;
      return;
    }
    if( "eValidationCacheCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationCacheCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationCacheCreateInfoEXT ;
      return;
    }
    if( "ShaderModuleValidationCacheCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleValidationCacheCreateInfoEXT ;
      return;
    }
    if( "eShaderModuleValidationCacheCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleValidationCacheCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eShaderModuleValidationCacheCreateInfoEXT ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "PhysicalDevicePortabilitySubsetFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetFeaturesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ePhysicalDevicePortabilitySubsetFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetFeaturesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetFeaturesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "PhysicalDevicePortabilitySubsetPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ePhysicalDevicePortabilitySubsetPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetPropertiesKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePortabilitySubsetPropertiesKHR ;
      return;
    }
#endif
    if( "PhysicalDeviceShadingRateImageFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImageFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceShadingRateImageFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImageFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImageFeaturesNV ;
      return;
    }
    if( "PhysicalDeviceShadingRateImagePropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImagePropertiesNV ;
      return;
    }
    if( "ePhysicalDeviceShadingRateImagePropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImagePropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShadingRateImagePropertiesNV ;
      return;
    }
    if( "RayTracingPipelineCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoNV ;
      return;
    }
    if( "eRayTracingPipelineCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingPipelineCreateInfoNV ;
      return;
    }
    if( "AccelerationStructureCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoNV ;
      return;
    }
    if( "eAccelerationStructureCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureCreateInfoNV ;
      return;
    }
    if( "GeometryNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryNV ;
      return;
    }
    if( "eGeometryNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GEOMETRY_NV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryNV ;
      return;
    }
    if( "GeometryTrianglesNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryTrianglesNV ;
      return;
    }
    if( "eGeometryTrianglesNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryTrianglesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryTrianglesNV ;
      return;
    }
    if( "GeometryAabbNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryAabbNV ;
      return;
    }
    if( "eGeometryAabbNV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryAabbNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV" == j.get< std::string >() ) {
      p = StructureType :: eGeometryAabbNV ;
      return;
    }
    if( "BindAccelerationStructureMemoryInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eBindAccelerationStructureMemoryInfoNV ;
      return;
    }
    if( "eBindAccelerationStructureMemoryInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eBindAccelerationStructureMemoryInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eBindAccelerationStructureMemoryInfoNV ;
      return;
    }
    if( "WriteDescriptorSetAccelerationStructureNV" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureNV ;
      return;
    }
    if( "eWriteDescriptorSetAccelerationStructureNV" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV" == j.get< std::string >() ) {
      p = StructureType :: eWriteDescriptorSetAccelerationStructureNV ;
      return;
    }
    if( "PhysicalDeviceRayTracingPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPropertiesNV ;
      return;
    }
    if( "ePhysicalDeviceRayTracingPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRayTracingPropertiesNV ;
      return;
    }
    if( "RayTracingShaderGroupCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoNV ;
      return;
    }
    if( "eRayTracingShaderGroupCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eRayTracingShaderGroupCreateInfoNV ;
      return;
    }
    if( "AccelerationStructureInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureInfoNV ;
      return;
    }
    if( "eAccelerationStructureInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureInfoNV ;
      return;
    }
    if( "PhysicalDeviceImageViewImageFormatInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageViewImageFormatInfoEXT ;
      return;
    }
    if( "ePhysicalDeviceImageViewImageFormatInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageViewImageFormatInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageViewImageFormatInfoEXT ;
      return;
    }
    if( "DeviceQueueGlobalPriorityCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueGlobalPriorityCreateInfoEXT ;
      return;
    }
    if( "eDeviceQueueGlobalPriorityCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueGlobalPriorityCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceQueueGlobalPriorityCreateInfoEXT ;
      return;
    }
    if( "ImportMemoryHostPointerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryHostPointerInfoEXT ;
      return;
    }
    if( "eImportMemoryHostPointerInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryHostPointerInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryHostPointerInfoEXT ;
      return;
    }
    if( "MemoryHostPointerPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryHostPointerPropertiesEXT ;
      return;
    }
    if( "eMemoryHostPointerPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryHostPointerPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryHostPointerPropertiesEXT ;
      return;
    }
    if( "PhysicalDeviceShaderClockFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderClockFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceShaderClockFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderClockFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderClockFeaturesKHR ;
      return;
    }
    if( "PipelineCompilerControlCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCompilerControlCreateInfoAMD ;
      return;
    }
    if( "ePipelineCompilerControlCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCompilerControlCreateInfoAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCompilerControlCreateInfoAMD ;
      return;
    }
    if( "CalibratedTimestampInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eCalibratedTimestampInfoEXT ;
      return;
    }
    if( "eCalibratedTimestampInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eCalibratedTimestampInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eCalibratedTimestampInfoEXT ;
      return;
    }
    if( "PhysicalDeviceShaderCorePropertiesAMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCorePropertiesAMD ;
      return;
    }
    if( "ePhysicalDeviceShaderCorePropertiesAMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCorePropertiesAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCorePropertiesAMD ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265CapabilitiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265CapabilitiesEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265SessionCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265SessionParametersAddInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265SessionParametersAddInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265ProfileEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265ProfileEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265PictureInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265PictureInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265PictureInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeH265DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeH265DpbSlotInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265DpbSlotInfoEXT ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVideoDecodeH265DpbSlotInfoEXT ;
      return;
    }
#endif
    if( "DeviceMemoryOverallocationCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOverallocationCreateInfoAMD ;
      return;
    }
    if( "eDeviceMemoryOverallocationCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOverallocationCreateInfoAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOverallocationCreateInfoAMD ;
      return;
    }
#if defined( VK_USE_PLATFORM_GGP )
    if( "PresentFrameTokenGGP" == j.get< std::string >() ) {
      p = StructureType :: ePresentFrameTokenGGP ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_GGP )
    if( "ePresentFrameTokenGGP" == j.get< std::string >() ) {
      p = StructureType :: ePresentFrameTokenGGP ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_GGP )
    if( "VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP" == j.get< std::string >() ) {
      p = StructureType :: ePresentFrameTokenGGP ;
      return;
    }
#endif
    if( "PipelineCreationFeedbackCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCreationFeedbackCreateInfoEXT ;
      return;
    }
    if( "ePipelineCreationFeedbackCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCreationFeedbackCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCreationFeedbackCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceMeshShaderFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceMeshShaderFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderFeaturesNV ;
      return;
    }
    if( "PhysicalDeviceMeshShaderPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderPropertiesNV ;
      return;
    }
    if( "ePhysicalDeviceMeshShaderPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMeshShaderPropertiesNV ;
      return;
    }
    if( "PhysicalDeviceExclusiveScissorFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExclusiveScissorFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceExclusiveScissorFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExclusiveScissorFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExclusiveScissorFeaturesNV ;
      return;
    }
    if( "CheckpointDataNV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointDataNV ;
      return;
    }
    if( "eCheckpointDataNV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointDataNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointDataNV ;
      return;
    }
    if( "QueueFamilyCheckpointPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointPropertiesNV ;
      return;
    }
    if( "eQueueFamilyCheckpointPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointPropertiesNV ;
      return;
    }
    if( "QueryPoolPerformanceQueryCreateInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceQueryCreateInfoINTEL ;
      return;
    }
    if( "eQueryPoolPerformanceQueryCreateInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceQueryCreateInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolPerformanceQueryCreateInfoINTEL ;
      return;
    }
    if( "InitializePerformanceApiInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eInitializePerformanceApiInfoINTEL ;
      return;
    }
    if( "eInitializePerformanceApiInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eInitializePerformanceApiInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: eInitializePerformanceApiInfoINTEL ;
      return;
    }
    if( "PerformanceMarkerInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceMarkerInfoINTEL ;
      return;
    }
    if( "ePerformanceMarkerInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceMarkerInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceMarkerInfoINTEL ;
      return;
    }
    if( "PerformanceStreamMarkerInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceStreamMarkerInfoINTEL ;
      return;
    }
    if( "ePerformanceStreamMarkerInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceStreamMarkerInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceStreamMarkerInfoINTEL ;
      return;
    }
    if( "PerformanceOverrideInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceOverrideInfoINTEL ;
      return;
    }
    if( "ePerformanceOverrideInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceOverrideInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceOverrideInfoINTEL ;
      return;
    }
    if( "PerformanceConfigurationAcquireInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceConfigurationAcquireInfoINTEL ;
      return;
    }
    if( "ePerformanceConfigurationAcquireInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceConfigurationAcquireInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: ePerformanceConfigurationAcquireInfoINTEL ;
      return;
    }
    if( "PhysicalDevicePciBusInfoPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePciBusInfoPropertiesEXT ;
      return;
    }
    if( "ePhysicalDevicePciBusInfoPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePciBusInfoPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePciBusInfoPropertiesEXT ;
      return;
    }
    if( "DisplayNativeHdrSurfaceCapabilitiesAMD" == j.get< std::string >() ) {
      p = StructureType :: eDisplayNativeHdrSurfaceCapabilitiesAMD ;
      return;
    }
    if( "eDisplayNativeHdrSurfaceCapabilitiesAMD" == j.get< std::string >() ) {
      p = StructureType :: eDisplayNativeHdrSurfaceCapabilitiesAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD" == j.get< std::string >() ) {
      p = StructureType :: eDisplayNativeHdrSurfaceCapabilitiesAMD ;
      return;
    }
    if( "SwapchainDisplayNativeHdrCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainDisplayNativeHdrCreateInfoAMD ;
      return;
    }
    if( "eSwapchainDisplayNativeHdrCreateInfoAMD" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainDisplayNativeHdrCreateInfoAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD" == j.get< std::string >() ) {
      p = StructureType :: eSwapchainDisplayNativeHdrCreateInfoAMD ;
      return;
    }
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "ImagepipeSurfaceCreateInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImagepipeSurfaceCreateInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eImagepipeSurfaceCreateInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImagepipeSurfaceCreateInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImagepipeSurfaceCreateInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_METAL_EXT )
    if( "MetalSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eMetalSurfaceCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_METAL_EXT )
    if( "eMetalSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eMetalSurfaceCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_METAL_EXT )
    if( "VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eMetalSurfaceCreateInfoEXT ;
      return;
    }
#endif
    if( "PhysicalDeviceFragmentDensityMapFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentDensityMapFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceFragmentDensityMapFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentDensityMapFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentDensityMapFeaturesEXT ;
      return;
    }
    if( "RenderPassFragmentDensityMapCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassFragmentDensityMapCreateInfoEXT ;
      return;
    }
    if( "eRenderPassFragmentDensityMapCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassFragmentDensityMapCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassFragmentDensityMapCreateInfoEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFragmentShadingRateAttachmentInfoKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFragmentShadingRateAttachmentInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFragmentShadingRateAttachmentInfoKHR ;
      return;
    }
    if( "PhysicalDeviceFragmentShadingRateKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentShadingRateKHR ;
      return;
    }
    if( "ePhysicalDeviceFragmentShadingRateKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentShadingRateKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFragmentShadingRateKHR ;
      return;
    }
    if( "PhysicalDeviceShaderCoreProperties2AMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCoreProperties2AMD ;
      return;
    }
    if( "ePhysicalDeviceShaderCoreProperties2AMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCoreProperties2AMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderCoreProperties2AMD ;
      return;
    }
    if( "PhysicalDeviceCoherentMemoryFeaturesAMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCoherentMemoryFeaturesAMD ;
      return;
    }
    if( "ePhysicalDeviceCoherentMemoryFeaturesAMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCoherentMemoryFeaturesAMD ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCoherentMemoryFeaturesAMD ;
      return;
    }
    if( "PhysicalDeviceMemoryBudgetPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryBudgetPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceMemoryBudgetPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryBudgetPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryBudgetPropertiesEXT ;
      return;
    }
    if( "PhysicalDeviceMemoryPriorityFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryPriorityFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceMemoryPriorityFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryPriorityFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryPriorityFeaturesEXT ;
      return;
    }
    if( "MemoryPriorityAllocateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryPriorityAllocateInfoEXT ;
      return;
    }
    if( "eMemoryPriorityAllocateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryPriorityAllocateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eMemoryPriorityAllocateInfoEXT ;
      return;
    }
    if( "SurfaceProtectedCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceProtectedCapabilitiesKHR ;
      return;
    }
    if( "eSurfaceProtectedCapabilitiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceProtectedCapabilitiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceProtectedCapabilitiesKHR ;
      return;
    }
    if( "BufferDeviceAddressCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressCreateInfoEXT ;
      return;
    }
    if( "eBufferDeviceAddressCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceToolPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceToolPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceToolPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceToolPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceToolPropertiesEXT ;
      return;
    }
    if( "ValidationFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFeaturesEXT ;
      return;
    }
    if( "eValidationFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eValidationFeaturesEXT ;
      return;
    }
    if( "PhysicalDevicePresentWaitFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentWaitFeaturesKHR ;
      return;
    }
    if( "ePhysicalDevicePresentWaitFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentWaitFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentWaitFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceCooperativeMatrixFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceCooperativeMatrixFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixFeaturesNV ;
      return;
    }
    if( "CooperativeMatrixPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: eCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "eCooperativeMatrixPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: eCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: eCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "PhysicalDeviceCooperativeMatrixPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "ePhysicalDeviceCooperativeMatrixPropertiesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCooperativeMatrixPropertiesNV ;
      return;
    }
    if( "PipelineCoverageReductionStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageReductionStateCreateInfoNV ;
      return;
    }
    if( "ePipelineCoverageReductionStateCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageReductionStateCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: ePipelineCoverageReductionStateCreateInfoNV ;
      return;
    }
    if( "FramebufferMixedSamplesCombinationNV" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferMixedSamplesCombinationNV ;
      return;
    }
    if( "eFramebufferMixedSamplesCombinationNV" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferMixedSamplesCombinationNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferMixedSamplesCombinationNV ;
      return;
    }
    if( "PhysicalDeviceYcbcrImageArraysFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceYcbcrImageArraysFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceYcbcrImageArraysFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceYcbcrImageArraysFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceYcbcrImageArraysFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceProvokingVertexFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceProvokingVertexFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceProvokingVertexPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceProvokingVertexPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProvokingVertexPropertiesEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "SurfaceFullScreenExclusiveInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eSurfaceFullScreenExclusiveInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "SurfaceCapabilitiesFullScreenExclusiveEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilitiesFullScreenExclusiveEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eSurfaceCapabilitiesFullScreenExclusiveEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilitiesFullScreenExclusiveEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceCapabilitiesFullScreenExclusiveEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "SurfaceFullScreenExclusiveWin32InfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveWin32InfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "eSurfaceFullScreenExclusiveWin32InfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveWin32InfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
    if( "VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSurfaceFullScreenExclusiveWin32InfoEXT ;
      return;
    }
#endif
    if( "HeadlessSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eHeadlessSurfaceCreateInfoEXT ;
      return;
    }
    if( "eHeadlessSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eHeadlessSurfaceCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eHeadlessSurfaceCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceLineRasterizationFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceLineRasterizationFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationFeaturesEXT ;
      return;
    }
    if( "PipelineRasterizationLineStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationLineStateCreateInfoEXT ;
      return;
    }
    if( "ePipelineRasterizationLineStateCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationLineStateCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineRasterizationLineStateCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceLineRasterizationPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceLineRasterizationPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceLineRasterizationPropertiesEXT ;
      return;
    }
    if( "PhysicalDeviceShaderAtomicFloatFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloatFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceShaderAtomicFloatFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloatFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloatFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceIndexTypeUint8FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIndexTypeUint8FeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceIndexTypeUint8FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIndexTypeUint8FeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIndexTypeUint8FeaturesEXT ;
      return;
    }
    if( "PipelineInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInfoKHR ;
      return;
    }
    if( "ePipelineInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineInfoKHR ;
      return;
    }
    if( "PipelineExecutablePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutablePropertiesKHR ;
      return;
    }
    if( "ePipelineExecutablePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutablePropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutablePropertiesKHR ;
      return;
    }
    if( "PipelineExecutableInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInfoKHR ;
      return;
    }
    if( "ePipelineExecutableInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInfoKHR ;
      return;
    }
    if( "PipelineExecutableStatisticKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableStatisticKHR ;
      return;
    }
    if( "ePipelineExecutableStatisticKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableStatisticKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableStatisticKHR ;
      return;
    }
    if( "PipelineExecutableInternalRepresentationKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInternalRepresentationKHR ;
      return;
    }
    if( "ePipelineExecutableInternalRepresentationKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInternalRepresentationKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineExecutableInternalRepresentationKHR ;
      return;
    }
    if( "PhysicalDeviceShaderAtomicFloat2FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloat2FeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceShaderAtomicFloat2FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloat2FeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicFloat2FeaturesEXT ;
      return;
    }
    if( "GraphicsShaderGroupCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsShaderGroupCreateInfoNV ;
      return;
    }
    if( "eGraphicsShaderGroupCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsShaderGroupCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsShaderGroupCreateInfoNV ;
      return;
    }
    if( "GraphicsPipelineShaderGroupsCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineShaderGroupsCreateInfoNV ;
      return;
    }
    if( "eGraphicsPipelineShaderGroupsCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineShaderGroupsCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eGraphicsPipelineShaderGroupsCreateInfoNV ;
      return;
    }
    if( "IndirectCommandsLayoutTokenNV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutTokenNV ;
      return;
    }
    if( "eIndirectCommandsLayoutTokenNV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutTokenNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutTokenNV ;
      return;
    }
    if( "IndirectCommandsLayoutCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutCreateInfoNV ;
      return;
    }
    if( "eIndirectCommandsLayoutCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eIndirectCommandsLayoutCreateInfoNV ;
      return;
    }
    if( "GeneratedCommandsInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsInfoNV ;
      return;
    }
    if( "eGeneratedCommandsInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsInfoNV ;
      return;
    }
    if( "GeneratedCommandsMemoryRequirementsInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsMemoryRequirementsInfoNV ;
      return;
    }
    if( "eGeneratedCommandsMemoryRequirementsInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsMemoryRequirementsInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eGeneratedCommandsMemoryRequirementsInfoNV ;
      return;
    }
    if( "RenderPassTransformBeginInfoQCOM" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassTransformBeginInfoQCOM ;
      return;
    }
    if( "eRenderPassTransformBeginInfoQCOM" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassTransformBeginInfoQCOM ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassTransformBeginInfoQCOM ;
      return;
    }
    if( "PhysicalDeviceDeviceMemoryReportFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDeviceMemoryReportFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceDeviceMemoryReportFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDeviceMemoryReportFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDeviceMemoryReportFeaturesEXT ;
      return;
    }
    if( "DeviceDeviceMemoryReportCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDeviceMemoryReportCreateInfoEXT ;
      return;
    }
    if( "eDeviceDeviceMemoryReportCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDeviceMemoryReportCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDeviceMemoryReportCreateInfoEXT ;
      return;
    }
    if( "DeviceMemoryReportCallbackDataEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryReportCallbackDataEXT ;
      return;
    }
    if( "eDeviceMemoryReportCallbackDataEXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryReportCallbackDataEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryReportCallbackDataEXT ;
      return;
    }
    if( "PhysicalDeviceRobustness2FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2FeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceRobustness2FeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2FeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2FeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceRobustness2PropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2PropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceRobustness2PropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2PropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceRobustness2PropertiesEXT ;
      return;
    }
    if( "SamplerCustomBorderColorCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCustomBorderColorCreateInfoEXT ;
      return;
    }
    if( "eSamplerCustomBorderColorCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCustomBorderColorCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerCustomBorderColorCreateInfoEXT ;
      return;
    }
    if( "PhysicalDeviceCustomBorderColorFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCustomBorderColorFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceCustomBorderColorFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCustomBorderColorFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceCustomBorderColorFeaturesEXT ;
      return;
    }
    if( "PipelineLibraryCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLibraryCreateInfoKHR ;
      return;
    }
    if( "ePipelineLibraryCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLibraryCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePipelineLibraryCreateInfoKHR ;
      return;
    }
    if( "PresentIdKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentIdKHR ;
      return;
    }
    if( "ePresentIdKHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentIdKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PRESENT_ID_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePresentIdKHR ;
      return;
    }
    if( "PhysicalDevicePresentIdFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentIdFeaturesKHR ;
      return;
    }
    if( "ePhysicalDevicePresentIdFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentIdFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePresentIdFeaturesKHR ;
      return;
    }
    if( "PhysicalDevicePrivateDataFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePrivateDataFeaturesEXT ;
      return;
    }
    if( "ePhysicalDevicePrivateDataFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePrivateDataFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePrivateDataFeaturesEXT ;
      return;
    }
    if( "DevicePrivateDataCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDevicePrivateDataCreateInfoEXT ;
      return;
    }
    if( "eDevicePrivateDataCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDevicePrivateDataCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDevicePrivateDataCreateInfoEXT ;
      return;
    }
    if( "PrivateDataSlotCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePrivateDataSlotCreateInfoEXT ;
      return;
    }
    if( "ePrivateDataSlotCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePrivateDataSlotCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePrivateDataSlotCreateInfoEXT ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeRateControlInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeRateControlInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeRateControlInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeRateControlInfoKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eVideoEncodeRateControlInfoKHR ;
      return;
    }
#endif
    if( "PhysicalDeviceDiagnosticsConfigFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiagnosticsConfigFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceDiagnosticsConfigFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiagnosticsConfigFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDiagnosticsConfigFeaturesNV ;
      return;
    }
    if( "DeviceDiagnosticsConfigCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDiagnosticsConfigCreateInfoNV ;
      return;
    }
    if( "eDeviceDiagnosticsConfigCreateInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDiagnosticsConfigCreateInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eDeviceDiagnosticsConfigCreateInfoNV ;
      return;
    }
    if( "MemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier2KHR ;
      return;
    }
    if( "eMemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_BARRIER_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryBarrier2KHR ;
      return;
    }
    if( "BufferMemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier2KHR ;
      return;
    }
    if( "eBufferMemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryBarrier2KHR ;
      return;
    }
    if( "ImageMemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier2KHR ;
      return;
    }
    if( "eImageMemoryBarrier2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryBarrier2KHR ;
      return;
    }
    if( "DependencyInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDependencyInfoKHR ;
      return;
    }
    if( "eDependencyInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDependencyInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEPENDENCY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDependencyInfoKHR ;
      return;
    }
    if( "SubmitInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo2KHR ;
      return;
    }
    if( "eSubmitInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBMIT_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubmitInfo2KHR ;
      return;
    }
    if( "SemaphoreSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSubmitInfoKHR ;
      return;
    }
    if( "eSemaphoreSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSubmitInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSubmitInfoKHR ;
      return;
    }
    if( "CommandBufferSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferSubmitInfoKHR ;
      return;
    }
    if( "eCommandBufferSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferSubmitInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCommandBufferSubmitInfoKHR ;
      return;
    }
    if( "PhysicalDeviceSynchronization2FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSynchronization2FeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceSynchronization2FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSynchronization2FeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSynchronization2FeaturesKHR ;
      return;
    }
    if( "QueueFamilyCheckpointProperties2NV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointProperties2NV ;
      return;
    }
    if( "eQueueFamilyCheckpointProperties2NV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointProperties2NV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyCheckpointProperties2NV ;
      return;
    }
    if( "CheckpointData2NV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointData2NV ;
      return;
    }
    if( "eCheckpointData2NV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointData2NV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV" == j.get< std::string >() ) {
      p = StructureType :: eCheckpointData2NV ;
      return;
    }
    if( "AccelerationStructureMotionInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureMotionInfoNV ;
      return;
    }
    if( "eAccelerationStructureMotionInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureMotionInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eAccelerationStructureMotionInfoNV ;
      return;
    }
    if( "CopyCommandTransformInfoQCOM" == j.get< std::string >() ) {
      p = StructureType :: eCopyCommandTransformInfoQCOM ;
      return;
    }
    if( "eCopyCommandTransformInfoQCOM" == j.get< std::string >() ) {
      p = StructureType :: eCopyCommandTransformInfoQCOM ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM" == j.get< std::string >() ) {
      p = StructureType :: eCopyCommandTransformInfoQCOM ;
      return;
    }
    if( "PhysicalDeviceImageRobustnessFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageRobustnessFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceImageRobustnessFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageRobustnessFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageRobustnessFeaturesEXT ;
      return;
    }
    if( "CopyBufferInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferInfo2KHR ;
      return;
    }
    if( "eCopyBufferInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferInfo2KHR ;
      return;
    }
    if( "CopyImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageInfo2KHR ;
      return;
    }
    if( "eCopyImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageInfo2KHR ;
      return;
    }
    if( "CopyBufferToImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferToImageInfo2KHR ;
      return;
    }
    if( "eCopyBufferToImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferToImageInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyBufferToImageInfo2KHR ;
      return;
    }
    if( "CopyImageToBufferInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageToBufferInfo2KHR ;
      return;
    }
    if( "eCopyImageToBufferInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageToBufferInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eCopyImageToBufferInfo2KHR ;
      return;
    }
    if( "BlitImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBlitImageInfo2KHR ;
      return;
    }
    if( "eBlitImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBlitImageInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBlitImageInfo2KHR ;
      return;
    }
    if( "ResolveImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eResolveImageInfo2KHR ;
      return;
    }
    if( "eResolveImageInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eResolveImageInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eResolveImageInfo2KHR ;
      return;
    }
    if( "BufferCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferCopy2KHR ;
      return;
    }
    if( "eBufferCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferCopy2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_COPY_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferCopy2KHR ;
      return;
    }
    if( "ImageCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageCopy2KHR ;
      return;
    }
    if( "eImageCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageCopy2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_COPY_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageCopy2KHR ;
      return;
    }
    if( "ImageBlit2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageBlit2KHR ;
      return;
    }
    if( "eImageBlit2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageBlit2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_BLIT_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageBlit2KHR ;
      return;
    }
    if( "BufferImageCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferImageCopy2KHR ;
      return;
    }
    if( "eBufferImageCopy2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferImageCopy2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferImageCopy2KHR ;
      return;
    }
    if( "ImageResolve2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageResolve2KHR ;
      return;
    }
    if( "eImageResolve2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageResolve2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageResolve2KHR ;
      return;
    }
    if( "PhysicalDevice4444FormatsFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice4444FormatsFeaturesEXT ;
      return;
    }
    if( "ePhysicalDevice4444FormatsFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice4444FormatsFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice4444FormatsFeaturesEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    if( "DirectfbSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDirectfbSurfaceCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    if( "eDirectfbSurfaceCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDirectfbSurfaceCreateInfoEXT ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    if( "VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDirectfbSurfaceCreateInfoEXT ;
      return;
    }
#endif
    if( "MutableDescriptorTypeCreateInfoVALVE" == j.get< std::string >() ) {
      p = StructureType :: eMutableDescriptorTypeCreateInfoVALVE ;
      return;
    }
    if( "eMutableDescriptorTypeCreateInfoVALVE" == j.get< std::string >() ) {
      p = StructureType :: eMutableDescriptorTypeCreateInfoVALVE ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_VALVE" == j.get< std::string >() ) {
      p = StructureType :: eMutableDescriptorTypeCreateInfoVALVE ;
      return;
    }
    if( "VertexInputBindingDescription2EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputBindingDescription2EXT ;
      return;
    }
    if( "eVertexInputBindingDescription2EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputBindingDescription2EXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputBindingDescription2EXT ;
      return;
    }
    if( "VertexInputAttributeDescription2EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputAttributeDescription2EXT ;
      return;
    }
    if( "eVertexInputAttributeDescription2EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputAttributeDescription2EXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT" == j.get< std::string >() ) {
      p = StructureType :: eVertexInputAttributeDescription2EXT ;
      return;
    }
    if( "PhysicalDeviceDrmPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDrmPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceDrmPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDrmPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDrmPropertiesEXT ;
      return;
    }
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "ImportMemoryZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eImportMemoryZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportMemoryZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "MemoryZirconHandlePropertiesFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryZirconHandlePropertiesFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eMemoryZirconHandlePropertiesFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryZirconHandlePropertiesFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_MEMORY_ZIRCON_HANDLE_PROPERTIES_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryZirconHandlePropertiesFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "MemoryGetZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eMemoryGetZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_MEMORY_GET_ZIRCON_HANDLE_INFO_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "ImportSemaphoreZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eImportSemaphoreZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_ZIRCON_HANDLE_INFO_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eImportSemaphoreZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "SemaphoreGetZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "eSemaphoreGetZirconHandleInfoFUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_GET_ZIRCON_HANDLE_INFO_FUCHSIA" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreGetZirconHandleInfoFUCHSIA ;
      return;
    }
#endif
    if( "SubpassShadingPipelineCreateInfoHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: eSubpassShadingPipelineCreateInfoHUAWEI ;
      return;
    }
    if( "eSubpassShadingPipelineCreateInfoHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: eSubpassShadingPipelineCreateInfoHUAWEI ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI" == j.get< std::string >() ) {
      p = StructureType :: eSubpassShadingPipelineCreateInfoHUAWEI ;
      return;
    }
    if( "PhysicalDeviceSubpassShadingFeaturesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingFeaturesHUAWEI ;
      return;
    }
    if( "ePhysicalDeviceSubpassShadingFeaturesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingFeaturesHUAWEI ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingFeaturesHUAWEI ;
      return;
    }
    if( "PhysicalDeviceSubpassShadingPropertiesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingPropertiesHUAWEI ;
      return;
    }
    if( "ePhysicalDeviceSubpassShadingPropertiesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingPropertiesHUAWEI ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSubpassShadingPropertiesHUAWEI ;
      return;
    }
    if( "PhysicalDeviceInvocationMaskFeaturesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInvocationMaskFeaturesHUAWEI ;
      return;
    }
    if( "ePhysicalDeviceInvocationMaskFeaturesHUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInvocationMaskFeaturesHUAWEI ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceInvocationMaskFeaturesHUAWEI ;
      return;
    }
    if( "MemoryGetRemoteAddressInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetRemoteAddressInfoNV ;
      return;
    }
    if( "eMemoryGetRemoteAddressInfoNV" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetRemoteAddressInfoNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV" == j.get< std::string >() ) {
      p = StructureType :: eMemoryGetRemoteAddressInfoNV ;
      return;
    }
    if( "PhysicalDeviceExternalMemoryRdmaFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalMemoryRdmaFeaturesNV ;
      return;
    }
    if( "ePhysicalDeviceExternalMemoryRdmaFeaturesNV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalMemoryRdmaFeaturesNV ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalMemoryRdmaFeaturesNV ;
      return;
    }
#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    if( "ScreenSurfaceCreateInfoQNX" == j.get< std::string >() ) {
      p = StructureType :: eScreenSurfaceCreateInfoQNX ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    if( "eScreenSurfaceCreateInfoQNX" == j.get< std::string >() ) {
      p = StructureType :: eScreenSurfaceCreateInfoQNX ;
      return;
    }
#endif
#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    if( "VK_STRUCTURE_TYPE_SCREEN_SURFACE_CREATE_INFO_QNX" == j.get< std::string >() ) {
      p = StructureType :: eScreenSurfaceCreateInfoQNX ;
      return;
    }
#endif
    if( "PhysicalDeviceColorWriteEnableFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceColorWriteEnableFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceColorWriteEnableFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceColorWriteEnableFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceColorWriteEnableFeaturesEXT ;
      return;
    }
    if( "PipelineColorWriteCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorWriteCreateInfoEXT ;
      return;
    }
    if( "ePipelineColorWriteCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorWriteCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePipelineColorWriteCreateInfoEXT ;
      return;
    }
    if( "QueueFamilyGlobalPriorityPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyGlobalPriorityPropertiesEXT ;
      return;
    }
    if( "eQueueFamilyGlobalPriorityPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyGlobalPriorityPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyGlobalPriorityPropertiesEXT ;
      return;
    }
    if( "PhysicalDeviceMultiDrawFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceMultiDrawFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceMultiDrawPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawPropertiesEXT ;
      return;
    }
    if( "ePhysicalDeviceMultiDrawPropertiesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawPropertiesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiDrawPropertiesEXT ;
      return;
    }
    if( "AttachmentDescription2KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2KHR ;
      return;
    }
    if( "eAttachmentDescription2KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescription2KHR ;
      return;
    }
    if( "AttachmentDescriptionStencilLayoutKHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayoutKHR ;
      return;
    }
    if( "eAttachmentDescriptionStencilLayoutKHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayoutKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentDescriptionStencilLayoutKHR ;
      return;
    }
    if( "AttachmentReference2KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2KHR ;
      return;
    }
    if( "eAttachmentReference2KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReference2KHR ;
      return;
    }
    if( "AttachmentReferenceStencilLayoutKHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayoutKHR ;
      return;
    }
    if( "eAttachmentReferenceStencilLayoutKHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayoutKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT_KHR" == j.get< std::string >() ) {
      p = StructureType :: eAttachmentReferenceStencilLayoutKHR ;
      return;
    }
    if( "BindBufferMemoryDeviceGroupInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "eBindBufferMemoryDeviceGroupInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "BindBufferMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfoKHR ;
      return;
    }
    if( "eBindBufferMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindBufferMemoryInfoKHR ;
      return;
    }
    if( "BindImageMemoryDeviceGroupInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "eBindImageMemoryDeviceGroupInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryDeviceGroupInfoKHR ;
      return;
    }
    if( "BindImageMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfoKHR ;
      return;
    }
    if( "eBindImageMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImageMemoryInfoKHR ;
      return;
    }
    if( "BindImagePlaneMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfoKHR ;
      return;
    }
    if( "eBindImagePlaneMemoryInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBindImagePlaneMemoryInfoKHR ;
      return;
    }
    if( "BufferDeviceAddressInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoEXT ;
      return;
    }
    if( "eBufferDeviceAddressInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoEXT ;
      return;
    }
    if( "BufferDeviceAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoKHR ;
      return;
    }
    if( "eBufferDeviceAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferDeviceAddressInfoKHR ;
      return;
    }
    if( "BufferMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "eBufferMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "BufferOpaqueCaptureAddressCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfoKHR ;
      return;
    }
    if( "eBufferOpaqueCaptureAddressCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eBufferOpaqueCaptureAddressCreateInfoKHR ;
      return;
    }
    if( "DebugReportCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCreateInfoEXT ;
      return;
    }
    if( "eDebugReportCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eDebugReportCreateInfoEXT ;
      return;
    }
    if( "DescriptorSetLayoutSupportKHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupportKHR ;
      return;
    }
    if( "eDescriptorSetLayoutSupportKHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupportKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorSetLayoutSupportKHR ;
      return;
    }
    if( "DescriptorUpdateTemplateCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfoKHR ;
      return;
    }
    if( "eDescriptorUpdateTemplateCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDescriptorUpdateTemplateCreateInfoKHR ;
      return;
    }
    if( "DeviceGroupBindSparseInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfoKHR ;
      return;
    }
    if( "eDeviceGroupBindSparseInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupBindSparseInfoKHR ;
      return;
    }
    if( "DeviceGroupCommandBufferBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfoKHR ;
      return;
    }
    if( "eDeviceGroupCommandBufferBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupCommandBufferBeginInfoKHR ;
      return;
    }
    if( "DeviceGroupDeviceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfoKHR ;
      return;
    }
    if( "eDeviceGroupDeviceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupDeviceCreateInfoKHR ;
      return;
    }
    if( "DeviceGroupRenderPassBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfoKHR ;
      return;
    }
    if( "eDeviceGroupRenderPassBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupRenderPassBeginInfoKHR ;
      return;
    }
    if( "DeviceGroupSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfoKHR ;
      return;
    }
    if( "eDeviceGroupSubmitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceGroupSubmitInfoKHR ;
      return;
    }
    if( "DeviceMemoryOpaqueCaptureAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfoKHR ;
      return;
    }
    if( "eDeviceMemoryOpaqueCaptureAddressInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eDeviceMemoryOpaqueCaptureAddressInfoKHR ;
      return;
    }
    if( "ExportFenceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfoKHR ;
      return;
    }
    if( "eExportFenceCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportFenceCreateInfoKHR ;
      return;
    }
    if( "ExportMemoryAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoKHR ;
      return;
    }
    if( "eExportMemoryAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportMemoryAllocateInfoKHR ;
      return;
    }
    if( "ExportSemaphoreCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfoKHR ;
      return;
    }
    if( "eExportSemaphoreCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExportSemaphoreCreateInfoKHR ;
      return;
    }
    if( "ExternalBufferPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferPropertiesKHR ;
      return;
    }
    if( "eExternalBufferPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalBufferPropertiesKHR ;
      return;
    }
    if( "ExternalFencePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalFencePropertiesKHR ;
      return;
    }
    if( "eExternalFencePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalFencePropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalFencePropertiesKHR ;
      return;
    }
    if( "ExternalImageFormatPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatPropertiesKHR ;
      return;
    }
    if( "eExternalImageFormatPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalImageFormatPropertiesKHR ;
      return;
    }
    if( "ExternalMemoryBufferCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfoKHR ;
      return;
    }
    if( "eExternalMemoryBufferCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryBufferCreateInfoKHR ;
      return;
    }
    if( "ExternalMemoryImageCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoKHR ;
      return;
    }
    if( "eExternalMemoryImageCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalMemoryImageCreateInfoKHR ;
      return;
    }
    if( "ExternalSemaphorePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphorePropertiesKHR ;
      return;
    }
    if( "eExternalSemaphorePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphorePropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: eExternalSemaphorePropertiesKHR ;
      return;
    }
    if( "FormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2KHR ;
      return;
    }
    if( "eFormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFormatProperties2KHR ;
      return;
    }
    if( "FramebufferAttachmentsCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfoKHR ;
      return;
    }
    if( "eFramebufferAttachmentsCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentsCreateInfoKHR ;
      return;
    }
    if( "FramebufferAttachmentImageInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfoKHR ;
      return;
    }
    if( "eFramebufferAttachmentImageInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eFramebufferAttachmentImageInfoKHR ;
      return;
    }
    if( "ImageFormatListCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfoKHR ;
      return;
    }
    if( "eImageFormatListCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatListCreateInfoKHR ;
      return;
    }
    if( "ImageFormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2KHR ;
      return;
    }
    if( "eImageFormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageFormatProperties2KHR ;
      return;
    }
    if( "ImageMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "eImageMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "ImagePlaneMemoryRequirementsInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfoKHR ;
      return;
    }
    if( "eImagePlaneMemoryRequirementsInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImagePlaneMemoryRequirementsInfoKHR ;
      return;
    }
    if( "ImageSparseMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "eImageSparseMemoryRequirementsInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageSparseMemoryRequirementsInfo2KHR ;
      return;
    }
    if( "ImageStencilUsageCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfoEXT ;
      return;
    }
    if( "eImageStencilUsageCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eImageStencilUsageCreateInfoEXT ;
      return;
    }
    if( "ImageViewUsageCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfoKHR ;
      return;
    }
    if( "eImageViewUsageCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eImageViewUsageCreateInfoKHR ;
      return;
    }
    if( "MemoryAllocateFlagsInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfoKHR ;
      return;
    }
    if( "eMemoryAllocateFlagsInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryAllocateFlagsInfoKHR ;
      return;
    }
    if( "MemoryDedicatedAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfoKHR ;
      return;
    }
    if( "eMemoryDedicatedAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedAllocateInfoKHR ;
      return;
    }
    if( "MemoryDedicatedRequirementsKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirementsKHR ;
      return;
    }
    if( "eMemoryDedicatedRequirementsKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirementsKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryDedicatedRequirementsKHR ;
      return;
    }
    if( "MemoryOpaqueCaptureAddressAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfoKHR ;
      return;
    }
    if( "eMemoryOpaqueCaptureAddressAllocateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryOpaqueCaptureAddressAllocateInfoKHR ;
      return;
    }
    if( "MemoryRequirements2KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2KHR ;
      return;
    }
    if( "eMemoryRequirements2KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eMemoryRequirements2KHR ;
      return;
    }
    if( "PhysicalDevice16BitStorageFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeaturesKHR ;
      return;
    }
    if( "ePhysicalDevice16BitStorageFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice16BitStorageFeaturesKHR ;
      return;
    }
    if( "PhysicalDevice8BitStorageFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeaturesKHR ;
      return;
    }
    if( "ePhysicalDevice8BitStorageFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevice8BitStorageFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceBufferAddressFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferAddressFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceBufferAddressFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferAddressFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceBufferAddressFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceDescriptorIndexingFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceDescriptorIndexingFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDescriptorIndexingFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceDriverPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverPropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceDriverPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceDriverPropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceExternalBufferInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfoKHR ;
      return;
    }
    if( "ePhysicalDeviceExternalBufferInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalBufferInfoKHR ;
      return;
    }
    if( "PhysicalDeviceExternalFenceInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfoKHR ;
      return;
    }
    if( "ePhysicalDeviceExternalFenceInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalFenceInfoKHR ;
      return;
    }
    if( "PhysicalDeviceExternalImageFormatInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfoKHR ;
      return;
    }
    if( "ePhysicalDeviceExternalImageFormatInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalImageFormatInfoKHR ;
      return;
    }
    if( "PhysicalDeviceExternalSemaphoreInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfoKHR ;
      return;
    }
    if( "ePhysicalDeviceExternalSemaphoreInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceExternalSemaphoreInfoKHR ;
      return;
    }
    if( "PhysicalDeviceFeatures2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2KHR ;
      return;
    }
    if( "ePhysicalDeviceFeatures2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFeatures2KHR ;
      return;
    }
    if( "PhysicalDeviceFloat16Int8FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloat16Int8FeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceFloat16Int8FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloat16Int8FeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloat16Int8FeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceFloatControlsPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsPropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceFloatControlsPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceFloatControlsPropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceGroupPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupPropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceGroupPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceGroupPropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceHostQueryResetFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceHostQueryResetFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceHostQueryResetFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceIdPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdPropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceIdPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceIdPropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceImageFormatInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2KHR ;
      return;
    }
    if( "ePhysicalDeviceImageFormatInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceImageFormatInfo2KHR ;
      return;
    }
    if( "PhysicalDeviceMaintenance3PropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3PropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceMaintenance3PropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3PropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMaintenance3PropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceMemoryProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2KHR ;
      return;
    }
    if( "ePhysicalDeviceMemoryProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMemoryProperties2KHR ;
      return;
    }
    if( "PhysicalDeviceMultiviewFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceMultiviewFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceMultiviewPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewPropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceMultiviewPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceMultiviewPropertiesKHR ;
      return;
    }
    if( "PhysicalDevicePointClippingPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingPropertiesKHR ;
      return;
    }
    if( "ePhysicalDevicePointClippingPropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingPropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDevicePointClippingPropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2KHR ;
      return;
    }
    if( "ePhysicalDeviceProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceProperties2KHR ;
      return;
    }
    if( "PhysicalDeviceScalarBlockLayoutFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeaturesEXT ;
      return;
    }
    if( "ePhysicalDeviceScalarBlockLayoutFeaturesEXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeaturesEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceScalarBlockLayoutFeaturesEXT ;
      return;
    }
    if( "PhysicalDeviceShaderAtomicInt64FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64FeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceShaderAtomicInt64FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64FeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderAtomicInt64FeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceShaderDrawParameterFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParameterFeatures ;
      return;
    }
    if( "ePhysicalDeviceShaderDrawParameterFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParameterFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderDrawParameterFeatures ;
      return;
    }
    if( "PhysicalDeviceShaderFloat16Int8FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8FeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceShaderFloat16Int8FeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8FeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceShaderFloat16Int8FeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceSparseImageFormatInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2KHR ;
      return;
    }
    if( "ePhysicalDeviceSparseImageFormatInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceSparseImageFormatInfo2KHR ;
      return;
    }
    if( "PhysicalDeviceTimelineSemaphoreFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceTimelineSemaphoreFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphoreFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceTimelineSemaphorePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphorePropertiesKHR ;
      return;
    }
    if( "ePhysicalDeviceTimelineSemaphorePropertiesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphorePropertiesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceTimelineSemaphorePropertiesKHR ;
      return;
    }
    if( "PhysicalDeviceVariablePointersFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceVariablePointersFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointersFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceVariablePointerFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeatures ;
      return;
    }
    if( "ePhysicalDeviceVariablePointerFeatures" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeatures ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeatures ;
      return;
    }
    if( "PhysicalDeviceVariablePointerFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceVariablePointerFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVariablePointerFeaturesKHR ;
      return;
    }
    if( "PhysicalDeviceVulkanMemoryModelFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeaturesKHR ;
      return;
    }
    if( "ePhysicalDeviceVulkanMemoryModelFeaturesKHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeaturesKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR" == j.get< std::string >() ) {
      p = StructureType :: ePhysicalDeviceVulkanMemoryModelFeaturesKHR ;
      return;
    }
    if( "QueryPoolCreateInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfoINTEL ;
      return;
    }
    if( "eQueryPoolCreateInfoINTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfoINTEL ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL" == j.get< std::string >() ) {
      p = StructureType :: eQueryPoolCreateInfoINTEL ;
      return;
    }
    if( "QueueFamilyProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2KHR ;
      return;
    }
    if( "eQueueFamilyProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eQueueFamilyProperties2KHR ;
      return;
    }
    if( "RenderPassAttachmentBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfoKHR ;
      return;
    }
    if( "eRenderPassAttachmentBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassAttachmentBeginInfoKHR ;
      return;
    }
    if( "RenderPassCreateInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2KHR ;
      return;
    }
    if( "eRenderPassCreateInfo2KHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassCreateInfo2KHR ;
      return;
    }
    if( "RenderPassMultiviewCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfoKHR ;
      return;
    }
    if( "eRenderPassMultiviewCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eRenderPassMultiviewCreateInfoKHR ;
      return;
    }
    if( "SamplerReductionModeCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfoEXT ;
      return;
    }
    if( "eSamplerReductionModeCreateInfoEXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfoEXT ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT" == j.get< std::string >() ) {
      p = StructureType :: eSamplerReductionModeCreateInfoEXT ;
      return;
    }
    if( "SamplerYcbcrConversionCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfoKHR ;
      return;
    }
    if( "eSamplerYcbcrConversionCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionCreateInfoKHR ;
      return;
    }
    if( "SamplerYcbcrConversionInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfoKHR ;
      return;
    }
    if( "eSamplerYcbcrConversionInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSamplerYcbcrConversionInfoKHR ;
      return;
    }
    if( "SemaphoreSignalInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfoKHR ;
      return;
    }
    if( "eSemaphoreSignalInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreSignalInfoKHR ;
      return;
    }
    if( "SemaphoreTypeCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfoKHR ;
      return;
    }
    if( "eSemaphoreTypeCreateInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreTypeCreateInfoKHR ;
      return;
    }
    if( "SemaphoreWaitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfoKHR ;
      return;
    }
    if( "eSemaphoreWaitInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSemaphoreWaitInfoKHR ;
      return;
    }
    if( "SparseImageFormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2KHR ;
      return;
    }
    if( "eSparseImageFormatProperties2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageFormatProperties2KHR ;
      return;
    }
    if( "SparseImageMemoryRequirements2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2KHR ;
      return;
    }
    if( "eSparseImageMemoryRequirements2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSparseImageMemoryRequirements2KHR ;
      return;
    }
    if( "SubpassBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfoKHR ;
      return;
    }
    if( "eSubpassBeginInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassBeginInfoKHR ;
      return;
    }
    if( "SubpassDependency2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2KHR ;
      return;
    }
    if( "eSubpassDependency2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDependency2KHR ;
      return;
    }
    if( "SubpassDescription2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2KHR ;
      return;
    }
    if( "eSubpassDescription2KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2KHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescription2KHR ;
      return;
    }
    if( "SubpassDescriptionDepthStencilResolveKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolveKHR ;
      return;
    }
    if( "eSubpassDescriptionDepthStencilResolveKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolveKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassDescriptionDepthStencilResolveKHR ;
      return;
    }
    if( "SubpassEndInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfoKHR ;
      return;
    }
    if( "eSubpassEndInfoKHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfoKHR ;
      return;
    }
    if( "VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR" == j.get< std::string >() ) {
      p = StructureType :: eSubpassEndInfoKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for StructureType" );
  }
  if( j.is_number() ) {
    p = StructureType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for StructureType" );
}
}
inline void from_json( const nlohmann::json &j, VkStructureType &p ) {
  VULKAN_HPP_NAMESPACE :: StructureType temp;
  from_json( j, temp );
  p = VkStructureType ( temp );
}


#endif
