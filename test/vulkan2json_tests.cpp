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

#define BOOST_TEST_MAIN
#include <iostream>
#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <boost/test/included/unit_test.hpp>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/Result.hpp>
BOOST_AUTO_TEST_CASE(Result) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eSuccess ;
    const nlohmann::json expected = "Success";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eNotReady ;
    const nlohmann::json expected = "NotReady";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eTimeout ;
    const nlohmann::json expected = "Timeout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eEventSet ;
    const nlohmann::json expected = "EventSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eEventReset ;
    const nlohmann::json expected = "EventReset";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eIncomplete ;
    const nlohmann::json expected = "Incomplete";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorOutOfHostMemory ;
    const nlohmann::json expected = "ErrorOutOfHostMemory";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorOutOfDeviceMemory ;
    const nlohmann::json expected = "ErrorOutOfDeviceMemory";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInitializationFailed ;
    const nlohmann::json expected = "ErrorInitializationFailed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorDeviceLost ;
    const nlohmann::json expected = "ErrorDeviceLost";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorMemoryMapFailed ;
    const nlohmann::json expected = "ErrorMemoryMapFailed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorLayerNotPresent ;
    const nlohmann::json expected = "ErrorLayerNotPresent";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorExtensionNotPresent ;
    const nlohmann::json expected = "ErrorExtensionNotPresent";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFeatureNotPresent ;
    const nlohmann::json expected = "ErrorFeatureNotPresent";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorIncompatibleDriver ;
    const nlohmann::json expected = "ErrorIncompatibleDriver";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorTooManyObjects ;
    const nlohmann::json expected = "ErrorTooManyObjects";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFormatNotSupported ;
    const nlohmann::json expected = "ErrorFormatNotSupported";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFragmentedPool ;
    const nlohmann::json expected = "ErrorFragmentedPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorUnknown ;
    const nlohmann::json expected = "ErrorUnknown";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorOutOfPoolMemory ;
    const nlohmann::json expected = "ErrorOutOfPoolMemory";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidExternalHandle ;
    const nlohmann::json expected = "ErrorInvalidExternalHandle";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFragmentation ;
    const nlohmann::json expected = "ErrorFragmentation";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidOpaqueCaptureAddress ;
    const nlohmann::json expected = "ErrorInvalidOpaqueCaptureAddress";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorSurfaceLostKHR ;
    const nlohmann::json expected = "ErrorSurfaceLostKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorNativeWindowInUseKHR ;
    const nlohmann::json expected = "ErrorNativeWindowInUseKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eSuboptimalKHR ;
    const nlohmann::json expected = "SuboptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorOutOfDateKHR ;
    const nlohmann::json expected = "ErrorOutOfDateKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorIncompatibleDisplayKHR ;
    const nlohmann::json expected = "ErrorIncompatibleDisplayKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorValidationFailedEXT ;
    const nlohmann::json expected = "ErrorValidationFailedEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidShaderNV ;
    const nlohmann::json expected = "ErrorInvalidShaderNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidDrmFormatModifierPlaneLayoutEXT ;
    const nlohmann::json expected = "ErrorInvalidDrmFormatModifierPlaneLayoutEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorNotPermittedEXT ;
    const nlohmann::json expected = "ErrorNotPermittedEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFullScreenExclusiveModeLostEXT ;
    const nlohmann::json expected = "ErrorFullScreenExclusiveModeLostEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eThreadIdleKHR ;
    const nlohmann::json expected = "ThreadIdleKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eThreadDoneKHR ;
    const nlohmann::json expected = "ThreadDoneKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eOperationDeferredKHR ;
    const nlohmann::json expected = "OperationDeferredKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eOperationNotDeferredKHR ;
    const nlohmann::json expected = "OperationNotDeferredKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: ePipelineCompileRequiredEXT ;
    const nlohmann::json expected = "PipelineCompileRequiredEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorFragmentationEXT ;
    const nlohmann::json expected = "ErrorFragmentationEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidDeviceAddressEXT ;
    const nlohmann::json expected = "ErrorInvalidDeviceAddressEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidExternalHandleKHR ;
    const nlohmann::json expected = "ErrorInvalidExternalHandleKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorInvalidOpaqueCaptureAddressKHR ;
    const nlohmann::json expected = "ErrorInvalidOpaqueCaptureAddressKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Result :: eErrorOutOfPoolMemoryKHR ;
    const nlohmann::json expected = "ErrorOutOfPoolMemoryKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Result ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/StructureType.hpp>
