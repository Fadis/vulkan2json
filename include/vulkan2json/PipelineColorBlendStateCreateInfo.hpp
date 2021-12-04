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
#ifndef VULKAN2JSON_PIPELINECOLORBLENDSTATECREATEINFO_HPP
#define VULKAN2JSON_PIPELINECOLORBLENDSTATECREATEINFO_HPP

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
#include <vulkan2json/PipelineColorBlendStateCreateFlags.hpp>
#include <vulkan2json/LogicOp.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineColorBlendStateCreateInfo &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "logicOpEnable" ] = bool( p.logicOpEnable );
  j[ "logicOp" ] = p.logicOp;
  j[ "attachmentCount" ] = p.attachmentCount;
  j[ "pAttachments" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pAttachments ) );
  j[ "blendConstants" ] = nlohmann::json::array();
  std::copy( p.blendConstants.begin(), p.blendConstants.end(), std::back_inserter( j[ "blendConstants" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkPipelineColorBlendStateCreateInfo &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineColorBlendStateCreateInfo ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineColorBlendStateCreateInfo &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PipelineColorBlendStateCreateInfo" );
  p.flags = PipelineColorBlendStateCreateFlags ( j[ "flags" ] );
  p.logicOpEnable = j[ "logicOpEnable" ];
  p.logicOp = LogicOp ( j[ "logicOp" ] );
  p.attachmentCount = j[ "attachmentCount" ];
  if( !j[ "blendConstants" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PipelineColorBlendStateCreateInfo.blendConstants" );
  if( !j[ "blendConstants" ].size() > p.blendConstants.size() ) throw vulkan2json::invalid_array_value( "too many values in array for PipelineColorBlendStateCreateInfo.blendConstants" );
  std::fill( p.blendConstants.begin(), p.blendConstants.end(), 0 );
  std::copy( j[ "blendConstants" ].begin(), j[ "blendConstants" ].end(), p.blendConstants.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkPipelineColorBlendStateCreateInfo &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineColorBlendStateCreateInfo temp;
  from_json( j, temp );
  p = VkPipelineColorBlendStateCreateInfo ( temp );
}


#endif
