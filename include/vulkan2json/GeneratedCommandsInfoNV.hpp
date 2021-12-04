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
#ifndef VULKAN2JSON_GENERATEDCOMMANDSINFONV_HPP
#define VULKAN2JSON_GENERATEDCOMMANDSINFONV_HPP

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
#include <vulkan2json/PipelineBindPoint.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const GeneratedCommandsInfoNV &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "pipelineBindPoint" ] = p.pipelineBindPoint;
  j[ "streamCount" ] = p.streamCount;
  j[ "pStreams" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pStreams ) );
  j[ "sequencesCount" ] = p.sequencesCount;
  j[ "preprocessOffset" ] = p.preprocessOffset;
  j[ "preprocessSize" ] = p.preprocessSize;
  j[ "sequencesCountOffset" ] = p.sequencesCountOffset;
  j[ "sequencesIndexOffset" ] = p.sequencesIndexOffset;
}
}
inline void to_json( nlohmann::json &j, const VkGeneratedCommandsInfoNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: GeneratedCommandsInfoNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, GeneratedCommandsInfoNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for GeneratedCommandsInfoNV" );
  p.pipelineBindPoint = PipelineBindPoint ( j[ "pipelineBindPoint" ] );
  p.streamCount = j[ "streamCount" ];
  p.sequencesCount = j[ "sequencesCount" ];
  p.preprocessOffset = j[ "preprocessOffset" ];
  p.preprocessSize = j[ "preprocessSize" ];
  p.sequencesCountOffset = j[ "sequencesCountOffset" ];
  p.sequencesIndexOffset = j[ "sequencesIndexOffset" ];
}
}
inline void from_json( const nlohmann::json &j, VkGeneratedCommandsInfoNV &p ) {
  VULKAN_HPP_NAMESPACE :: GeneratedCommandsInfoNV temp;
  from_json( j, temp );
  p = VkGeneratedCommandsInfoNV ( temp );
}


#endif
