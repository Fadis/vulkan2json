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
#ifndef VULKAN2JSON_SHADERGROUPSHADERKHR_HPP
#define VULKAN2JSON_SHADERGROUPSHADERKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_RAY_TRACING_PIPELINE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ShaderGroupShaderKHR &p ) {
  if( ShaderGroupShaderKHR :: eGeneral == p ) {
    j = "General";
    return;
  }
  if( ShaderGroupShaderKHR :: eClosestHit == p ) {
    j = "ClosestHit";
    return;
  }
  if( ShaderGroupShaderKHR :: eAnyHit == p ) {
    j = "AnyHit";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkShaderGroupShaderKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ShaderGroupShaderKHR &p ) {
  if( j.is_string() ) {
    if( "General" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eGeneral ;
      return;
    }
    if( "eGeneral" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eGeneral ;
      return;
    }
    if( "VK_SHADER_GROUP_SHADER_GENERAL_KHR" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eGeneral ;
      return;
    }
    if( "ClosestHit" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eClosestHit ;
      return;
    }
    if( "eClosestHit" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eClosestHit ;
      return;
    }
    if( "VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eClosestHit ;
      return;
    }
    if( "AnyHit" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eAnyHit ;
      return;
    }
    if( "eAnyHit" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eAnyHit ;
      return;
    }
    if( "VK_SHADER_GROUP_SHADER_ANY_HIT_KHR" == j.get< std::string >() ) {
      p = ShaderGroupShaderKHR :: eAnyHit ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ShaderGroupShaderKHR" );
  }
  if( j.is_number() ) {
    p = ShaderGroupShaderKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ShaderGroupShaderKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkShaderGroupShaderKHR &p ) {
  VULKAN_HPP_NAMESPACE :: ShaderGroupShaderKHR temp;
  from_json( j, temp );
  p = VkShaderGroupShaderKHR ( temp );
}
#endif


#endif
