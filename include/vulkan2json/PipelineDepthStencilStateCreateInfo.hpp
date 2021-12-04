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
#ifndef VULKAN2JSON_PIPELINEDEPTHSTENCILSTATECREATEINFO_HPP
#define VULKAN2JSON_PIPELINEDEPTHSTENCILSTATECREATEINFO_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/PipelineDepthStencilStateCreateFlags.hpp>
#include <vulkan2json/CompareOp.hpp>
#include <vulkan2json/StencilOpState.hpp>
#include <vulkan2json/StencilOpState.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineDepthStencilStateCreateInfo &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "depthTestEnable" ] = bool( p.depthTestEnable );
  j[ "depthWriteEnable" ] = bool( p.depthWriteEnable );
  j[ "depthCompareOp" ] = p.depthCompareOp;
  j[ "depthBoundsTestEnable" ] = bool( p.depthBoundsTestEnable );
  j[ "stencilTestEnable" ] = bool( p.stencilTestEnable );
  j[ "front" ] = p.front;
  j[ "back" ] = p.back;
  j[ "minDepthBounds" ] = p.minDepthBounds;
  j[ "maxDepthBounds" ] = p.maxDepthBounds;
}
}
inline void to_json( nlohmann::json &j, const VkPipelineDepthStencilStateCreateInfo &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineDepthStencilStateCreateInfo ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineDepthStencilStateCreateInfo &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PipelineDepthStencilStateCreateInfo" );
  p.flags = PipelineDepthStencilStateCreateFlags ( j[ "flags" ] );
  p.depthTestEnable = j[ "depthTestEnable" ];
  p.depthWriteEnable = j[ "depthWriteEnable" ];
  p.depthCompareOp = CompareOp ( j[ "depthCompareOp" ] );
  p.depthBoundsTestEnable = j[ "depthBoundsTestEnable" ];
  p.stencilTestEnable = j[ "stencilTestEnable" ];
  p.front = StencilOpState ( j[ "front" ] );
  p.back = StencilOpState ( j[ "back" ] );
  p.minDepthBounds = j[ "minDepthBounds" ];
  p.maxDepthBounds = j[ "maxDepthBounds" ];
}
}
inline void from_json( const nlohmann::json &j, VkPipelineDepthStencilStateCreateInfo &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineDepthStencilStateCreateInfo temp;
  from_json( j, temp );
  p = VkPipelineDepthStencilStateCreateInfo ( temp );
}


#endif
