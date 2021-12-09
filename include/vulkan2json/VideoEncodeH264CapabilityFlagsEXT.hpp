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
#ifndef VULKAN2JSON_VIDEOENCODEH264CAPABILITYFLAGSEXT_HPP
#define VULKAN2JSON_VIDEOENCODEH264CAPABILITYFLAGSEXT_HPP

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
inline void to_json( nlohmann::json &j, const VideoEncodeH264CapabilityFlagBitsEXT &p ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eCabac == p ) {
    j = "Cabac";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eCavlc == p ) {
    j = "Cavlc";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eWeightedBiPredImplicit == p ) {
    j = "WeightedBiPredImplicit";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eTransform8X8 == p ) {
    j = "Transform8X8";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eChromaQpOffset == p ) {
    j = "ChromaQpOffset";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eSecondChromaQpOffset == p ) {
    j = "SecondChromaQpOffset";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterDisabled == p ) {
    j = "DeblockingFilterDisabled";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterEnabled == p ) {
    j = "DeblockingFilterEnabled";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterPartial == p ) {
    j = "DeblockingFilterPartial";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( VideoEncodeH264CapabilityFlagBitsEXT :: eMultipleSlicePerFrame == p ) {
    j = "MultipleSlicePerFrame";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264CapabilityFlagBitsEXT &p ) {
  if( j.is_string() ) {
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Cabac" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCabac ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eCabac" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCabac ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CABAC_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCabac ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Cavlc" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCavlc ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eCavlc" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCavlc ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CAVLC_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eCavlc ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "WeightedBiPredImplicit" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eWeightedBiPredImplicit ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eWeightedBiPredImplicit" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eWeightedBiPredImplicit ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_WEIGHTED_BI_PRED_IMPLICIT_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eWeightedBiPredImplicit ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "Transform8X8" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eTransform8X8 ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eTransform8X8" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eTransform8X8 ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_TRANSFORM_8X8_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eTransform8X8 ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_CHROMA_QP_OFFSET_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "SecondChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eSecondChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eSecondChromaQpOffset" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eSecondChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_SECOND_CHROMA_QP_OFFSET_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eSecondChromaQpOffset ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "DeblockingFilterDisabled" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterDisabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eDeblockingFilterDisabled" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterDisabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_DISABLED_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterDisabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "DeblockingFilterEnabled" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterEnabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eDeblockingFilterEnabled" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterEnabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_ENABLED_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterEnabled ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "DeblockingFilterPartial" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterPartial ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eDeblockingFilterPartial" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterPartial ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_DEBLOCKING_FILTER_PARTIAL_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eDeblockingFilterPartial ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "MultipleSlicePerFrame" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eMultipleSlicePerFrame ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eMultipleSlicePerFrame" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eMultipleSlicePerFrame ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_VIDEO_ENCODE_H264_CAPABILITY_MULTIPLE_SLICE_PER_FRAME_BIT_EXT" == j.get< std::string >() ) {
      p = VideoEncodeH264CapabilityFlagBitsEXT :: eMultipleSlicePerFrame ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for VideoEncodeH264CapabilityFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = VideoEncodeH264CapabilityFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VideoEncodeH264CapabilityFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const VideoEncodeH264CapabilityFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( VideoEncodeH264CapabilityFlagBitsEXT ) * 8u; ++n ) {
    if( p & VideoEncodeH264CapabilityFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, VideoEncodeH264CapabilityFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, VideoEncodeH264CapabilityFlagsEXT &p ) {
  if( j.is_array() ) {
    p = VideoEncodeH264CapabilityFlagsEXT ( 0 );
    for( auto &e:  j ) {
      VideoEncodeH264CapabilityFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for VideoEncodeH264CapabilityFlagsEXT" );
}
}


#endif
