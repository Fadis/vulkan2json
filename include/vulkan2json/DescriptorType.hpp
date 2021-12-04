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
#ifndef VULKAN2JSON_DESCRIPTORTYPE_HPP
#define VULKAN2JSON_DESCRIPTORTYPE_HPP

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
inline void to_json( nlohmann::json &j, const DescriptorType &p ) {
  if( DescriptorType :: eSampler == p ) {
    j = "Sampler";
    return;
  }
  if( DescriptorType :: eCombinedImageSampler == p ) {
    j = "CombinedImageSampler";
    return;
  }
  if( DescriptorType :: eSampledImage == p ) {
    j = "SampledImage";
    return;
  }
  if( DescriptorType :: eStorageImage == p ) {
    j = "StorageImage";
    return;
  }
  if( DescriptorType :: eUniformTexelBuffer == p ) {
    j = "UniformTexelBuffer";
    return;
  }
  if( DescriptorType :: eStorageTexelBuffer == p ) {
    j = "StorageTexelBuffer";
    return;
  }
  if( DescriptorType :: eUniformBuffer == p ) {
    j = "UniformBuffer";
    return;
  }
  if( DescriptorType :: eStorageBuffer == p ) {
    j = "StorageBuffer";
    return;
  }
  if( DescriptorType :: eUniformBufferDynamic == p ) {
    j = "UniformBufferDynamic";
    return;
  }
  if( DescriptorType :: eStorageBufferDynamic == p ) {
    j = "StorageBufferDynamic";
    return;
  }
  if( DescriptorType :: eInputAttachment == p ) {
    j = "InputAttachment";
    return;
  }
  if( DescriptorType :: eInlineUniformBlockEXT == p ) {
    j = "InlineUniformBlockEXT";
    return;
  }
  if( DescriptorType :: eAccelerationStructureKHR == p ) {
    j = "AccelerationStructureKHR";
    return;
  }
  if( DescriptorType :: eAccelerationStructureNV == p ) {
    j = "AccelerationStructureNV";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDescriptorType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DescriptorType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DescriptorType &p ) {
  if( j.is_string() ) {
    if( "Sampler" == j.get< std::string >() ) {
      p = DescriptorType :: eSampler ;
      return;
    }
    if( "eSampler" == j.get< std::string >() ) {
      p = DescriptorType :: eSampler ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_SAMPLER" == j.get< std::string >() ) {
      p = DescriptorType :: eSampler ;
      return;
    }
    if( "CombinedImageSampler" == j.get< std::string >() ) {
      p = DescriptorType :: eCombinedImageSampler ;
      return;
    }
    if( "eCombinedImageSampler" == j.get< std::string >() ) {
      p = DescriptorType :: eCombinedImageSampler ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER" == j.get< std::string >() ) {
      p = DescriptorType :: eCombinedImageSampler ;
      return;
    }
    if( "SampledImage" == j.get< std::string >() ) {
      p = DescriptorType :: eSampledImage ;
      return;
    }
    if( "eSampledImage" == j.get< std::string >() ) {
      p = DescriptorType :: eSampledImage ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE" == j.get< std::string >() ) {
      p = DescriptorType :: eSampledImage ;
      return;
    }
    if( "StorageImage" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageImage ;
      return;
    }
    if( "eStorageImage" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageImage ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageImage ;
      return;
    }
    if( "UniformTexelBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformTexelBuffer ;
      return;
    }
    if( "eUniformTexelBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformTexelBuffer ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformTexelBuffer ;
      return;
    }
    if( "StorageTexelBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageTexelBuffer ;
      return;
    }
    if( "eStorageTexelBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageTexelBuffer ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageTexelBuffer ;
      return;
    }
    if( "UniformBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBuffer ;
      return;
    }
    if( "eUniformBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBuffer ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBuffer ;
      return;
    }
    if( "StorageBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBuffer ;
      return;
    }
    if( "eStorageBuffer" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBuffer ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBuffer ;
      return;
    }
    if( "UniformBufferDynamic" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBufferDynamic ;
      return;
    }
    if( "eUniformBufferDynamic" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBufferDynamic ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC" == j.get< std::string >() ) {
      p = DescriptorType :: eUniformBufferDynamic ;
      return;
    }
    if( "StorageBufferDynamic" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBufferDynamic ;
      return;
    }
    if( "eStorageBufferDynamic" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBufferDynamic ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC" == j.get< std::string >() ) {
      p = DescriptorType :: eStorageBufferDynamic ;
      return;
    }
    if( "InputAttachment" == j.get< std::string >() ) {
      p = DescriptorType :: eInputAttachment ;
      return;
    }
    if( "eInputAttachment" == j.get< std::string >() ) {
      p = DescriptorType :: eInputAttachment ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT" == j.get< std::string >() ) {
      p = DescriptorType :: eInputAttachment ;
      return;
    }
    if( "InlineUniformBlockEXT" == j.get< std::string >() ) {
      p = DescriptorType :: eInlineUniformBlockEXT ;
      return;
    }
    if( "eInlineUniformBlockEXT" == j.get< std::string >() ) {
      p = DescriptorType :: eInlineUniformBlockEXT ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT" == j.get< std::string >() ) {
      p = DescriptorType :: eInlineUniformBlockEXT ;
      return;
    }
    if( "AccelerationStructureKHR" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureKHR ;
      return;
    }
    if( "eAccelerationStructureKHR" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureKHR ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureKHR ;
      return;
    }
    if( "AccelerationStructureNV" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureNV ;
      return;
    }
    if( "eAccelerationStructureNV" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureNV ;
      return;
    }
    if( "VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV" == j.get< std::string >() ) {
      p = DescriptorType :: eAccelerationStructureNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DescriptorType" );
  }
  if( j.is_number() ) {
    p = DescriptorType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DescriptorType" );
}
}
inline void from_json( const nlohmann::json &j, VkDescriptorType &p ) {
  VULKAN_HPP_NAMESPACE :: DescriptorType temp;
  from_json( j, temp );
  p = VkDescriptorType ( temp );
}
#endif


#endif
