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
#ifndef VULKAN2JSON_VIDEOCAPABILITIESKHR_HPP
#define VULKAN2JSON_VIDEOCAPABILITIESKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 189, "Wrong VK_HEADER_VERSION!" );

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoCapabilityFlagsKHR.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoCapabilityFlagsKHR.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoCapabilitiesKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "capabilityFlags" ] = p.capabilityFlags;
  j[ "minBitstreamBufferOffsetAlignment" ] = p.minBitstreamBufferOffsetAlignment;
  j[ "minBitstreamBufferSizeAlignment" ] = p.minBitstreamBufferSizeAlignment;
  j[ "videoPictureExtentGranularity" ] = p.videoPictureExtentGranularity;
  j[ "minExtent" ] = p.minExtent;
  j[ "maxExtent" ] = p.maxExtent;
  j[ "maxReferencePicturesSlotsCount" ] = p.maxReferencePicturesSlotsCount;
  j[ "maxReferencePicturesActiveCount" ] = p.maxReferencePicturesActiveCount;
}
}
inline void to_json( nlohmann::json &j, const VkVideoCapabilitiesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VideoCapabilitiesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VideoCapabilitiesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for VideoCapabilitiesKHR" );
  if( j.find( "capabilityFlags" ) != j.end() ) {
    p.capabilityFlags = VideoCapabilityFlagsKHR ( j[ "capabilityFlags" ] );
  }
  if( j.find( "minBitstreamBufferOffsetAlignment" ) != j.end() ) {
    p.minBitstreamBufferOffsetAlignment = j[ "minBitstreamBufferOffsetAlignment" ];
  }
  if( j.find( "minBitstreamBufferSizeAlignment" ) != j.end() ) {
    p.minBitstreamBufferSizeAlignment = j[ "minBitstreamBufferSizeAlignment" ];
  }
  if( j.find( "videoPictureExtentGranularity" ) != j.end() ) {
    p.videoPictureExtentGranularity = Extent2D ( j[ "videoPictureExtentGranularity" ] );
  }
  if( j.find( "minExtent" ) != j.end() ) {
    p.minExtent = Extent2D ( j[ "minExtent" ] );
  }
  if( j.find( "maxExtent" ) != j.end() ) {
    p.maxExtent = Extent2D ( j[ "maxExtent" ] );
  }
  if( j.find( "maxReferencePicturesSlotsCount" ) != j.end() ) {
    p.maxReferencePicturesSlotsCount = j[ "maxReferencePicturesSlotsCount" ];
  }
  if( j.find( "maxReferencePicturesActiveCount" ) != j.end() ) {
    p.maxReferencePicturesActiveCount = j[ "maxReferencePicturesActiveCount" ];
  }
}
}
inline void from_json( const nlohmann::json &j, VkVideoCapabilitiesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: VideoCapabilitiesKHR temp;
  from_json( j, temp );
  p = VkVideoCapabilitiesKHR ( temp );
}
#endif


#endif
