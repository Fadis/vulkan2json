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
#ifndef VULKAN2JSON_OBJECTTYPE_HPP
#define VULKAN2JSON_OBJECTTYPE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ObjectType &p ) {
  if( ObjectType :: eUnknown == p ) {
    j = "Unknown";
    return;
  }
  if( ObjectType :: eInstance == p ) {
    j = "Instance";
    return;
  }
  if( ObjectType :: ePhysicalDevice == p ) {
    j = "PhysicalDevice";
    return;
  }
  if( ObjectType :: eDevice == p ) {
    j = "Device";
    return;
  }
  if( ObjectType :: eQueue == p ) {
    j = "Queue";
    return;
  }
  if( ObjectType :: eSemaphore == p ) {
    j = "Semaphore";
    return;
  }
  if( ObjectType :: eCommandBuffer == p ) {
    j = "CommandBuffer";
    return;
  }
  if( ObjectType :: eFence == p ) {
    j = "Fence";
    return;
  }
  if( ObjectType :: eDeviceMemory == p ) {
    j = "DeviceMemory";
    return;
  }
  if( ObjectType :: eBuffer == p ) {
    j = "Buffer";
    return;
  }
  if( ObjectType :: eImage == p ) {
    j = "Image";
    return;
  }
  if( ObjectType :: eEvent == p ) {
    j = "Event";
    return;
  }
  if( ObjectType :: eQueryPool == p ) {
    j = "QueryPool";
    return;
  }
  if( ObjectType :: eBufferView == p ) {
    j = "BufferView";
    return;
  }
  if( ObjectType :: eImageView == p ) {
    j = "ImageView";
    return;
  }
  if( ObjectType :: eShaderModule == p ) {
    j = "ShaderModule";
    return;
  }
  if( ObjectType :: ePipelineCache == p ) {
    j = "PipelineCache";
    return;
  }
  if( ObjectType :: ePipelineLayout == p ) {
    j = "PipelineLayout";
    return;
  }
  if( ObjectType :: eRenderPass == p ) {
    j = "RenderPass";
    return;
  }
  if( ObjectType :: ePipeline == p ) {
    j = "Pipeline";
    return;
  }
  if( ObjectType :: eDescriptorSetLayout == p ) {
    j = "DescriptorSetLayout";
    return;
  }
  if( ObjectType :: eSampler == p ) {
    j = "Sampler";
    return;
  }
  if( ObjectType :: eDescriptorPool == p ) {
    j = "DescriptorPool";
    return;
  }
  if( ObjectType :: eDescriptorSet == p ) {
    j = "DescriptorSet";
    return;
  }
  if( ObjectType :: eFramebuffer == p ) {
    j = "Framebuffer";
    return;
  }
  if( ObjectType :: eCommandPool == p ) {
    j = "CommandPool";
    return;
  }
  if( ObjectType :: eSamplerYcbcrConversion == p ) {
    j = "SamplerYcbcrConversion";
    return;
  }
  if( ObjectType :: eDescriptorUpdateTemplate == p ) {
    j = "DescriptorUpdateTemplate";
    return;
  }
  if( ObjectType :: eSurfaceKHR == p ) {
    j = "SurfaceKHR";
    return;
  }
  if( ObjectType :: eSwapchainKHR == p ) {
    j = "SwapchainKHR";
    return;
  }
  if( ObjectType :: eDisplayKHR == p ) {
    j = "DisplayKHR";
    return;
  }
  if( ObjectType :: eDisplayModeKHR == p ) {
    j = "DisplayModeKHR";
    return;
  }
  if( ObjectType :: eDebugReportCallbackEXT == p ) {
    j = "DebugReportCallbackEXT";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ObjectType :: eVideoSessionKHR == p ) {
    j = "VideoSessionKHR";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ObjectType :: eVideoSessionParametersKHR == p ) {
    j = "VideoSessionParametersKHR";
    return;
  }
