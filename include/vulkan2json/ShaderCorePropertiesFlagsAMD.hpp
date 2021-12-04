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
#ifndef VULKAN2JSON_SHADERCOREPROPERTIESFLAGSAMD_HPP
#define VULKAN2JSON_SHADERCOREPROPERTIESFLAGSAMD_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_AMD_SHADER_CORE_PROPERTIES_2_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ShaderCorePropertiesFlagBitsAMD &p ) {
}
inline void from_json( const nlohmann::json &j, ShaderCorePropertiesFlagBitsAMD &p ) {
  if( j.is_string() ) {
    throw vulkan2json::invalid_enum_value( "unknown enum name for ShaderCorePropertiesFlagBitsAMD" );
  }
  if( j.is_number() ) {
    p = ShaderCorePropertiesFlagBitsAMD ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ShaderCorePropertiesFlagBitsAMD" );
}
inline void to_json( nlohmann::json &j, const ShaderCorePropertiesFlagsAMD &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ShaderCorePropertiesFlagBitsAMD ) * 8u; ++n ) {
    if( p & ShaderCorePropertiesFlagsAMD ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ShaderCorePropertiesFlagBitsAMD ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ShaderCorePropertiesFlagsAMD &p ) {
  if( j.is_array() ) {
    p = ShaderCorePropertiesFlagsAMD ( 0 );
    for( auto &e:  j ) {
      ShaderCorePropertiesFlagBitsAMD temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ShaderCorePropertiesFlagsAMD" );
}
}
#endif


#endif
