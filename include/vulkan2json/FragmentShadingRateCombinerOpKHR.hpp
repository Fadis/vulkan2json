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
#ifndef VULKAN2JSON_FRAGMENTSHADINGRATECOMBINEROPKHR_HPP
#define VULKAN2JSON_FRAGMENTSHADINGRATECOMBINEROPKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const FragmentShadingRateCombinerOpKHR &p ) {
  if( FragmentShadingRateCombinerOpKHR :: eKeep == p ) {
    j = "Keep";
    return;
  }
  if( FragmentShadingRateCombinerOpKHR :: eReplace == p ) {
    j = "Replace";
    return;
  }
  if( FragmentShadingRateCombinerOpKHR :: eMin == p ) {
    j = "Min";
    return;
  }
  if( FragmentShadingRateCombinerOpKHR :: eMax == p ) {
    j = "Max";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkFragmentShadingRateCombinerOpKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, FragmentShadingRateCombinerOpKHR &p ) {
  if( j.is_string() ) {
    if( "Keep" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eKeep ;
      return;
    }
    if( "eKeep" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eKeep ;
      return;
    }
    if( "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eKeep ;
      return;
    }
    if( "Replace" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eReplace ;
      return;
    }
    if( "eReplace" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eReplace ;
      return;
    }
    if( "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eReplace ;
      return;
    }
    if( "Min" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMin ;
      return;
    }
    if( "eMin" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMin ;
      return;
    }
    if( "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMin ;
      return;
    }
    if( "Max" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMax ;
      return;
    }
    if( "eMax" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMax ;
      return;
    }
    if( "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR" == j.get< std::string >() ) {
      p = FragmentShadingRateCombinerOpKHR :: eMax ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for FragmentShadingRateCombinerOpKHR" );
  }
  if( j.is_number() ) {
    p = FragmentShadingRateCombinerOpKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for FragmentShadingRateCombinerOpKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkFragmentShadingRateCombinerOpKHR &p ) {
  VULKAN_HPP_NAMESPACE :: FragmentShadingRateCombinerOpKHR temp;
  from_json( j, temp );
  p = VkFragmentShadingRateCombinerOpKHR ( temp );
}
#endif


#endif
