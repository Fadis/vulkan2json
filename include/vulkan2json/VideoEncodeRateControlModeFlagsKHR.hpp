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
#ifndef VULKAN2JSON_VIDEOENCODERATECONTROLMODEFLAGSKHR_HPP
#define VULKAN2JSON_VIDEOENCODERATECONTROLMODEFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_VIDEO_ENCODE_QUEUE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoEncodeRateControlModeFlagBitsKHR &p ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeRateControlModeFlagBitsKHR :: eNone == p ) {
    j = "None";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeRateControlModeFlagBitsKHR :: eCbr == p ) {
    j = "Cbr";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoEncodeRateControlModeFlagBitsKHR &p ) {
  if( j.is_string() ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "None" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eNone ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eNone" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eNone ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_NONE_BIT_KHR" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eNone ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "Cbr" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eCbr ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eCbr" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eCbr ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_RATE_CONTROL_MODE_CBR_BIT_KHR" == j.get< std::string >() ) {
      p = VideoEncodeRateControlModeFlagBitsKHR :: eCbr ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoEncodeRateControlModeFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = VideoEncodeRateControlModeFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoEncodeRateControlModeFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const VideoEncodeRateControlModeFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoEncodeRateControlModeFlagBitsKHR ) * 8u; ++n ) {
    if( p & VideoEncodeRateControlModeFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoEncodeRateControlModeFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoEncodeRateControlModeFlagsKHR &p ) {
  if( j.is_array() ) {
    p = VideoEncodeRateControlModeFlagsKHR ( 0 );
    for( auto &e:  j ) {
      VideoEncodeRateControlModeFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoEncodeRateControlModeFlagsKHR" );
}
}
#endif


#endif
