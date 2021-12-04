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
#ifndef VULKAN2JSON_SURFACECAPABILITIESKHR_HPP
#define VULKAN2JSON_SURFACECAPABILITIESKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/SurfaceTransformFlagsKHR.hpp>
#include <vulkan2json/SurfaceTransformFlagsKHR.hpp>
#include <vulkan2json/CompositeAlphaFlagsKHR.hpp>
#include <vulkan2json/ImageUsageFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SurfaceCapabilitiesKHR &p ) {
  j = nlohmann::json::object();
  j[ "minImageCount" ] = p.minImageCount;
  j[ "maxImageCount" ] = p.maxImageCount;
  j[ "currentExtent" ] = p.currentExtent;
  j[ "minImageExtent" ] = p.minImageExtent;
  j[ "maxImageExtent" ] = p.maxImageExtent;
  j[ "maxImageArrayLayers" ] = p.maxImageArrayLayers;
  j[ "supportedTransforms" ] = p.supportedTransforms;
  j[ "currentTransform" ] = p.currentTransform;
  j[ "supportedCompositeAlpha" ] = p.supportedCompositeAlpha;
  j[ "supportedUsageFlags" ] = p.supportedUsageFlags;
}
}
inline void to_json( nlohmann::json &j, const VkSurfaceCapabilitiesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SurfaceCapabilitiesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SurfaceCapabilitiesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SurfaceCapabilitiesKHR" );
  p.minImageCount = j[ "minImageCount" ];
  p.maxImageCount = j[ "maxImageCount" ];
  p.currentExtent = Extent2D ( j[ "currentExtent" ] );
  p.minImageExtent = Extent2D ( j[ "minImageExtent" ] );
  p.maxImageExtent = Extent2D ( j[ "maxImageExtent" ] );
  p.maxImageArrayLayers = j[ "maxImageArrayLayers" ];
  p.supportedTransforms = SurfaceTransformFlagsKHR ( j[ "supportedTransforms" ] );
  p.currentTransform = SurfaceTransformFlagBitsKHR ( j[ "currentTransform" ] );
  p.supportedCompositeAlpha = CompositeAlphaFlagsKHR ( j[ "supportedCompositeAlpha" ] );
  p.supportedUsageFlags = ImageUsageFlags ( j[ "supportedUsageFlags" ] );
}
}
inline void from_json( const nlohmann::json &j, VkSurfaceCapabilitiesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: SurfaceCapabilitiesKHR temp;
  from_json( j, temp );
  p = VkSurfaceCapabilitiesKHR ( temp );
}


#endif
