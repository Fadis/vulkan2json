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
#ifndef VULKAN2JSON_TOOLPURPOSEFLAGSEXT_HPP
#define VULKAN2JSON_TOOLPURPOSEFLAGSEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_TOOLING_INFO_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ToolPurposeFlagBitsEXT &p ) {
  if( ToolPurposeFlagBitsEXT :: eValidation == p ) {
    j = "Validation";
    return;
  }
  if( ToolPurposeFlagBitsEXT :: eProfiling == p ) {
    j = "Profiling";
    return;
  }
  if( ToolPurposeFlagBitsEXT :: eTracing == p ) {
    j = "Tracing";
    return;
  }
  if( ToolPurposeFlagBitsEXT :: eAdditionalFeatures == p ) {
    j = "AdditionalFeatures";
    return;
  }
  if( ToolPurposeFlagBitsEXT :: eModifyingFeatures == p ) {
    j = "ModifyingFeatures";
    return;
  }
  if( ToolPurposeFlagBitsEXT :: eDebugReporting == p ) {
    j = "DebugReporting";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ToolPurposeFlagBitsEXT &p ) {
  if( j.is_string() ) {
    if( "Validation" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eValidation ;
      return;
    }
    if( "eValidation" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eValidation ;
      return;
    }
    if( "VK_TOOL_PURPOSE_VALIDATION_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eValidation ;
      return;
    }
    if( "Profiling" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eProfiling ;
      return;
    }
    if( "eProfiling" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eProfiling ;
      return;
    }
    if( "VK_TOOL_PURPOSE_PROFILING_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eProfiling ;
      return;
    }
    if( "Tracing" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eTracing ;
      return;
    }
    if( "eTracing" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eTracing ;
      return;
    }
    if( "VK_TOOL_PURPOSE_TRACING_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eTracing ;
      return;
    }
    if( "AdditionalFeatures" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eAdditionalFeatures ;
      return;
    }
    if( "eAdditionalFeatures" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eAdditionalFeatures ;
      return;
    }
    if( "VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eAdditionalFeatures ;
      return;
    }
    if( "ModifyingFeatures" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eModifyingFeatures ;
      return;
    }
    if( "eModifyingFeatures" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eModifyingFeatures ;
      return;
    }
    if( "VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eModifyingFeatures ;
      return;
    }
    if( "DebugReporting" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eDebugReporting ;
      return;
    }
    if( "eDebugReporting" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eDebugReporting ;
      return;
    }
    if( "VK_TOOL_PURPOSE_DEBUG_REPORTING_BIT_EXT" == j.get< std::string >() ) {
      p = ToolPurposeFlagBitsEXT :: eDebugReporting ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ToolPurposeFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = ToolPurposeFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ToolPurposeFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const ToolPurposeFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ToolPurposeFlagBitsEXT ) * 8u; ++n ) {
    if( p & ToolPurposeFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ToolPurposeFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ToolPurposeFlagsEXT &p ) {
  if( j.is_array() ) {
    p = ToolPurposeFlagsEXT ( 0 );
    for( auto &e:  j ) {
      ToolPurposeFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ToolPurposeFlagsEXT" );
}
}
#endif


#endif
