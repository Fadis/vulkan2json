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
#ifndef VULKAN2JSON_PERFORMANCEPARAMETERTYPEINTEL_HPP
#define VULKAN2JSON_PERFORMANCEPARAMETERTYPEINTEL_HPP

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
inline void to_json( nlohmann::json &j, const PerformanceParameterTypeINTEL &p ) {
  if( PerformanceParameterTypeINTEL :: eHwCountersSupported == p ) {
    j = "HwCountersSupported";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPerformanceParameterTypeINTEL &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PerformanceParameterTypeINTEL ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PerformanceParameterTypeINTEL &p ) {
  if( j.is_string() ) {
    if( "HwCountersSupported" == j.get< std::string >() ) {
      p = PerformanceParameterTypeINTEL :: eHwCountersSupported ;
      return;
    }
    if( "eHwCountersSupported" == j.get< std::string >() ) {
      p = PerformanceParameterTypeINTEL :: eHwCountersSupported ;
      return;
    }
    if( "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL" == j.get< std::string >() ) {
      p = PerformanceParameterTypeINTEL :: eHwCountersSupported ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PerformanceParameterTypeINTEL" );
  }
  if( j.is_number() ) {
    p = PerformanceParameterTypeINTEL ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PerformanceParameterTypeINTEL" );
}
}
inline void from_json( const nlohmann::json &j, VkPerformanceParameterTypeINTEL &p ) {
  VULKAN_HPP_NAMESPACE :: PerformanceParameterTypeINTEL temp;
  from_json( j, temp );
  p = VkPerformanceParameterTypeINTEL ( temp );
}
#endif


#endif
