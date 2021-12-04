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
#ifndef VULKAN2JSON_ACCELERATIONSTRUCTUREMOTIONINSTANCETYPENV_HPP
#define VULKAN2JSON_ACCELERATIONSTRUCTUREMOTIONINSTANCETYPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_RAY_TRACING_MOTION_BLUR_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AccelerationStructureMotionInstanceTypeNV &p ) {
  if( AccelerationStructureMotionInstanceTypeNV :: eStatic == p ) {
    j = "Static";
    return;
  }
  if( AccelerationStructureMotionInstanceTypeNV :: eMatrixMotion == p ) {
    j = "MatrixMotion";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkAccelerationStructureMotionInstanceTypeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AccelerationStructureMotionInstanceTypeNV &p ) {
  if( j.is_string() ) {
    if( "Static" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eStatic ;
      return;
    }
    if( "eStatic" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eStatic ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_STATIC_NV" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eStatic ;
      return;
    }
    if( "MatrixMotion" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eMatrixMotion ;
      return;
    }
    if( "eMatrixMotion" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eMatrixMotion ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_MOTION_INSTANCE_TYPE_MATRIX_MOTION_NV" == j.get< std::string >() ) {
      p = AccelerationStructureMotionInstanceTypeNV :: eMatrixMotion ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AccelerationStructureMotionInstanceTypeNV" );
  }
  if( j.is_number() ) {
    p = AccelerationStructureMotionInstanceTypeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AccelerationStructureMotionInstanceTypeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkAccelerationStructureMotionInstanceTypeNV &p ) {
  VULKAN_HPP_NAMESPACE :: AccelerationStructureMotionInstanceTypeNV temp;
  from_json( j, temp );
  p = VkAccelerationStructureMotionInstanceTypeNV ( temp );
}
#endif


#endif
