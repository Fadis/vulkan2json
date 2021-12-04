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
#ifndef VULKAN2JSON_VIDEOCODINGQUALITYPRESETFLAGSKHR_HPP
#define VULKAN2JSON_VIDEOCODINGQUALITYPRESETFLAGSKHR_HPP

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

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoCodingQualityPresetFlagBitsKHR &p ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoCodingQualityPresetFlagBitsKHR :: eDefault == p ) {
    j = "Default";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoCodingQualityPresetFlagBitsKHR :: eNormal == p ) {
    j = "Normal";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoCodingQualityPresetFlagBitsKHR :: ePower == p ) {
    j = "Power";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoCodingQualityPresetFlagBitsKHR &p ) {
  if( j.is_string() ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Default" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eDefault ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eDefault" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eDefault ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_CODING_QUALITY_PRESET_DEFAULT_BIT_KHR" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eDefault ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Normal" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eNormal ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eNormal" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eNormal ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_CODING_QUALITY_PRESET_NORMAL_BIT_KHR" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: eNormal ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Power" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: ePower ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ePower" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: ePower ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_CODING_QUALITY_PRESET_POWER_BIT_KHR" == j.get< std::string >() ) {
      p = VideoCodingQualityPresetFlagBitsKHR :: ePower ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoCodingQualityPresetFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = VideoCodingQualityPresetFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoCodingQualityPresetFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const VideoCodingQualityPresetFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoCodingQualityPresetFlagBitsKHR ) * 8u; ++n ) {
    if( p & VideoCodingQualityPresetFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoCodingQualityPresetFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoCodingQualityPresetFlagsKHR &p ) {
  if( j.is_array() ) {
    p = VideoCodingQualityPresetFlagsKHR ( 0 );
    for( auto &e:  j ) {
      VideoCodingQualityPresetFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoCodingQualityPresetFlagsKHR" );
}
}


#endif
