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
#ifndef VULKAN2JSON_SAMPLERADDRESSMODE_HPP
#define VULKAN2JSON_SAMPLERADDRESSMODE_HPP

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
inline void to_json( nlohmann::json &j, const SamplerAddressMode &p ) {
  if( SamplerAddressMode :: eRepeat == p ) {
    j = "Repeat";
    return;
  }
  if( SamplerAddressMode :: eMirroredRepeat == p ) {
    j = "MirroredRepeat";
    return;
  }
  if( SamplerAddressMode :: eClampToEdge == p ) {
    j = "ClampToEdge";
    return;
  }
  if( SamplerAddressMode :: eClampToBorder == p ) {
    j = "ClampToBorder";
    return;
  }
  if( SamplerAddressMode :: eMirrorClampToEdge == p ) {
    j = "MirrorClampToEdge";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkSamplerAddressMode &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SamplerAddressMode ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SamplerAddressMode &p ) {
  if( j.is_string() ) {
    if( "Repeat" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eRepeat ;
      return;
    }
    if( "eRepeat" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eRepeat ;
      return;
    }
    if( "VK_SAMPLER_ADDRESS_MODE_REPEAT" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eRepeat ;
      return;
    }
    if( "MirroredRepeat" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirroredRepeat ;
      return;
    }
    if( "eMirroredRepeat" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirroredRepeat ;
      return;
    }
    if( "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirroredRepeat ;
      return;
    }
    if( "ClampToEdge" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToEdge ;
      return;
    }
    if( "eClampToEdge" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToEdge ;
      return;
    }
    if( "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToEdge ;
      return;
    }
    if( "ClampToBorder" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToBorder ;
      return;
    }
    if( "eClampToBorder" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToBorder ;
      return;
    }
    if( "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eClampToBorder ;
      return;
    }
    if( "MirrorClampToEdge" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirrorClampToEdge ;
      return;
    }
    if( "eMirrorClampToEdge" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirrorClampToEdge ;
      return;
    }
    if( "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE" == j.get< std::string >() ) {
      p = SamplerAddressMode :: eMirrorClampToEdge ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SamplerAddressMode" );
  }
  if( j.is_number() ) {
    p = SamplerAddressMode ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SamplerAddressMode" );
}
}
inline void from_json( const nlohmann::json &j, VkSamplerAddressMode &p ) {
  VULKAN_HPP_NAMESPACE :: SamplerAddressMode temp;
  from_json( j, temp );
  p = VkSamplerAddressMode ( temp );
}
#endif


#endif
