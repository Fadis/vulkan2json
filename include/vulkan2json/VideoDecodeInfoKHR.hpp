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
#ifndef VULKAN2JSON_VIDEODECODEINFOKHR_HPP
#define VULKAN2JSON_VIDEODECODEINFOKHR_HPP

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
#include <vulkan2json/VideoDecodeFlagsKHR.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/VideoPictureResourceKHR.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoDecodeFlagsKHR.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/VideoPictureResourceKHR.hpp>
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoDecodeInfoKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "codedOffset" ] = p.codedOffset;
  j[ "codedExtent" ] = p.codedExtent;
  j[ "srcBufferOffset" ] = p.srcBufferOffset;
  j[ "srcBufferRange" ] = p.srcBufferRange;
  j[ "dstPictureResource" ] = p.dstPictureResource;
  j[ "pSetupReferenceSlot" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pSetupReferenceSlot ) );
  j[ "referenceSlotCount" ] = p.referenceSlotCount;
  j[ "pReferenceSlots" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pReferenceSlots ) );
}
}
inline void to_json( nlohmann::json &j, const VkVideoDecodeInfoKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VideoDecodeInfoKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VideoDecodeInfoKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for VideoDecodeInfoKHR" );
  if( j.find( "flags" ) != j.end() ) {
    p.flags = VideoDecodeFlagsKHR ( j[ "flags" ] );
  }
  if( j.find( "codedOffset" ) != j.end() ) {
    p.codedOffset = Offset2D ( j[ "codedOffset" ] );
  }
  if( j.find( "codedExtent" ) != j.end() ) {
    p.codedExtent = Extent2D ( j[ "codedExtent" ] );
  }
  if( j.find( "srcBufferOffset" ) != j.end() ) {
    p.srcBufferOffset = j[ "srcBufferOffset" ];
  }
  if( j.find( "srcBufferRange" ) != j.end() ) {
    p.srcBufferRange = j[ "srcBufferRange" ];
  }
  if( j.find( "dstPictureResource" ) != j.end() ) {
    p.dstPictureResource = VideoPictureResourceKHR ( j[ "dstPictureResource" ] );
  }
  if( j.find( "referenceSlotCount" ) != j.end() ) {
    p.referenceSlotCount = j[ "referenceSlotCount" ];
  }
}
}
inline void from_json( const nlohmann::json &j, VkVideoDecodeInfoKHR &p ) {
  VULKAN_HPP_NAMESPACE :: VideoDecodeInfoKHR temp;
  from_json( j, temp );
  p = VkVideoDecodeInfoKHR ( temp );
}
#endif


#endif
