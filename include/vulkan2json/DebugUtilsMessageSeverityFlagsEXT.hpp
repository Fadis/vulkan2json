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
#ifndef VULKAN2JSON_DEBUGUTILSMESSAGESEVERITYFLAGSEXT_HPP
#define VULKAN2JSON_DEBUGUTILSMESSAGESEVERITYFLAGSEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_DEBUG_UTILS_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DebugUtilsMessageSeverityFlagBitsEXT &p ) {
  if( DebugUtilsMessageSeverityFlagBitsEXT :: eVerbose == p ) {
    j = "Verbose";
    return;
  }
  if( DebugUtilsMessageSeverityFlagBitsEXT :: eInfo == p ) {
    j = "Info";
    return;
  }
  if( DebugUtilsMessageSeverityFlagBitsEXT :: eWarning == p ) {
    j = "Warning";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DebugUtilsMessageSeverityFlagBitsEXT &p ) {
  if( j.is_string() ) {
    if( "Verbose" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eVerbose ;
      return;
    }
    if( "eVerbose" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eVerbose ;
      return;
    }
    if( "VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eVerbose ;
      return;
    }
    if( "Info" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eInfo ;
      return;
    }
    if( "eInfo" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eInfo ;
      return;
    }
    if( "VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eInfo ;
      return;
    }
    if( "Warning" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eWarning ;
      return;
    }
    if( "eWarning" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eWarning ;
      return;
    }
    if( "VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT" == j.get< std::string >() ) {
      p = DebugUtilsMessageSeverityFlagBitsEXT :: eWarning ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DebugUtilsMessageSeverityFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = DebugUtilsMessageSeverityFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DebugUtilsMessageSeverityFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const DebugUtilsMessageSeverityFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DebugUtilsMessageSeverityFlagBitsEXT ) * 8u; ++n ) {
    if( p & DebugUtilsMessageSeverityFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DebugUtilsMessageSeverityFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DebugUtilsMessageSeverityFlagsEXT &p ) {
  if( j.is_array() ) {
    p = DebugUtilsMessageSeverityFlagsEXT ( 0 );
    for( auto &e:  j ) {
      DebugUtilsMessageSeverityFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DebugUtilsMessageSeverityFlagsEXT" );
}
}
#endif


#endif
