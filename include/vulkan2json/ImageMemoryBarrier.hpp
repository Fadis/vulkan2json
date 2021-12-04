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
#ifndef VULKAN2JSON_IMAGEMEMORYBARRIER_HPP
#define VULKAN2JSON_IMAGEMEMORYBARRIER_HPP

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
#include <vulkan2json/AccessFlags.hpp>
#include <vulkan2json/AccessFlags.hpp>
#include <vulkan2json/ImageLayout.hpp>
#include <vulkan2json/ImageLayout.hpp>
#include <vulkan2json/ImageSubresourceRange.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ImageMemoryBarrier &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "srcAccessMask" ] = p.srcAccessMask;
  j[ "dstAccessMask" ] = p.dstAccessMask;
  j[ "oldLayout" ] = p.oldLayout;
  j[ "newLayout" ] = p.newLayout;
  j[ "srcQueueFamilyIndex" ] = p.srcQueueFamilyIndex;
  j[ "dstQueueFamilyIndex" ] = p.dstQueueFamilyIndex;
  j[ "subresourceRange" ] = p.subresourceRange;
}
}
inline void to_json( nlohmann::json &j, const VkImageMemoryBarrier &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageMemoryBarrier ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageMemoryBarrier &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ImageMemoryBarrier" );
  p.srcAccessMask = AccessFlags ( j[ "srcAccessMask" ] );
  p.dstAccessMask = AccessFlags ( j[ "dstAccessMask" ] );
  p.oldLayout = ImageLayout ( j[ "oldLayout" ] );
  p.newLayout = ImageLayout ( j[ "newLayout" ] );
  p.srcQueueFamilyIndex = j[ "srcQueueFamilyIndex" ];
  p.dstQueueFamilyIndex = j[ "dstQueueFamilyIndex" ];
  p.subresourceRange = ImageSubresourceRange ( j[ "subresourceRange" ] );
}
}
inline void from_json( const nlohmann::json &j, VkImageMemoryBarrier &p ) {
  VULKAN_HPP_NAMESPACE :: ImageMemoryBarrier temp;
  from_json( j, temp );
  p = VkImageMemoryBarrier ( temp );
}


#endif
