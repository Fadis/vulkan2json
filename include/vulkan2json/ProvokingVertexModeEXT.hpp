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
#ifndef VULKAN2JSON_PROVOKINGVERTEXMODEEXT_HPP
#define VULKAN2JSON_PROVOKINGVERTEXMODEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_PROVOKING_VERTEX_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ProvokingVertexModeEXT &p ) {
  if( ProvokingVertexModeEXT :: eFirstVertex == p ) {
    j = "FirstVertex";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkProvokingVertexModeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ProvokingVertexModeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ProvokingVertexModeEXT &p ) {
  if( j.is_string() ) {
    if( "FirstVertex" == j.get< std::string >() ) {
      p = ProvokingVertexModeEXT :: eFirstVertex ;
      return;
    }
    if( "eFirstVertex" == j.get< std::string >() ) {
      p = ProvokingVertexModeEXT :: eFirstVertex ;
      return;
    }
    if( "VK_PROVOKING_VERTEX_MODE_FIRST_VERTEX_EXT" == j.get< std::string >() ) {
      p = ProvokingVertexModeEXT :: eFirstVertex ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ProvokingVertexModeEXT" );
  }
  if( j.is_number() ) {
    p = ProvokingVertexModeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ProvokingVertexModeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkProvokingVertexModeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: ProvokingVertexModeEXT temp;
  from_json( j, temp );
  p = VkProvokingVertexModeEXT ( temp );
}
#endif


#endif
