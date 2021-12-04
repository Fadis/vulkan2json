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
#ifndef VULKAN2JSON_POLYGONMODE_HPP
#define VULKAN2JSON_POLYGONMODE_HPP

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
inline void to_json( nlohmann::json &j, const PolygonMode &p ) {
  if( PolygonMode :: eFill == p ) {
    j = "Fill";
    return;
  }
  if( PolygonMode :: eLine == p ) {
    j = "Line";
    return;
  }
  if( PolygonMode :: ePoint == p ) {
    j = "Point";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPolygonMode &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PolygonMode ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PolygonMode &p ) {
  if( j.is_string() ) {
    if( "Fill" == j.get< std::string >() ) {
      p = PolygonMode :: eFill ;
      return;
    }
    if( "eFill" == j.get< std::string >() ) {
      p = PolygonMode :: eFill ;
      return;
    }
    if( "VK_POLYGON_MODE_FILL" == j.get< std::string >() ) {
      p = PolygonMode :: eFill ;
      return;
    }
    if( "Line" == j.get< std::string >() ) {
      p = PolygonMode :: eLine ;
      return;
    }
    if( "eLine" == j.get< std::string >() ) {
      p = PolygonMode :: eLine ;
      return;
    }
    if( "VK_POLYGON_MODE_LINE" == j.get< std::string >() ) {
      p = PolygonMode :: eLine ;
      return;
    }
    if( "Point" == j.get< std::string >() ) {
      p = PolygonMode :: ePoint ;
      return;
    }
    if( "ePoint" == j.get< std::string >() ) {
      p = PolygonMode :: ePoint ;
      return;
    }
    if( "VK_POLYGON_MODE_POINT" == j.get< std::string >() ) {
      p = PolygonMode :: ePoint ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PolygonMode" );
  }
  if( j.is_number() ) {
    p = PolygonMode ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PolygonMode" );
}
}
inline void from_json( const nlohmann::json &j, VkPolygonMode &p ) {
  VULKAN_HPP_NAMESPACE :: PolygonMode temp;
  from_json( j, temp );
  p = VkPolygonMode ( temp );
}
#endif


#endif
