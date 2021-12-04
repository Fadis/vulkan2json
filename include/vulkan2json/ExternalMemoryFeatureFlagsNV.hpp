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
#ifndef VULKAN2JSON_EXTERNALMEMORYFEATUREFLAGSNV_HPP
#define VULKAN2JSON_EXTERNALMEMORYFEATUREFLAGSNV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ExternalMemoryFeatureFlagBitsNV &p ) {
  if( ExternalMemoryFeatureFlagBitsNV :: eDedicatedOnly == p ) {
    j = "DedicatedOnly";
    return;
  }
  if( ExternalMemoryFeatureFlagBitsNV :: eExportable == p ) {
    j = "Exportable";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ExternalMemoryFeatureFlagBitsNV &p ) {
  if( j.is_string() ) {
    if( "DedicatedOnly" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eDedicatedOnly ;
      return;
    }
    if( "eDedicatedOnly" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eDedicatedOnly ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eDedicatedOnly ;
      return;
    }
    if( "Exportable" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eExportable ;
      return;
    }
    if( "eExportable" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eExportable ;
      return;
    }
    if( "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV" == j.get< std::string >() ) {
      p = ExternalMemoryFeatureFlagBitsNV :: eExportable ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ExternalMemoryFeatureFlagBitsNV" );
  }
  if( j.is_number() ) {
    p = ExternalMemoryFeatureFlagBitsNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ExternalMemoryFeatureFlagBitsNV" );
}
inline void to_json( nlohmann::json &j, const ExternalMemoryFeatureFlagsNV &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ExternalMemoryFeatureFlagBitsNV ) * 8u; ++n ) {
    if( p & ExternalMemoryFeatureFlagsNV ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ExternalMemoryFeatureFlagBitsNV ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ExternalMemoryFeatureFlagsNV &p ) {
  if( j.is_array() ) {
    p = ExternalMemoryFeatureFlagsNV ( 0 );
    for( auto &e:  j ) {
      ExternalMemoryFeatureFlagBitsNV temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ExternalMemoryFeatureFlagsNV" );
}
}
#endif


#endif
