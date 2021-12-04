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
#ifndef VULKAN2JSON_IMAGETILING_HPP
#define VULKAN2JSON_IMAGETILING_HPP

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
inline void to_json( nlohmann::json &j, const ImageTiling &p ) {
  if( ImageTiling :: eOptimal == p ) {
    j = "Optimal";
    return;
  }
  if( ImageTiling :: eLinear == p ) {
    j = "Linear";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkImageTiling &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageTiling ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageTiling &p ) {
  if( j.is_string() ) {
    if( "Optimal" == j.get< std::string >() ) {
      p = ImageTiling :: eOptimal ;
      return;
    }
    if( "eOptimal" == j.get< std::string >() ) {
      p = ImageTiling :: eOptimal ;
      return;
    }
    if( "VK_IMAGE_TILING_OPTIMAL" == j.get< std::string >() ) {
      p = ImageTiling :: eOptimal ;
      return;
    }
    if( "Linear" == j.get< std::string >() ) {
      p = ImageTiling :: eLinear ;
      return;
    }
    if( "eLinear" == j.get< std::string >() ) {
      p = ImageTiling :: eLinear ;
      return;
    }
    if( "VK_IMAGE_TILING_LINEAR" == j.get< std::string >() ) {
      p = ImageTiling :: eLinear ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageTiling" );
  }
  if( j.is_number() ) {
    p = ImageTiling ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageTiling" );
}
}
inline void from_json( const nlohmann::json &j, VkImageTiling &p ) {
  VULKAN_HPP_NAMESPACE :: ImageTiling temp;
  from_json( j, temp );
  p = VkImageTiling ( temp );
}
#endif


#endif
