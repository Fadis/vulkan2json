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
#ifndef VULKAN2JSON_SPARSEIMAGEFORMATPROPERTIES_HPP
#define VULKAN2JSON_SPARSEIMAGEFORMATPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/ImageAspectFlags.hpp>
#include <vulkan2json/Extent3D.hpp>
#include <vulkan2json/SparseImageFormatFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SparseImageFormatProperties &p ) {
  j = nlohmann::json::object();
  j[ "aspectMask" ] = p.aspectMask;
  j[ "imageGranularity" ] = p.imageGranularity;
  j[ "flags" ] = p.flags;
}
}
inline void to_json( nlohmann::json &j, const VkSparseImageFormatProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SparseImageFormatProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SparseImageFormatProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SparseImageFormatProperties" );
  p.aspectMask = ImageAspectFlags ( j[ "aspectMask" ] );
  p.imageGranularity = Extent3D ( j[ "imageGranularity" ] );
  p.flags = SparseImageFormatFlags ( j[ "flags" ] );
}
}
inline void from_json( const nlohmann::json &j, VkSparseImageFormatProperties &p ) {
  VULKAN_HPP_NAMESPACE :: SparseImageFormatProperties temp;
  from_json( j, temp );
  p = VkSparseImageFormatProperties ( temp );
}


#endif
