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
#ifndef VULKAN2JSON_BLENDOVERLAPEXT_HPP
#define VULKAN2JSON_BLENDOVERLAPEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const BlendOverlapEXT &p ) {
  if( BlendOverlapEXT :: eUncorrelated == p ) {
    j = "Uncorrelated";
    return;
  }
  if( BlendOverlapEXT :: eDisjoint == p ) {
    j = "Disjoint";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkBlendOverlapEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: BlendOverlapEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, BlendOverlapEXT &p ) {
  if( j.is_string() ) {
    if( "Uncorrelated" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eUncorrelated ;
      return;
    }
    if( "eUncorrelated" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eUncorrelated ;
      return;
    }
    if( "VK_BLEND_OVERLAP_UNCORRELATED_EXT" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eUncorrelated ;
      return;
    }
    if( "Disjoint" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eDisjoint ;
      return;
    }
    if( "eDisjoint" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eDisjoint ;
      return;
    }
    if( "VK_BLEND_OVERLAP_DISJOINT_EXT" == j.get< std::string >() ) {
      p = BlendOverlapEXT :: eDisjoint ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BlendOverlapEXT" );
  }
  if( j.is_number() ) {
    p = BlendOverlapEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BlendOverlapEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkBlendOverlapEXT &p ) {
  VULKAN_HPP_NAMESPACE :: BlendOverlapEXT temp;
  from_json( j, temp );
  p = VkBlendOverlapEXT ( temp );
}
#endif


#endif
