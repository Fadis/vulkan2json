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
#ifndef VULKAN2JSON_SPARSEIMAGEMEMORYREQUIREMENTS_HPP
#define VULKAN2JSON_SPARSEIMAGEMEMORYREQUIREMENTS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/SparseImageFormatProperties.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SparseImageMemoryRequirements &p ) {
  j = nlohmann::json::object();
  j[ "formatProperties" ] = p.formatProperties;
  j[ "imageMipTailFirstLod" ] = p.imageMipTailFirstLod;
  j[ "imageMipTailSize" ] = p.imageMipTailSize;
  j[ "imageMipTailOffset" ] = p.imageMipTailOffset;
  j[ "imageMipTailStride" ] = p.imageMipTailStride;
}
}
inline void to_json( nlohmann::json &j, const VkSparseImageMemoryRequirements &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SparseImageMemoryRequirements ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SparseImageMemoryRequirements &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SparseImageMemoryRequirements" );
  p.formatProperties = SparseImageFormatProperties ( j[ "formatProperties" ] );
  p.imageMipTailFirstLod = j[ "imageMipTailFirstLod" ];
  p.imageMipTailSize = j[ "imageMipTailSize" ];
  p.imageMipTailOffset = j[ "imageMipTailOffset" ];
  p.imageMipTailStride = j[ "imageMipTailStride" ];
}
}
inline void from_json( const nlohmann::json &j, VkSparseImageMemoryRequirements &p ) {
  VULKAN_HPP_NAMESPACE :: SparseImageMemoryRequirements temp;
  from_json( j, temp );
  p = VkSparseImageMemoryRequirements ( temp );
}


#endif