#endif
  if( ObjectType :: eCuModuleNVX == p ) {
    j = "CuModuleNVX";
    return;
  }
  if( ObjectType :: eCuFunctionNVX == p ) {
    j = "CuFunctionNVX";
    return;
  }
  if( ObjectType :: eDebugUtilsMessengerEXT == p ) {
    j = "DebugUtilsMessengerEXT";
    return;
  }
  if( ObjectType :: eAccelerationStructureKHR == p ) {
    j = "AccelerationStructureKHR";
    return;
  }
  if( ObjectType :: eValidationCacheEXT == p ) {
    j = "ValidationCacheEXT";
    return;
  }
  if( ObjectType :: eAccelerationStructureNV == p ) {
    j = "AccelerationStructureNV";
    return;
  }
  if( ObjectType :: ePerformanceConfigurationINTEL == p ) {
    j = "PerformanceConfigurationINTEL";
    return;
  }
  if( ObjectType :: eDeferredOperationKHR == p ) {
    j = "DeferredOperationKHR";
    return;
  }
  if( ObjectType :: eIndirectCommandsLayoutNV == p ) {
    j = "IndirectCommandsLayoutNV";
    return;
  }
  if( ObjectType :: ePrivateDataSlotEXT == p ) {
    j = "PrivateDataSlotEXT";
    return;
  }
  if( ObjectType :: eDescriptorUpdateTemplateKHR == p ) {
    j = "DescriptorUpdateTemplateKHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkObjectType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ObjectType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ObjectType &p ) {
  if( j.is_string() ) {
    if( "Unknown" == j.get< std::string >() ) {
      p = ObjectType :: eUnknown ;
      return;
    }
    if( "eUnknown" == j.get< std::string >() ) {
      p = ObjectType :: eUnknown ;
      return;
    }
    if( "VK_OBJECT_TYPE_UNKNOWN" == j.get< std::string >() ) {
      p = ObjectType :: eUnknown ;
      return;
    }
    if( "Instance" == j.get< std::string >() ) {
      p = ObjectType :: eInstance ;
      return;
    }
    if( "eInstance" == j.get< std::string >() ) {
      p = ObjectType :: eInstance ;
      return;
    }
    if( "VK_OBJECT_TYPE_INSTANCE" == j.get< std::string >() ) {
      p = ObjectType :: eInstance ;
      return;
    }
    if( "PhysicalDevice" == j.get< std::string >() ) {
      p = ObjectType :: ePhysicalDevice ;
      return;
    }
    if( "ePhysicalDevice" == j.get< std::string >() ) {
      p = ObjectType :: ePhysicalDevice ;
      return;
    }
    if( "VK_OBJECT_TYPE_PHYSICAL_DEVICE" == j.get< std::string >() ) {
      p = ObjectType :: ePhysicalDevice ;
      return;
    }
    if( "Device" == j.get< std::string >() ) {
      p = ObjectType :: eDevice ;
      return;
    }
    if( "eDevice" == j.get< std::string >() ) {
      p = ObjectType :: eDevice ;
      return;
    }
    if( "VK_OBJECT_TYPE_DEVICE" == j.get< std::string >() ) {
      p = ObjectType :: eDevice ;
      return;
    }
    if( "Queue" == j.get< std::string >() ) {
      p = ObjectType :: eQueue ;
      return;
    }
    if( "eQueue" == j.get< std::string >() ) {
      p = ObjectType :: eQueue ;
      return;
    }
    if( "VK_OBJECT_TYPE_QUEUE" == j.get< std::string >() ) {
      p = ObjectType :: eQueue ;
      return;
    }
    if( "Semaphore" == j.get< std::string >() ) {
      p = ObjectType :: eSemaphore ;
      return;
    }
    if( "eSemaphore" == j.get< std::string >() ) {
      p = ObjectType :: eSemaphore ;
      return;
    }
    if( "VK_OBJECT_TYPE_SEMAPHORE" == j.get< std::string >() ) {
      p = ObjectType :: eSemaphore ;
      return;
    }
    if( "CommandBuffer" == j.get< std::string >() ) {
      p = ObjectType :: eCommandBuffer ;
      return;
    }
    if( "eCommandBuffer" == j.get< std::string >() ) {
      p = ObjectType :: eCommandBuffer ;
      return;
    }
    if( "VK_OBJECT_TYPE_COMMAND_BUFFER" == j.get< std::string >() ) {
      p = ObjectType :: eCommandBuffer ;
      return;
    }
    if( "Fence" == j.get< std::string >() ) {
      p = ObjectType :: eFence ;
      return;
    }
    if( "eFence" == j.get< std::string >() ) {
      p = ObjectType :: eFence ;
      return;
    }
    if( "VK_OBJECT_TYPE_FENCE" == j.get< std::string >() ) {
      p = ObjectType :: eFence ;
      return;
    }
    if( "DeviceMemory" == j.get< std::string >() ) {
      p = ObjectType :: eDeviceMemory ;
      return;
    }
    if( "eDeviceMemory" == j.get< std::string >() ) {
      p = ObjectType :: eDeviceMemory ;
      return;
    }
    if( "VK_OBJECT_TYPE_DEVICE_MEMORY" == j.get< std::string >() ) {
      p = ObjectType :: eDeviceMemory ;
      return;
    }
    if( "Buffer" == j.get< std::string >() ) {
      p = ObjectType :: eBuffer ;
      return;
    }
    if( "eBuffer" == j.get< std::string >() ) {
      p = ObjectType :: eBuffer ;
      return;
    }
    if( "VK_OBJECT_TYPE_BUFFER" == j.get< std::string >() ) {
      p = ObjectType :: eBuffer ;
      return;
    }
    if( "Image" == j.get< std::string >() ) {
      p = ObjectType :: eImage ;
      return;
    }
    if( "eImage" == j.get< std::string >() ) {
      p = ObjectType :: eImage ;
      return;
    }
    if( "VK_OBJECT_TYPE_IMAGE" == j.get< std::string >() ) {
      p = ObjectType :: eImage ;
      return;
    }
    if( "Event" == j.get< std::string >() ) {
      p = ObjectType :: eEvent ;
      return;
    }
    if( "eEvent" == j.get< std::string >() ) {
      p = ObjectType :: eEvent ;
      return;
    }
    if( "VK_OBJECT_TYPE_EVENT" == j.get< std::string >() ) {
      p = ObjectType :: eEvent ;
      return;
    }
    if( "QueryPool" == j.get< std::string >() ) {
      p = ObjectType :: eQueryPool ;
      return;
    }
    if( "eQueryPool" == j.get< std::string >() ) {
      p = ObjectType :: eQueryPool ;
      return;
    }
    if( "VK_OBJECT_TYPE_QUERY_POOL" == j.get< std::string >() ) {
      p = ObjectType :: eQueryPool ;
      return;
    }
    if( "BufferView" == j.get< std::string >() ) {
      p = ObjectType :: eBufferView ;
      return;
    }
    if( "eBufferView" == j.get< std::string >() ) {
      p = ObjectType :: eBufferView ;
      return;
    }
    if( "VK_OBJECT_TYPE_BUFFER_VIEW" == j.get< std::string >() ) {
      p = ObjectType :: eBufferView ;
      return;
    }
    if( "ImageView" == j.get< std::string >() ) {
      p = ObjectType :: eImageView ;
      return;
    }
    if( "eImageView" == j.get< std::string >() ) {
      p = ObjectType :: eImageView ;
      return;
    }
    if( "VK_OBJECT_TYPE_IMAGE_VIEW" == j.get< std::string >() ) {
      p = ObjectType :: eImageView ;
      return;
    }
    if( "ShaderModule" == j.get< std::string >() ) {
      p = ObjectType :: eShaderModule ;
      return;
    }
    if( "eShaderModule" == j.get< std::string >() ) {
      p = ObjectType :: eShaderModule ;
      return;
    }
    if( "VK_OBJECT_TYPE_SHADER_MODULE" == j.get< std::string >() ) {
      p = ObjectType :: eShaderModule ;
      return;
    }
    if( "PipelineCache" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineCache ;
      return;
    }
    if( "ePipelineCache" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineCache ;
      return;
    }
    if( "VK_OBJECT_TYPE_PIPELINE_CACHE" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineCache ;
      return;
    }
    if( "PipelineLayout" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineLayout ;
      return;
    }
    if( "ePipelineLayout" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineLayout ;
      return;
    }
    if( "VK_OBJECT_TYPE_PIPELINE_LAYOUT" == j.get< std::string >() ) {
      p = ObjectType :: ePipelineLayout ;
      return;
    }
    if( "RenderPass" == j.get< std::string >() ) {
      p = ObjectType :: eRenderPass ;
      return;
    }
    if( "eRenderPass" == j.get< std::string >() ) {
      p = ObjectType :: eRenderPass ;
      return;
    }
    if( "VK_OBJECT_TYPE_RENDER_PASS" == j.get< std::string >() ) {
      p = ObjectType :: eRenderPass ;
      return;
    }
    if( "Pipeline" == j.get< std::string >() ) {
      p = ObjectType :: ePipeline ;
      return;
    }
    if( "ePipeline" == j.get< std::string >() ) {
      p = ObjectType :: ePipeline ;
      return;
    }
    if( "VK_OBJECT_TYPE_PIPELINE" == j.get< std::string >() ) {
      p = ObjectType :: ePipeline ;
      return;
    }
    if( "DescriptorSetLayout" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSetLayout ;
      return;
    }
    if( "eDescriptorSetLayout" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSetLayout ;
      return;
    }
    if( "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSetLayout ;
      return;
    }
    if( "Sampler" == j.get< std::string >() ) {
      p = ObjectType :: eSampler ;
      return;
    }
    if( "eSampler" == j.get< std::string >() ) {
      p = ObjectType :: eSampler ;
      return;
    }
    if( "VK_OBJECT_TYPE_SAMPLER" == j.get< std::string >() ) {
      p = ObjectType :: eSampler ;
      return;
    }
    if( "DescriptorPool" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorPool ;
      return;
    }
    if( "eDescriptorPool" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorPool ;
      return;
    }
    if( "VK_OBJECT_TYPE_DESCRIPTOR_POOL" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorPool ;
      return;
    }
    if( "DescriptorSet" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSet ;
      return;
    }
    if( "eDescriptorSet" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSet ;
      return;
    }
    if( "VK_OBJECT_TYPE_DESCRIPTOR_SET" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorSet ;
      return;
    }
    if( "Framebuffer" == j.get< std::string >() ) {
      p = ObjectType :: eFramebuffer ;
      return;
    }
    if( "eFramebuffer" == j.get< std::string >() ) {
      p = ObjectType :: eFramebuffer ;
      return;
    }
    if( "VK_OBJECT_TYPE_FRAMEBUFFER" == j.get< std::string >() ) {
      p = ObjectType :: eFramebuffer ;
      return;
    }
    if( "CommandPool" == j.get< std::string >() ) {
      p = ObjectType :: eCommandPool ;
      return;
    }
    if( "eCommandPool" == j.get< std::string >() ) {
      p = ObjectType :: eCommandPool ;
      return;
    }
    if( "VK_OBJECT_TYPE_COMMAND_POOL" == j.get< std::string >() ) {
      p = ObjectType :: eCommandPool ;
      return;
    }
    if( "SamplerYcbcrConversion" == j.get< std::string >() ) {
      p = ObjectType :: eSamplerYcbcrConversion ;
      return;
    }
    if( "eSamplerYcbcrConversion" == j.get< std::string >() ) {
      p = ObjectType :: eSamplerYcbcrConversion ;
      return;
    }
    if( "VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION" == j.get< std::string >() ) {
      p = ObjectType :: eSamplerYcbcrConversion ;
      return;
    }
    if( "DescriptorUpdateTemplate" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "eDescriptorUpdateTemplate" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "SurfaceKHR" == j.get< std::string >() ) {
      p = ObjectType :: eSurfaceKHR ;
      return;
    }
    if( "eSurfaceKHR" == j.get< std::string >() ) {
      p = ObjectType :: eSurfaceKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_SURFACE_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eSurfaceKHR ;
      return;
    }
    if( "SwapchainKHR" == j.get< std::string >() ) {
      p = ObjectType :: eSwapchainKHR ;
      return;
    }
    if( "eSwapchainKHR" == j.get< std::string >() ) {
      p = ObjectType :: eSwapchainKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_SWAPCHAIN_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eSwapchainKHR ;
      return;
    }
    if( "DisplayKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayKHR ;
      return;
    }
    if( "eDisplayKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_DISPLAY_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayKHR ;
      return;
    }
    if( "DisplayModeKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayModeKHR ;
      return;
    }
    if( "eDisplayModeKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayModeKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_DISPLAY_MODE_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eDisplayModeKHR ;
      return;
    }
    if( "DebugReportCallbackEXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugReportCallbackEXT ;
      return;
    }
    if( "eDebugReportCallbackEXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugReportCallbackEXT ;
      return;
    }
    if( "VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugReportCallbackEXT ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoSessionKHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoSessionKHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_OBJECT_TYPE_VIDEO_SESSION_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoSessionParametersKHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionParametersKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoSessionParametersKHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionParametersKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_OBJECT_TYPE_VIDEO_SESSION_PARAMETERS_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eVideoSessionParametersKHR ;
      return;
    }
#endif
    if( "CuModuleNVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuModuleNVX ;
      return;
    }
    if( "eCuModuleNVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuModuleNVX ;
      return;
    }
    if( "VK_OBJECT_TYPE_CU_MODULE_NVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuModuleNVX ;
      return;
    }
    if( "CuFunctionNVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuFunctionNVX ;
      return;
    }
    if( "eCuFunctionNVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuFunctionNVX ;
      return;
    }
    if( "VK_OBJECT_TYPE_CU_FUNCTION_NVX" == j.get< std::string >() ) {
      p = ObjectType :: eCuFunctionNVX ;
      return;
    }
    if( "DebugUtilsMessengerEXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugUtilsMessengerEXT ;
      return;
    }
    if( "eDebugUtilsMessengerEXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugUtilsMessengerEXT ;
      return;
    }
    if( "VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT" == j.get< std::string >() ) {
      p = ObjectType :: eDebugUtilsMessengerEXT ;
      return;
    }
    if( "AccelerationStructureKHR" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureKHR ;
      return;
    }
    if( "eAccelerationStructureKHR" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureKHR ;
      return;
    }
    if( "ValidationCacheEXT" == j.get< std::string >() ) {
      p = ObjectType :: eValidationCacheEXT ;
      return;
    }
    if( "eValidationCacheEXT" == j.get< std::string >() ) {
      p = ObjectType :: eValidationCacheEXT ;
      return;
    }
    if( "VK_OBJECT_TYPE_VALIDATION_CACHE_EXT" == j.get< std::string >() ) {
      p = ObjectType :: eValidationCacheEXT ;
      return;
    }
    if( "AccelerationStructureNV" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureNV ;
      return;
    }
    if( "eAccelerationStructureNV" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureNV ;
      return;
    }
    if( "VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV" == j.get< std::string >() ) {
      p = ObjectType :: eAccelerationStructureNV ;
      return;
    }
    if( "PerformanceConfigurationINTEL" == j.get< std::string >() ) {
      p = ObjectType :: ePerformanceConfigurationINTEL ;
      return;
    }
    if( "ePerformanceConfigurationINTEL" == j.get< std::string >() ) {
      p = ObjectType :: ePerformanceConfigurationINTEL ;
      return;
    }
    if( "VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL" == j.get< std::string >() ) {
      p = ObjectType :: ePerformanceConfigurationINTEL ;
      return;
    }
    if( "DeferredOperationKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDeferredOperationKHR ;
      return;
    }
    if( "eDeferredOperationKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDeferredOperationKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_DEFERRED_OPERATION_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eDeferredOperationKHR ;
      return;
    }
    if( "IndirectCommandsLayoutNV" == j.get< std::string >() ) {
      p = ObjectType :: eIndirectCommandsLayoutNV ;
      return;
    }
    if( "eIndirectCommandsLayoutNV" == j.get< std::string >() ) {
      p = ObjectType :: eIndirectCommandsLayoutNV ;
      return;
    }
    if( "VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NV" == j.get< std::string >() ) {
      p = ObjectType :: eIndirectCommandsLayoutNV ;
      return;
    }
    if( "PrivateDataSlotEXT" == j.get< std::string >() ) {
      p = ObjectType :: ePrivateDataSlotEXT ;
      return;
    }
    if( "ePrivateDataSlotEXT" == j.get< std::string >() ) {
      p = ObjectType :: ePrivateDataSlotEXT ;
      return;
    }
    if( "VK_OBJECT_TYPE_PRIVATE_DATA_SLOT_EXT" == j.get< std::string >() ) {
      p = ObjectType :: ePrivateDataSlotEXT ;
      return;
    }
    if( "DescriptorUpdateTemplateKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    if( "eDescriptorUpdateTemplateKHR" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    if( "VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR" == j.get< std::string >() ) {
      p = ObjectType :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ObjectType" );
  }
  if( j.is_number() ) {
    p = ObjectType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ObjectType" );
}
}
inline void from_json( const nlohmann::json &j, VkObjectType &p ) {
  VULKAN_HPP_NAMESPACE :: ObjectType temp;
  from_json( j, temp );
  p = VkObjectType ( temp );
}
#endif


#endif
