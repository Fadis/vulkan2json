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
#ifndef VULKAN2JSON_PIPELINEEXECUTABLEINTERNALREPRESENTATIONKHR_HPP
#define VULKAN2JSON_PIPELINEEXECUTABLEINTERNALREPRESENTATIONKHR_HPP

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
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineExecutableInternalRepresentationKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "name" ] = std::string( p.name.begin(), std::find( p.name.begin(), p.name.end(), '\0' ) );
  j[ "description" ] = std::string( p.description.begin(), std::find( p.description.begin(), p.description.end(), '\0' ) );
  j[ "isText" ] = bool( p.isText );
  j[ "dataSize" ] = p.dataSize;
  j[ "pData" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pData ) );
}
}
inline void to_json( nlohmann::json &j, const VkPipelineExecutableInternalRepresentationKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineExecutableInternalRepresentationKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineExecutableInternalRepresentationKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PipelineExecutableInternalRepresentationKHR" );
  {
    std::string s = j[ "name" ];
    if( !p.name.empty() ) {
      p.name[ p.name.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.name.size() - 1u ) ), p.name.begin() );
    }
  }
  {
    std::string s = j[ "description" ];
    if( !p.description.empty() ) {
      p.description[ p.description.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.description.size() - 1u ) ), p.description.begin() );
    }
  }
  p.isText = j[ "isText" ];
  p.dataSize = j[ "dataSize" ];
}
}
inline void from_json( const nlohmann::json &j, VkPipelineExecutableInternalRepresentationKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineExecutableInternalRepresentationKHR temp;
  from_json( j, temp );
  p = VkPipelineExecutableInternalRepresentationKHR ( temp );
}


#endif
