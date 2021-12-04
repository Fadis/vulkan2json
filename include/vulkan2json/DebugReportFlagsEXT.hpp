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
#ifndef VULKAN2JSON_DEBUGREPORTFLAGSEXT_HPP
#define VULKAN2JSON_DEBUGREPORTFLAGSEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_DEBUG_REPORT_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DebugReportFlagBitsEXT &p ) {
  if( DebugReportFlagBitsEXT :: eInformation == p ) {
    j = "Information";
    return;
  }
  if( DebugReportFlagBitsEXT :: eWarning == p ) {
    j = "Warning";
    return;
  }
  if( DebugReportFlagBitsEXT :: ePerformanceWarning == p ) {
    j = "PerformanceWarning";
    return;
  }
  if( DebugReportFlagBitsEXT :: eError == p ) {
    j = "Error";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DebugReportFlagBitsEXT &p ) {
  if( j.is_string() ) {
    if( "Information" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eInformation ;
      return;
    }
    if( "eInformation" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eInformation ;
      return;
    }
    if( "VK_DEBUG_REPORT_INFORMATION_BIT_EXT" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eInformation ;
      return;
    }
    if( "Warning" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eWarning ;
      return;
    }
    if( "eWarning" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eWarning ;
      return;
    }
    if( "VK_DEBUG_REPORT_WARNING_BIT_EXT" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eWarning ;
      return;
    }
    if( "PerformanceWarning" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: ePerformanceWarning ;
      return;
    }
    if( "ePerformanceWarning" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: ePerformanceWarning ;
      return;
    }
    if( "VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: ePerformanceWarning ;
      return;
    }
    if( "Error" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eError ;
      return;
    }
    if( "eError" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eError ;
      return;
    }
    if( "VK_DEBUG_REPORT_ERROR_BIT_EXT" == j.get< std::string >() ) {
      p = DebugReportFlagBitsEXT :: eError ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DebugReportFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = DebugReportFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DebugReportFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const DebugReportFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DebugReportFlagBitsEXT ) * 8u; ++n ) {
    if( p & DebugReportFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DebugReportFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DebugReportFlagsEXT &p ) {
  if( j.is_array() ) {
    p = DebugReportFlagsEXT ( 0 );
    for( auto &e:  j ) {
      DebugReportFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DebugReportFlagsEXT" );
}
}
#endif


#endif
