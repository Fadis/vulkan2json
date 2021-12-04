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
#ifndef VULKAN2JSON_PERFORMANCEVALUETYPEINTEL_HPP
#define VULKAN2JSON_PERFORMANCEVALUETYPEINTEL_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PerformanceValueTypeINTEL &p ) {
  if( PerformanceValueTypeINTEL :: eUint32 == p ) {
    j = "Uint32";
    return;
  }
  if( PerformanceValueTypeINTEL :: eUint64 == p ) {
    j = "Uint64";
    return;
  }
  if( PerformanceValueTypeINTEL :: eFloat == p ) {
    j = "Float";
    return;
  }
  if( PerformanceValueTypeINTEL :: eBool == p ) {
    j = "Bool";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPerformanceValueTypeINTEL &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PerformanceValueTypeINTEL &p ) {
  if( j.is_string() ) {
    if( "Uint32" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint32 ;
      return;
    }
    if( "eUint32" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint32 ;
      return;
    }
    if( "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint32 ;
      return;
    }
    if( "Uint64" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint64 ;
      return;
    }
    if( "eUint64" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint64 ;
      return;
    }
    if( "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eUint64 ;
      return;
    }
    if( "Float" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eFloat ;
      return;
    }
    if( "eFloat" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eFloat ;
      return;
    }
    if( "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eFloat ;
      return;
    }
    if( "Bool" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eBool ;
      return;
    }
    if( "eBool" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eBool ;
      return;
    }
    if( "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL" == j.get< std::string >() ) {
      p = PerformanceValueTypeINTEL :: eBool ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PerformanceValueTypeINTEL" );
  }
  if( j.is_number() ) {
    p = PerformanceValueTypeINTEL ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PerformanceValueTypeINTEL" );
}
}
inline void from_json( const nlohmann::json &j, VkPerformanceValueTypeINTEL &p ) {
  VULKAN_HPP_NAMESPACE :: PerformanceValueTypeINTEL temp;
  from_json( j, temp );
  p = VkPerformanceValueTypeINTEL ( temp );
}
#endif


#endif
