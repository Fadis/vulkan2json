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
#ifndef VULKAN2JSON_ACCESSFLAGS2KHR_HPP
#define VULKAN2JSON_ACCESSFLAGS2KHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AccessFlagBits2KHR &p ) {
  if( AccessFlagBits2KHR :: eNone == p ) {
    j = "None";
    return;
  }
  if( AccessFlagBits2KHR :: eIndirectCommandRead == p ) {
    j = "IndirectCommandRead";
    return;
  }
  if( AccessFlagBits2KHR :: eIndexRead == p ) {
    j = "IndexRead";
    return;
  }
  if( AccessFlagBits2KHR :: eVertexAttributeRead == p ) {
    j = "VertexAttributeRead";
    return;
  }
  if( AccessFlagBits2KHR :: eUniformRead == p ) {
    j = "UniformRead";
    return;
  }
  if( AccessFlagBits2KHR :: eInputAttachmentRead == p ) {
    j = "InputAttachmentRead";
    return;
  }
  if( AccessFlagBits2KHR :: eShaderRead == p ) {
    j = "ShaderRead";
    return;
  }
  if( AccessFlagBits2KHR :: eShaderWrite == p ) {
    j = "ShaderWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eColorAttachmentRead == p ) {
    j = "ColorAttachmentRead";
    return;
  }
  if( AccessFlagBits2KHR :: eColorAttachmentWrite == p ) {
    j = "ColorAttachmentWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eDepthStencilAttachmentRead == p ) {
    j = "DepthStencilAttachmentRead";
    return;
  }
  if( AccessFlagBits2KHR :: eDepthStencilAttachmentWrite == p ) {
    j = "DepthStencilAttachmentWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eTransferRead == p ) {
    j = "TransferRead";
    return;
  }
  if( AccessFlagBits2KHR :: eTransferWrite == p ) {
    j = "TransferWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eHostRead == p ) {
    j = "HostRead";
    return;
  }
  if( AccessFlagBits2KHR :: eHostWrite == p ) {
    j = "HostWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eMemoryRead == p ) {
    j = "MemoryRead";
    return;
  }
  if( AccessFlagBits2KHR :: eMemoryWrite == p ) {
    j = "MemoryWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eShaderSampledRead == p ) {
    j = "ShaderSampledRead";
    return;
  }
  if( AccessFlagBits2KHR :: eShaderStorageRead == p ) {
    j = "ShaderStorageRead";
    return;
  }
  if( AccessFlagBits2KHR :: eShaderStorageWrite == p ) {
    j = "ShaderStorageWrite";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( AccessFlagBits2KHR :: eVideoDecodeRead == p ) {
    j = "VideoDecodeRead";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( AccessFlagBits2KHR :: eVideoDecodeWrite == p ) {
    j = "VideoDecodeWrite";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( AccessFlagBits2KHR :: eVideoEncodeRead == p ) {
    j = "VideoEncodeRead";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( AccessFlagBits2KHR :: eVideoEncodeWrite == p ) {
    j = "VideoEncodeWrite";
    return;
  }
#endif
  if( AccessFlagBits2KHR :: eTransformFeedbackWriteEXT == p ) {
    j = "TransformFeedbackWriteEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eTransformFeedbackCounterReadEXT == p ) {
    j = "TransformFeedbackCounterReadEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eTransformFeedbackCounterWriteEXT == p ) {
    j = "TransformFeedbackCounterWriteEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eConditionalRenderingReadEXT == p ) {
    j = "ConditionalRenderingReadEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eCommandPreprocessReadNV == p ) {
    j = "CommandPreprocessReadNV";
    return;
  }
  if( AccessFlagBits2KHR :: eCommandPreprocessWriteNV == p ) {
    j = "CommandPreprocessWriteNV";
    return;
  }
  if( AccessFlagBits2KHR :: eFragmentShadingRateAttachmentRead == p ) {
    j = "FragmentShadingRateAttachmentRead";
    return;
  }
  if( AccessFlagBits2KHR :: eAccelerationStructureRead == p ) {
    j = "AccelerationStructureRead";
    return;
  }
  if( AccessFlagBits2KHR :: eAccelerationStructureWrite == p ) {
    j = "AccelerationStructureWrite";
    return;
  }
  if( AccessFlagBits2KHR :: eFragmentDensityMapReadEXT == p ) {
    j = "FragmentDensityMapReadEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eColorAttachmentReadNoncoherentEXT == p ) {
    j = "ColorAttachmentReadNoncoherentEXT";
    return;
  }
  if( AccessFlagBits2KHR :: eAccelerationStructureReadNV == p ) {
    j = "AccelerationStructureReadNV";
    return;
  }
  if( AccessFlagBits2KHR :: eAccelerationStructureWriteNV == p ) {
    j = "AccelerationStructureWriteNV";
    return;
  }
}
inline void from_json( const nlohmann::json &j, AccessFlagBits2KHR &p ) {
  if( j.is_string() ) {
    if( "None" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eNone ;
      return;
    }
    if( "eNone" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eNone ;
      return;
    }
    if( "VK_ACCESS_2_NONE_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eNone ;
      return;
    }
    if( "IndirectCommandRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndirectCommandRead ;
      return;
    }
    if( "eIndirectCommandRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndirectCommandRead ;
      return;
    }
    if( "VK_ACCESS_2_INDIRECT_COMMAND_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndirectCommandRead ;
      return;
    }
    if( "IndexRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndexRead ;
      return;
    }
    if( "eIndexRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndexRead ;
      return;
    }
    if( "VK_ACCESS_2_INDEX_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eIndexRead ;
      return;
    }
    if( "VertexAttributeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVertexAttributeRead ;
      return;
    }
    if( "eVertexAttributeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVertexAttributeRead ;
      return;
    }
    if( "VK_ACCESS_2_VERTEX_ATTRIBUTE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVertexAttributeRead ;
      return;
    }
    if( "UniformRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eUniformRead ;
      return;
    }
    if( "eUniformRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eUniformRead ;
      return;
    }
    if( "VK_ACCESS_2_UNIFORM_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eUniformRead ;
      return;
    }
    if( "InputAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eInputAttachmentRead ;
      return;
    }
    if( "eInputAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eInputAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_2_INPUT_ATTACHMENT_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eInputAttachmentRead ;
      return;
    }
    if( "ShaderRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderRead ;
      return;
    }
    if( "eShaderRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderRead ;
      return;
    }
    if( "VK_ACCESS_2_SHADER_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderRead ;
      return;
    }
    if( "ShaderWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderWrite ;
      return;
    }
    if( "eShaderWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderWrite ;
      return;
    }
    if( "VK_ACCESS_2_SHADER_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderWrite ;
      return;
    }
    if( "ColorAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentRead ;
      return;
    }
    if( "eColorAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_2_COLOR_ATTACHMENT_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentRead ;
      return;
    }
    if( "ColorAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentWrite ;
      return;
    }
    if( "eColorAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentWrite ;
      return;
    }
    if( "VK_ACCESS_2_COLOR_ATTACHMENT_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentWrite ;
      return;
    }
    if( "DepthStencilAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "eDepthStencilAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "DepthStencilAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "eDepthStencilAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "VK_ACCESS_2_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "TransferRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferRead ;
      return;
    }
    if( "eTransferRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferRead ;
      return;
    }
    if( "VK_ACCESS_2_TRANSFER_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferRead ;
      return;
    }
    if( "TransferWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferWrite ;
      return;
    }
    if( "eTransferWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferWrite ;
      return;
    }
    if( "VK_ACCESS_2_TRANSFER_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransferWrite ;
      return;
    }
    if( "HostRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostRead ;
      return;
    }
    if( "eHostRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostRead ;
      return;
    }
    if( "VK_ACCESS_2_HOST_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostRead ;
      return;
    }
    if( "HostWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostWrite ;
      return;
    }
    if( "eHostWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostWrite ;
      return;
    }
    if( "VK_ACCESS_2_HOST_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eHostWrite ;
      return;
    }
    if( "MemoryRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryRead ;
      return;
    }
    if( "eMemoryRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryRead ;
      return;
    }
    if( "VK_ACCESS_2_MEMORY_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryRead ;
      return;
    }
    if( "MemoryWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryWrite ;
      return;
    }
    if( "eMemoryWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryWrite ;
      return;
    }
    if( "VK_ACCESS_2_MEMORY_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eMemoryWrite ;
      return;
    }
    if( "ShaderSampledRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderSampledRead ;
      return;
    }
    if( "eShaderSampledRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderSampledRead ;
      return;
    }
    if( "VK_ACCESS_2_SHADER_SAMPLED_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderSampledRead ;
      return;
    }
    if( "ShaderStorageRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageRead ;
      return;
    }
    if( "eShaderStorageRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageRead ;
      return;
    }
    if( "VK_ACCESS_2_SHADER_STORAGE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageRead ;
      return;
    }
    if( "ShaderStorageWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageWrite ;
      return;
    }
    if( "eShaderStorageWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageWrite ;
      return;
    }
    if( "VK_ACCESS_2_SHADER_STORAGE_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eShaderStorageWrite ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_ACCESS_2_VIDEO_DECODE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecodeWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeWrite ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecodeWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeWrite ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_ACCESS_2_VIDEO_DECODE_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoDecodeWrite ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncodeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncodeRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_ACCESS_2_VIDEO_ENCODE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeRead ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncodeWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeWrite ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncodeWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeWrite ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_ACCESS_2_VIDEO_ENCODE_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eVideoEncodeWrite ;
      return;
    }
#endif
    if( "TransformFeedbackWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "eTransformFeedbackWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "VK_ACCESS_2_TRANSFORM_FEEDBACK_WRITE_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "TransformFeedbackCounterReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "eTransformFeedbackCounterReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "TransformFeedbackCounterWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "eTransformFeedbackCounterWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "VK_ACCESS_2_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "ConditionalRenderingReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "eConditionalRenderingReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "VK_ACCESS_2_CONDITIONAL_RENDERING_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "CommandPreprocessReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessReadNV ;
      return;
    }
    if( "eCommandPreprocessReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessReadNV ;
      return;
    }
    if( "VK_ACCESS_2_COMMAND_PREPROCESS_READ_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessReadNV ;
      return;
    }
    if( "CommandPreprocessWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "eCommandPreprocessWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "VK_ACCESS_2_COMMAND_PREPROCESS_WRITE_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "FragmentShadingRateAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentShadingRateAttachmentRead ;
      return;
    }
    if( "eFragmentShadingRateAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentShadingRateAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_2_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentShadingRateAttachmentRead ;
      return;
    }
    if( "AccelerationStructureRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureRead ;
      return;
    }
    if( "eAccelerationStructureRead" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureRead ;
      return;
    }
    if( "VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureRead ;
      return;
    }
    if( "AccelerationStructureWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWrite ;
      return;
    }
    if( "eAccelerationStructureWrite" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWrite ;
      return;
    }
    if( "VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWrite ;
      return;
    }
    if( "FragmentDensityMapReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "eFragmentDensityMapReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "VK_ACCESS_2_FRAGMENT_DENSITY_MAP_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "ColorAttachmentReadNoncoherentEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "eColorAttachmentReadNoncoherentEXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "VK_ACCESS_2_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "AccelerationStructureReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureReadNV ;
      return;
    }
    if( "eAccelerationStructureReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureReadNV ;
      return;
    }
    if( "VK_ACCESS_2_ACCELERATION_STRUCTURE_READ_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureReadNV ;
      return;
    }
    if( "AccelerationStructureWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWriteNV ;
      return;
    }
    if( "eAccelerationStructureWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWriteNV ;
      return;
    }
    if( "VK_ACCESS_2_ACCELERATION_STRUCTURE_WRITE_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits2KHR :: eAccelerationStructureWriteNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AccessFlagBits2KHR" );
  }
  if( j.is_number() ) {
    p = AccessFlagBits2KHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AccessFlagBits2KHR" );
}
inline void to_json( nlohmann::json &j, const AccessFlags2KHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( AccessFlagBits2KHR ) * 8u; ++n ) {
    if( p & AccessFlags2KHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, AccessFlagBits2KHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, AccessFlags2KHR &p ) {
  if( j.is_array() ) {
    p = AccessFlags2KHR ( 0 );
    for( auto &e:  j ) {
      AccessFlagBits2KHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for AccessFlags2KHR" );
}
}
#endif


#endif
