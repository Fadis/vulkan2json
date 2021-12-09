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
#ifndef VULKAN2JSON_FORMATFEATUREFLAGS_HPP
#define VULKAN2JSON_FORMATFEATUREFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const FormatFeatureFlagBits &p ) {
  if( FormatFeatureFlagBits :: eSampledImage == p ) {
    j = "SampledImage";
    return;
  }
  if( FormatFeatureFlagBits :: eStorageImage == p ) {
    j = "StorageImage";
    return;
  }
  if( FormatFeatureFlagBits :: eStorageImageAtomic == p ) {
    j = "StorageImageAtomic";
    return;
  }
  if( FormatFeatureFlagBits :: eUniformTexelBuffer == p ) {
    j = "UniformTexelBuffer";
    return;
  }
  if( FormatFeatureFlagBits :: eStorageTexelBuffer == p ) {
    j = "StorageTexelBuffer";
    return;
  }
  if( FormatFeatureFlagBits :: eStorageTexelBufferAtomic == p ) {
    j = "StorageTexelBufferAtomic";
    return;
  }
  if( FormatFeatureFlagBits :: eVertexBuffer == p ) {
    j = "VertexBuffer";
    return;
  }
  if( FormatFeatureFlagBits :: eColorAttachment == p ) {
    j = "ColorAttachment";
    return;
  }
  if( FormatFeatureFlagBits :: eColorAttachmentBlend == p ) {
    j = "ColorAttachmentBlend";
    return;
  }
  if( FormatFeatureFlagBits :: eDepthStencilAttachment == p ) {
    j = "DepthStencilAttachment";
    return;
  }
  if( FormatFeatureFlagBits :: eBlitSrc == p ) {
    j = "BlitSrc";
    return;
  }
  if( FormatFeatureFlagBits :: eBlitDst == p ) {
    j = "BlitDst";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageFilterLinear == p ) {
    j = "SampledImageFilterLinear";
    return;
  }
  if( FormatFeatureFlagBits :: eTransferSrc == p ) {
    j = "TransferSrc";
    return;
  }
  if( FormatFeatureFlagBits :: eTransferDst == p ) {
    j = "TransferDst";
    return;
  }
  if( FormatFeatureFlagBits :: eMidpointChromaSamples == p ) {
    j = "MidpointChromaSamples";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageYcbcrConversionLinearFilter == p ) {
    j = "SampledImageYcbcrConversionLinearFilter";
    return;
  }
  if( FormatFeatureFlagBits :: eDisjoint == p ) {
    j = "Disjoint";
    return;
  }
  if( FormatFeatureFlagBits :: eCositedChromaSamples == p ) {
    j = "CositedChromaSamples";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageFilterMinmax == p ) {
    j = "SampledImageFilterMinmax";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageFilterCubicIMG == p ) {
    j = "SampledImageFilterCubicIMG";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( FormatFeatureFlagBits :: eVideoDecodeOutputKHR == p ) {
    j = "VideoDecodeOutputKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( FormatFeatureFlagBits :: eVideoDecodeDpbKHR == p ) {
    j = "VideoDecodeDpbKHR";
    return;
  }
#endif
  if( FormatFeatureFlagBits :: eAccelerationStructureVertexBufferKHR == p ) {
    j = "AccelerationStructureVertexBufferKHR";
    return;
  }
  if( FormatFeatureFlagBits :: eFragmentDensityMapEXT == p ) {
    j = "FragmentDensityMapEXT";
    return;
  }
  if( FormatFeatureFlagBits :: eFragmentShadingRateAttachmentKHR == p ) {
    j = "FragmentShadingRateAttachmentKHR";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( FormatFeatureFlagBits :: eVideoEncodeInputKHR == p ) {
    j = "VideoEncodeInputKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( FormatFeatureFlagBits :: eVideoEncodeDpbKHR == p ) {
    j = "VideoEncodeDpbKHR";
    return;
  }
#endif
  if( FormatFeatureFlagBits :: eCositedChromaSamplesKHR == p ) {
    j = "CositedChromaSamplesKHR";
    return;
  }
  if( FormatFeatureFlagBits :: eDisjointKHR == p ) {
    j = "DisjointKHR";
    return;
  }
  if( FormatFeatureFlagBits :: eMidpointChromaSamplesKHR == p ) {
    j = "MidpointChromaSamplesKHR";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageFilterCubicEXT == p ) {
    j = "SampledImageFilterCubicEXT";
    return;
  }
  if( FormatFeatureFlagBits :: eSampledImageFilterMinmaxEXT == p ) {
    j = "SampledImageFilterMinmaxEXT";
    return;
  }
  if( FormatFeatureFlagBits :: eTransferDstKHR == p ) {
    j = "TransferDstKHR";
    return;
  }
}
inline void from_json( const nlohmann::json &j, FormatFeatureFlagBits &p ) {
  if( j.is_string() ) {
    if( "SampledImage" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImage ;
      return;
    }
    if( "eSampledImage" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImage ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImage ;
      return;
    }
    if( "StorageImage" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImage ;
      return;
    }
    if( "eStorageImage" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImage ;
      return;
    }
    if( "VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImage ;
      return;
    }
    if( "StorageImageAtomic" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImageAtomic ;
      return;
    }
    if( "eStorageImageAtomic" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImageAtomic ;
      return;
    }
    if( "VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageImageAtomic ;
      return;
    }
    if( "UniformTexelBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "eUniformTexelBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "StorageTexelBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "eStorageTexelBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "StorageTexelBufferAtomic" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBufferAtomic ;
      return;
    }
    if( "eStorageTexelBufferAtomic" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBufferAtomic ;
      return;
    }
    if( "VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eStorageTexelBufferAtomic ;
      return;
    }
    if( "VertexBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVertexBuffer ;
      return;
    }
    if( "eVertexBuffer" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVertexBuffer ;
      return;
    }
    if( "VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVertexBuffer ;
      return;
    }
    if( "ColorAttachment" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachment ;
      return;
    }
    if( "eColorAttachment" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachment ;
      return;
    }
    if( "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachment ;
      return;
    }
    if( "ColorAttachmentBlend" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachmentBlend ;
      return;
    }
    if( "eColorAttachmentBlend" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachmentBlend ;
      return;
    }
    if( "VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eColorAttachmentBlend ;
      return;
    }
    if( "DepthStencilAttachment" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "eDepthStencilAttachment" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDepthStencilAttachment ;
      return;
    }
    if( "BlitSrc" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitSrc ;
      return;
    }
    if( "eBlitSrc" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitSrc ;
      return;
    }
    if( "VK_FORMAT_FEATURE_BLIT_SRC_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitSrc ;
      return;
    }
    if( "BlitDst" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitDst ;
      return;
    }
    if( "eBlitDst" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitDst ;
      return;
    }
    if( "VK_FORMAT_FEATURE_BLIT_DST_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eBlitDst ;
      return;
    }
    if( "SampledImageFilterLinear" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterLinear ;
      return;
    }
    if( "eSampledImageFilterLinear" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterLinear ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterLinear ;
      return;
    }
    if( "TransferSrc" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferSrc ;
      return;
    }
    if( "eTransferSrc" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferSrc ;
      return;
    }
    if( "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferSrc ;
      return;
    }
    if( "TransferDst" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDst ;
      return;
    }
    if( "eTransferDst" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDst ;
      return;
    }
    if( "VK_FORMAT_FEATURE_TRANSFER_DST_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDst ;
      return;
    }
    if( "MidpointChromaSamples" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamples ;
      return;
    }
    if( "eMidpointChromaSamples" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamples ;
      return;
    }
    if( "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamples ;
      return;
    }
    if( "SampledImageYcbcrConversionLinearFilter" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageYcbcrConversionLinearFilter ;
      return;
    }
    if( "eSampledImageYcbcrConversionLinearFilter" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageYcbcrConversionLinearFilter ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageYcbcrConversionLinearFilter ;
      return;
    }
    if( "Disjoint" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjoint ;
      return;
    }
    if( "eDisjoint" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjoint ;
      return;
    }
    if( "VK_FORMAT_FEATURE_DISJOINT_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjoint ;
      return;
    }
    if( "CositedChromaSamples" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamples ;
      return;
    }
    if( "eCositedChromaSamples" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamples ;
      return;
    }
    if( "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamples ;
      return;
    }
    if( "SampledImageFilterMinmax" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmax ;
      return;
    }
    if( "eSampledImageFilterMinmax" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmax ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmax ;
      return;
    }
    if( "SampledImageFilterCubicIMG" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicIMG ;
      return;
    }
    if( "eSampledImageFilterCubicIMG" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicIMG ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicIMG ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeOutputKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeOutputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeOutputKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeOutputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_FORMAT_FEATURE_VIDEO_DECODE_OUTPUT_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeOutputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeDpbKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_FORMAT_FEATURE_VIDEO_DECODE_DPB_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoDecodeDpbKHR ;
      return;
    }
#endif
    if( "AccelerationStructureVertexBufferKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eAccelerationStructureVertexBufferKHR ;
      return;
    }
    if( "eAccelerationStructureVertexBufferKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eAccelerationStructureVertexBufferKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eAccelerationStructureVertexBufferKHR ;
      return;
    }
    if( "FragmentDensityMapEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "eFragmentDensityMapEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentDensityMapEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeInputKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeInputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeInputKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeInputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_FORMAT_FEATURE_VIDEO_ENCODE_INPUT_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeInputKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeDpbKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_FORMAT_FEATURE_VIDEO_ENCODE_DPB_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eVideoEncodeDpbKHR ;
      return;
    }
#endif
    if( "CositedChromaSamplesKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamplesKHR ;
      return;
    }
    if( "eCositedChromaSamplesKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamplesKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eCositedChromaSamplesKHR ;
      return;
    }
    if( "DisjointKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjointKHR ;
      return;
    }
    if( "eDisjointKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjointKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_DISJOINT_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eDisjointKHR ;
      return;
    }
    if( "MidpointChromaSamplesKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamplesKHR ;
      return;
    }
    if( "eMidpointChromaSamplesKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamplesKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eMidpointChromaSamplesKHR ;
      return;
    }
    if( "SampledImageFilterCubicEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicEXT ;
      return;
    }
    if( "eSampledImageFilterCubicEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicEXT ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterCubicEXT ;
      return;
    }
    if( "SampledImageFilterMinmaxEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmaxEXT ;
      return;
    }
    if( "eSampledImageFilterMinmaxEXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmaxEXT ;
      return;
    }
    if( "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eSampledImageFilterMinmaxEXT ;
      return;
    }
    if( "TransferDstKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDstKHR ;
      return;
    }
    if( "eTransferDstKHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDstKHR ;
      return;
    }
    if( "VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR" == j.get< std::string >() ) {
      p = FormatFeatureFlagBits :: eTransferDstKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for FormatFeatureFlagBits" );
  }
  if( j.is_number() ) {
    p = FormatFeatureFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for FormatFeatureFlagBits" );
}
inline void to_json( nlohmann::json &j, const FormatFeatureFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( FormatFeatureFlagBits ) * 8u; ++n ) {
    if( p & FormatFeatureFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, FormatFeatureFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, FormatFeatureFlags &p ) {
  if( j.is_array() ) {
    p = FormatFeatureFlags ( 0 );
    for( auto &e:  j ) {
      FormatFeatureFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for FormatFeatureFlags" );
}
}


#endif
