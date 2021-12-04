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
#ifndef VULKAN2JSON_ACCESSFLAGS_HPP
#define VULKAN2JSON_ACCESSFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const AccessFlagBits &p ) {
  if( AccessFlagBits :: eIndirectCommandRead == p ) {
    j = "IndirectCommandRead";
    return;
  }
  if( AccessFlagBits :: eIndexRead == p ) {
    j = "IndexRead";
    return;
  }
  if( AccessFlagBits :: eVertexAttributeRead == p ) {
    j = "VertexAttributeRead";
    return;
  }
  if( AccessFlagBits :: eUniformRead == p ) {
    j = "UniformRead";
    return;
  }
  if( AccessFlagBits :: eInputAttachmentRead == p ) {
    j = "InputAttachmentRead";
    return;
  }
  if( AccessFlagBits :: eShaderRead == p ) {
    j = "ShaderRead";
    return;
  }
  if( AccessFlagBits :: eShaderWrite == p ) {
    j = "ShaderWrite";
    return;
  }
  if( AccessFlagBits :: eColorAttachmentRead == p ) {
    j = "ColorAttachmentRead";
    return;
  }
  if( AccessFlagBits :: eColorAttachmentWrite == p ) {
    j = "ColorAttachmentWrite";
    return;
  }
  if( AccessFlagBits :: eDepthStencilAttachmentRead == p ) {
    j = "DepthStencilAttachmentRead";
    return;
  }
  if( AccessFlagBits :: eDepthStencilAttachmentWrite == p ) {
    j = "DepthStencilAttachmentWrite";
    return;
  }
  if( AccessFlagBits :: eTransferRead == p ) {
    j = "TransferRead";
    return;
  }
  if( AccessFlagBits :: eTransferWrite == p ) {
    j = "TransferWrite";
    return;
  }
  if( AccessFlagBits :: eHostRead == p ) {
    j = "HostRead";
    return;
  }
  if( AccessFlagBits :: eHostWrite == p ) {
    j = "HostWrite";
    return;
  }
  if( AccessFlagBits :: eMemoryRead == p ) {
    j = "MemoryRead";
    return;
  }
  if( AccessFlagBits :: eMemoryWrite == p ) {
    j = "MemoryWrite";
    return;
  }
  if( AccessFlagBits :: eTransformFeedbackWriteEXT == p ) {
    j = "TransformFeedbackWriteEXT";
    return;
  }
  if( AccessFlagBits :: eTransformFeedbackCounterReadEXT == p ) {
    j = "TransformFeedbackCounterReadEXT";
    return;
  }
  if( AccessFlagBits :: eTransformFeedbackCounterWriteEXT == p ) {
    j = "TransformFeedbackCounterWriteEXT";
    return;
  }
  if( AccessFlagBits :: eConditionalRenderingReadEXT == p ) {
    j = "ConditionalRenderingReadEXT";
    return;
  }
  if( AccessFlagBits :: eColorAttachmentReadNoncoherentEXT == p ) {
    j = "ColorAttachmentReadNoncoherentEXT";
    return;
  }
  if( AccessFlagBits :: eAccelerationStructureReadKHR == p ) {
    j = "AccelerationStructureReadKHR";
    return;
  }
  if( AccessFlagBits :: eAccelerationStructureWriteKHR == p ) {
    j = "AccelerationStructureWriteKHR";
    return;
  }
  if( AccessFlagBits :: eFragmentDensityMapReadEXT == p ) {
    j = "FragmentDensityMapReadEXT";
    return;
  }
  if( AccessFlagBits :: eFragmentShadingRateAttachmentReadKHR == p ) {
    j = "FragmentShadingRateAttachmentReadKHR";
    return;
  }
  if( AccessFlagBits :: eCommandPreprocessReadNV == p ) {
    j = "CommandPreprocessReadNV";
    return;
  }
  if( AccessFlagBits :: eCommandPreprocessWriteNV == p ) {
    j = "CommandPreprocessWriteNV";
    return;
  }
  if( AccessFlagBits :: eNoneKHR == p ) {
    j = "NoneKHR";
    return;
  }
  if( AccessFlagBits :: eAccelerationStructureReadNV == p ) {
    j = "AccelerationStructureReadNV";
    return;
  }
  if( AccessFlagBits :: eAccelerationStructureWriteNV == p ) {
    j = "AccelerationStructureWriteNV";
    return;
  }
}
inline void from_json( const nlohmann::json &j, AccessFlagBits &p ) {
  if( j.is_string() ) {
    if( "IndirectCommandRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndirectCommandRead ;
      return;
    }
    if( "eIndirectCommandRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndirectCommandRead ;
      return;
    }
    if( "VK_ACCESS_INDIRECT_COMMAND_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndirectCommandRead ;
      return;
    }
    if( "IndexRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndexRead ;
      return;
    }
    if( "eIndexRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndexRead ;
      return;
    }
    if( "VK_ACCESS_INDEX_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eIndexRead ;
      return;
    }
    if( "VertexAttributeRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eVertexAttributeRead ;
      return;
    }
    if( "eVertexAttributeRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eVertexAttributeRead ;
      return;
    }
    if( "VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eVertexAttributeRead ;
      return;
    }
    if( "UniformRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eUniformRead ;
      return;
    }
    if( "eUniformRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eUniformRead ;
      return;
    }
    if( "VK_ACCESS_UNIFORM_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eUniformRead ;
      return;
    }
    if( "InputAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eInputAttachmentRead ;
      return;
    }
    if( "eInputAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eInputAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_INPUT_ATTACHMENT_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eInputAttachmentRead ;
      return;
    }
    if( "ShaderRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderRead ;
      return;
    }
    if( "eShaderRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderRead ;
      return;
    }
    if( "VK_ACCESS_SHADER_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderRead ;
      return;
    }
    if( "ShaderWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderWrite ;
      return;
    }
    if( "eShaderWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderWrite ;
      return;
    }
    if( "VK_ACCESS_SHADER_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eShaderWrite ;
      return;
    }
    if( "ColorAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentRead ;
      return;
    }
    if( "eColorAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_COLOR_ATTACHMENT_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentRead ;
      return;
    }
    if( "ColorAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentWrite ;
      return;
    }
    if( "eColorAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentWrite ;
      return;
    }
    if( "VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentWrite ;
      return;
    }
    if( "DepthStencilAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "eDepthStencilAttachmentRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentRead ;
      return;
    }
    if( "DepthStencilAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "eDepthStencilAttachmentWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eDepthStencilAttachmentWrite ;
      return;
    }
    if( "TransferRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferRead ;
      return;
    }
    if( "eTransferRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferRead ;
      return;
    }
    if( "VK_ACCESS_TRANSFER_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferRead ;
      return;
    }
    if( "TransferWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferWrite ;
      return;
    }
    if( "eTransferWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferWrite ;
      return;
    }
    if( "VK_ACCESS_TRANSFER_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransferWrite ;
      return;
    }
    if( "HostRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostRead ;
      return;
    }
    if( "eHostRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostRead ;
      return;
    }
    if( "VK_ACCESS_HOST_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostRead ;
      return;
    }
    if( "HostWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostWrite ;
      return;
    }
    if( "eHostWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostWrite ;
      return;
    }
    if( "VK_ACCESS_HOST_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eHostWrite ;
      return;
    }
    if( "MemoryRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryRead ;
      return;
    }
    if( "eMemoryRead" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryRead ;
      return;
    }
    if( "VK_ACCESS_MEMORY_READ_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryRead ;
      return;
    }
    if( "MemoryWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryWrite ;
      return;
    }
    if( "eMemoryWrite" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryWrite ;
      return;
    }
    if( "VK_ACCESS_MEMORY_WRITE_BIT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eMemoryWrite ;
      return;
    }
    if( "TransformFeedbackWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "eTransformFeedbackWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackWriteEXT ;
      return;
    }
    if( "TransformFeedbackCounterReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "eTransformFeedbackCounterReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterReadEXT ;
      return;
    }
    if( "TransformFeedbackCounterWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "eTransformFeedbackCounterWriteEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eTransformFeedbackCounterWriteEXT ;
      return;
    }
    if( "ConditionalRenderingReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "eConditionalRenderingReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eConditionalRenderingReadEXT ;
      return;
    }
    if( "ColorAttachmentReadNoncoherentEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "eColorAttachmentReadNoncoherentEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eColorAttachmentReadNoncoherentEXT ;
      return;
    }
    if( "AccelerationStructureReadKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadKHR ;
      return;
    }
    if( "eAccelerationStructureReadKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadKHR ;
      return;
    }
    if( "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadKHR ;
      return;
    }
    if( "AccelerationStructureWriteKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteKHR ;
      return;
    }
    if( "eAccelerationStructureWriteKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteKHR ;
      return;
    }
    if( "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteKHR ;
      return;
    }
    if( "FragmentDensityMapReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "eFragmentDensityMapReadEXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentDensityMapReadEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentReadKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentShadingRateAttachmentReadKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentReadKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentShadingRateAttachmentReadKHR ;
      return;
    }
    if( "VK_ACCESS_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eFragmentShadingRateAttachmentReadKHR ;
      return;
    }
    if( "CommandPreprocessReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessReadNV ;
      return;
    }
    if( "eCommandPreprocessReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessReadNV ;
      return;
    }
    if( "VK_ACCESS_COMMAND_PREPROCESS_READ_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessReadNV ;
      return;
    }
    if( "CommandPreprocessWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "eCommandPreprocessWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "VK_ACCESS_COMMAND_PREPROCESS_WRITE_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eCommandPreprocessWriteNV ;
      return;
    }
    if( "NoneKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eNoneKHR ;
      return;
    }
    if( "eNoneKHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eNoneKHR ;
      return;
    }
    if( "VK_ACCESS_NONE_KHR" == j.get< std::string >() ) {
      p = AccessFlagBits :: eNoneKHR ;
      return;
    }
    if( "AccelerationStructureReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadNV ;
      return;
    }
    if( "eAccelerationStructureReadNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadNV ;
      return;
    }
    if( "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureReadNV ;
      return;
    }
    if( "AccelerationStructureWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteNV ;
      return;
    }
    if( "eAccelerationStructureWriteNV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteNV ;
      return;
    }
    if( "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV" == j.get< std::string >() ) {
      p = AccessFlagBits :: eAccelerationStructureWriteNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AccessFlagBits" );
  }
  if( j.is_number() ) {
    p = AccessFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AccessFlagBits" );
}
inline void to_json( nlohmann::json &j, const AccessFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( AccessFlagBits ) * 8u; ++n ) {
    if( p & AccessFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, AccessFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, AccessFlags &p ) {
  if( j.is_array() ) {
    p = AccessFlags ( 0 );
    for( auto &e:  j ) {
      AccessFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for AccessFlags" );
}
}
#endif


#endif
