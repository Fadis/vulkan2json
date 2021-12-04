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
#ifndef VULKAN2JSON_SHADERRESOURCEUSAGEAMD_HPP
#define VULKAN2JSON_SHADERRESOURCEUSAGEAMD_HPP

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
inline void to_json( nlohmann::json &j, const ShaderResourceUsageAMD &p ) {
  j = nlohmann::json::object();
  j[ "numUsedVgprs" ] = p.numUsedVgprs;
  j[ "numUsedSgprs" ] = p.numUsedSgprs;
  j[ "ldsSizePerLocalWorkGroup" ] = p.ldsSizePerLocalWorkGroup;
  j[ "ldsUsageSizeInBytes" ] = p.ldsUsageSizeInBytes;
  j[ "scratchMemUsageInBytes" ] = p.scratchMemUsageInBytes;
}
}
inline void to_json( nlohmann::json &j, const VkShaderResourceUsageAMD &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ShaderResourceUsageAMD ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ShaderResourceUsageAMD &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ShaderResourceUsageAMD" );
  p.numUsedVgprs = j[ "numUsedVgprs" ];
  p.numUsedSgprs = j[ "numUsedSgprs" ];
  p.ldsSizePerLocalWorkGroup = j[ "ldsSizePerLocalWorkGroup" ];
  p.ldsUsageSizeInBytes = j[ "ldsUsageSizeInBytes" ];
  p.scratchMemUsageInBytes = j[ "scratchMemUsageInBytes" ];
}
}
inline void from_json( const nlohmann::json &j, VkShaderResourceUsageAMD &p ) {
  VULKAN_HPP_NAMESPACE :: ShaderResourceUsageAMD temp;
  from_json( j, temp );
  p = VkShaderResourceUsageAMD ( temp );
}


#endif
