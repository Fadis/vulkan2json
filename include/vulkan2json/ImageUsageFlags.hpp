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
#ifndef VULKAN2JSON_IMAGEUSAGEFLAGS_HPP
#define VULKAN2JSON_IMAGEUSAGEFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ImageUsageFlagBits &p ) {
  if( ImageUsageFlagBits :: eTransferSrc == p ) {
    j = "TransferSrc";
    return;
  }
  if( ImageUsageFlagBits :: eTransferDst == p ) {
    j = "TransferDst";
    return;
  }
  if( ImageUsageFlagBits :: eSampled == p ) {
    j = "Sampled";
    return;
  }
  if( ImageUsageFlagBits :: eStorage == p ) {
    j = "Storage";
    return;
  }
  if( ImageUsageFlagBits :: eColorAttachment == p ) {
    j = "ColorAttachment";
    return;
  }
  if( ImageUsageFlagBits :: eDepthStencilAttachment == p ) {
    j = "DepthStencilAttachment";
    return;
  }
  if( ImageUsageFlagBits :: eTransientAttachment == p ) {
    j = "TransientAttachment";
    return;
  }
  if( ImageUsageFlagBits :: eInputAttachment == p ) {
    j = "InputAttachment";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoDecodeDstKHR == p ) {
    j = "VideoDecodeDstKHR";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoDecodeSrcKHR == p ) {
    j = "VideoDecodeSrcKHR";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoDecodeDpbKHR == p ) {
    j = "VideoDecodeDpbKHR";
    return;
  }
#endif
  if( ImageUsageFlagBits :: eFragmentDensityMapEXT == p ) {
    j = "FragmentDensityMapEXT";
    return;
  }
  if( ImageUsageFlagBits :: eFragmentShadingRateAttachmentKHR == p ) {
    j = "FragmentShadingRateAttachmentKHR";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoEncodeDstKHR == p ) {
    j = "VideoEncodeDstKHR";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoEncodeSrcKHR == p ) {
    j = "VideoEncodeSrcKHR";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( ImageUsageFlagBits :: eVideoEncodeDpbKHR == p ) {
    j = "VideoEncodeDpbKHR";
    return;
  }
#endif
}
inline void from_json( const nlohmann::json &j, ImageUsageFlagBits &p ) {
  if( j.is_string() ) {
    if( "TransferSrc" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "eTransferSrc" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "VK_IMAGE_USAGE_TRANSFER_SRC_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "TransferDst" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "eTransferDst" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "VK_IMAGE_USAGE_TRANSFER_DST_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "Sampled" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eSampled ;
      return;
    }
    if( "eSampled" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eSampled ;
      return;
    }
    if( "VK_IMAGE_USAGE_SAMPLED_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eSampled ;
      return;
    }
    if( "Storage" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eStorage ;
      return;
    }
    if( "eStorage" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eStorage ;
      return;
    }
    if( "VK_IMAGE_USAGE_STORAGE_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eStorage ;
      return;
    }
    if( "ColorAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eColorAttachment ;
      return;
    }
    if( "eColorAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eColorAttachment ;
      return;
    }
    if( "VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eColorAttachment ;
      return;
    }
    if( "DepthStencilAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "eDepthStencilAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "TransientAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransientAttachment ;
      return;
    }
    if( "eTransientAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransientAttachment ;
      return;
    }
    if( "VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eTransientAttachment ;
      return;
    }
    if( "InputAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eInputAttachment ;
      return;
    }
    if( "eInputAttachment" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eInputAttachment ;
      return;
    }
    if( "VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eInputAttachment ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeDstKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeDstKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
    if( "FragmentDensityMapEXT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "eFragmentDensityMapEXT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncodeDstKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncodeDstKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR" == j.get< std::string >() ) {
      p = ImageUsageFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageUsageFlagBits" );
  }
  if( j.is_number() ) {
    p = ImageUsageFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageUsageFlagBits" );
}
inline void to_json( nlohmann::json &j, const ImageUsageFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ImageUsageFlagBits ) * 8u; ++n ) {
    if( p & ImageUsageFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ImageUsageFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ImageUsageFlags &p ) {
  if( j.is_array() ) {
    p = ImageUsageFlags ( 0 );
    for( auto &e:  j ) {
      ImageUsageFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ImageUsageFlags" );
}
}
#endif


#endif
