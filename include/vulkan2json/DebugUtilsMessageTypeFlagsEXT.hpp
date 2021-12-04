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
#ifndef VULKAN2JSON_DEBUGUTILSMESSAGETYPEFLAGSEXT_HPP
#define VULKAN2JSON_DEBUGUTILSMESSAGETYPEFLAGSEXT_HPP

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
inline void to_json( nlohmann::json &j, const DebugUtilsMessageTypeFlagBitsEXT &p ) {
  if( DebugUtilsMessageTypeFlagBitsEXT :: eGeneral == p ) {
    j = "General";
    return;
  }
  if( DebugUtilsMessageTypeFlagBitsEXT :: eValidation == p ) {
    j = "Validation";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DebugUtilsMessageTypeFlagBitsEXT &p ) {
  if( j.is_string() ) {
    if( "General" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eGeneral ;
      return;
    }
    if( "eGeneral" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eGeneral ;
      return;
    }
    if( "VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eGeneral ;
      return;
    }
    if( "Validation" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eValidation ;
      return;
    }
    if( "eValidation" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eValidation ;
      return;
    }
    if( "VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT" == j.get< std::string >() ) {
      p = DebugUtilsMessageTypeFlagBitsEXT :: eValidation ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DebugUtilsMessageTypeFlagBitsEXT" );
  }
  if( j.is_number() ) {
    p = DebugUtilsMessageTypeFlagBitsEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DebugUtilsMessageTypeFlagBitsEXT" );
}
inline void to_json( nlohmann::json &j, const DebugUtilsMessageTypeFlagsEXT &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DebugUtilsMessageTypeFlagBitsEXT ) * 8u; ++n ) {
    if( p & DebugUtilsMessageTypeFlagsEXT ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DebugUtilsMessageTypeFlagBitsEXT ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DebugUtilsMessageTypeFlagsEXT &p ) {
  if( j.is_array() ) {
    p = DebugUtilsMessageTypeFlagsEXT ( 0 );
    for( auto &e:  j ) {
      DebugUtilsMessageTypeFlagBitsEXT temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DebugUtilsMessageTypeFlagsEXT" );
}
}
#endif


#endif
