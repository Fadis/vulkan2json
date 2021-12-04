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
#ifndef VULKAN2JSON_CONSERVATIVERASTERIZATIONMODEEXT_HPP
#define VULKAN2JSON_CONSERVATIVERASTERIZATIONMODEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ConservativeRasterizationModeEXT &p ) {
  if( ConservativeRasterizationModeEXT :: eDisabled == p ) {
    j = "Disabled";
    return;
  }
  if( ConservativeRasterizationModeEXT :: eOverestimate == p ) {
    j = "Overestimate";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkConservativeRasterizationModeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ConservativeRasterizationModeEXT &p ) {
  if( j.is_string() ) {
    if( "Disabled" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eDisabled ;
      return;
    }
    if( "eDisabled" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eDisabled ;
      return;
    }
    if( "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eDisabled ;
      return;
    }
    if( "Overestimate" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eOverestimate ;
      return;
    }
    if( "eOverestimate" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eOverestimate ;
      return;
    }
    if( "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT" == j.get< std::string >() ) {
      p = ConservativeRasterizationModeEXT :: eOverestimate ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ConservativeRasterizationModeEXT" );
  }
  if( j.is_number() ) {
    p = ConservativeRasterizationModeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ConservativeRasterizationModeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkConservativeRasterizationModeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: ConservativeRasterizationModeEXT temp;
  from_json( j, temp );
  p = VkConservativeRasterizationModeEXT ( temp );
}
#endif


#endif
