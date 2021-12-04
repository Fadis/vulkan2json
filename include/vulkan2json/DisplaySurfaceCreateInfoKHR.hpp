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
#ifndef VULKAN2JSON_DISPLAYSURFACECREATEINFOKHR_HPP
#define VULKAN2JSON_DISPLAYSURFACECREATEINFOKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/DisplaySurfaceCreateFlagsKHR.hpp>
#include <vulkan2json/SurfaceTransformFlagsKHR.hpp>
#include <vulkan2json/DisplayPlaneAlphaFlagsKHR.hpp>
#include <vulkan2json/Extent2D.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DisplaySurfaceCreateInfoKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "planeIndex" ] = p.planeIndex;
  j[ "planeStackIndex" ] = p.planeStackIndex;
  j[ "transform" ] = p.transform;
  j[ "globalAlpha" ] = p.globalAlpha;
  j[ "alphaMode" ] = p.alphaMode;
  j[ "imageExtent" ] = p.imageExtent;
}
}
inline void to_json( nlohmann::json &j, const VkDisplaySurfaceCreateInfoKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DisplaySurfaceCreateInfoKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DisplaySurfaceCreateInfoKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for DisplaySurfaceCreateInfoKHR" );
  p.flags = DisplaySurfaceCreateFlagsKHR ( j[ "flags" ] );
  p.planeIndex = j[ "planeIndex" ];
  p.planeStackIndex = j[ "planeStackIndex" ];
  p.transform = SurfaceTransformFlagBitsKHR ( j[ "transform" ] );
  p.globalAlpha = j[ "globalAlpha" ];
  p.alphaMode = DisplayPlaneAlphaFlagBitsKHR ( j[ "alphaMode" ] );
  p.imageExtent = Extent2D ( j[ "imageExtent" ] );
}
}
inline void from_json( const nlohmann::json &j, VkDisplaySurfaceCreateInfoKHR &p ) {
  VULKAN_HPP_NAMESPACE :: DisplaySurfaceCreateInfoKHR temp;
  from_json( j, temp );
  p = VkDisplaySurfaceCreateInfoKHR ( temp );
}


#endif