BOOST_AUTO_TEST_CASE(StructureType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eApplicationInfo ;
    const nlohmann::json expected = "ApplicationInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eInstanceCreateInfo ;
    const nlohmann::json expected = "InstanceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceQueueCreateInfo ;
    const nlohmann::json expected = "DeviceQueueCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceCreateInfo ;
    const nlohmann::json expected = "DeviceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubmitInfo ;
    const nlohmann::json expected = "SubmitInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryAllocateInfo ;
    const nlohmann::json expected = "MemoryAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMappedMemoryRange ;
    const nlohmann::json expected = "MappedMemoryRange";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindSparseInfo ;
    const nlohmann::json expected = "BindSparseInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFenceCreateInfo ;
    const nlohmann::json expected = "FenceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreCreateInfo ;
    const nlohmann::json expected = "SemaphoreCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eEventCreateInfo ;
    const nlohmann::json expected = "EventCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueryPoolCreateInfo ;
    const nlohmann::json expected = "QueryPoolCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferCreateInfo ;
    const nlohmann::json expected = "BufferCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferViewCreateInfo ;
    const nlohmann::json expected = "BufferViewCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageCreateInfo ;
    const nlohmann::json expected = "ImageCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewCreateInfo ;
    const nlohmann::json expected = "ImageViewCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eShaderModuleCreateInfo ;
    const nlohmann::json expected = "ShaderModuleCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCacheCreateInfo ;
    const nlohmann::json expected = "PipelineCacheCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineShaderStageCreateInfo ;
    const nlohmann::json expected = "PipelineShaderStageCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineVertexInputStateCreateInfo ;
    const nlohmann::json expected = "PipelineVertexInputStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineInputAssemblyStateCreateInfo ;
    const nlohmann::json expected = "PipelineInputAssemblyStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineTessellationStateCreateInfo ;
    const nlohmann::json expected = "PipelineTessellationStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineViewportStateCreateInfo ;
    const nlohmann::json expected = "PipelineViewportStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineRasterizationStateCreateInfo ;
    const nlohmann::json expected = "PipelineRasterizationStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineMultisampleStateCreateInfo ;
    const nlohmann::json expected = "PipelineMultisampleStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineDepthStencilStateCreateInfo ;
    const nlohmann::json expected = "PipelineDepthStencilStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineColorBlendStateCreateInfo ;
    const nlohmann::json expected = "PipelineColorBlendStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineDynamicStateCreateInfo ;
    const nlohmann::json expected = "PipelineDynamicStateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGraphicsPipelineCreateInfo ;
    const nlohmann::json expected = "GraphicsPipelineCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eComputePipelineCreateInfo ;
    const nlohmann::json expected = "ComputePipelineCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineLayoutCreateInfo ;
    const nlohmann::json expected = "PipelineLayoutCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerCreateInfo ;
    const nlohmann::json expected = "SamplerCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorSetLayoutCreateInfo ;
    const nlohmann::json expected = "DescriptorSetLayoutCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorPoolCreateInfo ;
    const nlohmann::json expected = "DescriptorPoolCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorSetAllocateInfo ;
    const nlohmann::json expected = "DescriptorSetAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWriteDescriptorSet ;
    const nlohmann::json expected = "WriteDescriptorSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyDescriptorSet ;
    const nlohmann::json expected = "CopyDescriptorSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferCreateInfo ;
    const nlohmann::json expected = "FramebufferCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassCreateInfo ;
    const nlohmann::json expected = "RenderPassCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCommandPoolCreateInfo ;
    const nlohmann::json expected = "CommandPoolCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCommandBufferAllocateInfo ;
    const nlohmann::json expected = "CommandBufferAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCommandBufferInheritanceInfo ;
    const nlohmann::json expected = "CommandBufferInheritanceInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCommandBufferBeginInfo ;
    const nlohmann::json expected = "CommandBufferBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassBeginInfo ;
    const nlohmann::json expected = "RenderPassBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferMemoryBarrier ;
    const nlohmann::json expected = "BufferMemoryBarrier";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageMemoryBarrier ;
    const nlohmann::json expected = "ImageMemoryBarrier";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryBarrier ;
    const nlohmann::json expected = "MemoryBarrier";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eLoaderInstanceCreateInfo ;
    const nlohmann::json expected = "LoaderInstanceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eLoaderDeviceCreateInfo ;
    const nlohmann::json expected = "LoaderDeviceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSubgroupProperties ;
    const nlohmann::json expected = "PhysicalDeviceSubgroupProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindBufferMemoryInfo ;
    const nlohmann::json expected = "BindBufferMemoryInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImageMemoryInfo ;
    const nlohmann::json expected = "BindImageMemoryInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevice16BitStorageFeatures ;
    const nlohmann::json expected = "PhysicalDevice16BitStorageFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryDedicatedRequirements ;
    const nlohmann::json expected = "MemoryDedicatedRequirements";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryDedicatedAllocateInfo ;
    const nlohmann::json expected = "MemoryDedicatedAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryAllocateFlagsInfo ;
    const nlohmann::json expected = "MemoryAllocateFlagsInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupRenderPassBeginInfo ;
    const nlohmann::json expected = "DeviceGroupRenderPassBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupCommandBufferBeginInfo ;
    const nlohmann::json expected = "DeviceGroupCommandBufferBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupSubmitInfo ;
    const nlohmann::json expected = "DeviceGroupSubmitInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupBindSparseInfo ;
    const nlohmann::json expected = "DeviceGroupBindSparseInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindBufferMemoryDeviceGroupInfo ;
    const nlohmann::json expected = "BindBufferMemoryDeviceGroupInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImageMemoryDeviceGroupInfo ;
    const nlohmann::json expected = "BindImageMemoryDeviceGroupInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceGroupProperties ;
    const nlohmann::json expected = "PhysicalDeviceGroupProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupDeviceCreateInfo ;
    const nlohmann::json expected = "DeviceGroupDeviceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferMemoryRequirementsInfo2 ;
    const nlohmann::json expected = "BufferMemoryRequirementsInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageMemoryRequirementsInfo2 ;
    const nlohmann::json expected = "ImageMemoryRequirementsInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageSparseMemoryRequirementsInfo2 ;
    const nlohmann::json expected = "ImageSparseMemoryRequirementsInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryRequirements2 ;
    const nlohmann::json expected = "MemoryRequirements2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSparseImageMemoryRequirements2 ;
    const nlohmann::json expected = "SparseImageMemoryRequirements2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFeatures2 ;
    const nlohmann::json expected = "PhysicalDeviceFeatures2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProperties2 ;
    const nlohmann::json expected = "PhysicalDeviceProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFormatProperties2 ;
    const nlohmann::json expected = "FormatProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageFormatProperties2 ;
    const nlohmann::json expected = "ImageFormatProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImageFormatInfo2 ;
    const nlohmann::json expected = "PhysicalDeviceImageFormatInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueueFamilyProperties2 ;
    const nlohmann::json expected = "QueueFamilyProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMemoryProperties2 ;
    const nlohmann::json expected = "PhysicalDeviceMemoryProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSparseImageFormatProperties2 ;
    const nlohmann::json expected = "SparseImageFormatProperties2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSparseImageFormatInfo2 ;
    const nlohmann::json expected = "PhysicalDeviceSparseImageFormatInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePointClippingProperties ;
    const nlohmann::json expected = "PhysicalDevicePointClippingProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassInputAttachmentAspectCreateInfo ;
    const nlohmann::json expected = "RenderPassInputAttachmentAspectCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewUsageCreateInfo ;
    const nlohmann::json expected = "ImageViewUsageCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassMultiviewCreateInfo ;
    const nlohmann::json expected = "RenderPassMultiviewCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiviewFeatures ;
    const nlohmann::json expected = "PhysicalDeviceMultiviewFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiviewProperties ;
    const nlohmann::json expected = "PhysicalDeviceMultiviewProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVariablePointersFeatures ;
    const nlohmann::json expected = "PhysicalDeviceVariablePointersFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eProtectedSubmitInfo ;
    const nlohmann::json expected = "ProtectedSubmitInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProtectedMemoryFeatures ;
    const nlohmann::json expected = "PhysicalDeviceProtectedMemoryFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProtectedMemoryProperties ;
    const nlohmann::json expected = "PhysicalDeviceProtectedMemoryProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceQueueInfo2 ;
    const nlohmann::json expected = "DeviceQueueInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerYcbcrConversionCreateInfo ;
    const nlohmann::json expected = "SamplerYcbcrConversionCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerYcbcrConversionInfo ;
    const nlohmann::json expected = "SamplerYcbcrConversionInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImagePlaneMemoryInfo ;
    const nlohmann::json expected = "BindImagePlaneMemoryInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImagePlaneMemoryRequirementsInfo ;
    const nlohmann::json expected = "ImagePlaneMemoryRequirementsInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSamplerYcbcrConversionFeatures ;
    const nlohmann::json expected = "PhysicalDeviceSamplerYcbcrConversionFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerYcbcrConversionImageFormatProperties ;
    const nlohmann::json expected = "SamplerYcbcrConversionImageFormatProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorUpdateTemplateCreateInfo ;
    const nlohmann::json expected = "DescriptorUpdateTemplateCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalImageFormatInfo ;
    const nlohmann::json expected = "PhysicalDeviceExternalImageFormatInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalImageFormatProperties ;
    const nlohmann::json expected = "ExternalImageFormatProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalBufferInfo ;
    const nlohmann::json expected = "PhysicalDeviceExternalBufferInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalBufferProperties ;
    const nlohmann::json expected = "ExternalBufferProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceIdProperties ;
    const nlohmann::json expected = "PhysicalDeviceIdProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalMemoryBufferCreateInfo ;
    const nlohmann::json expected = "ExternalMemoryBufferCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalMemoryImageCreateInfo ;
    const nlohmann::json expected = "ExternalMemoryImageCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportMemoryAllocateInfo ;
    const nlohmann::json expected = "ExportMemoryAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalFenceInfo ;
    const nlohmann::json expected = "PhysicalDeviceExternalFenceInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalFenceProperties ;
    const nlohmann::json expected = "ExternalFenceProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportFenceCreateInfo ;
    const nlohmann::json expected = "ExportFenceCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportSemaphoreCreateInfo ;
    const nlohmann::json expected = "ExportSemaphoreCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalSemaphoreInfo ;
    const nlohmann::json expected = "PhysicalDeviceExternalSemaphoreInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalSemaphoreProperties ;
    const nlohmann::json expected = "ExternalSemaphoreProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMaintenance3Properties ;
    const nlohmann::json expected = "PhysicalDeviceMaintenance3Properties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorSetLayoutSupport ;
    const nlohmann::json expected = "DescriptorSetLayoutSupport";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderDrawParametersFeatures ;
    const nlohmann::json expected = "PhysicalDeviceShaderDrawParametersFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkan11Features ;
    const nlohmann::json expected = "PhysicalDeviceVulkan11Features";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkan11Properties ;
    const nlohmann::json expected = "PhysicalDeviceVulkan11Properties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkan12Features ;
    const nlohmann::json expected = "PhysicalDeviceVulkan12Features";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkan12Properties ;
    const nlohmann::json expected = "PhysicalDeviceVulkan12Properties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageFormatListCreateInfo ;
    const nlohmann::json expected = "ImageFormatListCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentDescription2 ;
    const nlohmann::json expected = "AttachmentDescription2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentReference2 ;
    const nlohmann::json expected = "AttachmentReference2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDescription2 ;
    const nlohmann::json expected = "SubpassDescription2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDependency2 ;
    const nlohmann::json expected = "SubpassDependency2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassCreateInfo2 ;
    const nlohmann::json expected = "RenderPassCreateInfo2";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassBeginInfo ;
    const nlohmann::json expected = "SubpassBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassEndInfo ;
    const nlohmann::json expected = "SubpassEndInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevice8BitStorageFeatures ;
    const nlohmann::json expected = "PhysicalDevice8BitStorageFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDriverProperties ;
    const nlohmann::json expected = "PhysicalDeviceDriverProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderAtomicInt64Features ;
    const nlohmann::json expected = "PhysicalDeviceShaderAtomicInt64Features";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderFloat16Int8Features ;
    const nlohmann::json expected = "PhysicalDeviceShaderFloat16Int8Features";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFloatControlsProperties ;
    const nlohmann::json expected = "PhysicalDeviceFloatControlsProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorSetLayoutBindingFlagsCreateInfo ;
    const nlohmann::json expected = "DescriptorSetLayoutBindingFlagsCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDescriptorIndexingFeatures ;
    const nlohmann::json expected = "PhysicalDeviceDescriptorIndexingFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDescriptorIndexingProperties ;
    const nlohmann::json expected = "PhysicalDeviceDescriptorIndexingProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDepthStencilResolveProperties ;
    const nlohmann::json expected = "PhysicalDeviceDepthStencilResolveProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDescriptionDepthStencilResolve ;
    const nlohmann::json expected = "SubpassDescriptionDepthStencilResolve";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceScalarBlockLayoutFeatures ;
    const nlohmann::json expected = "PhysicalDeviceScalarBlockLayoutFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageStencilUsageCreateInfo ;
    const nlohmann::json expected = "ImageStencilUsageCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSamplerFilterMinmaxProperties ;
    const nlohmann::json expected = "PhysicalDeviceSamplerFilterMinmaxProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerReductionModeCreateInfo ;
    const nlohmann::json expected = "SamplerReductionModeCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkanMemoryModelFeatures ;
    const nlohmann::json expected = "PhysicalDeviceVulkanMemoryModelFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImagelessFramebufferFeatures ;
    const nlohmann::json expected = "PhysicalDeviceImagelessFramebufferFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferAttachmentsCreateInfo ;
    const nlohmann::json expected = "FramebufferAttachmentsCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferAttachmentImageInfo ;
    const nlohmann::json expected = "FramebufferAttachmentImageInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassAttachmentBeginInfo ;
    const nlohmann::json expected = "RenderPassAttachmentBeginInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentReferenceStencilLayout ;
    const nlohmann::json expected = "AttachmentReferenceStencilLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentDescriptionStencilLayout ;
    const nlohmann::json expected = "AttachmentDescriptionStencilLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceHostQueryResetFeatures ;
    const nlohmann::json expected = "PhysicalDeviceHostQueryResetFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTimelineSemaphoreFeatures ;
    const nlohmann::json expected = "PhysicalDeviceTimelineSemaphoreFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTimelineSemaphoreProperties ;
    const nlohmann::json expected = "PhysicalDeviceTimelineSemaphoreProperties";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreTypeCreateInfo ;
    const nlohmann::json expected = "SemaphoreTypeCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eTimelineSemaphoreSubmitInfo ;
    const nlohmann::json expected = "TimelineSemaphoreSubmitInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreWaitInfo ;
    const nlohmann::json expected = "SemaphoreWaitInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreSignalInfo ;
    const nlohmann::json expected = "SemaphoreSignalInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceBufferDeviceAddressFeatures ;
    const nlohmann::json expected = "PhysicalDeviceBufferDeviceAddressFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferDeviceAddressInfo ;
    const nlohmann::json expected = "BufferDeviceAddressInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferOpaqueCaptureAddressCreateInfo ;
    const nlohmann::json expected = "BufferOpaqueCaptureAddressCreateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryOpaqueCaptureAddressAllocateInfo ;
    const nlohmann::json expected = "MemoryOpaqueCaptureAddressAllocateInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceMemoryOpaqueCaptureAddressInfo ;
    const nlohmann::json expected = "DeviceMemoryOpaqueCaptureAddressInfo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSwapchainCreateInfoKHR ;
    const nlohmann::json expected = "SwapchainCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePresentInfoKHR ;
    const nlohmann::json expected = "PresentInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupPresentCapabilitiesKHR ;
    const nlohmann::json expected = "DeviceGroupPresentCapabilitiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageSwapchainCreateInfoKHR ;
    const nlohmann::json expected = "ImageSwapchainCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImageMemorySwapchainInfoKHR ;
    const nlohmann::json expected = "BindImageMemorySwapchainInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAcquireNextImageInfoKHR ;
    const nlohmann::json expected = "AcquireNextImageInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupPresentInfoKHR ;
    const nlohmann::json expected = "DeviceGroupPresentInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupSwapchainCreateInfoKHR ;
    const nlohmann::json expected = "DeviceGroupSwapchainCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayModeCreateInfoKHR ;
    const nlohmann::json expected = "DisplayModeCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplaySurfaceCreateInfoKHR ;
    const nlohmann::json expected = "DisplaySurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayPresentInfoKHR ;
    const nlohmann::json expected = "DisplayPresentInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_XLIB_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eXlibSurfaceCreateInfoKHR ;
    const nlohmann::json expected = "XlibSurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_XCB_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eXcbSurfaceCreateInfoKHR ;
    const nlohmann::json expected = "XcbSurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWaylandSurfaceCreateInfoKHR ;
    const nlohmann::json expected = "WaylandSurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAndroidSurfaceCreateInfoKHR ;
    const nlohmann::json expected = "AndroidSurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWin32SurfaceCreateInfoKHR ;
    const nlohmann::json expected = "Win32SurfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugReportCallbackCreateInfoEXT ;
    const nlohmann::json expected = "DebugReportCallbackCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugMarkerObjectNameInfoEXT ;
    const nlohmann::json expected = "DebugMarkerObjectNameInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugMarkerObjectTagInfoEXT ;
    const nlohmann::json expected = "DebugMarkerObjectTagInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugMarkerMarkerInfoEXT ;
    const nlohmann::json expected = "DebugMarkerMarkerInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoProfileKHR ;
    const nlohmann::json expected = "VideoProfileKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoCapabilitiesKHR ;
    const nlohmann::json expected = "VideoCapabilitiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoPictureResourceKHR ;
    const nlohmann::json expected = "VideoPictureResourceKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoGetMemoryPropertiesKHR ;
    const nlohmann::json expected = "VideoGetMemoryPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoBindMemoryKHR ;
    const nlohmann::json expected = "VideoBindMemoryKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoSessionCreateInfoKHR ;
    const nlohmann::json expected = "VideoSessionCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoSessionParametersCreateInfoKHR ;
    const nlohmann::json expected = "VideoSessionParametersCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoSessionParametersUpdateInfoKHR ;
    const nlohmann::json expected = "VideoSessionParametersUpdateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoBeginCodingInfoKHR ;
    const nlohmann::json expected = "VideoBeginCodingInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEndCodingInfoKHR ;
    const nlohmann::json expected = "VideoEndCodingInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoCodingControlInfoKHR ;
    const nlohmann::json expected = "VideoCodingControlInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoReferenceSlotKHR ;
    const nlohmann::json expected = "VideoReferenceSlotKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoQueueFamilyProperties2KHR ;
    const nlohmann::json expected = "VideoQueueFamilyProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoProfilesKHR ;
    const nlohmann::json expected = "VideoProfilesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVideoFormatInfoKHR ;
    const nlohmann::json expected = "PhysicalDeviceVideoFormatInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoFormatPropertiesKHR ;
    const nlohmann::json expected = "VideoFormatPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeInfoKHR ;
    const nlohmann::json expected = "VideoDecodeInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDedicatedAllocationImageCreateInfoNV ;
    const nlohmann::json expected = "DedicatedAllocationImageCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDedicatedAllocationBufferCreateInfoNV ;
    const nlohmann::json expected = "DedicatedAllocationBufferCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDedicatedAllocationMemoryAllocateInfoNV ;
    const nlohmann::json expected = "DedicatedAllocationMemoryAllocateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTransformFeedbackFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceTransformFeedbackFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTransformFeedbackPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceTransformFeedbackPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCuModuleCreateInfoNVX ;
    const nlohmann::json expected = "CuModuleCreateInfoNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCuFunctionCreateInfoNVX ;
    const nlohmann::json expected = "CuFunctionCreateInfoNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCuLaunchInfoNVX ;
    const nlohmann::json expected = "CuLaunchInfoNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewHandleInfoNVX ;
    const nlohmann::json expected = "ImageViewHandleInfoNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewAddressPropertiesNVX ;
    const nlohmann::json expected = "ImageViewAddressPropertiesNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264CapabilitiesEXT ;
    const nlohmann::json expected = "VideoEncodeH264CapabilitiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264SessionCreateInfoEXT ;
    const nlohmann::json expected = "VideoEncodeH264SessionCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264SessionParametersAddInfoEXT ;
    const nlohmann::json expected = "VideoEncodeH264SessionParametersAddInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264VclFrameInfoEXT ;
    const nlohmann::json expected = "VideoEncodeH264VclFrameInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264DpbSlotInfoEXT ;
    const nlohmann::json expected = "VideoEncodeH264DpbSlotInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264NaluSliceEXT ;
    const nlohmann::json expected = "VideoEncodeH264NaluSliceEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264EmitPictureParametersEXT ;
    const nlohmann::json expected = "VideoEncodeH264EmitPictureParametersEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeH264ProfileEXT ;
    const nlohmann::json expected = "VideoEncodeH264ProfileEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264CapabilitiesEXT ;
    const nlohmann::json expected = "VideoDecodeH264CapabilitiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264SessionCreateInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH264SessionCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264PictureInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH264PictureInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264MvcEXT ;
    const nlohmann::json expected = "VideoDecodeH264MvcEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264ProfileEXT ;
    const nlohmann::json expected = "VideoDecodeH264ProfileEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264SessionParametersAddInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH264SessionParametersAddInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH264DpbSlotInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH264DpbSlotInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eTextureLodGatherFormatPropertiesAMD ;
    const nlohmann::json expected = "TextureLodGatherFormatPropertiesAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_GGP )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eStreamDescriptorSurfaceCreateInfoGGP ;
    const nlohmann::json expected = "StreamDescriptorSurfaceCreateInfoGGP";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceCornerSampledImageFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceCornerSampledImageFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalMemoryImageCreateInfoNV ;
    const nlohmann::json expected = "ExternalMemoryImageCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportMemoryAllocateInfoNV ;
    const nlohmann::json expected = "ExportMemoryAllocateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportMemoryWin32HandleInfoNV ;
    const nlohmann::json expected = "ImportMemoryWin32HandleInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportMemoryWin32HandleInfoNV ;
    const nlohmann::json expected = "ExportMemoryWin32HandleInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWin32KeyedMutexAcquireReleaseInfoNV ;
    const nlohmann::json expected = "Win32KeyedMutexAcquireReleaseInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eValidationFlagsEXT ;
    const nlohmann::json expected = "ValidationFlagsEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_VI_NN )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eViSurfaceCreateInfoNN ;
    const nlohmann::json expected = "ViSurfaceCreateInfoNN";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewAstcDecodeModeEXT ;
    const nlohmann::json expected = "ImageViewAstcDecodeModeEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceAstcDecodeFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceAstcDecodeFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportMemoryWin32HandleInfoKHR ;
    const nlohmann::json expected = "ImportMemoryWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportMemoryWin32HandleInfoKHR ;
    const nlohmann::json expected = "ExportMemoryWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryWin32HandlePropertiesKHR ;
    const nlohmann::json expected = "MemoryWin32HandlePropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryGetWin32HandleInfoKHR ;
    const nlohmann::json expected = "MemoryGetWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportMemoryFdInfoKHR ;
    const nlohmann::json expected = "ImportMemoryFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryFdPropertiesKHR ;
    const nlohmann::json expected = "MemoryFdPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryGetFdInfoKHR ;
    const nlohmann::json expected = "MemoryGetFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWin32KeyedMutexAcquireReleaseInfoKHR ;
    const nlohmann::json expected = "Win32KeyedMutexAcquireReleaseInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportSemaphoreWin32HandleInfoKHR ;
    const nlohmann::json expected = "ImportSemaphoreWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportSemaphoreWin32HandleInfoKHR ;
    const nlohmann::json expected = "ExportSemaphoreWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eD3D12FenceSubmitInfoKHR ;
    const nlohmann::json expected = "D3D12FenceSubmitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreGetWin32HandleInfoKHR ;
    const nlohmann::json expected = "SemaphoreGetWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportSemaphoreFdInfoKHR ;
    const nlohmann::json expected = "ImportSemaphoreFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreGetFdInfoKHR ;
    const nlohmann::json expected = "SemaphoreGetFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePushDescriptorPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDevicePushDescriptorPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eConditionalRenderingBeginInfoEXT ;
    const nlohmann::json expected = "ConditionalRenderingBeginInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePresentRegionsKHR ;
    const nlohmann::json expected = "PresentRegionsKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineViewportWScalingStateCreateInfoNV ;
    const nlohmann::json expected = "PipelineViewportWScalingStateCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceCapabilities2EXT ;
    const nlohmann::json expected = "SurfaceCapabilities2EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayPowerInfoEXT ;
    const nlohmann::json expected = "DisplayPowerInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceEventInfoEXT ;
    const nlohmann::json expected = "DeviceEventInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayEventInfoEXT ;
    const nlohmann::json expected = "DisplayEventInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSwapchainCounterCreateInfoEXT ;
    const nlohmann::json expected = "SwapchainCounterCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePresentTimesInfoGOOGLE ;
    const nlohmann::json expected = "PresentTimesInfoGOOGLE";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineViewportSwizzleStateCreateInfoNV ;
    const nlohmann::json expected = "PipelineViewportSwizzleStateCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDiscardRectanglePropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceDiscardRectanglePropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineDiscardRectangleStateCreateInfoEXT ;
    const nlohmann::json expected = "PipelineDiscardRectangleStateCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDepthClipEnableFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceDepthClipEnableFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eHdrMetadataEXT ;
    const nlohmann::json expected = "HdrMetadataEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSharedPresentSurfaceCapabilitiesKHR ;
    const nlohmann::json expected = "SharedPresentSurfaceCapabilitiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportFenceWin32HandleInfoKHR ;
    const nlohmann::json expected = "ImportFenceWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportFenceWin32HandleInfoKHR ;
    const nlohmann::json expected = "ExportFenceWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFenceGetWin32HandleInfoKHR ;
    const nlohmann::json expected = "FenceGetWin32HandleInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportFenceFdInfoKHR ;
    const nlohmann::json expected = "ImportFenceFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFenceGetFdInfoKHR ;
    const nlohmann::json expected = "FenceGetFdInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePerformanceQueryFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevicePerformanceQueryFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePerformanceQueryPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDevicePerformanceQueryPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueryPoolPerformanceCreateInfoKHR ;
    const nlohmann::json expected = "QueryPoolPerformanceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceQuerySubmitInfoKHR ;
    const nlohmann::json expected = "PerformanceQuerySubmitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAcquireProfilingLockInfoKHR ;
    const nlohmann::json expected = "AcquireProfilingLockInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceCounterKHR ;
    const nlohmann::json expected = "PerformanceCounterKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceCounterDescriptionKHR ;
    const nlohmann::json expected = "PerformanceCounterDescriptionKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSurfaceInfo2KHR ;
    const nlohmann::json expected = "PhysicalDeviceSurfaceInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceCapabilities2KHR ;
    const nlohmann::json expected = "SurfaceCapabilities2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceFormat2KHR ;
    const nlohmann::json expected = "SurfaceFormat2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayProperties2KHR ;
    const nlohmann::json expected = "DisplayProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayPlaneProperties2KHR ;
    const nlohmann::json expected = "DisplayPlaneProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayModeProperties2KHR ;
    const nlohmann::json expected = "DisplayModeProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayPlaneInfo2KHR ;
    const nlohmann::json expected = "DisplayPlaneInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayPlaneCapabilities2KHR ;
    const nlohmann::json expected = "DisplayPlaneCapabilities2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_IOS_MVK )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eIosSurfaceCreateInfoMVK ;
    const nlohmann::json expected = "IosSurfaceCreateInfoMVK";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_MACOS_MVK )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMacosSurfaceCreateInfoMVK ;
    const nlohmann::json expected = "MacosSurfaceCreateInfoMVK";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugUtilsObjectNameInfoEXT ;
    const nlohmann::json expected = "DebugUtilsObjectNameInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugUtilsObjectTagInfoEXT ;
    const nlohmann::json expected = "DebugUtilsObjectTagInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugUtilsLabelEXT ;
    const nlohmann::json expected = "DebugUtilsLabelEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugUtilsMessengerCallbackDataEXT ;
    const nlohmann::json expected = "DebugUtilsMessengerCallbackDataEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugUtilsMessengerCreateInfoEXT ;
    const nlohmann::json expected = "DebugUtilsMessengerCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAndroidHardwareBufferUsageANDROID ;
    const nlohmann::json expected = "AndroidHardwareBufferUsageANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAndroidHardwareBufferPropertiesANDROID ;
    const nlohmann::json expected = "AndroidHardwareBufferPropertiesANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAndroidHardwareBufferFormatPropertiesANDROID ;
    const nlohmann::json expected = "AndroidHardwareBufferFormatPropertiesANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportAndroidHardwareBufferInfoANDROID ;
    const nlohmann::json expected = "ImportAndroidHardwareBufferInfoANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryGetAndroidHardwareBufferInfoANDROID ;
    const nlohmann::json expected = "MemoryGetAndroidHardwareBufferInfoANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalFormatANDROID ;
    const nlohmann::json expected = "ExternalFormatANDROID";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceInlineUniformBlockFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceInlineUniformBlockFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWriteDescriptorSetInlineUniformBlockEXT ;
    const nlohmann::json expected = "WriteDescriptorSetInlineUniformBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSampleLocationsInfoEXT ;
    const nlohmann::json expected = "SampleLocationsInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassSampleLocationsBeginInfoEXT ;
    const nlohmann::json expected = "RenderPassSampleLocationsBeginInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineSampleLocationsStateCreateInfoEXT ;
    const nlohmann::json expected = "PipelineSampleLocationsStateCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSampleLocationsPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceSampleLocationsPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMultisamplePropertiesEXT ;
    const nlohmann::json expected = "MultisamplePropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCoverageToColorStateCreateInfoNV ;
    const nlohmann::json expected = "PipelineCoverageToColorStateCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWriteDescriptorSetAccelerationStructureKHR ;
    const nlohmann::json expected = "WriteDescriptorSetAccelerationStructureKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureBuildGeometryInfoKHR ;
    const nlohmann::json expected = "AccelerationStructureBuildGeometryInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureDeviceAddressInfoKHR ;
    const nlohmann::json expected = "AccelerationStructureDeviceAddressInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureGeometryAabbsDataKHR ;
    const nlohmann::json expected = "AccelerationStructureGeometryAabbsDataKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureGeometryKHR ;
    const nlohmann::json expected = "AccelerationStructureGeometryKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureVersionInfoKHR ;
    const nlohmann::json expected = "AccelerationStructureVersionInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyAccelerationStructureInfoKHR ;
    const nlohmann::json expected = "CopyAccelerationStructureInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyAccelerationStructureToMemoryInfoKHR ;
    const nlohmann::json expected = "CopyAccelerationStructureToMemoryInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyMemoryToAccelerationStructureInfoKHR ;
    const nlohmann::json expected = "CopyMemoryToAccelerationStructureInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureCreateInfoKHR ;
    const nlohmann::json expected = "AccelerationStructureCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureBuildSizesInfoKHR ;
    const nlohmann::json expected = "AccelerationStructureBuildSizesInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceRayTracingPipelineFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceRayTracingPipelineFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRayTracingPipelineCreateInfoKHR ;
    const nlohmann::json expected = "RayTracingPipelineCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRayTracingShaderGroupCreateInfoKHR ;
    const nlohmann::json expected = "RayTracingShaderGroupCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRayTracingPipelineInterfaceCreateInfoKHR ;
    const nlohmann::json expected = "RayTracingPipelineInterfaceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceRayQueryFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceRayQueryFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCoverageModulationStateCreateInfoNV ;
    const nlohmann::json expected = "PipelineCoverageModulationStateCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderSmBuiltinsFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceShaderSmBuiltinsFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderSmBuiltinsPropertiesNV ;
    const nlohmann::json expected = "PhysicalDeviceShaderSmBuiltinsPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDrmFormatModifierPropertiesListEXT ;
    const nlohmann::json expected = "DrmFormatModifierPropertiesListEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImageDrmFormatModifierInfoEXT ;
    const nlohmann::json expected = "PhysicalDeviceImageDrmFormatModifierInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageDrmFormatModifierListCreateInfoEXT ;
    const nlohmann::json expected = "ImageDrmFormatModifierListCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageDrmFormatModifierExplicitCreateInfoEXT ;
    const nlohmann::json expected = "ImageDrmFormatModifierExplicitCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageDrmFormatModifierPropertiesEXT ;
    const nlohmann::json expected = "ImageDrmFormatModifierPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eValidationCacheCreateInfoEXT ;
    const nlohmann::json expected = "ValidationCacheCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eShaderModuleValidationCacheCreateInfoEXT ;
    const nlohmann::json expected = "ShaderModuleValidationCacheCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePortabilitySubsetFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevicePortabilitySubsetFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePortabilitySubsetPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDevicePortabilitySubsetPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShadingRateImageFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceShadingRateImageFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShadingRateImagePropertiesNV ;
    const nlohmann::json expected = "PhysicalDeviceShadingRateImagePropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRayTracingPipelineCreateInfoNV ;
    const nlohmann::json expected = "RayTracingPipelineCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureCreateInfoNV ;
    const nlohmann::json expected = "AccelerationStructureCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGeometryNV ;
    const nlohmann::json expected = "GeometryNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGeometryTrianglesNV ;
    const nlohmann::json expected = "GeometryTrianglesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGeometryAabbNV ;
    const nlohmann::json expected = "GeometryAabbNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindAccelerationStructureMemoryInfoNV ;
    const nlohmann::json expected = "BindAccelerationStructureMemoryInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eWriteDescriptorSetAccelerationStructureNV ;
    const nlohmann::json expected = "WriteDescriptorSetAccelerationStructureNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceRayTracingPropertiesNV ;
    const nlohmann::json expected = "PhysicalDeviceRayTracingPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRayTracingShaderGroupCreateInfoNV ;
    const nlohmann::json expected = "RayTracingShaderGroupCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureInfoNV ;
    const nlohmann::json expected = "AccelerationStructureInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImageViewImageFormatInfoEXT ;
    const nlohmann::json expected = "PhysicalDeviceImageViewImageFormatInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceQueueGlobalPriorityCreateInfoEXT ;
    const nlohmann::json expected = "DeviceQueueGlobalPriorityCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportMemoryHostPointerInfoEXT ;
    const nlohmann::json expected = "ImportMemoryHostPointerInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryHostPointerPropertiesEXT ;
    const nlohmann::json expected = "MemoryHostPointerPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderClockFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceShaderClockFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCompilerControlCreateInfoAMD ;
    const nlohmann::json expected = "PipelineCompilerControlCreateInfoAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCalibratedTimestampInfoEXT ;
    const nlohmann::json expected = "CalibratedTimestampInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderCorePropertiesAMD ;
    const nlohmann::json expected = "PhysicalDeviceShaderCorePropertiesAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265CapabilitiesEXT ;
    const nlohmann::json expected = "VideoDecodeH265CapabilitiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265SessionCreateInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH265SessionCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265SessionParametersAddInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH265SessionParametersAddInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265ProfileEXT ;
    const nlohmann::json expected = "VideoDecodeH265ProfileEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265PictureInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH265PictureInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoDecodeH265DpbSlotInfoEXT ;
    const nlohmann::json expected = "VideoDecodeH265DpbSlotInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceMemoryOverallocationCreateInfoAMD ;
    const nlohmann::json expected = "DeviceMemoryOverallocationCreateInfoAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_GGP )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePresentFrameTokenGGP ;
    const nlohmann::json expected = "PresentFrameTokenGGP";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCreationFeedbackCreateInfoEXT ;
    const nlohmann::json expected = "PipelineCreationFeedbackCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMeshShaderFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceMeshShaderFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMeshShaderPropertiesNV ;
    const nlohmann::json expected = "PhysicalDeviceMeshShaderPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExclusiveScissorFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceExclusiveScissorFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCheckpointDataNV ;
    const nlohmann::json expected = "CheckpointDataNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueueFamilyCheckpointPropertiesNV ;
    const nlohmann::json expected = "QueueFamilyCheckpointPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueryPoolPerformanceQueryCreateInfoINTEL ;
    const nlohmann::json expected = "QueryPoolPerformanceQueryCreateInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eInitializePerformanceApiInfoINTEL ;
    const nlohmann::json expected = "InitializePerformanceApiInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceMarkerInfoINTEL ;
    const nlohmann::json expected = "PerformanceMarkerInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceStreamMarkerInfoINTEL ;
    const nlohmann::json expected = "PerformanceStreamMarkerInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceOverrideInfoINTEL ;
    const nlohmann::json expected = "PerformanceOverrideInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePerformanceConfigurationAcquireInfoINTEL ;
    const nlohmann::json expected = "PerformanceConfigurationAcquireInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePciBusInfoPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDevicePciBusInfoPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDisplayNativeHdrSurfaceCapabilitiesAMD ;
    const nlohmann::json expected = "DisplayNativeHdrSurfaceCapabilitiesAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSwapchainDisplayNativeHdrCreateInfoAMD ;
    const nlohmann::json expected = "SwapchainDisplayNativeHdrCreateInfoAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImagepipeSurfaceCreateInfoFUCHSIA ;
    const nlohmann::json expected = "ImagepipeSurfaceCreateInfoFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_METAL_EXT )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMetalSurfaceCreateInfoEXT ;
    const nlohmann::json expected = "MetalSurfaceCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFragmentDensityMapFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceFragmentDensityMapFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassFragmentDensityMapCreateInfoEXT ;
    const nlohmann::json expected = "RenderPassFragmentDensityMapCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFragmentShadingRateAttachmentInfoKHR ;
    const nlohmann::json expected = "FragmentShadingRateAttachmentInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFragmentShadingRateKHR ;
    const nlohmann::json expected = "PhysicalDeviceFragmentShadingRateKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderCoreProperties2AMD ;
    const nlohmann::json expected = "PhysicalDeviceShaderCoreProperties2AMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceCoherentMemoryFeaturesAMD ;
    const nlohmann::json expected = "PhysicalDeviceCoherentMemoryFeaturesAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMemoryBudgetPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceMemoryBudgetPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMemoryPriorityFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceMemoryPriorityFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryPriorityAllocateInfoEXT ;
    const nlohmann::json expected = "MemoryPriorityAllocateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceProtectedCapabilitiesKHR ;
    const nlohmann::json expected = "SurfaceProtectedCapabilitiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferDeviceAddressCreateInfoEXT ;
    const nlohmann::json expected = "BufferDeviceAddressCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceToolPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceToolPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eValidationFeaturesEXT ;
    const nlohmann::json expected = "ValidationFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePresentWaitFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevicePresentWaitFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceCooperativeMatrixFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceCooperativeMatrixFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCooperativeMatrixPropertiesNV ;
    const nlohmann::json expected = "CooperativeMatrixPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceCooperativeMatrixPropertiesNV ;
    const nlohmann::json expected = "PhysicalDeviceCooperativeMatrixPropertiesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineCoverageReductionStateCreateInfoNV ;
    const nlohmann::json expected = "PipelineCoverageReductionStateCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferMixedSamplesCombinationNV ;
    const nlohmann::json expected = "FramebufferMixedSamplesCombinationNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceYcbcrImageArraysFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceYcbcrImageArraysFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProvokingVertexFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceProvokingVertexFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProvokingVertexPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceProvokingVertexPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceFullScreenExclusiveInfoEXT ;
    const nlohmann::json expected = "SurfaceFullScreenExclusiveInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceCapabilitiesFullScreenExclusiveEXT ;
    const nlohmann::json expected = "SurfaceCapabilitiesFullScreenExclusiveEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSurfaceFullScreenExclusiveWin32InfoEXT ;
    const nlohmann::json expected = "SurfaceFullScreenExclusiveWin32InfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eHeadlessSurfaceCreateInfoEXT ;
    const nlohmann::json expected = "HeadlessSurfaceCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceLineRasterizationFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceLineRasterizationFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineRasterizationLineStateCreateInfoEXT ;
    const nlohmann::json expected = "PipelineRasterizationLineStateCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceLineRasterizationPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceLineRasterizationPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderAtomicFloatFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceShaderAtomicFloatFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceIndexTypeUint8FeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceIndexTypeUint8FeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineInfoKHR ;
    const nlohmann::json expected = "PipelineInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineExecutablePropertiesKHR ;
    const nlohmann::json expected = "PipelineExecutablePropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineExecutableInfoKHR ;
    const nlohmann::json expected = "PipelineExecutableInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineExecutableStatisticKHR ;
    const nlohmann::json expected = "PipelineExecutableStatisticKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineExecutableInternalRepresentationKHR ;
    const nlohmann::json expected = "PipelineExecutableInternalRepresentationKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderAtomicFloat2FeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceShaderAtomicFloat2FeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGraphicsShaderGroupCreateInfoNV ;
    const nlohmann::json expected = "GraphicsShaderGroupCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGraphicsPipelineShaderGroupsCreateInfoNV ;
    const nlohmann::json expected = "GraphicsPipelineShaderGroupsCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eIndirectCommandsLayoutTokenNV ;
    const nlohmann::json expected = "IndirectCommandsLayoutTokenNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eIndirectCommandsLayoutCreateInfoNV ;
    const nlohmann::json expected = "IndirectCommandsLayoutCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGeneratedCommandsInfoNV ;
    const nlohmann::json expected = "GeneratedCommandsInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eGeneratedCommandsMemoryRequirementsInfoNV ;
    const nlohmann::json expected = "GeneratedCommandsMemoryRequirementsInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassTransformBeginInfoQCOM ;
    const nlohmann::json expected = "RenderPassTransformBeginInfoQCOM";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDeviceMemoryReportFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceDeviceMemoryReportFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceDeviceMemoryReportCreateInfoEXT ;
    const nlohmann::json expected = "DeviceDeviceMemoryReportCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceMemoryReportCallbackDataEXT ;
    const nlohmann::json expected = "DeviceMemoryReportCallbackDataEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceRobustness2FeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceRobustness2FeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceRobustness2PropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceRobustness2PropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerCustomBorderColorCreateInfoEXT ;
    const nlohmann::json expected = "SamplerCustomBorderColorCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceCustomBorderColorFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceCustomBorderColorFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineLibraryCreateInfoKHR ;
    const nlohmann::json expected = "PipelineLibraryCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePresentIdKHR ;
    const nlohmann::json expected = "PresentIdKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePresentIdFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevicePresentIdFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePrivateDataFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDevicePrivateDataFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDevicePrivateDataCreateInfoEXT ;
    const nlohmann::json expected = "DevicePrivateDataCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePrivateDataSlotCreateInfoEXT ;
    const nlohmann::json expected = "PrivateDataSlotCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeInfoKHR ;
    const nlohmann::json expected = "VideoEncodeInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVideoEncodeRateControlInfoKHR ;
    const nlohmann::json expected = "VideoEncodeRateControlInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDiagnosticsConfigFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceDiagnosticsConfigFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceDiagnosticsConfigCreateInfoNV ;
    const nlohmann::json expected = "DeviceDiagnosticsConfigCreateInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryBarrier2KHR ;
    const nlohmann::json expected = "MemoryBarrier2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferMemoryBarrier2KHR ;
    const nlohmann::json expected = "BufferMemoryBarrier2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageMemoryBarrier2KHR ;
    const nlohmann::json expected = "ImageMemoryBarrier2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDependencyInfoKHR ;
    const nlohmann::json expected = "DependencyInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubmitInfo2KHR ;
    const nlohmann::json expected = "SubmitInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreSubmitInfoKHR ;
    const nlohmann::json expected = "SemaphoreSubmitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCommandBufferSubmitInfoKHR ;
    const nlohmann::json expected = "CommandBufferSubmitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSynchronization2FeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceSynchronization2FeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueueFamilyCheckpointProperties2NV ;
    const nlohmann::json expected = "QueueFamilyCheckpointProperties2NV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCheckpointData2NV ;
    const nlohmann::json expected = "CheckpointData2NV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAccelerationStructureMotionInfoNV ;
    const nlohmann::json expected = "AccelerationStructureMotionInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyCommandTransformInfoQCOM ;
    const nlohmann::json expected = "CopyCommandTransformInfoQCOM";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImageRobustnessFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceImageRobustnessFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyBufferInfo2KHR ;
    const nlohmann::json expected = "CopyBufferInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyImageInfo2KHR ;
    const nlohmann::json expected = "CopyImageInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyBufferToImageInfo2KHR ;
    const nlohmann::json expected = "CopyBufferToImageInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eCopyImageToBufferInfo2KHR ;
    const nlohmann::json expected = "CopyImageToBufferInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBlitImageInfo2KHR ;
    const nlohmann::json expected = "BlitImageInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eResolveImageInfo2KHR ;
    const nlohmann::json expected = "ResolveImageInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferCopy2KHR ;
    const nlohmann::json expected = "BufferCopy2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageCopy2KHR ;
    const nlohmann::json expected = "ImageCopy2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageBlit2KHR ;
    const nlohmann::json expected = "ImageBlit2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferImageCopy2KHR ;
    const nlohmann::json expected = "BufferImageCopy2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageResolve2KHR ;
    const nlohmann::json expected = "ImageResolve2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevice4444FormatsFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDevice4444FormatsFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDirectfbSurfaceCreateInfoEXT ;
    const nlohmann::json expected = "DirectfbSurfaceCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMutableDescriptorTypeCreateInfoVALVE ;
    const nlohmann::json expected = "MutableDescriptorTypeCreateInfoVALVE";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVertexInputBindingDescription2EXT ;
    const nlohmann::json expected = "VertexInputBindingDescription2EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eVertexInputAttributeDescription2EXT ;
    const nlohmann::json expected = "VertexInputAttributeDescription2EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDrmPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceDrmPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportMemoryZirconHandleInfoFUCHSIA ;
    const nlohmann::json expected = "ImportMemoryZirconHandleInfoFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryZirconHandlePropertiesFUCHSIA ;
    const nlohmann::json expected = "MemoryZirconHandlePropertiesFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryGetZirconHandleInfoFUCHSIA ;
    const nlohmann::json expected = "MemoryGetZirconHandleInfoFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImportSemaphoreZirconHandleInfoFUCHSIA ;
    const nlohmann::json expected = "ImportSemaphoreZirconHandleInfoFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_USE_PLATFORM_FUCHSIA )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreGetZirconHandleInfoFUCHSIA ;
    const nlohmann::json expected = "SemaphoreGetZirconHandleInfoFUCHSIA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassShadingPipelineCreateInfoHUAWEI ;
    const nlohmann::json expected = "SubpassShadingPipelineCreateInfoHUAWEI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSubpassShadingFeaturesHUAWEI ;
    const nlohmann::json expected = "PhysicalDeviceSubpassShadingFeaturesHUAWEI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSubpassShadingPropertiesHUAWEI ;
    const nlohmann::json expected = "PhysicalDeviceSubpassShadingPropertiesHUAWEI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceInvocationMaskFeaturesHUAWEI ;
    const nlohmann::json expected = "PhysicalDeviceInvocationMaskFeaturesHUAWEI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryGetRemoteAddressInfoNV ;
    const nlohmann::json expected = "MemoryGetRemoteAddressInfoNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalMemoryRdmaFeaturesNV ;
    const nlohmann::json expected = "PhysicalDeviceExternalMemoryRdmaFeaturesNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eScreenSurfaceCreateInfoQNX ;
    const nlohmann::json expected = "ScreenSurfaceCreateInfoQNX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceColorWriteEnableFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceColorWriteEnableFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePipelineColorWriteCreateInfoEXT ;
    const nlohmann::json expected = "PipelineColorWriteCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueueFamilyGlobalPriorityPropertiesEXT ;
    const nlohmann::json expected = "QueueFamilyGlobalPriorityPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiDrawFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceMultiDrawFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiDrawPropertiesEXT ;
    const nlohmann::json expected = "PhysicalDeviceMultiDrawPropertiesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentDescription2KHR ;
    const nlohmann::json expected = "AttachmentDescription2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentDescriptionStencilLayoutKHR ;
    const nlohmann::json expected = "AttachmentDescriptionStencilLayoutKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentReference2KHR ;
    const nlohmann::json expected = "AttachmentReference2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eAttachmentReferenceStencilLayoutKHR ;
    const nlohmann::json expected = "AttachmentReferenceStencilLayoutKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindBufferMemoryDeviceGroupInfoKHR ;
    const nlohmann::json expected = "BindBufferMemoryDeviceGroupInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindBufferMemoryInfoKHR ;
    const nlohmann::json expected = "BindBufferMemoryInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImageMemoryDeviceGroupInfoKHR ;
    const nlohmann::json expected = "BindImageMemoryDeviceGroupInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImageMemoryInfoKHR ;
    const nlohmann::json expected = "BindImageMemoryInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBindImagePlaneMemoryInfoKHR ;
    const nlohmann::json expected = "BindImagePlaneMemoryInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferDeviceAddressInfoEXT ;
    const nlohmann::json expected = "BufferDeviceAddressInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferDeviceAddressInfoKHR ;
    const nlohmann::json expected = "BufferDeviceAddressInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferMemoryRequirementsInfo2KHR ;
    const nlohmann::json expected = "BufferMemoryRequirementsInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eBufferOpaqueCaptureAddressCreateInfoKHR ;
    const nlohmann::json expected = "BufferOpaqueCaptureAddressCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDebugReportCreateInfoEXT ;
    const nlohmann::json expected = "DebugReportCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorSetLayoutSupportKHR ;
    const nlohmann::json expected = "DescriptorSetLayoutSupportKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDescriptorUpdateTemplateCreateInfoKHR ;
    const nlohmann::json expected = "DescriptorUpdateTemplateCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupBindSparseInfoKHR ;
    const nlohmann::json expected = "DeviceGroupBindSparseInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupCommandBufferBeginInfoKHR ;
    const nlohmann::json expected = "DeviceGroupCommandBufferBeginInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupDeviceCreateInfoKHR ;
    const nlohmann::json expected = "DeviceGroupDeviceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupRenderPassBeginInfoKHR ;
    const nlohmann::json expected = "DeviceGroupRenderPassBeginInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceGroupSubmitInfoKHR ;
    const nlohmann::json expected = "DeviceGroupSubmitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eDeviceMemoryOpaqueCaptureAddressInfoKHR ;
    const nlohmann::json expected = "DeviceMemoryOpaqueCaptureAddressInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportFenceCreateInfoKHR ;
    const nlohmann::json expected = "ExportFenceCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportMemoryAllocateInfoKHR ;
    const nlohmann::json expected = "ExportMemoryAllocateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExportSemaphoreCreateInfoKHR ;
    const nlohmann::json expected = "ExportSemaphoreCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalBufferPropertiesKHR ;
    const nlohmann::json expected = "ExternalBufferPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalFencePropertiesKHR ;
    const nlohmann::json expected = "ExternalFencePropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalImageFormatPropertiesKHR ;
    const nlohmann::json expected = "ExternalImageFormatPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalMemoryBufferCreateInfoKHR ;
    const nlohmann::json expected = "ExternalMemoryBufferCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalMemoryImageCreateInfoKHR ;
    const nlohmann::json expected = "ExternalMemoryImageCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eExternalSemaphorePropertiesKHR ;
    const nlohmann::json expected = "ExternalSemaphorePropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFormatProperties2KHR ;
    const nlohmann::json expected = "FormatProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferAttachmentsCreateInfoKHR ;
    const nlohmann::json expected = "FramebufferAttachmentsCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eFramebufferAttachmentImageInfoKHR ;
    const nlohmann::json expected = "FramebufferAttachmentImageInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageFormatListCreateInfoKHR ;
    const nlohmann::json expected = "ImageFormatListCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageFormatProperties2KHR ;
    const nlohmann::json expected = "ImageFormatProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageMemoryRequirementsInfo2KHR ;
    const nlohmann::json expected = "ImageMemoryRequirementsInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImagePlaneMemoryRequirementsInfoKHR ;
    const nlohmann::json expected = "ImagePlaneMemoryRequirementsInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageSparseMemoryRequirementsInfo2KHR ;
    const nlohmann::json expected = "ImageSparseMemoryRequirementsInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageStencilUsageCreateInfoEXT ;
    const nlohmann::json expected = "ImageStencilUsageCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eImageViewUsageCreateInfoKHR ;
    const nlohmann::json expected = "ImageViewUsageCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryAllocateFlagsInfoKHR ;
    const nlohmann::json expected = "MemoryAllocateFlagsInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryDedicatedAllocateInfoKHR ;
    const nlohmann::json expected = "MemoryDedicatedAllocateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryDedicatedRequirementsKHR ;
    const nlohmann::json expected = "MemoryDedicatedRequirementsKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryOpaqueCaptureAddressAllocateInfoKHR ;
    const nlohmann::json expected = "MemoryOpaqueCaptureAddressAllocateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eMemoryRequirements2KHR ;
    const nlohmann::json expected = "MemoryRequirements2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevice16BitStorageFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevice16BitStorageFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevice8BitStorageFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDevice8BitStorageFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceBufferAddressFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceBufferAddressFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDescriptorIndexingFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceDescriptorIndexingFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceDriverPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceDriverPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalBufferInfoKHR ;
    const nlohmann::json expected = "PhysicalDeviceExternalBufferInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalFenceInfoKHR ;
    const nlohmann::json expected = "PhysicalDeviceExternalFenceInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalImageFormatInfoKHR ;
    const nlohmann::json expected = "PhysicalDeviceExternalImageFormatInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceExternalSemaphoreInfoKHR ;
    const nlohmann::json expected = "PhysicalDeviceExternalSemaphoreInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFeatures2KHR ;
    const nlohmann::json expected = "PhysicalDeviceFeatures2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFloat16Int8FeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceFloat16Int8FeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceFloatControlsPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceFloatControlsPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceGroupPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceGroupPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceHostQueryResetFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceHostQueryResetFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceIdPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceIdPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceImageFormatInfo2KHR ;
    const nlohmann::json expected = "PhysicalDeviceImageFormatInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMaintenance3PropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceMaintenance3PropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMemoryProperties2KHR ;
    const nlohmann::json expected = "PhysicalDeviceMemoryProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiviewFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceMultiviewFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceMultiviewPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceMultiviewPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDevicePointClippingPropertiesKHR ;
    const nlohmann::json expected = "PhysicalDevicePointClippingPropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceProperties2KHR ;
    const nlohmann::json expected = "PhysicalDeviceProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceScalarBlockLayoutFeaturesEXT ;
    const nlohmann::json expected = "PhysicalDeviceScalarBlockLayoutFeaturesEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderAtomicInt64FeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceShaderAtomicInt64FeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderDrawParameterFeatures ;
    const nlohmann::json expected = "PhysicalDeviceShaderDrawParameterFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceShaderFloat16Int8FeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceShaderFloat16Int8FeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceSparseImageFormatInfo2KHR ;
    const nlohmann::json expected = "PhysicalDeviceSparseImageFormatInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTimelineSemaphoreFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceTimelineSemaphoreFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceTimelineSemaphorePropertiesKHR ;
    const nlohmann::json expected = "PhysicalDeviceTimelineSemaphorePropertiesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVariablePointersFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceVariablePointersFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVariablePointerFeatures ;
    const nlohmann::json expected = "PhysicalDeviceVariablePointerFeatures";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVariablePointerFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceVariablePointerFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: ePhysicalDeviceVulkanMemoryModelFeaturesKHR ;
    const nlohmann::json expected = "PhysicalDeviceVulkanMemoryModelFeaturesKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueryPoolCreateInfoINTEL ;
    const nlohmann::json expected = "QueryPoolCreateInfoINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eQueueFamilyProperties2KHR ;
    const nlohmann::json expected = "QueueFamilyProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassAttachmentBeginInfoKHR ;
    const nlohmann::json expected = "RenderPassAttachmentBeginInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassCreateInfo2KHR ;
    const nlohmann::json expected = "RenderPassCreateInfo2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eRenderPassMultiviewCreateInfoKHR ;
    const nlohmann::json expected = "RenderPassMultiviewCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerReductionModeCreateInfoEXT ;
    const nlohmann::json expected = "SamplerReductionModeCreateInfoEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerYcbcrConversionCreateInfoKHR ;
    const nlohmann::json expected = "SamplerYcbcrConversionCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSamplerYcbcrConversionInfoKHR ;
    const nlohmann::json expected = "SamplerYcbcrConversionInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreSignalInfoKHR ;
    const nlohmann::json expected = "SemaphoreSignalInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreTypeCreateInfoKHR ;
    const nlohmann::json expected = "SemaphoreTypeCreateInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSemaphoreWaitInfoKHR ;
    const nlohmann::json expected = "SemaphoreWaitInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSparseImageFormatProperties2KHR ;
    const nlohmann::json expected = "SparseImageFormatProperties2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSparseImageMemoryRequirements2KHR ;
    const nlohmann::json expected = "SparseImageMemoryRequirements2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassBeginInfoKHR ;
    const nlohmann::json expected = "SubpassBeginInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDependency2KHR ;
    const nlohmann::json expected = "SubpassDependency2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDescription2KHR ;
    const nlohmann::json expected = "SubpassDescription2KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassDescriptionDepthStencilResolveKHR ;
    const nlohmann::json expected = "SubpassDescriptionDepthStencilResolveKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StructureType :: eSubpassEndInfoKHR ;
    const nlohmann::json expected = "SubpassEndInfoKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StructureType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ObjectType.hpp>
