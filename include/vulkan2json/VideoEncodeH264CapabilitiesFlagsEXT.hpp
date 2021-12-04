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
#ifndef VULKAN2JSON_VIDEOENCODEH264CAPABILITIESFLAGSEXT_HPP
#define VULKAN2JSON_VIDEOENCODEH264CAPABILITIESFLAGSEXT_HPP

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
inline void to_json( nlohmann::json &j, const VideoEncodeH264CapabilitiesFlagBitsEXT &p ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCabac == p ) {
    j = "VkVideoEncodeH264CapabilityCabac";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCavlc == p ) {
    j = "VkVideoEncodeH264CapabilityCavlc";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityTransform8X8 == p ) {
    j = "VkVideoEncodeH264CapabilityTransform8X8";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityChromaQpOffset == p ) {
    j = "VkVideoEncodeH264CapabilityChromaQpOffset";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilitySecondChromaQpOffset == p ) {
    j = "VkVideoEncodeH264CapabilitySecondChromaQpOffset";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264CapabilitiesFlagBitsEXT &p ) {
  if( j.is_string() ) {
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VkVideoEncodeH264CapabilityCabac" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCabac ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVkVideoEncodeH264CapabilityCabac" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCabac ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CABAC_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCabac ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VkVideoEncodeH264CapabilityCavlc" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCavlc ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVkVideoEncodeH264CapabilityCavlc" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCavlc ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CAVLC_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityCavlc ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VkVideoEncodeH264CapabilityTransform8X8" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityTransform8X8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVkVideoEncodeH264CapabilityTransform8X8" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityTransform8X8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_TRANSFORM_8X8_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityTransform8X8 ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VkVideoEncodeH264CapabilityChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityChromaQpOffset ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVkVideoEncodeH264CapabilityChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityChromaQpOffset ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CHROMA_QP_OFFSET_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilityChromaQpOffset ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VkVideoEncodeH264CapabilitySecondChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilitySecondChromaQpOffset ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVkVideoEncodeH264CapabilitySecondChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilitySecondChromaQpOffset ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_SECOND_CHROMA_QP_OFFSET_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilitiesFlagBitsEXT :: eVkVideoEncodeH264CapabilitySecondChromaQpOffset ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoEncodeH264CapabilitiesFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = VideoEncodeH264CapabilitiesFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoEncodeH264CapabilitiesFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const VideoEncodeH264CapabilitiesFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoEncodeH264CapabilitiesFlagBitsEXT ) * 8u; ++n ) {
    if( p & VideoEncodeH264CapabilitiesFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoEncodeH264CapabilitiesFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264CapabilitiesFlagsEXT &p ) {
  if( j.is_array() ) {
    p = VideoEncodeH264CapabilitiesFlagsEXT ( 0 );
    for( auto &e:  j ) {
      VideoEncodeH264CapabilitiesFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoEncodeH264CapabilitiesFlagsEXT" );
}
}
#endif


#endif
