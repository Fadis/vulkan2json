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
#ifndef VULKAN2JSON_VIDEOENCODEH264OUTPUTMODEFLAGSEXT_HPP
#define VULKAN2JSON_VIDEOENCODEH264OUTPUTMODEFLAGSEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_VIDEO_ENCODE_H264_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoEncodeH264OutputModeFlagBitsEXT &p ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264OutputModeFlagBitsEXT :: eFrame == p ) {
    j = "Frame";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264OutputModeFlagBitsEXT :: eSlice == p ) {
    j = "Slice";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264OutputModeFlagBitsEXT &p ) {
  if( j.is_string() ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "Frame" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eFrame ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eFrame" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eFrame ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_OUTPUT_MODE_FRAME_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eFrame ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "Slice" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eSlice ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eSlice" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eSlice ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_OUTPUT_MODE_SLICE_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264OutputModeFlagBitsEXT :: eSlice ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoEncodeH264OutputModeFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = VideoEncodeH264OutputModeFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoEncodeH264OutputModeFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const VideoEncodeH264OutputModeFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoEncodeH264OutputModeFlagBitsEXT ) * 8u; ++n ) {
    if( p & VideoEncodeH264OutputModeFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoEncodeH264OutputModeFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264OutputModeFlagsEXT &p ) {
  if( j.is_array() ) {
    p = VideoEncodeH264OutputModeFlagsEXT ( 0 );
    for( auto &e:  j ) {
      VideoEncodeH264OutputModeFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoEncodeH264OutputModeFlagsEXT" );
}
}
#endif


#endif
