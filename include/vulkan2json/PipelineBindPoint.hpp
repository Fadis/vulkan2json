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
#ifndef VULKAN2JSON_PIPELINEBINDPOINT_HPP
#define VULKAN2JSON_PIPELINEBINDPOINT_HPP

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
inline void to_json( nlohmann::json &j, const PipelineBindPoint &p ) {
  if( PipelineBindPoint :: eGraphics == p ) {
    j = "Graphics";
    return;
  }
  if( PipelineBindPoint :: eCompute == p ) {
    j = "Compute";
    return;
  }
  if( PipelineBindPoint :: eRayTracingKHR == p ) {
    j = "RayTracingKHR";
    return;
  }
  if( PipelineBindPoint :: eSubpassShadingHUAWEI == p ) {
    j = "SubpassShadingHUAWEI";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPipelineBindPoint &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineBindPoint ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineBindPoint &p ) {
  if( j.is_string() ) {
    if( "Graphics" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eGraphics ;
      return;
    }
    if( "eGraphics" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eGraphics ;
      return;
    }
    if( "VK_PIPELINE_BIND_POINT_GRAPHICS" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eGraphics ;
      return;
    }
    if( "Compute" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eCompute ;
      return;
    }
    if( "eCompute" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eCompute ;
      return;
    }
    if( "VK_PIPELINE_BIND_POINT_COMPUTE" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eCompute ;
      return;
    }
    if( "RayTracingKHR" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eRayTracingKHR ;
      return;
    }
    if( "eRayTracingKHR" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eRayTracingKHR ;
      return;
    }
    if( "VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eRayTracingKHR ;
      return;
    }
    if( "SubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "eSubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "VK_PIPELINE_BIND_POINT_SUBPASS_SHADING_HUAWEI" == j.get< std::string >() ) {
      p = PipelineBindPoint :: eSubpassShadingHUAWEI ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PipelineBindPoint" );
  }
  if( j.is_number() ) {
    p = PipelineBindPoint ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PipelineBindPoint" );
}
}
inline void from_json( const nlohmann::json &j, VkPipelineBindPoint &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineBindPoint temp;
  from_json( j, temp );
  p = VkPipelineBindPoint ( temp );
}
#endif


#endif
