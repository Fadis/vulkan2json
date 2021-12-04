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
#ifndef VULKAN2JSON_BORDERCOLOR_HPP
#define VULKAN2JSON_BORDERCOLOR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const BorderColor &p ) {
  if( BorderColor :: eFloatTransparentBlack == p ) {
    j = "FloatTransparentBlack";
    return;
  }
  if( BorderColor :: eIntTransparentBlack == p ) {
    j = "IntTransparentBlack";
    return;
  }
  if( BorderColor :: eFloatOpaqueBlack == p ) {
    j = "FloatOpaqueBlack";
    return;
  }
  if( BorderColor :: eIntOpaqueBlack == p ) {
    j = "IntOpaqueBlack";
    return;
  }
  if( BorderColor :: eFloatOpaqueWhite == p ) {
    j = "FloatOpaqueWhite";
    return;
  }
  if( BorderColor :: eIntOpaqueWhite == p ) {
    j = "IntOpaqueWhite";
    return;
  }
  if( BorderColor :: eFloatCustomEXT == p ) {
    j = "FloatCustomEXT";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkBorderColor &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: BorderColor ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, BorderColor &p ) {
  if( j.is_string() ) {
    if( "FloatTransparentBlack" == j.get< std::string >() ) {
      p = BorderColor :: eFloatTransparentBlack ;
      return;
    }
    if( "eFloatTransparentBlack" == j.get< std::string >() ) {
      p = BorderColor :: eFloatTransparentBlack ;
      return;
    }
    if( "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK" == j.get< std::string >() ) {
      p = BorderColor :: eFloatTransparentBlack ;
      return;
    }
    if( "IntTransparentBlack" == j.get< std::string >() ) {
      p = BorderColor :: eIntTransparentBlack ;
      return;
    }
    if( "eIntTransparentBlack" == j.get< std::string >() ) {
      p = BorderColor :: eIntTransparentBlack ;
      return;
    }
    if( "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK" == j.get< std::string >() ) {
      p = BorderColor :: eIntTransparentBlack ;
      return;
    }
    if( "FloatOpaqueBlack" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueBlack ;
      return;
    }
    if( "eFloatOpaqueBlack" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueBlack ;
      return;
    }
    if( "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueBlack ;
      return;
    }
    if( "IntOpaqueBlack" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueBlack ;
      return;
    }
    if( "eIntOpaqueBlack" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueBlack ;
      return;
    }
    if( "VK_BORDER_COLOR_INT_OPAQUE_BLACK" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueBlack ;
      return;
    }
    if( "FloatOpaqueWhite" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueWhite ;
      return;
    }
    if( "eFloatOpaqueWhite" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueWhite ;
      return;
    }
    if( "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE" == j.get< std::string >() ) {
      p = BorderColor :: eFloatOpaqueWhite ;
      return;
    }
    if( "IntOpaqueWhite" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueWhite ;
      return;
    }
    if( "eIntOpaqueWhite" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueWhite ;
      return;
    }
    if( "VK_BORDER_COLOR_INT_OPAQUE_WHITE" == j.get< std::string >() ) {
      p = BorderColor :: eIntOpaqueWhite ;
      return;
    }
    if( "FloatCustomEXT" == j.get< std::string >() ) {
      p = BorderColor :: eFloatCustomEXT ;
      return;
    }
    if( "eFloatCustomEXT" == j.get< std::string >() ) {
      p = BorderColor :: eFloatCustomEXT ;
      return;
    }
    if( "VK_BORDER_COLOR_FLOAT_CUSTOM_EXT" == j.get< std::string >() ) {
      p = BorderColor :: eFloatCustomEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BorderColor" );
  }
  if( j.is_number() ) {
    p = BorderColor ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BorderColor" );
}
}
inline void from_json( const nlohmann::json &j, VkBorderColor &p ) {
  VULKAN_HPP_NAMESPACE :: BorderColor temp;
  from_json( j, temp );
  p = VkBorderColor ( temp );
}
#endif


#endif
