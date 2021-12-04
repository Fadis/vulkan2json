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
#ifndef VULKAN2JSON_VIDEOENCODEH264SESSIONCREATEINFOEXT_HPP
#define VULKAN2JSON_VIDEOENCODEH264SESSIONCREATEINFOEXT_HPP

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
#include <vulkan2json/VideoEncodeH264CreateFlagsEXT.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoEncodeH264CreateFlagsEXT.hpp>
#include <vulkan2json/Extent2D.hpp>
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoEncodeH264SessionCreateInfoEXT &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "maxPictureSizeInMbs" ] = p.maxPictureSizeInMbs;
  j[ "pStdExtensionVersion" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pStdExtensionVersion ) );
}
}
inline void to_json( nlohmann::json &j, const VkVideoEncodeH264SessionCreateInfoEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VideoEncodeH264SessionCreateInfoEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VideoEncodeH264SessionCreateInfoEXT &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for VideoEncodeH264SessionCreateInfoEXT" );
  if( j.find( "flags" ) != j.end() ) {
    p.flags = VideoEncodeH264CreateFlagsEXT ( j[ "flags" ] );
  }
  if( j.find( "maxPictureSizeInMbs" ) != j.end() ) {
    p.maxPictureSizeInMbs = Extent2D ( j[ "maxPictureSizeInMbs" ] );
  }
}
}
inline void from_json( const nlohmann::json &j, VkVideoEncodeH264SessionCreateInfoEXT &p ) {
  VULKAN_HPP_NAMESPACE :: VideoEncodeH264SessionCreateInfoEXT temp;
  from_json( j, temp );
  p = VkVideoEncodeH264SessionCreateInfoEXT ( temp );
}
#endif


#endif
