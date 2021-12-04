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
#ifndef VULKAN2JSON_SHADERFLOATCONTROLSINDEPENDENCE_HPP
#define VULKAN2JSON_SHADERFLOATCONTROLSINDEPENDENCE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_2
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ShaderFloatControlsIndependence &p ) {
  if( ShaderFloatControlsIndependence :: e32BitOnly == p ) {
    j = "32BitOnly";
    return;
  }
  if( ShaderFloatControlsIndependence :: eAll == p ) {
    j = "All";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkShaderFloatControlsIndependence &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ShaderFloatControlsIndependence &p ) {
  if( j.is_string() ) {
    if( "32BitOnly" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: e32BitOnly ;
      return;
    }
    if( "e32BitOnly" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: e32BitOnly ;
      return;
    }
    if( "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: e32BitOnly ;
      return;
    }
    if( "All" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: eAll ;
      return;
    }
    if( "eAll" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: eAll ;
      return;
    }
    if( "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL" == j.get< std::string >() ) {
      p = ShaderFloatControlsIndependence :: eAll ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ShaderFloatControlsIndependence" );
  }
  if( j.is_number() ) {
    p = ShaderFloatControlsIndependence ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ShaderFloatControlsIndependence" );
}
}
inline void from_json( const nlohmann::json &j, VkShaderFloatControlsIndependence &p ) {
  VULKAN_HPP_NAMESPACE :: ShaderFloatControlsIndependence temp;
  from_json( j, temp );
  p = VkShaderFloatControlsIndependence ( temp );
}
#endif


#endif
