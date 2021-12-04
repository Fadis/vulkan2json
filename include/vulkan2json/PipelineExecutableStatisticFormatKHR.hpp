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
#ifndef VULKAN2JSON_PIPELINEEXECUTABLESTATISTICFORMATKHR_HPP
#define VULKAN2JSON_PIPELINEEXECUTABLESTATISTICFORMATKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineExecutableStatisticFormatKHR &p ) {
  if( PipelineExecutableStatisticFormatKHR :: eBool32 == p ) {
    j = "Bool32";
    return;
  }
  if( PipelineExecutableStatisticFormatKHR :: eInt64 == p ) {
    j = "Int64";
    return;
  }
  if( PipelineExecutableStatisticFormatKHR :: eUint64 == p ) {
    j = "Uint64";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPipelineExecutableStatisticFormatKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineExecutableStatisticFormatKHR &p ) {
  if( j.is_string() ) {
    if( "Bool32" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eBool32 ;
      return;
    }
    if( "eBool32" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eBool32 ;
      return;
    }
    if( "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eBool32 ;
      return;
    }
    if( "Int64" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eInt64 ;
      return;
    }
    if( "eInt64" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eInt64 ;
      return;
    }
    if( "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eInt64 ;
      return;
    }
    if( "Uint64" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eUint64 ;
      return;
    }
    if( "eUint64" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eUint64 ;
      return;
    }
    if( "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR" == j.get< std::string >() ) {
      p = PipelineExecutableStatisticFormatKHR :: eUint64 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PipelineExecutableStatisticFormatKHR" );
  }
  if( j.is_number() ) {
    p = PipelineExecutableStatisticFormatKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PipelineExecutableStatisticFormatKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkPipelineExecutableStatisticFormatKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineExecutableStatisticFormatKHR temp;
  from_json( j, temp );
  p = VkPipelineExecutableStatisticFormatKHR ( temp );
}
#endif


#endif
