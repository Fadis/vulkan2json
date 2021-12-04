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
#ifndef VULKAN2JSON_POINTCLIPPINGBEHAVIOR_HPP
#define VULKAN2JSON_POINTCLIPPINGBEHAVIOR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_1
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PointClippingBehavior &p ) {
  if( PointClippingBehavior :: eAllClipPlanes == p ) {
    j = "AllClipPlanes";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPointClippingBehavior &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PointClippingBehavior ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PointClippingBehavior &p ) {
  if( j.is_string() ) {
    if( "AllClipPlanes" == j.get< std::string >() ) {
      p = PointClippingBehavior :: eAllClipPlanes ;
      return;
    }
    if( "eAllClipPlanes" == j.get< std::string >() ) {
      p = PointClippingBehavior :: eAllClipPlanes ;
      return;
    }
    if( "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES" == j.get< std::string >() ) {
      p = PointClippingBehavior :: eAllClipPlanes ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PointClippingBehavior" );
  }
  if( j.is_number() ) {
    p = PointClippingBehavior ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PointClippingBehavior" );
}
}
inline void from_json( const nlohmann::json &j, VkPointClippingBehavior &p ) {
  VULKAN_HPP_NAMESPACE :: PointClippingBehavior temp;
  from_json( j, temp );
  p = VkPointClippingBehavior ( temp );
}
#endif


#endif
