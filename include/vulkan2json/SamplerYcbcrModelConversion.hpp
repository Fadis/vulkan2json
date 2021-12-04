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
#ifndef VULKAN2JSON_SAMPLERYCBCRMODELCONVERSION_HPP
#define VULKAN2JSON_SAMPLERYCBCRMODELCONVERSION_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_1
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SamplerYcbcrModelConversion &p ) {
  if( SamplerYcbcrModelConversion :: eRgbIdentity == p ) {
    j = "RgbIdentity";
    return;
  }
  if( SamplerYcbcrModelConversion :: eYcbcrIdentity == p ) {
    j = "YcbcrIdentity";
    return;
  }
  if( SamplerYcbcrModelConversion :: eYcbcr709 == p ) {
    j = "Ycbcr709";
    return;
  }
  if( SamplerYcbcrModelConversion :: eYcbcr601 == p ) {
    j = "Ycbcr601";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkSamplerYcbcrModelConversion &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SamplerYcbcrModelConversion &p ) {
  if( j.is_string() ) {
    if( "RgbIdentity" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eRgbIdentity ;
      return;
    }
    if( "eRgbIdentity" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eRgbIdentity ;
      return;
    }
    if( "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eRgbIdentity ;
      return;
    }
    if( "YcbcrIdentity" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcrIdentity ;
      return;
    }
    if( "eYcbcrIdentity" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcrIdentity ;
      return;
    }
    if( "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcrIdentity ;
      return;
    }
    if( "Ycbcr709" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr709 ;
      return;
    }
    if( "eYcbcr709" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr709 ;
      return;
    }
    if( "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr709 ;
      return;
    }
    if( "Ycbcr601" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr601 ;
      return;
    }
    if( "eYcbcr601" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr601 ;
      return;
    }
    if( "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601" == j.get< std::string >() ) {
      p = SamplerYcbcrModelConversion :: eYcbcr601 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SamplerYcbcrModelConversion" );
  }
  if( j.is_number() ) {
    p = SamplerYcbcrModelConversion ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SamplerYcbcrModelConversion" );
}
}
inline void from_json( const nlohmann::json &j, VkSamplerYcbcrModelConversion &p ) {
  VULKAN_HPP_NAMESPACE :: SamplerYcbcrModelConversion temp;
  from_json( j, temp );
  p = VkSamplerYcbcrModelConversion ( temp );
}
#endif


#endif
