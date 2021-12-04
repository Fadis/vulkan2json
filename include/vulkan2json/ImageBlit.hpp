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
#ifndef VULKAN2JSON_IMAGEBLIT_HPP
#define VULKAN2JSON_IMAGEBLIT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/ImageSubresourceLayers.hpp>
#include <vulkan2json/Offset3D.hpp>
#include <vulkan2json/ImageSubresourceLayers.hpp>
#include <vulkan2json/Offset3D.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ImageBlit &p ) {
  j = nlohmann::json::object();
  j[ "srcSubresource" ] = p.srcSubresource;
  j[ "srcOffsets" ] = nlohmann::json::array();
  std::copy( p.srcOffsets.begin(), p.srcOffsets.end(), std::back_inserter( j[ "srcOffsets" ] ) );
  j[ "dstSubresource" ] = p.dstSubresource;
  j[ "dstOffsets" ] = nlohmann::json::array();
  std::copy( p.dstOffsets.begin(), p.dstOffsets.end(), std::back_inserter( j[ "dstOffsets" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkImageBlit &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageBlit ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageBlit &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ImageBlit" );
  p.srcSubresource = ImageSubresourceLayers ( j[ "srcSubresource" ] );
  if( !j[ "srcOffsets" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for ImageBlit.srcOffsets" );
  if( !j[ "srcOffsets" ].size() > p.srcOffsets.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for ImageBlit.srcOffsets" );
  std::fill( p.srcOffsets.begin(), p.srcOffsets.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.srcOffsets.begin() ) > >() );
  std::copy( j[ "srcOffsets" ].begin(), j[ "srcOffsets" ].end(), p.srcOffsets.begin() );
  p.dstSubresource = ImageSubresourceLayers ( j[ "dstSubresource" ] );
  if( !j[ "dstOffsets" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for ImageBlit.dstOffsets" );
  if( !j[ "dstOffsets" ].size() > p.dstOffsets.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for ImageBlit.dstOffsets" );
  std::fill( p.dstOffsets.begin(), p.dstOffsets.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.dstOffsets.begin() ) > >() );
  std::copy( j[ "dstOffsets" ].begin(), j[ "dstOffsets" ].end(), p.dstOffsets.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkImageBlit &p ) {
  VULKAN_HPP_NAMESPACE :: ImageBlit temp;
  from_json( j, temp );
  p = VkImageBlit ( temp );
}


#endif
