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
#ifndef VULKAN2JSON_DISCARDRECTANGLEMODEEXT_HPP
#define VULKAN2JSON_DISCARDRECTANGLEMODEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DiscardRectangleModeEXT &p ) {
  if( DiscardRectangleModeEXT :: eInclusive == p ) {
    j = "Inclusive";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDiscardRectangleModeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DiscardRectangleModeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DiscardRectangleModeEXT &p ) {
  if( j.is_string() ) {
    if( "Inclusive" == j.get< std::string >() ) {
      p = DiscardRectangleModeEXT :: eInclusive ;
      return;
    }
    if( "eInclusive" == j.get< std::string >() ) {
      p = DiscardRectangleModeEXT :: eInclusive ;
      return;
    }
    if( "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT" == j.get< std::string >() ) {
      p = DiscardRectangleModeEXT :: eInclusive ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DiscardRectangleModeEXT" );
  }
  if( j.is_number() ) {
    p = DiscardRectangleModeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DiscardRectangleModeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkDiscardRectangleModeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: DiscardRectangleModeEXT temp;
  from_json( j, temp );
  p = VkDiscardRectangleModeEXT ( temp );
}
#endif


#endif
