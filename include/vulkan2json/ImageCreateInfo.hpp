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
#ifndef VULKAN2JSON_IMAGECREATEINFO_HPP
#define VULKAN2JSON_IMAGECREATEINFO_HPP

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
#include <vulkan2json/ImageCreateFlags.hpp>
#include <vulkan2json/ImageType.hpp>
#include <vulkan2json/Format.hpp>
#include <vulkan2json/Extent3D.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/ImageTiling.hpp>
#include <vulkan2json/ImageUsageFlags.hpp>
#include <vulkan2json/SharingMode.hpp>
#include <vulkan2json/ImageLayout.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ImageCreateInfo &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "imageType" ] = p.imageType;
  j[ "format" ] = p.format;
  j[ "extent" ] = p.extent;
  j[ "mipLevels" ] = p.mipLevels;
  j[ "arrayLayers" ] = p.arrayLayers;
  j[ "samples" ] = p.samples;
  j[ "tiling" ] = p.tiling;
  j[ "usage" ] = p.usage;
  j[ "sharingMode" ] = p.sharingMode;
  j[ "queueFamilyIndexCount" ] = p.queueFamilyIndexCount;
  j[ "pQueueFamilyIndices" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pQueueFamilyIndices ) );
  j[ "initialLayout" ] = p.initialLayout;
}
}
inline void to_json( nlohmann::json &j, const VkImageCreateInfo &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageCreateInfo ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageCreateInfo &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ImageCreateInfo" );
  p.flags = ImageCreateFlags ( j[ "flags" ] );
  p.imageType = ImageType ( j[ "imageType" ] );
  p.format = Format ( j[ "format" ] );
  p.extent = Extent3D ( j[ "extent" ] );
  p.mipLevels = j[ "mipLevels" ];
  p.arrayLayers = j[ "arrayLayers" ];
  p.samples = SampleCountFlagBits ( j[ "samples" ] );
  p.tiling = ImageTiling ( j[ "tiling" ] );
  p.usage = ImageUsageFlags ( j[ "usage" ] );
  p.sharingMode = SharingMode ( j[ "sharingMode" ] );
  p.queueFamilyIndexCount = j[ "queueFamilyIndexCount" ];
  p.initialLayout = ImageLayout ( j[ "initialLayout" ] );
}
}
inline void from_json( const nlohmann::json &j, VkImageCreateInfo &p ) {
  VULKAN_HPP_NAMESPACE :: ImageCreateInfo temp;
  from_json( j, temp );
  p = VkImageCreateInfo ( temp );
}


#endif
