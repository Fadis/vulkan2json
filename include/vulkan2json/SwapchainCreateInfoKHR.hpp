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
#ifndef VULKAN2JSON_SWAPCHAINCREATEINFOKHR_HPP
#define VULKAN2JSON_SWAPCHAINCREATEINFOKHR_HPP

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
#include <vulkan2json/SwapchainCreateFlagsKHR.hpp>
#include <vulkan2json/Format.hpp>
#include <vulkan2json/ColorSpaceKHR.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/ImageUsageFlags.hpp>
#include <vulkan2json/SharingMode.hpp>
#include <vulkan2json/SurfaceTransformFlagsKHR.hpp>
#include <vulkan2json/CompositeAlphaFlagsKHR.hpp>
#include <vulkan2json/PresentModeKHR.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SwapchainCreateInfoKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "minImageCount" ] = p.minImageCount;
  j[ "imageFormat" ] = p.imageFormat;
  j[ "imageColorSpace" ] = p.imageColorSpace;
  j[ "imageExtent" ] = p.imageExtent;
  j[ "imageArrayLayers" ] = p.imageArrayLayers;
  j[ "imageUsage" ] = p.imageUsage;
  j[ "imageSharingMode" ] = p.imageSharingMode;
  j[ "queueFamilyIndexCount" ] = p.queueFamilyIndexCount;
  j[ "pQueueFamilyIndices" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pQueueFamilyIndices ) );
  j[ "preTransform" ] = p.preTransform;
  j[ "compositeAlpha" ] = p.compositeAlpha;
  j[ "presentMode" ] = p.presentMode;
  j[ "clipped" ] = bool( p.clipped );
}
}
inline void to_json( nlohmann::json &j, const VkSwapchainCreateInfoKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SwapchainCreateInfoKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SwapchainCreateInfoKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SwapchainCreateInfoKHR" );
  p.flags = SwapchainCreateFlagsKHR ( j[ "flags" ] );
  p.minImageCount = j[ "minImageCount" ];
  p.imageFormat = Format ( j[ "imageFormat" ] );
  p.imageColorSpace = ColorSpaceKHR ( j[ "imageColorSpace" ] );
  p.imageExtent = Extent2D ( j[ "imageExtent" ] );
  p.imageArrayLayers = j[ "imageArrayLayers" ];
  p.imageUsage = ImageUsageFlags ( j[ "imageUsage" ] );
  p.imageSharingMode = SharingMode ( j[ "imageSharingMode" ] );
  p.queueFamilyIndexCount = j[ "queueFamilyIndexCount" ];
  p.preTransform = SurfaceTransformFlagBitsKHR ( j[ "preTransform" ] );
  p.compositeAlpha = CompositeAlphaFlagBitsKHR ( j[ "compositeAlpha" ] );
  p.presentMode = PresentModeKHR ( j[ "presentMode" ] );
  p.clipped = j[ "clipped" ];
}
}
inline void from_json( const nlohmann::json &j, VkSwapchainCreateInfoKHR &p ) {
  VULKAN_HPP_NAMESPACE :: SwapchainCreateInfoKHR temp;
  from_json( j, temp );
  p = VkSwapchainCreateInfoKHR ( temp );
}


#endif
