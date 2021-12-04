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
#ifndef VULKAN2JSON_RESULT_HPP
#define VULKAN2JSON_RESULT_HPP

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
inline void to_json( nlohmann::json &j, const Result &p ) {
  if( Result :: eSuccess == p ) {
    j = "Success";
    return;
  }
  if( Result :: eNotReady == p ) {
    j = "NotReady";
    return;
  }
  if( Result :: eTimeout == p ) {
    j = "Timeout";
    return;
  }
  if( Result :: eEventSet == p ) {
    j = "EventSet";
    return;
  }
  if( Result :: eEventReset == p ) {
    j = "EventReset";
    return;
  }
  if( Result :: eIncomplete == p ) {
    j = "Incomplete";
    return;
  }
  if( Result :: eErrorOutOfHostMemory == p ) {
    j = "ErrorOutOfHostMemory";
    return;
  }
  if( Result :: eErrorOutOfDeviceMemory == p ) {
    j = "ErrorOutOfDeviceMemory";
    return;
  }
  if( Result :: eErrorInitializationFailed == p ) {
    j = "ErrorInitializationFailed";
    return;
  }
  if( Result :: eErrorDeviceLost == p ) {
    j = "ErrorDeviceLost";
    return;
  }
  if( Result :: eErrorMemoryMapFailed == p ) {
    j = "ErrorMemoryMapFailed";
    return;
  }
  if( Result :: eErrorLayerNotPresent == p ) {
    j = "ErrorLayerNotPresent";
    return;
  }
  if( Result :: eErrorExtensionNotPresent == p ) {
    j = "ErrorExtensionNotPresent";
    return;
  }
  if( Result :: eErrorFeatureNotPresent == p ) {
    j = "ErrorFeatureNotPresent";
    return;
  }
  if( Result :: eErrorIncompatibleDriver == p ) {
    j = "ErrorIncompatibleDriver";
    return;
  }
  if( Result :: eErrorTooManyObjects == p ) {
    j = "ErrorTooManyObjects";
    return;
  }
  if( Result :: eErrorFormatNotSupported == p ) {
    j = "ErrorFormatNotSupported";
    return;
  }
  if( Result :: eErrorFragmentedPool == p ) {
    j = "ErrorFragmentedPool";
    return;
  }
  if( Result :: eErrorUnknown == p ) {
    j = "ErrorUnknown";
    return;
  }
  if( Result :: eErrorOutOfPoolMemory == p ) {
    j = "ErrorOutOfPoolMemory";
    return;
  }
  if( Result :: eErrorInvalidExternalHandle == p ) {
    j = "ErrorInvalidExternalHandle";
    return;
  }
  if( Result :: eErrorFragmentation == p ) {
    j = "ErrorFragmentation";
    return;
  }
  if( Result :: eErrorInvalidOpaqueCaptureAddress == p ) {
    j = "ErrorInvalidOpaqueCaptureAddress";
    return;
  }
  if( Result :: eErrorSurfaceLostKHR == p ) {
    j = "ErrorSurfaceLostKHR";
    return;
  }
  if( Result :: eErrorNativeWindowInUseKHR == p ) {
    j = "ErrorNativeWindowInUseKHR";
    return;
  }
  if( Result :: eSuboptimalKHR == p ) {
    j = "SuboptimalKHR";
    return;
  }
  if( Result :: eErrorOutOfDateKHR == p ) {
    j = "ErrorOutOfDateKHR";
    return;
  }
  if( Result :: eErrorIncompatibleDisplayKHR == p ) {
    j = "ErrorIncompatibleDisplayKHR";
    return;
  }
  if( Result :: eErrorValidationFailedEXT == p ) {
    j = "ErrorValidationFailedEXT";
    return;
  }
  if( Result :: eErrorInvalidShaderNV == p ) {
    j = "ErrorInvalidShaderNV";
    return;
  }
  if( Result :: eErrorInvalidDrmFormatModifierPlaneLayoutEXT == p ) {
    j = "ErrorInvalidDrmFormatModifierPlaneLayoutEXT";
    return;
  }
  if( Result :: eErrorNotPermittedEXT == p ) {
    j = "ErrorNotPermittedEXT";
    return;
  }
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  if( Result :: eErrorFullScreenExclusiveModeLostEXT == p ) {
    j = "ErrorFullScreenExclusiveModeLostEXT";
    return;
  }
#endif
  if( Result :: eThreadIdleKHR == p ) {
    j = "ThreadIdleKHR";
    return;
  }
  if( Result :: eThreadDoneKHR == p ) {
    j = "ThreadDoneKHR";
    return;
  }
  if( Result :: eOperationDeferredKHR == p ) {
    j = "OperationDeferredKHR";
    return;
  }
  if( Result :: eOperationNotDeferredKHR == p ) {
    j = "OperationNotDeferredKHR";
    return;
  }
  if( Result :: ePipelineCompileRequiredEXT == p ) {
    j = "PipelineCompileRequiredEXT";
    return;
  }
  if( Result :: eErrorFragmentationEXT == p ) {
    j = "ErrorFragmentationEXT";
    return;
  }
  if( Result :: eErrorInvalidDeviceAddressEXT == p ) {
    j = "ErrorInvalidDeviceAddressEXT";
    return;
  }
  if( Result :: eErrorInvalidExternalHandleKHR == p ) {
    j = "ErrorInvalidExternalHandleKHR";
    return;
  }
  if( Result :: eErrorInvalidOpaqueCaptureAddressKHR == p ) {
    j = "ErrorInvalidOpaqueCaptureAddressKHR";
    return;
  }
  if( Result :: eErrorOutOfPoolMemoryKHR == p ) {
    j = "ErrorOutOfPoolMemoryKHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkResult &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: Result ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, Result &p ) {
  if( j.is_string() ) {
    if( "Success" == j.get< std::string >() ) {
      p = Result :: eSuccess ;
      return;
    }
    if( "eSuccess" == j.get< std::string >() ) {
      p = Result :: eSuccess ;
      return;
    }
    if( "VK_SUCCESS" == j.get< std::string >() ) {
      p = Result :: eSuccess ;
      return;
    }
    if( "NotReady" == j.get< std::string >() ) {
      p = Result :: eNotReady ;
      return;
    }
    if( "eNotReady" == j.get< std::string >() ) {
      p = Result :: eNotReady ;
      return;
    }
    if( "VK_NOT_READY" == j.get< std::string >() ) {
      p = Result :: eNotReady ;
      return;
    }
    if( "Timeout" == j.get< std::string >() ) {
      p = Result :: eTimeout ;
      return;
    }
    if( "eTimeout" == j.get< std::string >() ) {
      p = Result :: eTimeout ;
      return;
    }
    if( "VK_TIMEOUT" == j.get< std::string >() ) {
      p = Result :: eTimeout ;
      return;
    }
    if( "EventSet" == j.get< std::string >() ) {
      p = Result :: eEventSet ;
      return;
    }
    if( "eEventSet" == j.get< std::string >() ) {
      p = Result :: eEventSet ;
      return;
    }
    if( "VK_EVENT_SET" == j.get< std::string >() ) {
      p = Result :: eEventSet ;
      return;
    }
    if( "EventReset" == j.get< std::string >() ) {
      p = Result :: eEventReset ;
      return;
    }
    if( "eEventReset" == j.get< std::string >() ) {
      p = Result :: eEventReset ;
      return;
    }
    if( "VK_EVENT_RESET" == j.get< std::string >() ) {
      p = Result :: eEventReset ;
      return;
    }
    if( "Incomplete" == j.get< std::string >() ) {
      p = Result :: eIncomplete ;
      return;
    }
    if( "eIncomplete" == j.get< std::string >() ) {
      p = Result :: eIncomplete ;
      return;
    }
    if( "VK_INCOMPLETE" == j.get< std::string >() ) {
      p = Result :: eIncomplete ;
      return;
    }
    if( "ErrorOutOfHostMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfHostMemory ;
      return;
    }
    if( "eErrorOutOfHostMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfHostMemory ;
      return;
    }
    if( "VK_ERROR_OUT_OF_HOST_MEMORY" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfHostMemory ;
      return;
    }
    if( "ErrorOutOfDeviceMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDeviceMemory ;
      return;
    }
    if( "eErrorOutOfDeviceMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDeviceMemory ;
      return;
    }
    if( "VK_ERROR_OUT_OF_DEVICE_MEMORY" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDeviceMemory ;
      return;
    }
    if( "ErrorInitializationFailed" == j.get< std::string >() ) {
      p = Result :: eErrorInitializationFailed ;
      return;
    }
    if( "eErrorInitializationFailed" == j.get< std::string >() ) {
      p = Result :: eErrorInitializationFailed ;
      return;
    }
    if( "VK_ERROR_INITIALIZATION_FAILED" == j.get< std::string >() ) {
      p = Result :: eErrorInitializationFailed ;
      return;
    }
    if( "ErrorDeviceLost" == j.get< std::string >() ) {
      p = Result :: eErrorDeviceLost ;
      return;
    }
    if( "eErrorDeviceLost" == j.get< std::string >() ) {
      p = Result :: eErrorDeviceLost ;
      return;
    }
    if( "VK_ERROR_DEVICE_LOST" == j.get< std::string >() ) {
      p = Result :: eErrorDeviceLost ;
      return;
    }
    if( "ErrorMemoryMapFailed" == j.get< std::string >() ) {
      p = Result :: eErrorMemoryMapFailed ;
      return;
    }
    if( "eErrorMemoryMapFailed" == j.get< std::string >() ) {
      p = Result :: eErrorMemoryMapFailed ;
      return;
    }
    if( "VK_ERROR_MEMORY_MAP_FAILED" == j.get< std::string >() ) {
      p = Result :: eErrorMemoryMapFailed ;
      return;
    }
    if( "ErrorLayerNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorLayerNotPresent ;
      return;
    }
    if( "eErrorLayerNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorLayerNotPresent ;
      return;
    }
    if( "VK_ERROR_LAYER_NOT_PRESENT" == j.get< std::string >() ) {
      p = Result :: eErrorLayerNotPresent ;
      return;
    }
    if( "ErrorExtensionNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorExtensionNotPresent ;
      return;
    }
    if( "eErrorExtensionNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorExtensionNotPresent ;
      return;
    }
    if( "VK_ERROR_EXTENSION_NOT_PRESENT" == j.get< std::string >() ) {
      p = Result :: eErrorExtensionNotPresent ;
      return;
    }
    if( "ErrorFeatureNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorFeatureNotPresent ;
      return;
    }
    if( "eErrorFeatureNotPresent" == j.get< std::string >() ) {
      p = Result :: eErrorFeatureNotPresent ;
      return;
    }
    if( "VK_ERROR_FEATURE_NOT_PRESENT" == j.get< std::string >() ) {
      p = Result :: eErrorFeatureNotPresent ;
      return;
    }
    if( "ErrorIncompatibleDriver" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDriver ;
      return;
    }
    if( "eErrorIncompatibleDriver" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDriver ;
      return;
    }
    if( "VK_ERROR_INCOMPATIBLE_DRIVER" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDriver ;
      return;
    }
    if( "ErrorTooManyObjects" == j.get< std::string >() ) {
      p = Result :: eErrorTooManyObjects ;
      return;
    }
    if( "eErrorTooManyObjects" == j.get< std::string >() ) {
      p = Result :: eErrorTooManyObjects ;
      return;
    }
    if( "VK_ERROR_TOO_MANY_OBJECTS" == j.get< std::string >() ) {
      p = Result :: eErrorTooManyObjects ;
      return;
    }
    if( "ErrorFormatNotSupported" == j.get< std::string >() ) {
      p = Result :: eErrorFormatNotSupported ;
      return;
    }
    if( "eErrorFormatNotSupported" == j.get< std::string >() ) {
      p = Result :: eErrorFormatNotSupported ;
      return;
    }
    if( "VK_ERROR_FORMAT_NOT_SUPPORTED" == j.get< std::string >() ) {
      p = Result :: eErrorFormatNotSupported ;
      return;
    }
    if( "ErrorFragmentedPool" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentedPool ;
      return;
    }
    if( "eErrorFragmentedPool" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentedPool ;
      return;
    }
    if( "VK_ERROR_FRAGMENTED_POOL" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentedPool ;
      return;
    }
    if( "ErrorUnknown" == j.get< std::string >() ) {
      p = Result :: eErrorUnknown ;
      return;
    }
    if( "eErrorUnknown" == j.get< std::string >() ) {
      p = Result :: eErrorUnknown ;
      return;
    }
    if( "VK_ERROR_UNKNOWN" == j.get< std::string >() ) {
      p = Result :: eErrorUnknown ;
      return;
    }
    if( "ErrorOutOfPoolMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemory ;
      return;
    }
    if( "eErrorOutOfPoolMemory" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemory ;
      return;
    }
    if( "VK_ERROR_OUT_OF_POOL_MEMORY" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemory ;
      return;
    }
    if( "ErrorInvalidExternalHandle" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandle ;
      return;
    }
    if( "eErrorInvalidExternalHandle" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandle ;
      return;
    }
    if( "VK_ERROR_INVALID_EXTERNAL_HANDLE" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandle ;
      return;
    }
    if( "ErrorFragmentation" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentation ;
      return;
    }
    if( "eErrorFragmentation" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentation ;
      return;
    }
    if( "VK_ERROR_FRAGMENTATION" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentation ;
      return;
    }
    if( "ErrorInvalidOpaqueCaptureAddress" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddress ;
      return;
    }
    if( "eErrorInvalidOpaqueCaptureAddress" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddress ;
      return;
    }
    if( "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddress ;
      return;
    }
    if( "ErrorSurfaceLostKHR" == j.get< std::string >() ) {
      p = Result :: eErrorSurfaceLostKHR ;
      return;
    }
    if( "eErrorSurfaceLostKHR" == j.get< std::string >() ) {
      p = Result :: eErrorSurfaceLostKHR ;
      return;
    }
    if( "VK_ERROR_SURFACE_LOST_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorSurfaceLostKHR ;
      return;
    }
    if( "ErrorNativeWindowInUseKHR" == j.get< std::string >() ) {
      p = Result :: eErrorNativeWindowInUseKHR ;
      return;
    }
    if( "eErrorNativeWindowInUseKHR" == j.get< std::string >() ) {
      p = Result :: eErrorNativeWindowInUseKHR ;
      return;
    }
    if( "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorNativeWindowInUseKHR ;
      return;
    }
    if( "SuboptimalKHR" == j.get< std::string >() ) {
      p = Result :: eSuboptimalKHR ;
      return;
    }
    if( "eSuboptimalKHR" == j.get< std::string >() ) {
      p = Result :: eSuboptimalKHR ;
      return;
    }
    if( "VK_SUBOPTIMAL_KHR" == j.get< std::string >() ) {
      p = Result :: eSuboptimalKHR ;
      return;
    }
    if( "ErrorOutOfDateKHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDateKHR ;
      return;
    }
    if( "eErrorOutOfDateKHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDateKHR ;
      return;
    }
    if( "VK_ERROR_OUT_OF_DATE_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfDateKHR ;
      return;
    }
    if( "ErrorIncompatibleDisplayKHR" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDisplayKHR ;
      return;
    }
    if( "eErrorIncompatibleDisplayKHR" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDisplayKHR ;
      return;
    }
    if( "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorIncompatibleDisplayKHR ;
      return;
    }
    if( "ErrorValidationFailedEXT" == j.get< std::string >() ) {
      p = Result :: eErrorValidationFailedEXT ;
      return;
    }
    if( "eErrorValidationFailedEXT" == j.get< std::string >() ) {
      p = Result :: eErrorValidationFailedEXT ;
      return;
    }
    if( "VK_ERROR_VALIDATION_FAILED_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorValidationFailedEXT ;
      return;
    }
    if( "ErrorInvalidShaderNV" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidShaderNV ;
      return;
    }
    if( "eErrorInvalidShaderNV" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidShaderNV ;
      return;
    }
    if( "VK_ERROR_INVALID_SHADER_NV" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidShaderNV ;
      return;
    }
    if( "ErrorInvalidDrmFormatModifierPlaneLayoutEXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDrmFormatModifierPlaneLayoutEXT ;
      return;
    }
    if( "eErrorInvalidDrmFormatModifierPlaneLayoutEXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDrmFormatModifierPlaneLayoutEXT ;
      return;
    }
    if( "VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDrmFormatModifierPlaneLayoutEXT ;
      return;
    }
    if( "ErrorNotPermittedEXT" == j.get< std::string >() ) {
      p = Result :: eErrorNotPermittedEXT ;
      return;
    }
    if( "eErrorNotPermittedEXT" == j.get< std::string >() ) {
      p = Result :: eErrorNotPermittedEXT ;
      return;
    }
    if( "VK_ERROR_NOT_PERMITTED_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorNotPermittedEXT ;
      return;
    }
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if( "ErrorFullScreenExclusiveModeLostEXT" == j.get< std::string >() ) {
      p = Result :: eErrorFullScreenExclusiveModeLostEXT ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if( "eErrorFullScreenExclusiveModeLostEXT" == j.get< std::string >() ) {
      p = Result :: eErrorFullScreenExclusiveModeLostEXT ;
      return;
    }
#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if( "VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorFullScreenExclusiveModeLostEXT ;
      return;
    }
#endif
    if( "ThreadIdleKHR" == j.get< std::string >() ) {
      p = Result :: eThreadIdleKHR ;
      return;
    }
    if( "eThreadIdleKHR" == j.get< std::string >() ) {
      p = Result :: eThreadIdleKHR ;
      return;
    }
    if( "VK_THREAD_IDLE_KHR" == j.get< std::string >() ) {
      p = Result :: eThreadIdleKHR ;
      return;
    }
    if( "ThreadDoneKHR" == j.get< std::string >() ) {
      p = Result :: eThreadDoneKHR ;
      return;
    }
    if( "eThreadDoneKHR" == j.get< std::string >() ) {
      p = Result :: eThreadDoneKHR ;
      return;
    }
    if( "VK_THREAD_DONE_KHR" == j.get< std::string >() ) {
      p = Result :: eThreadDoneKHR ;
      return;
    }
    if( "OperationDeferredKHR" == j.get< std::string >() ) {
      p = Result :: eOperationDeferredKHR ;
      return;
    }
    if( "eOperationDeferredKHR" == j.get< std::string >() ) {
      p = Result :: eOperationDeferredKHR ;
      return;
    }
    if( "VK_OPERATION_DEFERRED_KHR" == j.get< std::string >() ) {
      p = Result :: eOperationDeferredKHR ;
      return;
    }
    if( "OperationNotDeferredKHR" == j.get< std::string >() ) {
      p = Result :: eOperationNotDeferredKHR ;
      return;
    }
    if( "eOperationNotDeferredKHR" == j.get< std::string >() ) {
      p = Result :: eOperationNotDeferredKHR ;
      return;
    }
    if( "VK_OPERATION_NOT_DEFERRED_KHR" == j.get< std::string >() ) {
      p = Result :: eOperationNotDeferredKHR ;
      return;
    }
    if( "PipelineCompileRequiredEXT" == j.get< std::string >() ) {
      p = Result :: ePipelineCompileRequiredEXT ;
      return;
    }
    if( "ePipelineCompileRequiredEXT" == j.get< std::string >() ) {
      p = Result :: ePipelineCompileRequiredEXT ;
      return;
    }
    if( "VK_PIPELINE_COMPILE_REQUIRED_EXT" == j.get< std::string >() ) {
      p = Result :: ePipelineCompileRequiredEXT ;
      return;
    }
    if( "ErrorFragmentationEXT" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentationEXT ;
      return;
    }
    if( "eErrorFragmentationEXT" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentationEXT ;
      return;
    }
    if( "VK_ERROR_FRAGMENTATION_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorFragmentationEXT ;
      return;
    }
    if( "ErrorInvalidDeviceAddressEXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDeviceAddressEXT ;
      return;
    }
    if( "eErrorInvalidDeviceAddressEXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDeviceAddressEXT ;
      return;
    }
    if( "VK_ERROR_INVALID_DEVICE_ADDRESS_EXT" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidDeviceAddressEXT ;
      return;
    }
    if( "ErrorInvalidExternalHandleKHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandleKHR ;
      return;
    }
    if( "eErrorInvalidExternalHandleKHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandleKHR ;
      return;
    }
    if( "VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidExternalHandleKHR ;
      return;
    }
    if( "ErrorInvalidOpaqueCaptureAddressKHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddressKHR ;
      return;
    }
    if( "eErrorInvalidOpaqueCaptureAddressKHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddressKHR ;
      return;
    }
    if( "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorInvalidOpaqueCaptureAddressKHR ;
      return;
    }
    if( "ErrorOutOfPoolMemoryKHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemoryKHR ;
      return;
    }
    if( "eErrorOutOfPoolMemoryKHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemoryKHR ;
      return;
    }
    if( "VK_ERROR_OUT_OF_POOL_MEMORY_KHR" == j.get< std::string >() ) {
      p = Result :: eErrorOutOfPoolMemoryKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for Result" );
  }
  if( j.is_number() ) {
    p = Result ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for Result" );
}
}
inline void from_json( const nlohmann::json &j, VkResult &p ) {
  VULKAN_HPP_NAMESPACE :: Result temp;
  from_json( j, temp );
  p = VkResult ( temp );
}
#endif


#endif
