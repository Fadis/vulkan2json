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
#ifndef VULKAN2JSON_TRANSFORMMATRIXKHR_HPP
#define VULKAN2JSON_TRANSFORMMATRIXKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const TransformMatrixKHR &p ) {
  j = nlohmann::json::object();
  j[ "matrix" ] = nlohmann::json::array();
  for( auto &e: p.matrix ) {
    auto temp = nlohmann::json::array();
    std::copy( e.begin(), e.end(), std::back_inserter( temp ) );
    j[ "matrix" ].push_back( std::move( temp ) );
  }
}
}
inline void to_json( nlohmann::json &j, const VkTransformMatrixKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: TransformMatrixKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, TransformMatrixKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for TransformMatrixKHR" );
  if( !j[ "matrix" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for TransformMatrixKHR.matrix" );
  if( !j[ "matrix" ].size() > p.matrix.size() ) throw vulkan2json::invalid_array_value( "too many values in array for TransformMatrixKHR.matrix" );
  for( std::size_t i = 0u; i != j[ "matrix" ].size(); ++i ) {
    if( !j[ "matrix" ][ i ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for TransformMatrixKHR.matrix" );
    if( !j[ "matrix" ][ i ].size() > p.matrix[ i ].size() ) throw vulkan2json::invalid_array_value( "too many values in array for TransformMatrixKHR.matrix" );
    std::fill( p.matrix[ i ].begin(), p.matrix[ i ].end(), 0 );
    std::copy( j[ "matrix" ][ i ].begin(), j[ "matrix" ][ i ].end(), p.matrix[ i ].begin() );
  }
  for( std::size_t i = j[ "matrix" ].size(); i != p.matrix.size(); ++i ) {
    std::fill( p.matrix[ i ].begin(), p.matrix[ i ].end(), 0 );
  }
}
}
inline void from_json( const nlohmann::json &j, VkTransformMatrixKHR &p ) {
  VULKAN_HPP_NAMESPACE :: TransformMatrixKHR temp;
  from_json( j, temp );
  p = VkTransformMatrixKHR ( temp );
}


#endif
