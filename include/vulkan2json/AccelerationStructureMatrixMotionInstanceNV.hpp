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
#ifndef VULKAN2JSON_ACCELERATIONSTRUCTUREMATRIXMOTIONINSTANCENV_HPP
#define VULKAN2JSON_ACCELERATIONSTRUCTUREMATRIXMOTIONINSTANCENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/TransformMatrixKHR.hpp>
#include <vulkan2json/TransformMatrixKHR.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AccelerationStructureMatrixMotionInstanceNV &p ) {
  j = nlohmann::json::object();
  j[ "transformT0" ] = p.transformT0;
  j[ "transformT1" ] = p.transformT1;
  j[ "instanceCustomIndex" ] = p.instanceCustomIndex;
  j[ "mask" ] = p.mask;
  j[ "instanceShaderBindingTableRecordOffset" ] = p.instanceShaderBindingTableRecordOffset;
  j[ "accelerationStructureReference" ] = p.accelerationStructureReference;
}
}
inline void to_json( nlohmann::json &j, const VkAccelerationStructureMatrixMotionInstanceNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AccelerationStructureMatrixMotionInstanceNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AccelerationStructureMatrixMotionInstanceNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for AccelerationStructureMatrixMotionInstanceNV" );
  p.transformT0 = TransformMatrixKHR ( j[ "transformT0" ] );
  p.transformT1 = TransformMatrixKHR ( j[ "transformT1" ] );
  p.instanceCustomIndex = j[ "instanceCustomIndex" ];
  p.mask = j[ "mask" ];
  p.instanceShaderBindingTableRecordOffset = j[ "instanceShaderBindingTableRecordOffset" ];
  p.accelerationStructureReference = j[ "accelerationStructureReference" ];
}
}
inline void from_json( const nlohmann::json &j, VkAccelerationStructureMatrixMotionInstanceNV &p ) {
  VULKAN_HPP_NAMESPACE :: AccelerationStructureMatrixMotionInstanceNV temp;
  from_json( j, temp );
  p = VkAccelerationStructureMatrixMotionInstanceNV ( temp );
}


#endif
