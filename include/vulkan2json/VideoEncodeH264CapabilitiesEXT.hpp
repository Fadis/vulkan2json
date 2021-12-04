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
#ifndef VULKAN2JSON_VIDEOENCODEH264CAPABILITIESEXT_HPP
#define VULKAN2JSON_VIDEOENCODEH264CAPABILITIESEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 182, "Wrong VK_HEADER_VERSION!" );

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoEncodeH264CapabilitiesFlagsEXT.hpp>
#include <vulkan2json/VideoEncodeH264InputModeFlagsEXT.hpp>
#include <vulkan2json/VideoEncodeH264OutputModeFlagsEXT.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/ExtensionProperties.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoEncodeH264CapabilitiesFlagsEXT.hpp>
#include <vulkan2json/VideoEncodeH264InputModeFlagsEXT.hpp>
#include <vulkan2json/VideoEncodeH264OutputModeFlagsEXT.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/ExtensionProperties.hpp>
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoEncodeH264CapabilitiesEXT &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "inputModeFlags" ] = p.inputModeFlags;
  j[ "outputModeFlags" ] = p.outputModeFlags;
  j[ "minPictureSizeInMbs" ] = p.minPictureSizeInMbs;
  j[ "maxPictureSizeInMbs" ] = p.maxPictureSizeInMbs;
  j[ "inputImageDataAlignment" ] = p.inputImageDataAlignment;
  j[ "maxNumL0ReferenceForP" ] = p.maxNumL0ReferenceForP;
  j[ "maxNumL0ReferenceForB" ] = p.maxNumL0ReferenceForB;
  j[ "maxNumL1Reference" ] = p.maxNumL1Reference;
  j[ "qualityLevelCount" ] = p.qualityLevelCount;
  j[ "stdExtensionVersion" ] = p.stdExtensionVersion;
}
}
inline void to_json( nlohmann::json &j, const VkVideoEncodeH264CapabilitiesEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VideoEncodeH264CapabilitiesEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VideoEncodeH264CapabilitiesEXT &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for VideoEncodeH264CapabilitiesEXT" );
  if( j.find( "flags" ) != j.end() ) {
    p.flags = VideoEncodeH264CapabilitiesFlagsEXT ( j[ "flags" ] );
  }
  if( j.find( "inputModeFlags" ) != j.end() ) {
    p.inputModeFlags = VideoEncodeH264InputModeFlagsEXT ( j[ "inputModeFlags" ] );
  }
  if( j.find( "outputModeFlags" ) != j.end() ) {
    p.outputModeFlags = VideoEncodeH264OutputModeFlagsEXT ( j[ "outputModeFlags" ] );
  }
  if( j.find( "minPictureSizeInMbs" ) != j.end() ) {
    p.minPictureSizeInMbs = Extent2D ( j[ "minPictureSizeInMbs" ] );
  }
  if( j.find( "maxPictureSizeInMbs" ) != j.end() ) {
    p.maxPictureSizeInMbs = Extent2D ( j[ "maxPictureSizeInMbs" ] );
  }
  if( j.find( "inputImageDataAlignment" ) != j.end() ) {
    p.inputImageDataAlignment = Extent2D ( j[ "inputImageDataAlignment" ] );
  }
  if( j.find( "maxNumL0ReferenceForP" ) != j.end() ) {
    p.maxNumL0ReferenceForP = j[ "maxNumL0ReferenceForP" ];
  }
  if( j.find( "maxNumL0ReferenceForB" ) != j.end() ) {
    p.maxNumL0ReferenceForB = j[ "maxNumL0ReferenceForB" ];
  }
  if( j.find( "maxNumL1Reference" ) != j.end() ) {
    p.maxNumL1Reference = j[ "maxNumL1Reference" ];
  }
  if( j.find( "qualityLevelCount" ) != j.end() ) {
    p.qualityLevelCount = j[ "qualityLevelCount" ];
  }
  if( j.find( "stdExtensionVersion" ) != j.end() ) {
    p.stdExtensionVersion = ExtensionProperties ( j[ "stdExtensionVersion" ] );
  }
}
}
inline void from_json( const nlohmann::json &j, VkVideoEncodeH264CapabilitiesEXT &p ) {
  VULKAN_HPP_NAMESPACE :: VideoEncodeH264CapabilitiesEXT temp;
  from_json( j, temp );
  p = VkVideoEncodeH264CapabilitiesEXT ( temp );
}
#endif


#endif
