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
#ifndef VULKAN2JSON_ACCELERATIONSTRUCTUREMEMORYREQUIREMENTSTYPENV_HPP
#define VULKAN2JSON_ACCELERATIONSTRUCTUREMEMORYREQUIREMENTSTYPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_RAY_TRACING_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AccelerationStructureMemoryRequirementsTypeNV &p ) {
  if( AccelerationStructureMemoryRequirementsTypeNV :: eObject == p ) {
    j = "Object";
    return;
  }
  if( AccelerationStructureMemoryRequirementsTypeNV :: eBuildScratch == p ) {
    j = "BuildScratch";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkAccelerationStructureMemoryRequirementsTypeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AccelerationStructureMemoryRequirementsTypeNV &p ) {
  if( j.is_string() ) {
    if( "Object" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eObject ;
      return;
    }
    if( "eObject" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eObject ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eObject ;
      return;
    }
    if( "BuildScratch" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eBuildScratch ;
      return;
    }
    if( "eBuildScratch" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eBuildScratch ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV" == j.get< std::string >() ) {
      p = AccelerationStructureMemoryRequirementsTypeNV :: eBuildScratch ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AccelerationStructureMemoryRequirementsTypeNV" );
  }
  if( j.is_number() ) {
    p = AccelerationStructureMemoryRequirementsTypeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AccelerationStructureMemoryRequirementsTypeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkAccelerationStructureMemoryRequirementsTypeNV &p ) {
  VULKAN_HPP_NAMESPACE :: AccelerationStructureMemoryRequirementsTypeNV temp;
  from_json( j, temp );
  p = VkAccelerationStructureMemoryRequirementsTypeNV ( temp );
}
#endif


#endif
