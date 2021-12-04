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
#ifndef VULKAN2JSON_IMAGETYPE_HPP
#define VULKAN2JSON_IMAGETYPE_HPP

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
inline void to_json( nlohmann::json &j, const ImageType &p ) {
  if( ImageType :: e1D == p ) {
    j = "1D";
    return;
  }
  if( ImageType :: e2D == p ) {
    j = "2D";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkImageType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageType &p ) {
  if( j.is_string() ) {
    if( "1D" == j.get< std::string >() ) {
      p = ImageType :: e1D ;
      return;
    }
    if( "e1D" == j.get< std::string >() ) {
      p = ImageType :: e1D ;
      return;
    }
    if( "VK_IMAGE_TYPE_1D" == j.get< std::string >() ) {
      p = ImageType :: e1D ;
      return;
    }
    if( "2D" == j.get< std::string >() ) {
      p = ImageType :: e2D ;
      return;
    }
    if( "e2D" == j.get< std::string >() ) {
      p = ImageType :: e2D ;
      return;
    }
    if( "VK_IMAGE_TYPE_2D" == j.get< std::string >() ) {
      p = ImageType :: e2D ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageType" );
  }
  if( j.is_number() ) {
    p = ImageType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageType" );
}
}
inline void from_json( const nlohmann::json &j, VkImageType &p ) {
  VULKAN_HPP_NAMESPACE :: ImageType temp;
  from_json( j, temp );
  p = VkImageType ( temp );
}
#endif


#endif
