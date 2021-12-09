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
#ifndef VULKAN2JSON_IMAGELAYOUT_HPP
#define VULKAN2JSON_IMAGELAYOUT_HPP

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
inline void to_json( nlohmann::json &j, const ImageLayout &p ) {
  if( ImageLayout :: eUndefined == p ) {
    j = "Undefined";
    return;
  }
  if( ImageLayout :: eGeneral == p ) {
    j = "General";
    return;
  }
  if( ImageLayout :: eColorAttachmentOptimal == p ) {
    j = "ColorAttachmentOptimal";
    return;
  }
  if( ImageLayout :: eDepthStencilAttachmentOptimal == p ) {
    j = "DepthStencilAttachmentOptimal";
    return;
  }
  if( ImageLayout :: eDepthStencilReadOnlyOptimal == p ) {
    j = "DepthStencilReadOnlyOptimal";
    return;
  }
  if( ImageLayout :: eShaderReadOnlyOptimal == p ) {
    j = "ShaderReadOnlyOptimal";
    return;
  }
  if( ImageLayout :: eTransferSrcOptimal == p ) {
    j = "TransferSrcOptimal";
    return;
  }
  if( ImageLayout :: eTransferDstOptimal == p ) {
    j = "TransferDstOptimal";
    return;
  }
  if( ImageLayout :: ePreinitialized == p ) {
    j = "Preinitialized";
    return;
  }
  if( ImageLayout :: eDepthReadOnlyStencilAttachmentOptimal == p ) {
    j = "DepthReadOnlyStencilAttachmentOptimal";
    return;
  }
  if( ImageLayout :: eDepthAttachmentStencilReadOnlyOptimal == p ) {
    j = "DepthAttachmentStencilReadOnlyOptimal";
    return;
  }
  if( ImageLayout :: eDepthAttachmentOptimal == p ) {
    j = "DepthAttachmentOptimal";
    return;
  }
  if( ImageLayout :: eDepthReadOnlyOptimal == p ) {
    j = "DepthReadOnlyOptimal";
    return;
  }
  if( ImageLayout :: eStencilAttachmentOptimal == p ) {
    j = "StencilAttachmentOptimal";
    return;
  }
  if( ImageLayout :: eStencilReadOnlyOptimal == p ) {
    j = "StencilReadOnlyOptimal";
    return;
  }
  if( ImageLayout :: ePresentSrcKHR == p ) {
    j = "PresentSrcKHR";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoDecodeDstKHR == p ) {
    j = "VideoDecodeDstKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoDecodeSrcKHR == p ) {
    j = "VideoDecodeSrcKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoDecodeDpbKHR == p ) {
    j = "VideoDecodeDpbKHR";
    return;
  }
#endif
  if( ImageLayout :: eSharedPresentKHR == p ) {
    j = "SharedPresentKHR";
    return;
  }
  if( ImageLayout :: eFragmentDensityMapOptimalEXT == p ) {
    j = "FragmentDensityMapOptimalEXT";
    return;
  }
  if( ImageLayout :: eFragmentShadingRateAttachmentOptimalKHR == p ) {
    j = "FragmentShadingRateAttachmentOptimalKHR";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoEncodeDstKHR == p ) {
    j = "VideoEncodeDstKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoEncodeSrcKHR == p ) {
    j = "VideoEncodeSrcKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( ImageLayout :: eVideoEncodeDpbKHR == p ) {
    j = "VideoEncodeDpbKHR";
    return;
  }
#endif
  if( ImageLayout :: eReadOnlyOptimalKHR == p ) {
    j = "ReadOnlyOptimalKHR";
    return;
  }
  if( ImageLayout :: eAttachmentOptimalKHR == p ) {
    j = "AttachmentOptimalKHR";
    return;
  }
  if( ImageLayout :: eDepthAttachmentOptimalKHR == p ) {
    j = "DepthAttachmentOptimalKHR";
    return;
  }
  if( ImageLayout :: eDepthAttachmentStencilReadOnlyOptimalKHR == p ) {
    j = "DepthAttachmentStencilReadOnlyOptimalKHR";
    return;
  }
  if( ImageLayout :: eDepthReadOnlyOptimalKHR == p ) {
    j = "DepthReadOnlyOptimalKHR";
    return;
  }
  if( ImageLayout :: eDepthReadOnlyStencilAttachmentOptimalKHR == p ) {
    j = "DepthReadOnlyStencilAttachmentOptimalKHR";
    return;
  }
  if( ImageLayout :: eShadingRateOptimalNV == p ) {
    j = "ShadingRateOptimalNV";
    return;
  }
  if( ImageLayout :: eStencilAttachmentOptimalKHR == p ) {
    j = "StencilAttachmentOptimalKHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkImageLayout &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageLayout ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageLayout &p ) {
  if( j.is_string() ) {
    if( "Undefined" == j.get< std::string >() ) {
      p = ImageLayout :: eUndefined ;
      return;
    }
    if( "eUndefined" == j.get< std::string >() ) {
      p = ImageLayout :: eUndefined ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_UNDEFINED" == j.get< std::string >() ) {
      p = ImageLayout :: eUndefined ;
      return;
    }
    if( "General" == j.get< std::string >() ) {
      p = ImageLayout :: eGeneral ;
      return;
    }
    if( "eGeneral" == j.get< std::string >() ) {
      p = ImageLayout :: eGeneral ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_GENERAL" == j.get< std::string >() ) {
      p = ImageLayout :: eGeneral ;
      return;
    }
    if( "ColorAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eColorAttachmentOptimal ;
      return;
    }
    if( "eColorAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eColorAttachmentOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eColorAttachmentOptimal ;
      return;
    }
    if( "DepthStencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilAttachmentOptimal ;
      return;
    }
    if( "eDepthStencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilAttachmentOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilAttachmentOptimal ;
      return;
    }
    if( "DepthStencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilReadOnlyOptimal ;
      return;
    }
    if( "eDepthStencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilReadOnlyOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthStencilReadOnlyOptimal ;
      return;
    }
    if( "ShaderReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eShaderReadOnlyOptimal ;
      return;
    }
    if( "eShaderReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eShaderReadOnlyOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eShaderReadOnlyOptimal ;
      return;
    }
    if( "TransferSrcOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferSrcOptimal ;
      return;
    }
    if( "eTransferSrcOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferSrcOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferSrcOptimal ;
      return;
    }
    if( "TransferDstOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferDstOptimal ;
      return;
    }
    if( "eTransferDstOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferDstOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eTransferDstOptimal ;
      return;
    }
    if( "Preinitialized" == j.get< std::string >() ) {
      p = ImageLayout :: ePreinitialized ;
      return;
    }
    if( "ePreinitialized" == j.get< std::string >() ) {
      p = ImageLayout :: ePreinitialized ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_PREINITIALIZED" == j.get< std::string >() ) {
      p = ImageLayout :: ePreinitialized ;
      return;
    }
    if( "DepthReadOnlyStencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimal ;
      return;
    }
    if( "eDepthReadOnlyStencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimal ;
      return;
    }
    if( "DepthAttachmentStencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimal ;
      return;
    }
    if( "eDepthAttachmentStencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimal ;
      return;
    }
    if( "DepthAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimal ;
      return;
    }
    if( "eDepthAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimal ;
      return;
    }
    if( "DepthReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimal ;
      return;
    }
    if( "eDepthReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimal ;
      return;
    }
    if( "StencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimal ;
      return;
    }
    if( "eStencilAttachmentOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimal ;
      return;
    }
    if( "StencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilReadOnlyOptimal ;
      return;
    }
    if( "eStencilReadOnlyOptimal" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilReadOnlyOptimal ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilReadOnlyOptimal ;
      return;
    }
    if( "PresentSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: ePresentSrcKHR ;
      return;
    }
    if( "ePresentSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: ePresentSrcKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: ePresentSrcKHR ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeDstKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeDstKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_DECODE_DST_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_DECODE_SRC_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_DECODE_DPB_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
    if( "SharedPresentKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eSharedPresentKHR ;
      return;
    }
    if( "eSharedPresentKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eSharedPresentKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eSharedPresentKHR ;
      return;
    }
    if( "FragmentDensityMapOptimalEXT" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentDensityMapOptimalEXT ;
      return;
    }
    if( "eFragmentDensityMapOptimalEXT" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentDensityMapOptimalEXT ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentDensityMapOptimalEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentShadingRateAttachmentOptimalKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentShadingRateAttachmentOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eFragmentShadingRateAttachmentOptimalKHR ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeDstKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeDstKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DST_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_ENCODE_SRC_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_IMAGE_LAYOUT_VIDEO_ENCODE_DPB_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
    if( "ReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eReadOnlyOptimalKHR ;
      return;
    }
    if( "eReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eReadOnlyOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eReadOnlyOptimalKHR ;
      return;
    }
    if( "AttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eAttachmentOptimalKHR ;
      return;
    }
    if( "eAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eAttachmentOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eAttachmentOptimalKHR ;
      return;
    }
    if( "DepthAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimalKHR ;
      return;
    }
    if( "eDepthAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentOptimalKHR ;
      return;
    }
    if( "DepthAttachmentStencilReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimalKHR ;
      return;
    }
    if( "eDepthAttachmentStencilReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthAttachmentStencilReadOnlyOptimalKHR ;
      return;
    }
    if( "DepthReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimalKHR ;
      return;
    }
    if( "eDepthReadOnlyOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyOptimalKHR ;
      return;
    }
    if( "DepthReadOnlyStencilAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimalKHR ;
      return;
    }
    if( "eDepthReadOnlyStencilAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eDepthReadOnlyStencilAttachmentOptimalKHR ;
      return;
    }
    if( "ShadingRateOptimalNV" == j.get< std::string >() ) {
      p = ImageLayout :: eShadingRateOptimalNV ;
      return;
    }
    if( "eShadingRateOptimalNV" == j.get< std::string >() ) {
      p = ImageLayout :: eShadingRateOptimalNV ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV" == j.get< std::string >() ) {
      p = ImageLayout :: eShadingRateOptimalNV ;
      return;
    }
    if( "StencilAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimalKHR ;
      return;
    }
    if( "eStencilAttachmentOptimalKHR" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimalKHR ;
      return;
    }
    if( "VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL_KHR" == j.get< std::string >() ) {
      p = ImageLayout :: eStencilAttachmentOptimalKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageLayout" );
  }
  if( j.is_number() ) {
    p = ImageLayout ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageLayout" );
}
}
inline void from_json( const nlohmann::json &j, VkImageLayout &p ) {
  VULKAN_HPP_NAMESPACE :: ImageLayout temp;
  from_json( j, temp );
  p = VkImageLayout ( temp );
}


#endif
