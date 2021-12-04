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
#ifndef VULKAN2JSON_FILTER_HPP
#define VULKAN2JSON_FILTER_HPP

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
inline void to_json( nlohmann::json &j, const Filter &p ) {
  if( Filter :: eNearest == p ) {
    j = "Nearest";
    return;
  }
  if( Filter :: eLinear == p ) {
    j = "Linear";
    return;
  }
  if( Filter :: eCubicIMG == p ) {
    j = "CubicIMG";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkFilter &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: Filter ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, Filter &p ) {
  if( j.is_string() ) {
    if( "Nearest" == j.get< std::string >() ) {
      p = Filter :: eNearest ;
      return;
    }
    if( "eNearest" == j.get< std::string >() ) {
      p = Filter :: eNearest ;
      return;
    }
    if( "VK_FILTER_NEAREST" == j.get< std::string >() ) {
      p = Filter :: eNearest ;
      return;
    }
    if( "Linear" == j.get< std::string >() ) {
      p = Filter :: eLinear ;
      return;
    }
    if( "eLinear" == j.get< std::string >() ) {
      p = Filter :: eLinear ;
      return;
    }
    if( "VK_FILTER_LINEAR" == j.get< std::string >() ) {
      p = Filter :: eLinear ;
      return;
    }
    if( "CubicIMG" == j.get< std::string >() ) {
      p = Filter :: eCubicIMG ;
      return;
    }
    if( "eCubicIMG" == j.get< std::string >() ) {
      p = Filter :: eCubicIMG ;
      return;
    }
    if( "VK_FILTER_CUBIC_IMG" == j.get< std::string >() ) {
      p = Filter :: eCubicIMG ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for Filter" );
  }
  if( j.is_number() ) {
    p = Filter ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for Filter" );
}
}
inline void from_json( const nlohmann::json &j, VkFilter &p ) {
  VULKAN_HPP_NAMESPACE :: Filter temp;
  from_json( j, temp );
  p = VkFilter ( temp );
}
#endif


#endif
