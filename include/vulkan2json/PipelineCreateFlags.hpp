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
#ifndef VULKAN2JSON_PIPELINECREATEFLAGS_HPP
#define VULKAN2JSON_PIPELINECREATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const PipelineCreateFlagBits &p ) {
  if( PipelineCreateFlagBits :: eDisableOptimization == p ) {
    j = "DisableOptimization";
    return;
  }
  if( PipelineCreateFlagBits :: eAllowDerivatives == p ) {
    j = "AllowDerivatives";
    return;
  }
  if( PipelineCreateFlagBits :: eDerivative == p ) {
    j = "Derivative";
    return;
  }
  if( PipelineCreateFlagBits :: eViewIndexFromDeviceIndex == p ) {
    j = "ViewIndexFromDeviceIndex";
    return;
  }
  if( PipelineCreateFlagBits :: eDispatchBase == p ) {
    j = "DispatchBase";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingNoNullAnyHitShadersKHR == p ) {
    j = "RayTracingNoNullAnyHitShadersKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingNoNullClosestHitShadersKHR == p ) {
    j = "RayTracingNoNullClosestHitShadersKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingNoNullMissShadersKHR == p ) {
    j = "RayTracingNoNullMissShadersKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingNoNullIntersectionShadersKHR == p ) {
    j = "RayTracingNoNullIntersectionShadersKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingSkipTrianglesKHR == p ) {
    j = "RayTracingSkipTrianglesKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingSkipAabbsKHR == p ) {
    j = "RayTracingSkipAabbsKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eDeferCompileNV == p ) {
    j = "DeferCompileNV";
    return;
  }
  if( PipelineCreateFlagBits :: eCaptureStatisticsKHR == p ) {
    j = "CaptureStatisticsKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eCaptureInternalRepresentationsKHR == p ) {
    j = "CaptureInternalRepresentationsKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eIndirectBindableNV == p ) {
    j = "IndirectBindableNV";
    return;
  }
  if( PipelineCreateFlagBits :: eLibraryKHR == p ) {
    j = "LibraryKHR";
    return;
  }
  if( PipelineCreateFlagBits :: eFailOnPipelineCompileRequiredEXT == p ) {
    j = "FailOnPipelineCompileRequiredEXT";
    return;
  }
  if( PipelineCreateFlagBits :: eEarlyReturnOnFailureEXT == p ) {
    j = "EarlyReturnOnFailureEXT";
    return;
  }
  if( PipelineCreateFlagBits :: eRayTracingAllowMotionNV == p ) {
    j = "RayTracingAllowMotionNV";
    return;
  }
  if( PipelineCreateFlagBits :: eDispatchBaseKHR == p ) {
    j = "DispatchBaseKHR";
    return;
  }
}
inline void from_json( const nlohmann::json &j, PipelineCreateFlagBits &p ) {
  if( j.is_string() ) {
    if( "DisableOptimization" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDisableOptimization ;
      return;
    }
    if( "eDisableOptimization" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDisableOptimization ;
      return;
    }
    if( "VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDisableOptimization ;
      return;
    }
    if( "AllowDerivatives" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eAllowDerivatives ;
      return;
    }
    if( "eAllowDerivatives" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eAllowDerivatives ;
      return;
    }
    if( "VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eAllowDerivatives ;
      return;
    }
    if( "Derivative" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDerivative ;
      return;
    }
    if( "eDerivative" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDerivative ;
      return;
    }
    if( "VK_PIPELINE_CREATE_DERIVATIVE_BIT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDerivative ;
      return;
    }
    if( "ViewIndexFromDeviceIndex" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eViewIndexFromDeviceIndex ;
      return;
    }
    if( "eViewIndexFromDeviceIndex" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eViewIndexFromDeviceIndex ;
      return;
    }
    if( "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eViewIndexFromDeviceIndex ;
      return;
    }
    if( "DispatchBase" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBase ;
      return;
    }
    if( "eDispatchBase" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBase ;
      return;
    }
    if( "VK_PIPELINE_CREATE_DISPATCH_BASE_BIT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBase ;
      return;
    }
    if( "RayTracingNoNullAnyHitShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullAnyHitShadersKHR ;
      return;
    }
    if( "eRayTracingNoNullAnyHitShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullAnyHitShadersKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullAnyHitShadersKHR ;
      return;
    }
    if( "RayTracingNoNullClosestHitShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullClosestHitShadersKHR ;
      return;
    }
    if( "eRayTracingNoNullClosestHitShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullClosestHitShadersKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullClosestHitShadersKHR ;
      return;
    }
    if( "RayTracingNoNullMissShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullMissShadersKHR ;
      return;
    }
    if( "eRayTracingNoNullMissShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullMissShadersKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullMissShadersKHR ;
      return;
    }
    if( "RayTracingNoNullIntersectionShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullIntersectionShadersKHR ;
      return;
    }
    if( "eRayTracingNoNullIntersectionShadersKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullIntersectionShadersKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingNoNullIntersectionShadersKHR ;
      return;
    }
    if( "RayTracingSkipTrianglesKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipTrianglesKHR ;
      return;
    }
    if( "eRayTracingSkipTrianglesKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipTrianglesKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipTrianglesKHR ;
      return;
    }
    if( "RayTracingSkipAabbsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipAabbsKHR ;
      return;
    }
    if( "eRayTracingSkipAabbsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipAabbsKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_SKIP_AABBS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingSkipAabbsKHR ;
      return;
    }
    if( "DeferCompileNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDeferCompileNV ;
      return;
    }
    if( "eDeferCompileNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDeferCompileNV ;
      return;
    }
    if( "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDeferCompileNV ;
      return;
    }
    if( "CaptureStatisticsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureStatisticsKHR ;
      return;
    }
    if( "eCaptureStatisticsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureStatisticsKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureStatisticsKHR ;
      return;
    }
    if( "CaptureInternalRepresentationsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureInternalRepresentationsKHR ;
      return;
    }
    if( "eCaptureInternalRepresentationsKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureInternalRepresentationsKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eCaptureInternalRepresentationsKHR ;
      return;
    }
    if( "IndirectBindableNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eIndirectBindableNV ;
      return;
    }
    if( "eIndirectBindableNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eIndirectBindableNV ;
      return;
    }
    if( "VK_PIPELINE_CREATE_INDIRECT_BINDABLE_BIT_NV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eIndirectBindableNV ;
      return;
    }
    if( "LibraryKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eLibraryKHR ;
      return;
    }
    if( "eLibraryKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eLibraryKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_LIBRARY_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eLibraryKHR ;
      return;
    }
    if( "FailOnPipelineCompileRequiredEXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eFailOnPipelineCompileRequiredEXT ;
      return;
    }
    if( "eFailOnPipelineCompileRequiredEXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eFailOnPipelineCompileRequiredEXT ;
      return;
    }
    if( "VK_PIPELINE_CREATE_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eFailOnPipelineCompileRequiredEXT ;
      return;
    }
    if( "EarlyReturnOnFailureEXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eEarlyReturnOnFailureEXT ;
      return;
    }
    if( "eEarlyReturnOnFailureEXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eEarlyReturnOnFailureEXT ;
      return;
    }
    if( "VK_PIPELINE_CREATE_EARLY_RETURN_ON_FAILURE_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eEarlyReturnOnFailureEXT ;
      return;
    }
    if( "RayTracingAllowMotionNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingAllowMotionNV ;
      return;
    }
    if( "eRayTracingAllowMotionNV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingAllowMotionNV ;
      return;
    }
    if( "VK_PIPELINE_CREATE_RAY_TRACING_ALLOW_MOTION_BIT_NV" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eRayTracingAllowMotionNV ;
      return;
    }
    if( "DispatchBaseKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBaseKHR ;
      return;
    }
    if( "eDispatchBaseKHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBaseKHR ;
      return;
    }
    if( "VK_PIPELINE_CREATE_DISPATCH_BASE_KHR" == j.get< std::string >() ) {
      p = PipelineCreateFlagBits :: eDispatchBaseKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PipelineCreateFlagBits" );
  }
  if( j.is_number() ) {
    p = PipelineCreateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PipelineCreateFlagBits" );
}
inline void to_json( nlohmann::json &j, const PipelineCreateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( PipelineCreateFlagBits ) * 8u; ++n ) {
    if( p & PipelineCreateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, PipelineCreateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, PipelineCreateFlags &p ) {
  if( j.is_array() ) {
    p = PipelineCreateFlags ( 0 );
    for( auto &e:  j ) {
      PipelineCreateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for PipelineCreateFlags" );
}
}
#endif


#endif
