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
#ifndef VULKAN2JSON_VIDEOCAPABILITIESFLAGSKHR_HPP
#define VULKAN2JSON_VIDEOCAPABILITIESFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_VIDEO_QUEUE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoCapabilitiesFlagBitsKHR &p ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoCapabilitiesFlagBitsKHR :: eProtectedContent == p ) {
    j = "ProtectedContent";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoCapabilitiesFlagBitsKHR &p ) {
  if( j.is_string() ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "ProtectedContent" == j.get< std::string >() ) {
      p = VideoCapabilitiesFlagBitsKHR :: eProtectedContent ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eProtectedContent" == j.get< std::string >() ) {
      p = VideoCapabilitiesFlagBitsKHR :: eProtectedContent ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_CAPABILITIES_PROTECTED_CONTENT_BIT_KHR" == j.get< std::string >() ) {
      p = VideoCapabilitiesFlagBitsKHR :: eProtectedContent ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoCapabilitiesFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = VideoCapabilitiesFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoCapabilitiesFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const VideoCapabilitiesFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoCapabilitiesFlagBitsKHR ) * 8u; ++n ) {
    if( p & VideoCapabilitiesFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoCapabilitiesFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoCapabilitiesFlagsKHR &p ) {
  if( j.is_array() ) {
    p = VideoCapabilitiesFlagsKHR ( 0 );
    for( auto &e:  j ) {
      VideoCapabilitiesFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoCapabilitiesFlagsKHR" );
}
}
#endif


#endif
