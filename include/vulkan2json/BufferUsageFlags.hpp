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
#ifndef VULKAN2JSON_BUFFERUSAGEFLAGS_HPP
#define VULKAN2JSON_BUFFERUSAGEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const BufferUsageFlagBits &p ) {
  if( BufferUsageFlagBits :: eTransferSrc == p ) {
    j = "TransferSrc";
    return;
  }
  if( BufferUsageFlagBits :: eTransferDst == p ) {
    j = "TransferDst";
    return;
  }
  if( BufferUsageFlagBits :: eUniformTexelBuffer == p ) {
    j = "UniformTexelBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eStorageTexelBuffer == p ) {
    j = "StorageTexelBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eUniformBuffer == p ) {
    j = "UniformBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eStorageBuffer == p ) {
    j = "StorageBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eIndexBuffer == p ) {
    j = "IndexBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eVertexBuffer == p ) {
    j = "VertexBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eIndirectBuffer == p ) {
    j = "IndirectBuffer";
    return;
  }
  if( BufferUsageFlagBits :: eShaderDeviceAddress == p ) {
    j = "ShaderDeviceAddress";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( BufferUsageFlagBits :: eVideoDecodeSrcKHR == p ) {
    j = "VideoDecodeSrcKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( BufferUsageFlagBits :: eVideoDecodeDstKHR == p ) {
    j = "VideoDecodeDstKHR";
    return;
  }
#endif
  if( BufferUsageFlagBits :: eTransformFeedbackBufferEXT == p ) {
    j = "TransformFeedbackBufferEXT";
    return;
  }
  if( BufferUsageFlagBits :: eTransformFeedbackCounterBufferEXT == p ) {
    j = "TransformFeedbackCounterBufferEXT";
    return;
  }
  if( BufferUsageFlagBits :: eConditionalRenderingEXT == p ) {
    j = "ConditionalRenderingEXT";
    return;
  }
  if( BufferUsageFlagBits :: eAccelerationStructureBuildInputReadOnlyKHR == p ) {
    j = "AccelerationStructureBuildInputReadOnlyKHR";
    return;
  }
  if( BufferUsageFlagBits :: eAccelerationStructureStorageKHR == p ) {
    j = "AccelerationStructureStorageKHR";
    return;
  }
  if( BufferUsageFlagBits :: eShaderBindingTableKHR == p ) {
    j = "ShaderBindingTableKHR";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( BufferUsageFlagBits :: eVideoEncodeDstKHR == p ) {
    j = "VideoEncodeDstKHR";
    return;
  }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( BufferUsageFlagBits :: eVideoEncodeSrcKHR == p ) {
    j = "VideoEncodeSrcKHR";
    return;
  }
#endif
  if( BufferUsageFlagBits :: eRayTracingNV == p ) {
    j = "RayTracingNV";
    return;
  }
  if( BufferUsageFlagBits :: eShaderDeviceAddressEXT == p ) {
    j = "ShaderDeviceAddressEXT";
    return;
  }
}
inline void from_json( const nlohmann::json &j, BufferUsageFlagBits &p ) {
  if( j.is_string() ) {
    if( "TransferSrc" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "eTransferSrc" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "VK_BUFFER_USAGE_TRANSFER_SRC_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferSrc ;
      return;
    }
    if( "TransferDst" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "eTransferDst" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "VK_BUFFER_USAGE_TRANSFER_DST_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransferDst ;
      return;
    }
    if( "UniformTexelBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "eUniformTexelBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformTexelBuffer ;
      return;
    }
    if( "StorageTexelBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "eStorageTexelBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageTexelBuffer ;
      return;
    }
    if( "UniformBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformBuffer ;
      return;
    }
    if( "eUniformBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eUniformBuffer ;
      return;
    }
    if( "StorageBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageBuffer ;
      return;
    }
    if( "eStorageBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_STORAGE_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eStorageBuffer ;
      return;
    }
    if( "IndexBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndexBuffer ;
      return;
    }
    if( "eIndexBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndexBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_INDEX_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndexBuffer ;
      return;
    }
    if( "VertexBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVertexBuffer ;
      return;
    }
    if( "eVertexBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVertexBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_VERTEX_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVertexBuffer ;
      return;
    }
    if( "IndirectBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndirectBuffer ;
      return;
    }
    if( "eIndirectBuffer" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndirectBuffer ;
      return;
    }
    if( "VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eIndirectBuffer ;
      return;
    }
    if( "ShaderDeviceAddress" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddress ;
      return;
    }
    if( "eShaderDeviceAddress" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddress ;
      return;
    }
    if( "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddress ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeSrcKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_BUFFER_USAGE_VIDEO_DECODE_SRC_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoDecodeDstKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoDecodeDstKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_BUFFER_USAGE_VIDEO_DECODE_DST_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoDecodeDstKHR ;
      return;
    }
#endif
    if( "TransformFeedbackBufferEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackBufferEXT ;
      return;
    }
    if( "eTransformFeedbackBufferEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackBufferEXT ;
      return;
    }
    if( "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackBufferEXT ;
      return;
    }
    if( "TransformFeedbackCounterBufferEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackCounterBufferEXT ;
      return;
    }
    if( "eTransformFeedbackCounterBufferEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackCounterBufferEXT ;
      return;
    }
    if( "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eTransformFeedbackCounterBufferEXT ;
      return;
    }
    if( "ConditionalRenderingEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "eConditionalRenderingEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "AccelerationStructureBuildInputReadOnlyKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureBuildInputReadOnlyKHR ;
      return;
    }
    if( "eAccelerationStructureBuildInputReadOnlyKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureBuildInputReadOnlyKHR ;
      return;
    }
    if( "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureBuildInputReadOnlyKHR ;
      return;
    }
    if( "AccelerationStructureStorageKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureStorageKHR ;
      return;
    }
    if( "eAccelerationStructureStorageKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureStorageKHR ;
      return;
    }
    if( "VK_BUFFER_USAGE_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eAccelerationStructureStorageKHR ;
      return;
    }
    if( "ShaderBindingTableKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderBindingTableKHR ;
      return;
    }
    if( "eShaderBindingTableKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderBindingTableKHR ;
      return;
    }
    if( "VK_BUFFER_USAGE_SHADER_BINDING_TABLE_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderBindingTableKHR ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeDstKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeDstKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_BUFFER_USAGE_VIDEO_ENCODE_DST_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeDstKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eVideoEncodeSrcKHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_BUFFER_USAGE_VIDEO_ENCODE_SRC_BIT_KHR" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eVideoEncodeSrcKHR ;
      return;
    }
#endif
    if( "RayTracingNV" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eRayTracingNV ;
      return;
    }
    if( "eRayTracingNV" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eRayTracingNV ;
      return;
    }
    if( "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eRayTracingNV ;
      return;
    }
    if( "ShaderDeviceAddressEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddressEXT ;
      return;
    }
    if( "eShaderDeviceAddressEXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddressEXT ;
      return;
    }
    if( "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT" == j.get< std::string >() ) {
      p = BufferUsageFlagBits :: eShaderDeviceAddressEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BufferUsageFlagBits" );
  }
  if( j.is_number() ) {
    p = BufferUsageFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BufferUsageFlagBits" );
}
inline void to_json( nlohmann::json &j, const BufferUsageFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( BufferUsageFlagBits ) * 8u; ++n ) {
    if( p & BufferUsageFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, BufferUsageFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, BufferUsageFlags &p ) {
  if( j.is_array() ) {
    p = BufferUsageFlags ( 0 );
    for( auto &e:  j ) {
      BufferUsageFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for BufferUsageFlags" );
}
}


#endif