BOOST_AUTO_TEST_CASE(ObjectType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eUnknown ;
    const nlohmann::json expected = "Unknown";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eInstance ;
    const nlohmann::json expected = "Instance";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePhysicalDevice ;
    const nlohmann::json expected = "PhysicalDevice";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eQueue ;
    const nlohmann::json expected = "Queue";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eSemaphore ;
    const nlohmann::json expected = "Semaphore";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eCommandBuffer ;
    const nlohmann::json expected = "CommandBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eFence ;
    const nlohmann::json expected = "Fence";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDeviceMemory ;
    const nlohmann::json expected = "DeviceMemory";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eBuffer ;
    const nlohmann::json expected = "Buffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eImage ;
    const nlohmann::json expected = "Image";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eEvent ;
    const nlohmann::json expected = "Event";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eQueryPool ;
    const nlohmann::json expected = "QueryPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eBufferView ;
    const nlohmann::json expected = "BufferView";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eImageView ;
    const nlohmann::json expected = "ImageView";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eShaderModule ;
    const nlohmann::json expected = "ShaderModule";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePipelineCache ;
    const nlohmann::json expected = "PipelineCache";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePipelineLayout ;
    const nlohmann::json expected = "PipelineLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eRenderPass ;
    const nlohmann::json expected = "RenderPass";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePipeline ;
    const nlohmann::json expected = "Pipeline";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDescriptorSetLayout ;
    const nlohmann::json expected = "DescriptorSetLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eSampler ;
    const nlohmann::json expected = "Sampler";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDescriptorPool ;
    const nlohmann::json expected = "DescriptorPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDescriptorSet ;
    const nlohmann::json expected = "DescriptorSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eFramebuffer ;
    const nlohmann::json expected = "Framebuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eCommandPool ;
    const nlohmann::json expected = "CommandPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eSamplerYcbcrConversion ;
    const nlohmann::json expected = "SamplerYcbcrConversion";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDescriptorUpdateTemplate ;
    const nlohmann::json expected = "DescriptorUpdateTemplate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eSurfaceKHR ;
    const nlohmann::json expected = "SurfaceKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eSwapchainKHR ;
    const nlohmann::json expected = "SwapchainKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDisplayKHR ;
    const nlohmann::json expected = "DisplayKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDisplayModeKHR ;
    const nlohmann::json expected = "DisplayModeKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDebugReportCallbackEXT ;
    const nlohmann::json expected = "DebugReportCallbackEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eVideoSessionKHR ;
    const nlohmann::json expected = "VideoSessionKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eVideoSessionParametersKHR ;
    const nlohmann::json expected = "VideoSessionParametersKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eCuModuleNVX ;
    const nlohmann::json expected = "CuModuleNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eCuFunctionNVX ;
    const nlohmann::json expected = "CuFunctionNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDebugUtilsMessengerEXT ;
    const nlohmann::json expected = "DebugUtilsMessengerEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eAccelerationStructureKHR ;
    const nlohmann::json expected = "AccelerationStructureKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eValidationCacheEXT ;
    const nlohmann::json expected = "ValidationCacheEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eAccelerationStructureNV ;
    const nlohmann::json expected = "AccelerationStructureNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePerformanceConfigurationINTEL ;
    const nlohmann::json expected = "PerformanceConfigurationINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDeferredOperationKHR ;
    const nlohmann::json expected = "DeferredOperationKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eIndirectCommandsLayoutNV ;
    const nlohmann::json expected = "IndirectCommandsLayoutNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: ePrivateDataSlotEXT ;
    const nlohmann::json expected = "PrivateDataSlotEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ObjectType :: eDescriptorUpdateTemplateKHR ;
    const nlohmann::json expected = "DescriptorUpdateTemplateKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ObjectType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/VendorId.hpp>
BOOST_AUTO_TEST_CASE(VendorId) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VendorId :: eVIV ;
    const nlohmann::json expected = "VIV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VendorId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VendorId :: eVSI ;
    const nlohmann::json expected = "VSI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VendorId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VendorId :: eKazan ;
    const nlohmann::json expected = "Kazan";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VendorId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VendorId :: eCodeplay ;
    const nlohmann::json expected = "Codeplay";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VendorId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VendorId :: eMESA ;
    const nlohmann::json expected = "MESA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VendorId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PipelineCacheHeaderVersion.hpp>
BOOST_AUTO_TEST_CASE(PipelineCacheHeaderVersion) {
}
#include <vulkan2json/Format.hpp>
BOOST_AUTO_TEST_CASE(Format) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eUndefined ;
    const nlohmann::json expected = "Undefined";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR4G4UnormPack8 ;
    const nlohmann::json expected = "R4G4UnormPack8";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR4G4B4A4UnormPack16 ;
    const nlohmann::json expected = "R4G4B4A4UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB4G4R4A4UnormPack16 ;
    const nlohmann::json expected = "B4G4R4A4UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR5G6B5UnormPack16 ;
    const nlohmann::json expected = "R5G6B5UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB5G6R5UnormPack16 ;
    const nlohmann::json expected = "B5G6R5UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR5G5B5A1UnormPack16 ;
    const nlohmann::json expected = "R5G5B5A1UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB5G5R5A1UnormPack16 ;
    const nlohmann::json expected = "B5G5R5A1UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA1R5G5B5UnormPack16 ;
    const nlohmann::json expected = "A1R5G5B5UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Unorm ;
    const nlohmann::json expected = "R8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Snorm ;
    const nlohmann::json expected = "R8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Uscaled ;
    const nlohmann::json expected = "R8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Sscaled ;
    const nlohmann::json expected = "R8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Uint ;
    const nlohmann::json expected = "R8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Sint ;
    const nlohmann::json expected = "R8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8Srgb ;
    const nlohmann::json expected = "R8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Unorm ;
    const nlohmann::json expected = "R8G8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Snorm ;
    const nlohmann::json expected = "R8G8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Uscaled ;
    const nlohmann::json expected = "R8G8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Sscaled ;
    const nlohmann::json expected = "R8G8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Uint ;
    const nlohmann::json expected = "R8G8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Sint ;
    const nlohmann::json expected = "R8G8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8Srgb ;
    const nlohmann::json expected = "R8G8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Unorm ;
    const nlohmann::json expected = "R8G8B8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Snorm ;
    const nlohmann::json expected = "R8G8B8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Uscaled ;
    const nlohmann::json expected = "R8G8B8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Sscaled ;
    const nlohmann::json expected = "R8G8B8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Uint ;
    const nlohmann::json expected = "R8G8B8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Sint ;
    const nlohmann::json expected = "R8G8B8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8Srgb ;
    const nlohmann::json expected = "R8G8B8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Unorm ;
    const nlohmann::json expected = "B8G8R8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Snorm ;
    const nlohmann::json expected = "B8G8R8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Uscaled ;
    const nlohmann::json expected = "B8G8R8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Sscaled ;
    const nlohmann::json expected = "B8G8R8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Uint ;
    const nlohmann::json expected = "B8G8R8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Sint ;
    const nlohmann::json expected = "B8G8R8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8Srgb ;
    const nlohmann::json expected = "B8G8R8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Unorm ;
    const nlohmann::json expected = "R8G8B8A8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Snorm ;
    const nlohmann::json expected = "R8G8B8A8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Uscaled ;
    const nlohmann::json expected = "R8G8B8A8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Sscaled ;
    const nlohmann::json expected = "R8G8B8A8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Uint ;
    const nlohmann::json expected = "R8G8B8A8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Sint ;
    const nlohmann::json expected = "R8G8B8A8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR8G8B8A8Srgb ;
    const nlohmann::json expected = "R8G8B8A8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Unorm ;
    const nlohmann::json expected = "B8G8R8A8Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Snorm ;
    const nlohmann::json expected = "B8G8R8A8Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Uscaled ;
    const nlohmann::json expected = "B8G8R8A8Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Sscaled ;
    const nlohmann::json expected = "B8G8R8A8Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Uint ;
    const nlohmann::json expected = "B8G8R8A8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Sint ;
    const nlohmann::json expected = "B8G8R8A8Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8A8Srgb ;
    const nlohmann::json expected = "B8G8R8A8Srgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8UnormPack32 ;
    const nlohmann::json expected = "A8B8G8R8UnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8SnormPack32 ;
    const nlohmann::json expected = "A8B8G8R8SnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8UscaledPack32 ;
    const nlohmann::json expected = "A8B8G8R8UscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8SscaledPack32 ;
    const nlohmann::json expected = "A8B8G8R8SscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8UintPack32 ;
    const nlohmann::json expected = "A8B8G8R8UintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8SintPack32 ;
    const nlohmann::json expected = "A8B8G8R8SintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA8B8G8R8SrgbPack32 ;
    const nlohmann::json expected = "A8B8G8R8SrgbPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10UnormPack32 ;
    const nlohmann::json expected = "A2R10G10B10UnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10SnormPack32 ;
    const nlohmann::json expected = "A2R10G10B10SnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10UscaledPack32 ;
    const nlohmann::json expected = "A2R10G10B10UscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10SscaledPack32 ;
    const nlohmann::json expected = "A2R10G10B10SscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10UintPack32 ;
    const nlohmann::json expected = "A2R10G10B10UintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2R10G10B10SintPack32 ;
    const nlohmann::json expected = "A2R10G10B10SintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10UnormPack32 ;
    const nlohmann::json expected = "A2B10G10R10UnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10SnormPack32 ;
    const nlohmann::json expected = "A2B10G10R10SnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10UscaledPack32 ;
    const nlohmann::json expected = "A2B10G10R10UscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10SscaledPack32 ;
    const nlohmann::json expected = "A2B10G10R10SscaledPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10UintPack32 ;
    const nlohmann::json expected = "A2B10G10R10UintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA2B10G10R10SintPack32 ;
    const nlohmann::json expected = "A2B10G10R10SintPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Unorm ;
    const nlohmann::json expected = "R16Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Snorm ;
    const nlohmann::json expected = "R16Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Uscaled ;
    const nlohmann::json expected = "R16Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Sscaled ;
    const nlohmann::json expected = "R16Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Uint ;
    const nlohmann::json expected = "R16Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Sint ;
    const nlohmann::json expected = "R16Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16Sfloat ;
    const nlohmann::json expected = "R16Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Unorm ;
    const nlohmann::json expected = "R16G16Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Snorm ;
    const nlohmann::json expected = "R16G16Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Uscaled ;
    const nlohmann::json expected = "R16G16Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Sscaled ;
    const nlohmann::json expected = "R16G16Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Uint ;
    const nlohmann::json expected = "R16G16Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Sint ;
    const nlohmann::json expected = "R16G16Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16Sfloat ;
    const nlohmann::json expected = "R16G16Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Unorm ;
    const nlohmann::json expected = "R16G16B16Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Snorm ;
    const nlohmann::json expected = "R16G16B16Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Uscaled ;
    const nlohmann::json expected = "R16G16B16Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Sscaled ;
    const nlohmann::json expected = "R16G16B16Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Uint ;
    const nlohmann::json expected = "R16G16B16Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Sint ;
    const nlohmann::json expected = "R16G16B16Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16Sfloat ;
    const nlohmann::json expected = "R16G16B16Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Unorm ;
    const nlohmann::json expected = "R16G16B16A16Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Snorm ;
    const nlohmann::json expected = "R16G16B16A16Snorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Uscaled ;
    const nlohmann::json expected = "R16G16B16A16Uscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Sscaled ;
    const nlohmann::json expected = "R16G16B16A16Sscaled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Uint ;
    const nlohmann::json expected = "R16G16B16A16Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Sint ;
    const nlohmann::json expected = "R16G16B16A16Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR16G16B16A16Sfloat ;
    const nlohmann::json expected = "R16G16B16A16Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32Uint ;
    const nlohmann::json expected = "R32Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32Sint ;
    const nlohmann::json expected = "R32Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32Sfloat ;
    const nlohmann::json expected = "R32Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32Uint ;
    const nlohmann::json expected = "R32G32Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32Sint ;
    const nlohmann::json expected = "R32G32Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32Sfloat ;
    const nlohmann::json expected = "R32G32Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32Uint ;
    const nlohmann::json expected = "R32G32B32Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32Sint ;
    const nlohmann::json expected = "R32G32B32Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32Sfloat ;
    const nlohmann::json expected = "R32G32B32Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32A32Uint ;
    const nlohmann::json expected = "R32G32B32A32Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32A32Sint ;
    const nlohmann::json expected = "R32G32B32A32Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR32G32B32A32Sfloat ;
    const nlohmann::json expected = "R32G32B32A32Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64Uint ;
    const nlohmann::json expected = "R64Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64Sint ;
    const nlohmann::json expected = "R64Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64Sfloat ;
    const nlohmann::json expected = "R64Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64Uint ;
    const nlohmann::json expected = "R64G64Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64Sint ;
    const nlohmann::json expected = "R64G64Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64Sfloat ;
    const nlohmann::json expected = "R64G64Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64Uint ;
    const nlohmann::json expected = "R64G64B64Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64Sint ;
    const nlohmann::json expected = "R64G64B64Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64Sfloat ;
    const nlohmann::json expected = "R64G64B64Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64A64Uint ;
    const nlohmann::json expected = "R64G64B64A64Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64A64Sint ;
    const nlohmann::json expected = "R64G64B64A64Sint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR64G64B64A64Sfloat ;
    const nlohmann::json expected = "R64G64B64A64Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB10G11R11UfloatPack32 ;
    const nlohmann::json expected = "B10G11R11UfloatPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eE5B9G9R9UfloatPack32 ;
    const nlohmann::json expected = "E5B9G9R9UfloatPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eD16Unorm ;
    const nlohmann::json expected = "D16Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eX8D24UnormPack32 ;
    const nlohmann::json expected = "X8D24UnormPack32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eD32Sfloat ;
    const nlohmann::json expected = "D32Sfloat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eS8Uint ;
    const nlohmann::json expected = "S8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eD16UnormS8Uint ;
    const nlohmann::json expected = "D16UnormS8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eD24UnormS8Uint ;
    const nlohmann::json expected = "D24UnormS8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eD32SfloatS8Uint ;
    const nlohmann::json expected = "D32SfloatS8Uint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc1RgbUnormBlock ;
    const nlohmann::json expected = "Bc1RgbUnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc1RgbSrgbBlock ;
    const nlohmann::json expected = "Bc1RgbSrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc1RgbaUnormBlock ;
    const nlohmann::json expected = "Bc1RgbaUnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc1RgbaSrgbBlock ;
    const nlohmann::json expected = "Bc1RgbaSrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc2UnormBlock ;
    const nlohmann::json expected = "Bc2UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc2SrgbBlock ;
    const nlohmann::json expected = "Bc2SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc3UnormBlock ;
    const nlohmann::json expected = "Bc3UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc3SrgbBlock ;
    const nlohmann::json expected = "Bc3SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc4UnormBlock ;
    const nlohmann::json expected = "Bc4UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc4SnormBlock ;
    const nlohmann::json expected = "Bc4SnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc5UnormBlock ;
    const nlohmann::json expected = "Bc5UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc5SnormBlock ;
    const nlohmann::json expected = "Bc5SnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc6HUfloatBlock ;
    const nlohmann::json expected = "Bc6HUfloatBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc6HSfloatBlock ;
    const nlohmann::json expected = "Bc6HSfloatBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc7UnormBlock ;
    const nlohmann::json expected = "Bc7UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eBc7SrgbBlock ;
    const nlohmann::json expected = "Bc7SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8UnormBlock ;
    const nlohmann::json expected = "Etc2R8G8B8UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8SrgbBlock ;
    const nlohmann::json expected = "Etc2R8G8B8SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8A1UnormBlock ;
    const nlohmann::json expected = "Etc2R8G8B8A1UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8A1SrgbBlock ;
    const nlohmann::json expected = "Etc2R8G8B8A1SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8A8UnormBlock ;
    const nlohmann::json expected = "Etc2R8G8B8A8UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEtc2R8G8B8A8SrgbBlock ;
    const nlohmann::json expected = "Etc2R8G8B8A8SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEacR11UnormBlock ;
    const nlohmann::json expected = "EacR11UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEacR11SnormBlock ;
    const nlohmann::json expected = "EacR11SnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEacR11G11UnormBlock ;
    const nlohmann::json expected = "EacR11G11UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eEacR11G11SnormBlock ;
    const nlohmann::json expected = "EacR11G11SnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc4x4UnormBlock ;
    const nlohmann::json expected = "Astc4x4UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc4x4SrgbBlock ;
    const nlohmann::json expected = "Astc4x4SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x4UnormBlock ;
    const nlohmann::json expected = "Astc5x4UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x4SrgbBlock ;
    const nlohmann::json expected = "Astc5x4SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x5UnormBlock ;
    const nlohmann::json expected = "Astc5x5UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x5SrgbBlock ;
    const nlohmann::json expected = "Astc5x5SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x5UnormBlock ;
    const nlohmann::json expected = "Astc6x5UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x5SrgbBlock ;
    const nlohmann::json expected = "Astc6x5SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x6UnormBlock ;
    const nlohmann::json expected = "Astc6x6UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x6SrgbBlock ;
    const nlohmann::json expected = "Astc6x6SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x5UnormBlock ;
    const nlohmann::json expected = "Astc8x5UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x5SrgbBlock ;
    const nlohmann::json expected = "Astc8x5SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x6UnormBlock ;
    const nlohmann::json expected = "Astc8x6UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x6SrgbBlock ;
    const nlohmann::json expected = "Astc8x6SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x8UnormBlock ;
    const nlohmann::json expected = "Astc8x8UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x8SrgbBlock ;
    const nlohmann::json expected = "Astc8x8SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x5UnormBlock ;
    const nlohmann::json expected = "Astc10x5UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x5SrgbBlock ;
    const nlohmann::json expected = "Astc10x5SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x6UnormBlock ;
    const nlohmann::json expected = "Astc10x6UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x6SrgbBlock ;
    const nlohmann::json expected = "Astc10x6SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x8UnormBlock ;
    const nlohmann::json expected = "Astc10x8UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x8SrgbBlock ;
    const nlohmann::json expected = "Astc10x8SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x10UnormBlock ;
    const nlohmann::json expected = "Astc10x10UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x10SrgbBlock ;
    const nlohmann::json expected = "Astc10x10SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x10UnormBlock ;
    const nlohmann::json expected = "Astc12x10UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x10SrgbBlock ;
    const nlohmann::json expected = "Astc12x10SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x12UnormBlock ;
    const nlohmann::json expected = "Astc12x12UnormBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x12SrgbBlock ;
    const nlohmann::json expected = "Astc12x12SrgbBlock";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8G8R8422Unorm ;
    const nlohmann::json expected = "G8B8G8R8422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8G8422Unorm ;
    const nlohmann::json expected = "B8G8R8G8422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane420Unorm ;
    const nlohmann::json expected = "G8B8R83Plane420Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R82Plane420Unorm ;
    const nlohmann::json expected = "G8B8R82Plane420Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane422Unorm ;
    const nlohmann::json expected = "G8B8R83Plane422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R82Plane422Unorm ;
    const nlohmann::json expected = "G8B8R82Plane422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane444Unorm ;
    const nlohmann::json expected = "G8B8R83Plane444Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6UnormPack16 ;
    const nlohmann::json expected = "R10X6UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6G10X6Unorm2Pack16 ;
    const nlohmann::json expected = "R10X6G10X6Unorm2Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16 ;
    const nlohmann::json expected = "R10X6G10X6B10X6A10X6Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16 ;
    const nlohmann::json expected = "G10X6B10X6G10X6R10X6422Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16 ;
    const nlohmann::json expected = "B10X6G10X6R10X6G10X6422Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16 ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane420Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16 ;
    const nlohmann::json expected = "G10X6B10X6R10X62Plane420Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16 ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane422Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16 ;
    const nlohmann::json expected = "G10X6B10X6R10X62Plane422Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16 ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane444Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR12X4UnormPack16 ;
    const nlohmann::json expected = "R12X4UnormPack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR12X4G12X4Unorm2Pack16 ;
    const nlohmann::json expected = "R12X4G12X4Unorm2Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16 ;
    const nlohmann::json expected = "R12X4G12X4B12X4A12X4Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16 ;
    const nlohmann::json expected = "G12X4B12X4G12X4R12X4422Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16 ;
    const nlohmann::json expected = "B12X4G12X4R12X4G12X4422Unorm4Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16 ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane420Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16 ;
    const nlohmann::json expected = "G12X4B12X4R12X42Plane420Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16 ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane422Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16 ;
    const nlohmann::json expected = "G12X4B12X4R12X42Plane422Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16 ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane444Unorm3Pack16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16G16R16422Unorm ;
    const nlohmann::json expected = "G16B16G16R16422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB16G16R16G16422Unorm ;
    const nlohmann::json expected = "B16G16R16G16422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane420Unorm ;
    const nlohmann::json expected = "G16B16R163Plane420Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R162Plane420Unorm ;
    const nlohmann::json expected = "G16B16R162Plane420Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane422Unorm ;
    const nlohmann::json expected = "G16B16R163Plane422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R162Plane422Unorm ;
    const nlohmann::json expected = "G16B16R162Plane422Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane444Unorm ;
    const nlohmann::json expected = "G16B16R163Plane444Unorm";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc12BppUnormBlockIMG ;
    const nlohmann::json expected = "Pvrtc12BppUnormBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc14BppUnormBlockIMG ;
    const nlohmann::json expected = "Pvrtc14BppUnormBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc22BppUnormBlockIMG ;
    const nlohmann::json expected = "Pvrtc22BppUnormBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc24BppUnormBlockIMG ;
    const nlohmann::json expected = "Pvrtc24BppUnormBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc12BppSrgbBlockIMG ;
    const nlohmann::json expected = "Pvrtc12BppSrgbBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc14BppSrgbBlockIMG ;
    const nlohmann::json expected = "Pvrtc14BppSrgbBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc22BppSrgbBlockIMG ;
    const nlohmann::json expected = "Pvrtc22BppSrgbBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: ePvrtc24BppSrgbBlockIMG ;
    const nlohmann::json expected = "Pvrtc24BppSrgbBlockIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc4x4SfloatBlockEXT ;
    const nlohmann::json expected = "Astc4x4SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x4SfloatBlockEXT ;
    const nlohmann::json expected = "Astc5x4SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc5x5SfloatBlockEXT ;
    const nlohmann::json expected = "Astc5x5SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x5SfloatBlockEXT ;
    const nlohmann::json expected = "Astc6x5SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc6x6SfloatBlockEXT ;
    const nlohmann::json expected = "Astc6x6SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x5SfloatBlockEXT ;
    const nlohmann::json expected = "Astc8x5SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x6SfloatBlockEXT ;
    const nlohmann::json expected = "Astc8x6SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc8x8SfloatBlockEXT ;
    const nlohmann::json expected = "Astc8x8SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x5SfloatBlockEXT ;
    const nlohmann::json expected = "Astc10x5SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x6SfloatBlockEXT ;
    const nlohmann::json expected = "Astc10x6SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x8SfloatBlockEXT ;
    const nlohmann::json expected = "Astc10x8SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc10x10SfloatBlockEXT ;
    const nlohmann::json expected = "Astc10x10SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x10SfloatBlockEXT ;
    const nlohmann::json expected = "Astc12x10SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eAstc12x12SfloatBlockEXT ;
    const nlohmann::json expected = "Astc12x12SfloatBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R82Plane444UnormEXT ;
    const nlohmann::json expected = "G8B8R82Plane444UnormEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X62Plane444Unorm3Pack16EXT ;
    const nlohmann::json expected = "G10X6B10X6R10X62Plane444Unorm3Pack16EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X42Plane444Unorm3Pack16EXT ;
    const nlohmann::json expected = "G12X4B12X4R12X42Plane444Unorm3Pack16EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R162Plane444UnormEXT ;
    const nlohmann::json expected = "G16B16R162Plane444UnormEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA4R4G4B4UnormPack16EXT ;
    const nlohmann::json expected = "A4R4G4B4UnormPack16EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eA4B4G4R4UnormPack16EXT ;
    const nlohmann::json expected = "A4B4G4R4UnormPack16EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR ;
    const nlohmann::json expected = "B10X6G10X6R10X6G10X6422Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR ;
    const nlohmann::json expected = "B12X4G12X4R12X4G12X4422Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB16G16R16G16422UnormKHR ;
    const nlohmann::json expected = "B16G16R16G16422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eB8G8R8G8422UnormKHR ;
    const nlohmann::json expected = "B8G8R8G8422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6G10X6R10X6422Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6R10X62Plane420Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6R10X62Plane422Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane420Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane422Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16KHR ;
    const nlohmann::json expected = "G10X6B10X6R10X63Plane444Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4G12X4R12X4422Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4R12X42Plane420Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4R12X42Plane422Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane420Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane422Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16KHR ;
    const nlohmann::json expected = "G12X4B12X4R12X43Plane444Unorm3Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16G16R16422UnormKHR ;
    const nlohmann::json expected = "G16B16G16R16422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R162Plane420UnormKHR ;
    const nlohmann::json expected = "G16B16R162Plane420UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R162Plane422UnormKHR ;
    const nlohmann::json expected = "G16B16R162Plane422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane420UnormKHR ;
    const nlohmann::json expected = "G16B16R163Plane420UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane422UnormKHR ;
    const nlohmann::json expected = "G16B16R163Plane422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG16B16R163Plane444UnormKHR ;
    const nlohmann::json expected = "G16B16R163Plane444UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8G8R8422UnormKHR ;
    const nlohmann::json expected = "G8B8G8R8422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R82Plane420UnormKHR ;
    const nlohmann::json expected = "G8B8R82Plane420UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R82Plane422UnormKHR ;
    const nlohmann::json expected = "G8B8R82Plane422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane420UnormKHR ;
    const nlohmann::json expected = "G8B8R83Plane420UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane422UnormKHR ;
    const nlohmann::json expected = "G8B8R83Plane422UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eG8B8R83Plane444UnormKHR ;
    const nlohmann::json expected = "G8B8R83Plane444UnormKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16KHR ;
    const nlohmann::json expected = "R10X6G10X6B10X6A10X6Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6G10X6Unorm2Pack16KHR ;
    const nlohmann::json expected = "R10X6G10X6Unorm2Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR10X6UnormPack16KHR ;
    const nlohmann::json expected = "R10X6UnormPack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16KHR ;
    const nlohmann::json expected = "R12X4G12X4B12X4A12X4Unorm4Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Format :: eR12X4G12X4Unorm2Pack16KHR ;
    const nlohmann::json expected = "R12X4G12X4Unorm2Pack16KHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Format ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ImageTiling.hpp>
BOOST_AUTO_TEST_CASE(ImageTiling) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageTiling :: eOptimal ;
    const nlohmann::json expected = "Optimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageTiling ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageTiling :: eLinear ;
    const nlohmann::json expected = "Linear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageTiling ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ImageType.hpp>
BOOST_AUTO_TEST_CASE(ImageType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageType :: e1D ;
    const nlohmann::json expected = "1D";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageType :: e2D ;
    const nlohmann::json expected = "2D";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/InternalAllocationType.hpp>
BOOST_AUTO_TEST_CASE(InternalAllocationType) {
}
#include <vulkan2json/PhysicalDeviceType.hpp>
BOOST_AUTO_TEST_CASE(PhysicalDeviceType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType :: eOther ;
    const nlohmann::json expected = "Other";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType :: eIntegratedGpu ;
    const nlohmann::json expected = "IntegratedGpu";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType :: eDiscreteGpu ;
    const nlohmann::json expected = "DiscreteGpu";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType :: eVirtualGpu ;
    const nlohmann::json expected = "VirtualGpu";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PhysicalDeviceType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SystemAllocationScope.hpp>
BOOST_AUTO_TEST_CASE(SystemAllocationScope) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SystemAllocationScope :: eCommand ;
    const nlohmann::json expected = "Command";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SystemAllocationScope ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SystemAllocationScope :: eObject ;
    const nlohmann::json expected = "Object";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SystemAllocationScope ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SystemAllocationScope :: eCache ;
    const nlohmann::json expected = "Cache";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SystemAllocationScope ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SystemAllocationScope :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SystemAllocationScope ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/QueryType.hpp>
BOOST_AUTO_TEST_CASE(QueryType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eOcclusion ;
    const nlohmann::json expected = "Occlusion";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: ePipelineStatistics ;
    const nlohmann::json expected = "PipelineStatistics";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eTimestamp ;
    const nlohmann::json expected = "Timestamp";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eResultStatusOnlyKHR ;
    const nlohmann::json expected = "ResultStatusOnlyKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eTransformFeedbackStreamEXT ;
    const nlohmann::json expected = "TransformFeedbackStreamEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: ePerformanceQueryKHR ;
    const nlohmann::json expected = "PerformanceQueryKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eAccelerationStructureCompactedSizeKHR ;
    const nlohmann::json expected = "AccelerationStructureCompactedSizeKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eAccelerationStructureSerializationSizeKHR ;
    const nlohmann::json expected = "AccelerationStructureSerializationSizeKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: eAccelerationStructureCompactedSizeNV ;
    const nlohmann::json expected = "AccelerationStructureCompactedSizeNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryType :: ePerformanceQueryINTEL ;
    const nlohmann::json expected = "PerformanceQueryINTEL";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SharingMode.hpp>
BOOST_AUTO_TEST_CASE(SharingMode) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SharingMode :: eExclusive ;
    const nlohmann::json expected = "Exclusive";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SharingMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ImageLayout.hpp>
BOOST_AUTO_TEST_CASE(ImageLayout) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eUndefined ;
    const nlohmann::json expected = "Undefined";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eGeneral ;
    const nlohmann::json expected = "General";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eColorAttachmentOptimal ;
    const nlohmann::json expected = "ColorAttachmentOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthStencilAttachmentOptimal ;
    const nlohmann::json expected = "DepthStencilAttachmentOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthStencilReadOnlyOptimal ;
    const nlohmann::json expected = "DepthStencilReadOnlyOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eShaderReadOnlyOptimal ;
    const nlohmann::json expected = "ShaderReadOnlyOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eTransferSrcOptimal ;
    const nlohmann::json expected = "TransferSrcOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eTransferDstOptimal ;
    const nlohmann::json expected = "TransferDstOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: ePreinitialized ;
    const nlohmann::json expected = "Preinitialized";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthReadOnlyStencilAttachmentOptimal ;
    const nlohmann::json expected = "DepthReadOnlyStencilAttachmentOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthAttachmentStencilReadOnlyOptimal ;
    const nlohmann::json expected = "DepthAttachmentStencilReadOnlyOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthAttachmentOptimal ;
    const nlohmann::json expected = "DepthAttachmentOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthReadOnlyOptimal ;
    const nlohmann::json expected = "DepthReadOnlyOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eStencilAttachmentOptimal ;
    const nlohmann::json expected = "StencilAttachmentOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eStencilReadOnlyOptimal ;
    const nlohmann::json expected = "StencilReadOnlyOptimal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: ePresentSrcKHR ;
    const nlohmann::json expected = "PresentSrcKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoDecodeDstKHR ;
    const nlohmann::json expected = "VideoDecodeDstKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoDecodeSrcKHR ;
    const nlohmann::json expected = "VideoDecodeSrcKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoDecodeDpbKHR ;
    const nlohmann::json expected = "VideoDecodeDpbKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eSharedPresentKHR ;
    const nlohmann::json expected = "SharedPresentKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eFragmentDensityMapOptimalEXT ;
    const nlohmann::json expected = "FragmentDensityMapOptimalEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eFragmentShadingRateAttachmentOptimalKHR ;
    const nlohmann::json expected = "FragmentShadingRateAttachmentOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoEncodeDstKHR ;
    const nlohmann::json expected = "VideoEncodeDstKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoEncodeSrcKHR ;
    const nlohmann::json expected = "VideoEncodeSrcKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eVideoEncodeDpbKHR ;
    const nlohmann::json expected = "VideoEncodeDpbKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eReadOnlyOptimalKHR ;
    const nlohmann::json expected = "ReadOnlyOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eAttachmentOptimalKHR ;
    const nlohmann::json expected = "AttachmentOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthAttachmentOptimalKHR ;
    const nlohmann::json expected = "DepthAttachmentOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthAttachmentStencilReadOnlyOptimalKHR ;
    const nlohmann::json expected = "DepthAttachmentStencilReadOnlyOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthReadOnlyOptimalKHR ;
    const nlohmann::json expected = "DepthReadOnlyOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eDepthReadOnlyStencilAttachmentOptimalKHR ;
    const nlohmann::json expected = "DepthReadOnlyStencilAttachmentOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eShadingRateOptimalNV ;
    const nlohmann::json expected = "ShadingRateOptimalNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageLayout :: eStencilAttachmentOptimalKHR ;
    const nlohmann::json expected = "StencilAttachmentOptimalKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageLayout ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ComponentSwizzle.hpp>
BOOST_AUTO_TEST_CASE(ComponentSwizzle) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eIdentity ;
    const nlohmann::json expected = "Identity";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eZero ;
    const nlohmann::json expected = "Zero";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eOne ;
    const nlohmann::json expected = "One";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eR ;
    const nlohmann::json expected = "R";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eG ;
    const nlohmann::json expected = "G";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentSwizzle :: eB ;
    const nlohmann::json expected = "B";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ImageViewType.hpp>
BOOST_AUTO_TEST_CASE(ImageViewType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: e1D ;
    const nlohmann::json expected = "1D";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: e2D ;
    const nlohmann::json expected = "2D";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: e3D ;
    const nlohmann::json expected = "3D";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: eCube ;
    const nlohmann::json expected = "Cube";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: e1DArray ;
    const nlohmann::json expected = "1DArray";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ImageViewType :: e2DArray ;
    const nlohmann::json expected = "2DArray";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ImageViewType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/BlendFactor.hpp>
BOOST_AUTO_TEST_CASE(BlendFactor) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eZero ;
    const nlohmann::json expected = "Zero";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOne ;
    const nlohmann::json expected = "One";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eSrcColor ;
    const nlohmann::json expected = "SrcColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusSrcColor ;
    const nlohmann::json expected = "OneMinusSrcColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eDstColor ;
    const nlohmann::json expected = "DstColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusDstColor ;
    const nlohmann::json expected = "OneMinusDstColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eSrcAlpha ;
    const nlohmann::json expected = "SrcAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusSrcAlpha ;
    const nlohmann::json expected = "OneMinusSrcAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eDstAlpha ;
    const nlohmann::json expected = "DstAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusDstAlpha ;
    const nlohmann::json expected = "OneMinusDstAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eConstantColor ;
    const nlohmann::json expected = "ConstantColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusConstantColor ;
    const nlohmann::json expected = "OneMinusConstantColor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eConstantAlpha ;
    const nlohmann::json expected = "ConstantAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusConstantAlpha ;
    const nlohmann::json expected = "OneMinusConstantAlpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eSrcAlphaSaturate ;
    const nlohmann::json expected = "SrcAlphaSaturate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eSrc1Color ;
    const nlohmann::json expected = "Src1Color";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eOneMinusSrc1Color ;
    const nlohmann::json expected = "OneMinusSrc1Color";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendFactor :: eSrc1Alpha ;
    const nlohmann::json expected = "Src1Alpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendFactor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/BlendOp.hpp>
BOOST_AUTO_TEST_CASE(BlendOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eAdd ;
    const nlohmann::json expected = "Add";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSubtract ;
    const nlohmann::json expected = "Subtract";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eReverseSubtract ;
    const nlohmann::json expected = "ReverseSubtract";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eMin ;
    const nlohmann::json expected = "Min";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eMax ;
    const nlohmann::json expected = "Max";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eZeroEXT ;
    const nlohmann::json expected = "ZeroEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSrcEXT ;
    const nlohmann::json expected = "SrcEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDstEXT ;
    const nlohmann::json expected = "DstEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSrcOverEXT ;
    const nlohmann::json expected = "SrcOverEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDstOverEXT ;
    const nlohmann::json expected = "DstOverEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSrcInEXT ;
    const nlohmann::json expected = "SrcInEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDstInEXT ;
    const nlohmann::json expected = "DstInEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSrcOutEXT ;
    const nlohmann::json expected = "SrcOutEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDstOutEXT ;
    const nlohmann::json expected = "DstOutEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSrcAtopEXT ;
    const nlohmann::json expected = "SrcAtopEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDstAtopEXT ;
    const nlohmann::json expected = "DstAtopEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eXorEXT ;
    const nlohmann::json expected = "XorEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eMultiplyEXT ;
    const nlohmann::json expected = "MultiplyEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eScreenEXT ;
    const nlohmann::json expected = "ScreenEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eOverlayEXT ;
    const nlohmann::json expected = "OverlayEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDarkenEXT ;
    const nlohmann::json expected = "DarkenEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eLightenEXT ;
    const nlohmann::json expected = "LightenEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eColordodgeEXT ;
    const nlohmann::json expected = "ColordodgeEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eColorburnEXT ;
    const nlohmann::json expected = "ColorburnEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHardlightEXT ;
    const nlohmann::json expected = "HardlightEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eSoftlightEXT ;
    const nlohmann::json expected = "SoftlightEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eDifferenceEXT ;
    const nlohmann::json expected = "DifferenceEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eExclusionEXT ;
    const nlohmann::json expected = "ExclusionEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eInvertEXT ;
    const nlohmann::json expected = "InvertEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eInvertRgbEXT ;
    const nlohmann::json expected = "InvertRgbEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eLineardodgeEXT ;
    const nlohmann::json expected = "LineardodgeEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eLinearburnEXT ;
    const nlohmann::json expected = "LinearburnEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eVividlightEXT ;
    const nlohmann::json expected = "VividlightEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eLinearlightEXT ;
    const nlohmann::json expected = "LinearlightEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: ePinlightEXT ;
    const nlohmann::json expected = "PinlightEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHardmixEXT ;
    const nlohmann::json expected = "HardmixEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHslHueEXT ;
    const nlohmann::json expected = "HslHueEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHslSaturationEXT ;
    const nlohmann::json expected = "HslSaturationEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHslColorEXT ;
    const nlohmann::json expected = "HslColorEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eHslLuminosityEXT ;
    const nlohmann::json expected = "HslLuminosityEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: ePlusEXT ;
    const nlohmann::json expected = "PlusEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: ePlusClampedEXT ;
    const nlohmann::json expected = "PlusClampedEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: ePlusClampedAlphaEXT ;
    const nlohmann::json expected = "PlusClampedAlphaEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: ePlusDarkerEXT ;
    const nlohmann::json expected = "PlusDarkerEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eMinusEXT ;
    const nlohmann::json expected = "MinusEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eMinusClampedEXT ;
    const nlohmann::json expected = "MinusClampedEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eContrastEXT ;
    const nlohmann::json expected = "ContrastEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eInvertOvgEXT ;
    const nlohmann::json expected = "InvertOvgEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eRedEXT ;
    const nlohmann::json expected = "RedEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOp :: eGreenEXT ;
    const nlohmann::json expected = "GreenEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CompareOp.hpp>
BOOST_AUTO_TEST_CASE(CompareOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eNever ;
    const nlohmann::json expected = "Never";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eLess ;
    const nlohmann::json expected = "Less";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eEqual ;
    const nlohmann::json expected = "Equal";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eLessOrEqual ;
    const nlohmann::json expected = "LessOrEqual";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eGreater ;
    const nlohmann::json expected = "Greater";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eNotEqual ;
    const nlohmann::json expected = "NotEqual";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CompareOp :: eGreaterOrEqual ;
    const nlohmann::json expected = "GreaterOrEqual";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CompareOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DynamicState.hpp>
BOOST_AUTO_TEST_CASE(DynamicState) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eViewport ;
    const nlohmann::json expected = "Viewport";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eScissor ;
    const nlohmann::json expected = "Scissor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eLineWidth ;
    const nlohmann::json expected = "LineWidth";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthBias ;
    const nlohmann::json expected = "DepthBias";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eBlendConstants ;
    const nlohmann::json expected = "BlendConstants";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthBounds ;
    const nlohmann::json expected = "DepthBounds";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eStencilCompareMask ;
    const nlohmann::json expected = "StencilCompareMask";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eStencilWriteMask ;
    const nlohmann::json expected = "StencilWriteMask";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eStencilReference ;
    const nlohmann::json expected = "StencilReference";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eViewportWScalingNV ;
    const nlohmann::json expected = "ViewportWScalingNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDiscardRectangleEXT ;
    const nlohmann::json expected = "DiscardRectangleEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eSampleLocationsEXT ;
    const nlohmann::json expected = "SampleLocationsEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eRayTracingPipelineStackSizeKHR ;
    const nlohmann::json expected = "RayTracingPipelineStackSizeKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eViewportShadingRatePaletteNV ;
    const nlohmann::json expected = "ViewportShadingRatePaletteNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eViewportCoarseSampleOrderNV ;
    const nlohmann::json expected = "ViewportCoarseSampleOrderNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eExclusiveScissorNV ;
    const nlohmann::json expected = "ExclusiveScissorNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eFragmentShadingRateKHR ;
    const nlohmann::json expected = "FragmentShadingRateKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eLineStippleEXT ;
    const nlohmann::json expected = "LineStippleEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eCullModeEXT ;
    const nlohmann::json expected = "CullModeEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eFrontFaceEXT ;
    const nlohmann::json expected = "FrontFaceEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: ePrimitiveTopologyEXT ;
    const nlohmann::json expected = "PrimitiveTopologyEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eViewportWithCountEXT ;
    const nlohmann::json expected = "ViewportWithCountEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eScissorWithCountEXT ;
    const nlohmann::json expected = "ScissorWithCountEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eVertexInputBindingStrideEXT ;
    const nlohmann::json expected = "VertexInputBindingStrideEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthTestEnableEXT ;
    const nlohmann::json expected = "DepthTestEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthWriteEnableEXT ;
    const nlohmann::json expected = "DepthWriteEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthCompareOpEXT ;
    const nlohmann::json expected = "DepthCompareOpEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthBoundsTestEnableEXT ;
    const nlohmann::json expected = "DepthBoundsTestEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eStencilTestEnableEXT ;
    const nlohmann::json expected = "StencilTestEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eStencilOpEXT ;
    const nlohmann::json expected = "StencilOpEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eVertexInputEXT ;
    const nlohmann::json expected = "VertexInputEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: ePatchControlPointsEXT ;
    const nlohmann::json expected = "PatchControlPointsEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eRasterizerDiscardEnableEXT ;
    const nlohmann::json expected = "RasterizerDiscardEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eDepthBiasEnableEXT ;
    const nlohmann::json expected = "DepthBiasEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: eLogicOpEXT ;
    const nlohmann::json expected = "LogicOpEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DynamicState :: ePrimitiveRestartEnableEXT ;
    const nlohmann::json expected = "PrimitiveRestartEnableEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DynamicState ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/FrontFace.hpp>
BOOST_AUTO_TEST_CASE(FrontFace) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FrontFace :: eCounterClockwise ;
    const nlohmann::json expected = "CounterClockwise";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FrontFace ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/LogicOp.hpp>
BOOST_AUTO_TEST_CASE(LogicOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eClear ;
    const nlohmann::json expected = "Clear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eAnd ;
    const nlohmann::json expected = "And";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eAndReverse ;
    const nlohmann::json expected = "AndReverse";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eCopy ;
    const nlohmann::json expected = "Copy";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eAndInverted ;
    const nlohmann::json expected = "AndInverted";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eNoOp ;
    const nlohmann::json expected = "NoOp";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eXor ;
    const nlohmann::json expected = "Xor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eOr ;
    const nlohmann::json expected = "Or";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eNor ;
    const nlohmann::json expected = "Nor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eEquivalent ;
    const nlohmann::json expected = "Equivalent";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eInvert ;
    const nlohmann::json expected = "Invert";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eOrReverse ;
    const nlohmann::json expected = "OrReverse";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eCopyInverted ;
    const nlohmann::json expected = "CopyInverted";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eOrInverted ;
    const nlohmann::json expected = "OrInverted";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LogicOp :: eNand ;
    const nlohmann::json expected = "Nand";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LogicOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PolygonMode.hpp>
BOOST_AUTO_TEST_CASE(PolygonMode) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PolygonMode :: eFill ;
    const nlohmann::json expected = "Fill";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PolygonMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PolygonMode :: eLine ;
    const nlohmann::json expected = "Line";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PolygonMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PolygonMode :: ePoint ;
    const nlohmann::json expected = "Point";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PolygonMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PrimitiveTopology.hpp>
BOOST_AUTO_TEST_CASE(PrimitiveTopology) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: ePointList ;
    const nlohmann::json expected = "PointList";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eLineList ;
    const nlohmann::json expected = "LineList";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eLineStrip ;
    const nlohmann::json expected = "LineStrip";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eTriangleList ;
    const nlohmann::json expected = "TriangleList";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eTriangleStrip ;
    const nlohmann::json expected = "TriangleStrip";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eTriangleFan ;
    const nlohmann::json expected = "TriangleFan";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eLineListWithAdjacency ;
    const nlohmann::json expected = "LineListWithAdjacency";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eLineStripWithAdjacency ;
    const nlohmann::json expected = "LineStripWithAdjacency";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eTriangleListWithAdjacency ;
    const nlohmann::json expected = "TriangleListWithAdjacency";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PrimitiveTopology :: eTriangleStripWithAdjacency ;
    const nlohmann::json expected = "TriangleStripWithAdjacency";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/StencilOp.hpp>
BOOST_AUTO_TEST_CASE(StencilOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eKeep ;
    const nlohmann::json expected = "Keep";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eZero ;
    const nlohmann::json expected = "Zero";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eReplace ;
    const nlohmann::json expected = "Replace";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eIncrementAndClamp ;
    const nlohmann::json expected = "IncrementAndClamp";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eDecrementAndClamp ;
    const nlohmann::json expected = "DecrementAndClamp";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eInvert ;
    const nlohmann::json expected = "Invert";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: StencilOp :: eIncrementAndWrap ;
    const nlohmann::json expected = "IncrementAndWrap";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: StencilOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/VertexInputRate.hpp>
BOOST_AUTO_TEST_CASE(VertexInputRate) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: VertexInputRate :: eVertex ;
    const nlohmann::json expected = "Vertex";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: VertexInputRate ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/BorderColor.hpp>
BOOST_AUTO_TEST_CASE(BorderColor) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eFloatTransparentBlack ;
    const nlohmann::json expected = "FloatTransparentBlack";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eIntTransparentBlack ;
    const nlohmann::json expected = "IntTransparentBlack";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eFloatOpaqueBlack ;
    const nlohmann::json expected = "FloatOpaqueBlack";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eIntOpaqueBlack ;
    const nlohmann::json expected = "IntOpaqueBlack";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eFloatOpaqueWhite ;
    const nlohmann::json expected = "FloatOpaqueWhite";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eIntOpaqueWhite ;
    const nlohmann::json expected = "IntOpaqueWhite";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BorderColor :: eFloatCustomEXT ;
    const nlohmann::json expected = "FloatCustomEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BorderColor ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/Filter.hpp>
BOOST_AUTO_TEST_CASE(Filter) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Filter :: eNearest ;
    const nlohmann::json expected = "Nearest";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Filter ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Filter :: eLinear ;
    const nlohmann::json expected = "Linear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Filter ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: Filter :: eCubicIMG ;
    const nlohmann::json expected = "CubicIMG";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: Filter ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SamplerAddressMode.hpp>
BOOST_AUTO_TEST_CASE(SamplerAddressMode) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerAddressMode :: eRepeat ;
    const nlohmann::json expected = "Repeat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerAddressMode :: eMirroredRepeat ;
    const nlohmann::json expected = "MirroredRepeat";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerAddressMode :: eClampToEdge ;
    const nlohmann::json expected = "ClampToEdge";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerAddressMode :: eClampToBorder ;
    const nlohmann::json expected = "ClampToBorder";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerAddressMode :: eMirrorClampToEdge ;
    const nlohmann::json expected = "MirrorClampToEdge";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SamplerMipmapMode.hpp>
BOOST_AUTO_TEST_CASE(SamplerMipmapMode) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerMipmapMode :: eNearest ;
    const nlohmann::json expected = "Nearest";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerMipmapMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DescriptorType.hpp>
BOOST_AUTO_TEST_CASE(DescriptorType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eSampler ;
    const nlohmann::json expected = "Sampler";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eCombinedImageSampler ;
    const nlohmann::json expected = "CombinedImageSampler";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eSampledImage ;
    const nlohmann::json expected = "SampledImage";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eStorageImage ;
    const nlohmann::json expected = "StorageImage";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eUniformTexelBuffer ;
    const nlohmann::json expected = "UniformTexelBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eStorageTexelBuffer ;
    const nlohmann::json expected = "StorageTexelBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eUniformBuffer ;
    const nlohmann::json expected = "UniformBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eStorageBuffer ;
    const nlohmann::json expected = "StorageBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eUniformBufferDynamic ;
    const nlohmann::json expected = "UniformBufferDynamic";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eStorageBufferDynamic ;
    const nlohmann::json expected = "StorageBufferDynamic";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eInputAttachment ;
    const nlohmann::json expected = "InputAttachment";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eInlineUniformBlockEXT ;
    const nlohmann::json expected = "InlineUniformBlockEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eAccelerationStructureKHR ;
    const nlohmann::json expected = "AccelerationStructureKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorType :: eAccelerationStructureNV ;
    const nlohmann::json expected = "AccelerationStructureNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AttachmentLoadOp.hpp>
BOOST_AUTO_TEST_CASE(AttachmentLoadOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp :: eLoad ;
    const nlohmann::json expected = "Load";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp :: eClear ;
    const nlohmann::json expected = "Clear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp :: eDontCare ;
    const nlohmann::json expected = "DontCare";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentLoadOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AttachmentStoreOp.hpp>
BOOST_AUTO_TEST_CASE(AttachmentStoreOp) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp :: eStore ;
    const nlohmann::json expected = "Store";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp :: eDontCare ;
    const nlohmann::json expected = "DontCare";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp :: eNoneEXT ;
    const nlohmann::json expected = "NoneEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AttachmentStoreOp ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PipelineBindPoint.hpp>
BOOST_AUTO_TEST_CASE(PipelineBindPoint) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineBindPoint :: eGraphics ;
    const nlohmann::json expected = "Graphics";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineBindPoint ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineBindPoint :: eCompute ;
    const nlohmann::json expected = "Compute";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineBindPoint ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineBindPoint :: eRayTracingKHR ;
    const nlohmann::json expected = "RayTracingKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineBindPoint ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineBindPoint :: eSubpassShadingHUAWEI ;
    const nlohmann::json expected = "SubpassShadingHUAWEI";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineBindPoint ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CommandBufferLevel.hpp>
BOOST_AUTO_TEST_CASE(CommandBufferLevel) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CommandBufferLevel :: ePrimary ;
    const nlohmann::json expected = "Primary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CommandBufferLevel ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/IndexType.hpp>
BOOST_AUTO_TEST_CASE(IndexType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndexType :: eUint16 ;
    const nlohmann::json expected = "Uint16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndexType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndexType :: eUint32 ;
    const nlohmann::json expected = "Uint32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndexType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndexType :: eNoneKHR ;
    const nlohmann::json expected = "NoneKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndexType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndexType :: eUint8EXT ;
    const nlohmann::json expected = "Uint8EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndexType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SubpassContents.hpp>
BOOST_AUTO_TEST_CASE(SubpassContents) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SubpassContents :: eInline ;
    const nlohmann::json expected = "Inline";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SubpassContents ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PointClippingBehavior.hpp>
BOOST_AUTO_TEST_CASE(PointClippingBehavior) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PointClippingBehavior :: eAllClipPlanes ;
    const nlohmann::json expected = "AllClipPlanes";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PointClippingBehavior ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/TessellationDomainOrigin.hpp>
BOOST_AUTO_TEST_CASE(TessellationDomainOrigin) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: TessellationDomainOrigin :: eUpperLeft ;
    const nlohmann::json expected = "UpperLeft";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: TessellationDomainOrigin ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SamplerYcbcrModelConversion.hpp>
BOOST_AUTO_TEST_CASE(SamplerYcbcrModelConversion) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion :: eRgbIdentity ;
    const nlohmann::json expected = "RgbIdentity";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion :: eYcbcrIdentity ;
    const nlohmann::json expected = "YcbcrIdentity";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion :: eYcbcr709 ;
    const nlohmann::json expected = "Ycbcr709";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion :: eYcbcr601 ;
    const nlohmann::json expected = "Ycbcr601";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SamplerYcbcrRange.hpp>
BOOST_AUTO_TEST_CASE(SamplerYcbcrRange) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerYcbcrRange :: eItuFull ;
    const nlohmann::json expected = "ItuFull";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerYcbcrRange ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ChromaLocation.hpp>
BOOST_AUTO_TEST_CASE(ChromaLocation) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ChromaLocation :: eCositedEven ;
    const nlohmann::json expected = "CositedEven";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ChromaLocation ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DescriptorUpdateTemplateType.hpp>
BOOST_AUTO_TEST_CASE(DescriptorUpdateTemplateType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateType :: eDescriptorSet ;
    const nlohmann::json expected = "DescriptorSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DriverId.hpp>
BOOST_AUTO_TEST_CASE(DriverId) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eAmdProprietary ;
    const nlohmann::json expected = "AmdProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eAmdOpenSource ;
    const nlohmann::json expected = "AmdOpenSource";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eMesaRadv ;
    const nlohmann::json expected = "MesaRadv";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eNvidiaProprietary ;
    const nlohmann::json expected = "NvidiaProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eIntelProprietaryWindows ;
    const nlohmann::json expected = "IntelProprietaryWindows";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eIntelOpenSourceMESA ;
    const nlohmann::json expected = "IntelOpenSourceMESA";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eImaginationProprietary ;
    const nlohmann::json expected = "ImaginationProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eQualcommProprietary ;
    const nlohmann::json expected = "QualcommProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eArmProprietary ;
    const nlohmann::json expected = "ArmProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eGoogleSwiftshader ;
    const nlohmann::json expected = "GoogleSwiftshader";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eGgpProprietary ;
    const nlohmann::json expected = "GgpProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eBroadcomProprietary ;
    const nlohmann::json expected = "BroadcomProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eMesaLlvmpipe ;
    const nlohmann::json expected = "MesaLlvmpipe";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eMoltenvk ;
    const nlohmann::json expected = "Moltenvk";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eCoreaviProprietary ;
    const nlohmann::json expected = "CoreaviProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DriverId :: eJuiceProprietary ;
    const nlohmann::json expected = "JuiceProprietary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DriverId ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ShaderFloatControlsIndependence.hpp>
BOOST_AUTO_TEST_CASE(ShaderFloatControlsIndependence) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence :: e32BitOnly ;
    const nlohmann::json expected = "32BitOnly";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence :: eAll ;
    const nlohmann::json expected = "All";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SamplerReductionMode.hpp>
BOOST_AUTO_TEST_CASE(SamplerReductionMode) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerReductionMode :: eWeightedAverage ;
    const nlohmann::json expected = "WeightedAverage";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerReductionMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SamplerReductionMode :: eMin ;
    const nlohmann::json expected = "Min";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SamplerReductionMode ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/SemaphoreType.hpp>
BOOST_AUTO_TEST_CASE(SemaphoreType) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: SemaphoreType :: eBinary ;
    const nlohmann::json expected = "Binary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: SemaphoreType ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PresentModeKHR.hpp>
BOOST_AUTO_TEST_CASE(PresentModeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PresentModeKHR :: eImmediate ;
    const nlohmann::json expected = "Immediate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PresentModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PresentModeKHR :: eMailbox ;
    const nlohmann::json expected = "Mailbox";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PresentModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PresentModeKHR :: eFifo ;
    const nlohmann::json expected = "Fifo";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PresentModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PresentModeKHR :: eFifoRelaxed ;
    const nlohmann::json expected = "FifoRelaxed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PresentModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PresentModeKHR :: eSharedDemandRefresh ;
    const nlohmann::json expected = "SharedDemandRefresh";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PresentModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ColorSpaceKHR.hpp>
BOOST_AUTO_TEST_CASE(ColorSpaceKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eSrgbNonlinear ;
    const nlohmann::json expected = "SrgbNonlinear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eDisplayP3NonlinearEXT ;
    const nlohmann::json expected = "DisplayP3NonlinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eExtendedSrgbLinearEXT ;
    const nlohmann::json expected = "ExtendedSrgbLinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eDisplayP3LinearEXT ;
    const nlohmann::json expected = "DisplayP3LinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eDciP3NonlinearEXT ;
    const nlohmann::json expected = "DciP3NonlinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eBt709LinearEXT ;
    const nlohmann::json expected = "Bt709LinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eBt709NonlinearEXT ;
    const nlohmann::json expected = "Bt709NonlinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eBt2020LinearEXT ;
    const nlohmann::json expected = "Bt2020LinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eHdr10St2084EXT ;
    const nlohmann::json expected = "Hdr10St2084EXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eDolbyvisionEXT ;
    const nlohmann::json expected = "DolbyvisionEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eHdr10HlgEXT ;
    const nlohmann::json expected = "Hdr10HlgEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eAdobergbLinearEXT ;
    const nlohmann::json expected = "AdobergbLinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eAdobergbNonlinearEXT ;
    const nlohmann::json expected = "AdobergbNonlinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: ePassThroughEXT ;
    const nlohmann::json expected = "PassThroughEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eExtendedSrgbNonlinearEXT ;
    const nlohmann::json expected = "ExtendedSrgbNonlinearEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eDisplayNativeAMD ;
    const nlohmann::json expected = "DisplayNativeAMD";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR :: eVkColorspaceSrgbNonlinear ;
    const nlohmann::json expected = "VkColorspaceSrgbNonlinear";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DebugReportObjectTypeEXT.hpp>
BOOST_AUTO_TEST_CASE(DebugReportObjectTypeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eUnknown ;
    const nlohmann::json expected = "Unknown";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eInstance ;
    const nlohmann::json expected = "Instance";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: ePhysicalDevice ;
    const nlohmann::json expected = "PhysicalDevice";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eQueue ;
    const nlohmann::json expected = "Queue";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSemaphore ;
    const nlohmann::json expected = "Semaphore";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eCommandBuffer ;
    const nlohmann::json expected = "CommandBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eFence ;
    const nlohmann::json expected = "Fence";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDeviceMemory ;
    const nlohmann::json expected = "DeviceMemory";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eBuffer ;
    const nlohmann::json expected = "Buffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eImage ;
    const nlohmann::json expected = "Image";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eEvent ;
    const nlohmann::json expected = "Event";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eQueryPool ;
    const nlohmann::json expected = "QueryPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eBufferView ;
    const nlohmann::json expected = "BufferView";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eImageView ;
    const nlohmann::json expected = "ImageView";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eShaderModule ;
    const nlohmann::json expected = "ShaderModule";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: ePipelineCache ;
    const nlohmann::json expected = "PipelineCache";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: ePipelineLayout ;
    const nlohmann::json expected = "PipelineLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eRenderPass ;
    const nlohmann::json expected = "RenderPass";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: ePipeline ;
    const nlohmann::json expected = "Pipeline";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDescriptorSetLayout ;
    const nlohmann::json expected = "DescriptorSetLayout";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSampler ;
    const nlohmann::json expected = "Sampler";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDescriptorPool ;
    const nlohmann::json expected = "DescriptorPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDescriptorSet ;
    const nlohmann::json expected = "DescriptorSet";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eFramebuffer ;
    const nlohmann::json expected = "Framebuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eCommandPool ;
    const nlohmann::json expected = "CommandPool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSurfaceKHR ;
    const nlohmann::json expected = "SurfaceKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSwapchainKHR ;
    const nlohmann::json expected = "SwapchainKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDebugReportCallbackEXT ;
    const nlohmann::json expected = "DebugReportCallbackEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDisplayKHR ;
    const nlohmann::json expected = "DisplayKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDisplayModeKHR ;
    const nlohmann::json expected = "DisplayModeKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eValidationCacheEXT ;
    const nlohmann::json expected = "ValidationCacheEXT";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSamplerYcbcrConversion ;
    const nlohmann::json expected = "SamplerYcbcrConversion";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDescriptorUpdateTemplate ;
    const nlohmann::json expected = "DescriptorUpdateTemplate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eCuModuleNVX ;
    const nlohmann::json expected = "CuModuleNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eCuFunctionNVX ;
    const nlohmann::json expected = "CuFunctionNVX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eAccelerationStructureKHR ;
    const nlohmann::json expected = "AccelerationStructureKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eAccelerationStructureNV ;
    const nlohmann::json expected = "AccelerationStructureNV";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDebugReport ;
    const nlohmann::json expected = "DebugReport";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eDescriptorUpdateTemplateKHR ;
    const nlohmann::json expected = "DescriptorUpdateTemplateKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT :: eSamplerYcbcrConversionKHR ;
    const nlohmann::json expected = "SamplerYcbcrConversionKHR";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DebugReportObjectTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/RasterizationOrderAMD.hpp>
BOOST_AUTO_TEST_CASE(RasterizationOrderAMD) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: RasterizationOrderAMD :: eStrict ;
    const nlohmann::json expected = "Strict";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: RasterizationOrderAMD ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/QueryResultStatusKHR.hpp>
BOOST_AUTO_TEST_CASE(QueryResultStatusKHR) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR :: eError ;
    const nlohmann::json expected = "Error";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR :: eNotReady ;
    const nlohmann::json expected = "NotReady";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
}
#include <vulkan2json/ShaderInfoTypeAMD.hpp>
BOOST_AUTO_TEST_CASE(ShaderInfoTypeAMD) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderInfoTypeAMD :: eStatistics ;
    const nlohmann::json expected = "Statistics";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderInfoTypeAMD ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderInfoTypeAMD :: eBinary ;
    const nlohmann::json expected = "Binary";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderInfoTypeAMD ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ValidationCheckEXT.hpp>
BOOST_AUTO_TEST_CASE(ValidationCheckEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationCheckEXT :: eAll ;
    const nlohmann::json expected = "All";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationCheckEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DisplayPowerStateEXT.hpp>
BOOST_AUTO_TEST_CASE(DisplayPowerStateEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DisplayPowerStateEXT :: eOff ;
    const nlohmann::json expected = "Off";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DisplayPowerStateEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DisplayPowerStateEXT :: eSuspend ;
    const nlohmann::json expected = "Suspend";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DisplayPowerStateEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DeviceEventTypeEXT.hpp>
BOOST_AUTO_TEST_CASE(DeviceEventTypeEXT) {
}
#include <vulkan2json/DisplayEventTypeEXT.hpp>
BOOST_AUTO_TEST_CASE(DisplayEventTypeEXT) {
}
#include <vulkan2json/ViewportCoordinateSwizzleNV.hpp>
BOOST_AUTO_TEST_CASE(ViewportCoordinateSwizzleNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: ePositiveX ;
    const nlohmann::json expected = "PositiveX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: eNegativeX ;
    const nlohmann::json expected = "NegativeX";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: ePositiveY ;
    const nlohmann::json expected = "PositiveY";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: eNegativeY ;
    const nlohmann::json expected = "NegativeY";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: ePositiveZ ;
    const nlohmann::json expected = "PositiveZ";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: eNegativeZ ;
    const nlohmann::json expected = "NegativeZ";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV :: ePositiveW ;
    const nlohmann::json expected = "PositiveW";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DiscardRectangleModeEXT.hpp>
BOOST_AUTO_TEST_CASE(DiscardRectangleModeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DiscardRectangleModeEXT :: eInclusive ;
    const nlohmann::json expected = "Inclusive";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DiscardRectangleModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ConservativeRasterizationModeEXT.hpp>
BOOST_AUTO_TEST_CASE(ConservativeRasterizationModeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT :: eDisabled ;
    const nlohmann::json expected = "Disabled";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT :: eOverestimate ;
    const nlohmann::json expected = "Overestimate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceCounterScopeKHR.hpp>
BOOST_AUTO_TEST_CASE(PerformanceCounterScopeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR :: eCommandBuffer ;
    const nlohmann::json expected = "CommandBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR :: eRenderPass ;
    const nlohmann::json expected = "RenderPass";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR :: eCommand ;
    const nlohmann::json expected = "Command";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR :: eVkQueryScopeCommandBuffer ;
    const nlohmann::json expected = "VkQueryScopeCommandBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR :: eVkQueryScopeCommand ;
    const nlohmann::json expected = "VkQueryScopeCommand";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceCounterStorageKHR.hpp>
BOOST_AUTO_TEST_CASE(PerformanceCounterStorageKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR :: eInt32 ;
    const nlohmann::json expected = "Int32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR :: eInt64 ;
    const nlohmann::json expected = "Int64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR :: eUint32 ;
    const nlohmann::json expected = "Uint32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR :: eUint64 ;
    const nlohmann::json expected = "Uint64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR :: eFloat32 ;
    const nlohmann::json expected = "Float32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceCounterUnitKHR.hpp>
BOOST_AUTO_TEST_CASE(PerformanceCounterUnitKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eGeneric ;
    const nlohmann::json expected = "Generic";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: ePercentage ;
    const nlohmann::json expected = "Percentage";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eNanoseconds ;
    const nlohmann::json expected = "Nanoseconds";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eBytes ;
    const nlohmann::json expected = "Bytes";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eBytesPerSecond ;
    const nlohmann::json expected = "BytesPerSecond";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eKelvin ;
    const nlohmann::json expected = "Kelvin";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eWatts ;
    const nlohmann::json expected = "Watts";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eVolts ;
    const nlohmann::json expected = "Volts";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eAmps ;
    const nlohmann::json expected = "Amps";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR :: eHertz ;
    const nlohmann::json expected = "Hertz";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/BlendOverlapEXT.hpp>
BOOST_AUTO_TEST_CASE(BlendOverlapEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOverlapEXT :: eUncorrelated ;
    const nlohmann::json expected = "Uncorrelated";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOverlapEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BlendOverlapEXT :: eDisjoint ;
    const nlohmann::json expected = "Disjoint";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BlendOverlapEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AccelerationStructureTypeKHR.hpp>
BOOST_AUTO_TEST_CASE(AccelerationStructureTypeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR :: eTopLevel ;
    const nlohmann::json expected = "TopLevel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR :: eBottomLevel ;
    const nlohmann::json expected = "BottomLevel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AccelerationStructureBuildTypeKHR.hpp>
BOOST_AUTO_TEST_CASE(AccelerationStructureBuildTypeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureBuildTypeKHR :: eHost ;
    const nlohmann::json expected = "Host";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureBuildTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureBuildTypeKHR :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureBuildTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CopyAccelerationStructureModeKHR.hpp>
BOOST_AUTO_TEST_CASE(CopyAccelerationStructureModeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR :: eClone ;
    const nlohmann::json expected = "Clone";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR :: eCompact ;
    const nlohmann::json expected = "Compact";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR :: eSerialize ;
    const nlohmann::json expected = "Serialize";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CopyAccelerationStructureModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/GeometryTypeKHR.hpp>
BOOST_AUTO_TEST_CASE(GeometryTypeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: GeometryTypeKHR :: eTriangles ;
    const nlohmann::json expected = "Triangles";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: GeometryTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: GeometryTypeKHR :: eAabbs ;
    const nlohmann::json expected = "Aabbs";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: GeometryTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AccelerationStructureCompatibilityKHR.hpp>
BOOST_AUTO_TEST_CASE(AccelerationStructureCompatibilityKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureCompatibilityKHR :: eCompatible ;
    const nlohmann::json expected = "Compatible";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureCompatibilityKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/BuildAccelerationStructureModeKHR.hpp>
BOOST_AUTO_TEST_CASE(BuildAccelerationStructureModeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: BuildAccelerationStructureModeKHR :: eBuild ;
    const nlohmann::json expected = "Build";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: BuildAccelerationStructureModeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CoverageModulationModeNV.hpp>
BOOST_AUTO_TEST_CASE(CoverageModulationModeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV :: eNone ;
    const nlohmann::json expected = "None";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV :: eRgb ;
    const nlohmann::json expected = "Rgb";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV :: eAlpha ;
    const nlohmann::json expected = "Alpha";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ValidationCacheHeaderVersionEXT.hpp>
BOOST_AUTO_TEST_CASE(ValidationCacheHeaderVersionEXT) {
}
#include <vulkan2json/ShadingRatePaletteEntryNV.hpp>
BOOST_AUTO_TEST_CASE(ShadingRatePaletteEntryNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: eNoInvocations ;
    const nlohmann::json expected = "NoInvocations";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e16InvocationsPerPixel ;
    const nlohmann::json expected = "16InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e8InvocationsPerPixel ;
    const nlohmann::json expected = "8InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e4InvocationsPerPixel ;
    const nlohmann::json expected = "4InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e2InvocationsPerPixel ;
    const nlohmann::json expected = "2InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPerPixel ;
    const nlohmann::json expected = "1InvocationPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPer2X1Pixels ;
    const nlohmann::json expected = "1InvocationPer2X1Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPer1X2Pixels ;
    const nlohmann::json expected = "1InvocationPer1X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPer2X2Pixels ;
    const nlohmann::json expected = "1InvocationPer2X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPer4X2Pixels ;
    const nlohmann::json expected = "1InvocationPer4X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV :: e1InvocationPer2X4Pixels ;
    const nlohmann::json expected = "1InvocationPer2X4Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CoarseSampleOrderTypeNV.hpp>
BOOST_AUTO_TEST_CASE(CoarseSampleOrderTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV :: eDefault ;
    const nlohmann::json expected = "Default";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV :: eCustom ;
    const nlohmann::json expected = "Custom";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV :: ePixelMajor ;
    const nlohmann::json expected = "PixelMajor";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AccelerationStructureMemoryRequirementsTypeNV.hpp>
BOOST_AUTO_TEST_CASE(AccelerationStructureMemoryRequirementsTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV :: eObject ;
    const nlohmann::json expected = "Object";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV :: eBuildScratch ;
    const nlohmann::json expected = "BuildScratch";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/QueueGlobalPriorityEXT.hpp>
BOOST_AUTO_TEST_CASE(QueueGlobalPriorityEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT :: eLow ;
    const nlohmann::json expected = "Low";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT :: eMedium ;
    const nlohmann::json expected = "Medium";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT :: eHigh ;
    const nlohmann::json expected = "High";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/TimeDomainEXT.hpp>
BOOST_AUTO_TEST_CASE(TimeDomainEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: TimeDomainEXT :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: TimeDomainEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: TimeDomainEXT :: eClockMonotonic ;
    const nlohmann::json expected = "ClockMonotonic";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: TimeDomainEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: TimeDomainEXT :: eClockMonotonicRaw ;
    const nlohmann::json expected = "ClockMonotonicRaw";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: TimeDomainEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/MemoryOverallocationBehaviorAMD.hpp>
BOOST_AUTO_TEST_CASE(MemoryOverallocationBehaviorAMD) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: MemoryOverallocationBehaviorAMD :: eDefault ;
    const nlohmann::json expected = "Default";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: MemoryOverallocationBehaviorAMD ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: MemoryOverallocationBehaviorAMD :: eAllowed ;
    const nlohmann::json expected = "Allowed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: MemoryOverallocationBehaviorAMD ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceConfigurationTypeINTEL.hpp>
BOOST_AUTO_TEST_CASE(PerformanceConfigurationTypeINTEL) {
}
#include <vulkan2json/QueryPoolSamplingModeINTEL.hpp>
BOOST_AUTO_TEST_CASE(QueryPoolSamplingModeINTEL) {
}
#include <vulkan2json/PerformanceOverrideTypeINTEL.hpp>
BOOST_AUTO_TEST_CASE(PerformanceOverrideTypeINTEL) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceOverrideTypeINTEL :: eNullHardware ;
    const nlohmann::json expected = "NullHardware";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceOverrideTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceParameterTypeINTEL.hpp>
BOOST_AUTO_TEST_CASE(PerformanceParameterTypeINTEL) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceParameterTypeINTEL :: eHwCountersSupported ;
    const nlohmann::json expected = "HwCountersSupported";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceParameterTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PerformanceValueTypeINTEL.hpp>
BOOST_AUTO_TEST_CASE(PerformanceValueTypeINTEL) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL :: eUint32 ;
    const nlohmann::json expected = "Uint32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL :: eUint64 ;
    const nlohmann::json expected = "Uint64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL :: eFloat ;
    const nlohmann::json expected = "Float";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL :: eBool ;
    const nlohmann::json expected = "Bool";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/FragmentShadingRateCombinerOpKHR.hpp>
BOOST_AUTO_TEST_CASE(FragmentShadingRateCombinerOpKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR :: eKeep ;
    const nlohmann::json expected = "Keep";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR :: eReplace ;
    const nlohmann::json expected = "Replace";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR :: eMin ;
    const nlohmann::json expected = "Min";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR :: eMax ;
    const nlohmann::json expected = "Max";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ValidationFeatureEnableEXT.hpp>
BOOST_AUTO_TEST_CASE(ValidationFeatureEnableEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT :: eGpuAssisted ;
    const nlohmann::json expected = "GpuAssisted";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT :: eGpuAssistedReserveBindingSlot ;
    const nlohmann::json expected = "GpuAssistedReserveBindingSlot";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT :: eBestPractices ;
    const nlohmann::json expected = "BestPractices";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT :: eDebugPrintf ;
    const nlohmann::json expected = "DebugPrintf";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ValidationFeatureDisableEXT.hpp>
BOOST_AUTO_TEST_CASE(ValidationFeatureDisableEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eAll ;
    const nlohmann::json expected = "All";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eShaders ;
    const nlohmann::json expected = "Shaders";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eThreadSafety ;
    const nlohmann::json expected = "ThreadSafety";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eApiParameters ;
    const nlohmann::json expected = "ApiParameters";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eObjectLifetimes ;
    const nlohmann::json expected = "ObjectLifetimes";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eCoreChecks ;
    const nlohmann::json expected = "CoreChecks";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT :: eUniqueHandles ;
    const nlohmann::json expected = "UniqueHandles";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ScopeNV.hpp>
BOOST_AUTO_TEST_CASE(ScopeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ScopeNV :: eDevice ;
    const nlohmann::json expected = "Device";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ScopeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ScopeNV :: eWorkgroup ;
    const nlohmann::json expected = "Workgroup";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ScopeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ScopeNV :: eSubgroup ;
    const nlohmann::json expected = "Subgroup";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ScopeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ComponentTypeNV.hpp>
BOOST_AUTO_TEST_CASE(ComponentTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eFloat16 ;
    const nlohmann::json expected = "Float16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eFloat32 ;
    const nlohmann::json expected = "Float32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eFloat64 ;
    const nlohmann::json expected = "Float64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eSint8 ;
    const nlohmann::json expected = "Sint8";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eSint16 ;
    const nlohmann::json expected = "Sint16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eSint32 ;
    const nlohmann::json expected = "Sint32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eSint64 ;
    const nlohmann::json expected = "Sint64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eUint8 ;
    const nlohmann::json expected = "Uint8";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eUint16 ;
    const nlohmann::json expected = "Uint16";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ComponentTypeNV :: eUint32 ;
    const nlohmann::json expected = "Uint32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/CoverageReductionModeNV.hpp>
BOOST_AUTO_TEST_CASE(CoverageReductionModeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: CoverageReductionModeNV :: eMerge ;
    const nlohmann::json expected = "Merge";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: CoverageReductionModeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ProvokingVertexModeEXT.hpp>
BOOST_AUTO_TEST_CASE(ProvokingVertexModeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ProvokingVertexModeEXT :: eFirstVertex ;
    const nlohmann::json expected = "FirstVertex";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ProvokingVertexModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/FullScreenExclusiveEXT.hpp>
BOOST_AUTO_TEST_CASE(FullScreenExclusiveEXT) {
#if defined( VK_USE_PLATFORM_WIN32_KHR )
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT :: eDefault ;
    const nlohmann::json expected = "Default";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT :: eAllowed ;
    const nlohmann::json expected = "Allowed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT :: eDisallowed ;
    const nlohmann::json expected = "Disallowed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FullScreenExclusiveEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
#endif
}
#include <vulkan2json/LineRasterizationModeEXT.hpp>
BOOST_AUTO_TEST_CASE(LineRasterizationModeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT :: eDefault ;
    const nlohmann::json expected = "Default";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT :: eRectangular ;
    const nlohmann::json expected = "Rectangular";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT :: eBresenham ;
    const nlohmann::json expected = "Bresenham";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/PipelineExecutableStatisticFormatKHR.hpp>
BOOST_AUTO_TEST_CASE(PipelineExecutableStatisticFormatKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR :: eBool32 ;
    const nlohmann::json expected = "Bool32";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR :: eInt64 ;
    const nlohmann::json expected = "Int64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR :: eUint64 ;
    const nlohmann::json expected = "Uint64";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/IndirectCommandsTokenTypeNV.hpp>
BOOST_AUTO_TEST_CASE(IndirectCommandsTokenTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eShaderGroup ;
    const nlohmann::json expected = "ShaderGroup";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eStateFlags ;
    const nlohmann::json expected = "StateFlags";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eIndexBuffer ;
    const nlohmann::json expected = "IndexBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eVertexBuffer ;
    const nlohmann::json expected = "VertexBuffer";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: ePushConstant ;
    const nlohmann::json expected = "PushConstant";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eDrawIndexed ;
    const nlohmann::json expected = "DrawIndexed";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV :: eDraw ;
    const nlohmann::json expected = "Draw";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/DeviceMemoryReportEventTypeEXT.hpp>
BOOST_AUTO_TEST_CASE(DeviceMemoryReportEventTypeEXT) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT :: eAllocate ;
    const nlohmann::json expected = "Allocate";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT :: eFree ;
    const nlohmann::json expected = "Free";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT :: eImport ;
    const nlohmann::json expected = "Import";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT :: eUnimport ;
    const nlohmann::json expected = "Unimport";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/FragmentShadingRateNV.hpp>
BOOST_AUTO_TEST_CASE(FragmentShadingRateNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPerPixel ;
    const nlohmann::json expected = "1InvocationPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer1X2Pixels ;
    const nlohmann::json expected = "1InvocationPer1X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer2X1Pixels ;
    const nlohmann::json expected = "1InvocationPer2X1Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer2X2Pixels ;
    const nlohmann::json expected = "1InvocationPer2X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer2X4Pixels ;
    const nlohmann::json expected = "1InvocationPer2X4Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer4X2Pixels ;
    const nlohmann::json expected = "1InvocationPer4X2Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e1InvocationPer4X4Pixels ;
    const nlohmann::json expected = "1InvocationPer4X4Pixels";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e2InvocationsPerPixel ;
    const nlohmann::json expected = "2InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e4InvocationsPerPixel ;
    const nlohmann::json expected = "4InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e8InvocationsPerPixel ;
    const nlohmann::json expected = "8InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV :: e16InvocationsPerPixel ;
    const nlohmann::json expected = "16InvocationsPerPixel";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/FragmentShadingRateTypeNV.hpp>
BOOST_AUTO_TEST_CASE(FragmentShadingRateTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: FragmentShadingRateTypeNV :: eFragmentSize ;
    const nlohmann::json expected = "FragmentSize";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: FragmentShadingRateTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/AccelerationStructureMotionInstanceTypeNV.hpp>
BOOST_AUTO_TEST_CASE(AccelerationStructureMotionInstanceTypeNV) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV :: eStatic ;
    const nlohmann::json expected = "Static";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV :: eMatrixMotion ;
    const nlohmann::json expected = "MatrixMotion";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/RayTracingShaderGroupTypeKHR.hpp>
BOOST_AUTO_TEST_CASE(RayTracingShaderGroupTypeKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: RayTracingShaderGroupTypeKHR :: eGeneral ;
    const nlohmann::json expected = "General";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: RayTracingShaderGroupTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: RayTracingShaderGroupTypeKHR :: eTrianglesHitGroup ;
    const nlohmann::json expected = "TrianglesHitGroup";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: RayTracingShaderGroupTypeKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
#include <vulkan2json/ShaderGroupShaderKHR.hpp>
BOOST_AUTO_TEST_CASE(ShaderGroupShaderKHR) {
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR :: eGeneral ;
    const nlohmann::json expected = "General";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR :: eClosestHit ;
    const nlohmann::json expected = "ClosestHit";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
  {
    const auto original = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR :: eAnyHit ;
    const nlohmann::json expected = "AnyHit";
    const nlohmann::json serialized = original;
    const auto deserialized = VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR ( serialized );
    BOOST_CHECK( deserialized == original );
  }
}
