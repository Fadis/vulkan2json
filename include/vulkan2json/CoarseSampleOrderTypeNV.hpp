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
#ifndef VULKAN2JSON_COARSESAMPLEORDERTYPENV_HPP
#define VULKAN2JSON_COARSESAMPLEORDERTYPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const CoarseSampleOrderTypeNV &p ) {
  if( CoarseSampleOrderTypeNV :: eDefault == p ) {
    j = "Default";
    return;
  }
  if( CoarseSampleOrderTypeNV :: eCustom == p ) {
    j = "Custom";
    return;
  }
  if( CoarseSampleOrderTypeNV :: ePixelMajor == p ) {
    j = "PixelMajor";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkCoarseSampleOrderTypeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, CoarseSampleOrderTypeNV &p ) {
  if( j.is_string() ) {
    if( "Default" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eDefault ;
      return;
    }
    if( "eDefault" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eDefault ;
      return;
    }
    if( "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eDefault ;
      return;
    }
    if( "Custom" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eCustom ;
      return;
    }
    if( "eCustom" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eCustom ;
      return;
    }
    if( "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: eCustom ;
      return;
    }
    if( "PixelMajor" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: ePixelMajor ;
      return;
    }
    if( "ePixelMajor" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: ePixelMajor ;
      return;
    }
    if( "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV" == j.get< std::string >() ) {
      p = CoarseSampleOrderTypeNV :: ePixelMajor ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CoarseSampleOrderTypeNV" );
  }
  if( j.is_number() ) {
    p = CoarseSampleOrderTypeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CoarseSampleOrderTypeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkCoarseSampleOrderTypeNV &p ) {
  VULKAN_HPP_NAMESPACE :: CoarseSampleOrderTypeNV temp;
  from_json( j, temp );
  p = VkCoarseSampleOrderTypeNV ( temp );
}
#endif


#endif
