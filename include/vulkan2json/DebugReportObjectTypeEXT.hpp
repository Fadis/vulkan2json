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
#ifndef VULKAN2JSON_DEBUGREPORTOBJECTTYPEEXT_HPP
#define VULKAN2JSON_DEBUGREPORTOBJECTTYPEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_DEBUG_REPORT_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DebugReportObjectTypeEXT &p ) {
  if( DebugReportObjectTypeEXT :: eUnknown == p ) {
    j = "Unknown";
    return;
  }
  if( DebugReportObjectTypeEXT :: eInstance == p ) {
    j = "Instance";
    return;
  }
  if( DebugReportObjectTypeEXT :: ePhysicalDevice == p ) {
    j = "PhysicalDevice";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDevice == p ) {
    j = "Device";
    return;
  }
  if( DebugReportObjectTypeEXT :: eQueue == p ) {
    j = "Queue";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSemaphore == p ) {
    j = "Semaphore";
    return;
  }
  if( DebugReportObjectTypeEXT :: eCommandBuffer == p ) {
    j = "CommandBuffer";
    return;
  }
  if( DebugReportObjectTypeEXT :: eFence == p ) {
    j = "Fence";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDeviceMemory == p ) {
    j = "DeviceMemory";
    return;
  }
  if( DebugReportObjectTypeEXT :: eBuffer == p ) {
    j = "Buffer";
    return;
  }
  if( DebugReportObjectTypeEXT :: eImage == p ) {
    j = "Image";
    return;
  }
  if( DebugReportObjectTypeEXT :: eEvent == p ) {
    j = "Event";
    return;
  }
  if( DebugReportObjectTypeEXT :: eQueryPool == p ) {
    j = "QueryPool";
    return;
  }
  if( DebugReportObjectTypeEXT :: eBufferView == p ) {
    j = "BufferView";
    return;
  }
  if( DebugReportObjectTypeEXT :: eImageView == p ) {
    j = "ImageView";
    return;
  }
  if( DebugReportObjectTypeEXT :: eShaderModule == p ) {
    j = "ShaderModule";
    return;
  }
  if( DebugReportObjectTypeEXT :: ePipelineCache == p ) {
    j = "PipelineCache";
    return;
  }
  if( DebugReportObjectTypeEXT :: ePipelineLayout == p ) {
    j = "PipelineLayout";
    return;
  }
  if( DebugReportObjectTypeEXT :: eRenderPass == p ) {
    j = "RenderPass";
    return;
  }
  if( DebugReportObjectTypeEXT :: ePipeline == p ) {
    j = "Pipeline";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDescriptorSetLayout == p ) {
    j = "DescriptorSetLayout";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSampler == p ) {
    j = "Sampler";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDescriptorPool == p ) {
    j = "DescriptorPool";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDescriptorSet == p ) {
    j = "DescriptorSet";
    return;
  }
  if( DebugReportObjectTypeEXT :: eFramebuffer == p ) {
    j = "Framebuffer";
    return;
  }
  if( DebugReportObjectTypeEXT :: eCommandPool == p ) {
    j = "CommandPool";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSurfaceKHR == p ) {
    j = "SurfaceKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSwapchainKHR == p ) {
    j = "SwapchainKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDebugReportCallbackEXT == p ) {
    j = "DebugReportCallbackEXT";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDisplayKHR == p ) {
    j = "DisplayKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDisplayModeKHR == p ) {
    j = "DisplayModeKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eValidationCacheEXT == p ) {
    j = "ValidationCacheEXT";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSamplerYcbcrConversion == p ) {
    j = "SamplerYcbcrConversion";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDescriptorUpdateTemplate == p ) {
    j = "DescriptorUpdateTemplate";
    return;
  }
  if( DebugReportObjectTypeEXT :: eCuModuleNVX == p ) {
    j = "CuModuleNVX";
    return;
  }
  if( DebugReportObjectTypeEXT :: eCuFunctionNVX == p ) {
    j = "CuFunctionNVX";
    return;
  }
  if( DebugReportObjectTypeEXT :: eAccelerationStructureKHR == p ) {
    j = "AccelerationStructureKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eAccelerationStructureNV == p ) {
    j = "AccelerationStructureNV";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDebugReport == p ) {
    j = "DebugReport";
    return;
  }
  if( DebugReportObjectTypeEXT :: eDescriptorUpdateTemplateKHR == p ) {
    j = "DescriptorUpdateTemplateKHR";
    return;
  }
  if( DebugReportObjectTypeEXT :: eSamplerYcbcrConversionKHR == p ) {
    j = "SamplerYcbcrConversionKHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDebugReportObjectTypeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DebugReportObjectTypeEXT &p ) {
  if( j.is_string() ) {
    if( "Unknown" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eUnknown ;
      return;
    }
    if( "eUnknown" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eUnknown ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eUnknown ;
      return;
    }
    if( "Instance" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eInstance ;
      return;
    }
    if( "eInstance" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eInstance ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eInstance ;
      return;
    }
    if( "PhysicalDevice" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePhysicalDevice ;
      return;
    }
    if( "ePhysicalDevice" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePhysicalDevice ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePhysicalDevice ;
      return;
    }
    if( "Device" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDevice ;
      return;
    }
    if( "eDevice" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDevice ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDevice ;
      return;
    }
    if( "Queue" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueue ;
      return;
    }
    if( "eQueue" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueue ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueue ;
      return;
    }
    if( "Semaphore" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSemaphore ;
      return;
    }
    if( "eSemaphore" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSemaphore ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSemaphore ;
      return;
    }
    if( "CommandBuffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandBuffer ;
      return;
    }
    if( "eCommandBuffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandBuffer ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandBuffer ;
      return;
    }
    if( "Fence" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFence ;
      return;
    }
    if( "eFence" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFence ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFence ;
      return;
    }
    if( "DeviceMemory" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDeviceMemory ;
      return;
    }
    if( "eDeviceMemory" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDeviceMemory ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDeviceMemory ;
      return;
    }
    if( "Buffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBuffer ;
      return;
    }
    if( "eBuffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBuffer ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBuffer ;
      return;
    }
    if( "Image" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImage ;
      return;
    }
    if( "eImage" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImage ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImage ;
      return;
    }
    if( "Event" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eEvent ;
      return;
    }
    if( "eEvent" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eEvent ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eEvent ;
      return;
    }
    if( "QueryPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueryPool ;
      return;
    }
    if( "eQueryPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueryPool ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eQueryPool ;
      return;
    }
    if( "BufferView" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBufferView ;
      return;
    }
    if( "eBufferView" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBufferView ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eBufferView ;
      return;
    }
    if( "ImageView" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImageView ;
      return;
    }
    if( "eImageView" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImageView ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eImageView ;
      return;
    }
    if( "ShaderModule" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eShaderModule ;
      return;
    }
    if( "eShaderModule" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eShaderModule ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eShaderModule ;
      return;
    }
    if( "PipelineCache" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineCache ;
      return;
    }
    if( "ePipelineCache" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineCache ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineCache ;
      return;
    }
    if( "PipelineLayout" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineLayout ;
      return;
    }
    if( "ePipelineLayout" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineLayout ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipelineLayout ;
      return;
    }
    if( "RenderPass" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eRenderPass ;
      return;
    }
    if( "eRenderPass" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eRenderPass ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eRenderPass ;
      return;
    }
    if( "Pipeline" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipeline ;
      return;
    }
    if( "ePipeline" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipeline ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: ePipeline ;
      return;
    }
    if( "DescriptorSetLayout" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSetLayout ;
      return;
    }
    if( "eDescriptorSetLayout" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSetLayout ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSetLayout ;
      return;
    }
    if( "Sampler" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSampler ;
      return;
    }
    if( "eSampler" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSampler ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSampler ;
      return;
    }
    if( "DescriptorPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorPool ;
      return;
    }
    if( "eDescriptorPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorPool ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorPool ;
      return;
    }
    if( "DescriptorSet" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSet ;
      return;
    }
    if( "eDescriptorSet" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSet ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorSet ;
      return;
    }
    if( "Framebuffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFramebuffer ;
      return;
    }
    if( "eFramebuffer" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFramebuffer ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eFramebuffer ;
      return;
    }
    if( "CommandPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandPool ;
      return;
    }
    if( "eCommandPool" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandPool ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCommandPool ;
      return;
    }
    if( "SurfaceKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSurfaceKHR ;
      return;
    }
    if( "eSurfaceKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSurfaceKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSurfaceKHR ;
      return;
    }
    if( "SwapchainKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSwapchainKHR ;
      return;
    }
    if( "eSwapchainKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSwapchainKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSwapchainKHR ;
      return;
    }
    if( "DebugReportCallbackEXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReportCallbackEXT ;
      return;
    }
    if( "eDebugReportCallbackEXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReportCallbackEXT ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReportCallbackEXT ;
      return;
    }
    if( "DisplayKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayKHR ;
      return;
    }
    if( "eDisplayKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayKHR ;
      return;
    }
    if( "DisplayModeKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayModeKHR ;
      return;
    }
    if( "eDisplayModeKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayModeKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDisplayModeKHR ;
      return;
    }
    if( "ValidationCacheEXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eValidationCacheEXT ;
      return;
    }
    if( "eValidationCacheEXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eValidationCacheEXT ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eValidationCacheEXT ;
      return;
    }
    if( "SamplerYcbcrConversion" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversion ;
      return;
    }
    if( "eSamplerYcbcrConversion" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversion ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversion ;
      return;
    }
    if( "DescriptorUpdateTemplate" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "eDescriptorUpdateTemplate" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplate ;
      return;
    }
    if( "CuModuleNVX" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuModuleNVX ;
      return;
    }
    if( "eCuModuleNVX" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuModuleNVX ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_CU_MODULE_NVX_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuModuleNVX ;
      return;
    }
    if( "CuFunctionNVX" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuFunctionNVX ;
      return;
    }
    if( "eCuFunctionNVX" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuFunctionNVX ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_CU_FUNCTION_NVX_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eCuFunctionNVX ;
      return;
    }
    if( "AccelerationStructureKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureKHR ;
      return;
    }
    if( "eAccelerationStructureKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureKHR ;
      return;
    }
    if( "AccelerationStructureNV" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureNV ;
      return;
    }
    if( "eAccelerationStructureNV" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureNV ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eAccelerationStructureNV ;
      return;
    }
    if( "DebugReport" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReport ;
      return;
    }
    if( "eDebugReport" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReport ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDebugReport ;
      return;
    }
    if( "DescriptorUpdateTemplateKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    if( "eDescriptorUpdateTemplateKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eDescriptorUpdateTemplateKHR ;
      return;
    }
    if( "SamplerYcbcrConversionKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversionKHR ;
      return;
    }
    if( "eSamplerYcbcrConversionKHR" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversionKHR ;
      return;
    }
    if( "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT" == j.get< std::string >() ) {
      p = DebugReportObjectTypeEXT :: eSamplerYcbcrConversionKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DebugReportObjectTypeEXT" );
  }
  if( j.is_number() ) {
    p = DebugReportObjectTypeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DebugReportObjectTypeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkDebugReportObjectTypeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT temp;
  from_json( j, temp );
  p = VkDebugReportObjectTypeEXT ( temp );
}
#endif


#endif
