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
#ifndef VULKAN2JSON_VIDEODECODEH264PICTURELAYOUTFLAGSEXT_HPP
#define VULKAN2JSON_VIDEODECODEH264PICTURELAYOUTFLAGSEXT_HPP

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

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoDecodeH264PictureLayoutFlagBitsEXT &p ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoDecodeH264PictureLayoutFlagBitsEXT :: eProgressive == p ) {
    j = "Progressive";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoDecodeH264PictureLayoutFlagBitsEXT :: eInterlacedInterleavedLines == p ) {
    j = "InterlacedInterleavedLines";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoDecodeH264PictureLayoutFlagBitsEXT &p ) {
  if( j.is_string() ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Progressive" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eProgressive ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eProgressive" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eProgressive ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_PROGRESSIVE_EXT" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eProgressive ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "InterlacedInterleavedLines" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eInterlacedInterleavedLines ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eInterlacedInterleavedLines" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eInterlacedInterleavedLines ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_DECODE_H264_PICTURE_LAYOUT_INTERLACED_INTERLEAVED_LINES_BIT_EXT" == j.get< std::string >() ) {
      p = VideoDecodeH264PictureLayoutFlagBitsEXT :: eInterlacedInterleavedLines ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoDecodeH264PictureLayoutFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = VideoDecodeH264PictureLayoutFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoDecodeH264PictureLayoutFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const VideoDecodeH264PictureLayoutFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoDecodeH264PictureLayoutFlagBitsEXT ) * 8u; ++n ) {
    if( p & VideoDecodeH264PictureLayoutFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoDecodeH264PictureLayoutFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoDecodeH264PictureLayoutFlagsEXT &p ) {
  if( j.is_array() ) {
    p = VideoDecodeH264PictureLayoutFlagsEXT ( 0 );
    for( auto &e:  j ) {
      VideoDecodeH264PictureLayoutFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoDecodeH264PictureLayoutFlagsEXT" );
}
}


#endif
