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
#ifndef VULKAN2JSON_VERTEXINPUTRATE_HPP
#define VULKAN2JSON_VERTEXINPUTRATE_HPP

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
inline void to_json( nlohmann::json &j, const VertexInputRate &p ) {
  if( VertexInputRate :: eVertex == p ) {
    j = "Vertex";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkVertexInputRate &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VertexInputRate ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VertexInputRate &p ) {
  if( j.is_string() ) {
    if( "Vertex" == j.get< std::string >() ) {
      p = VertexInputRate :: eVertex ;
      return;
    }
    if( "eVertex" == j.get< std::string >() ) {
      p = VertexInputRate :: eVertex ;
      return;
    }
    if( "VK_VERTEX_INPUT_RATE_VERTEX" == j.get< std::string >() ) {
      p = VertexInputRate :: eVertex ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for VertexInputRate" );
  }
  if( j.is_number() ) {
    p = VertexInputRate ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VertexInputRate" );
}
}
inline void from_json( const nlohmann::json &j, VkVertexInputRate &p ) {
  VULKAN_HPP_NAMESPACE :: VertexInputRate temp;
  from_json( j, temp );
  p = VkVertexInputRate ( temp );
}
#endif


#endif
