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
#ifndef VULKAN2JSON_LINERASTERIZATIONMODEEXT_HPP
#define VULKAN2JSON_LINERASTERIZATIONMODEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const LineRasterizationModeEXT &p ) {
  if( LineRasterizationModeEXT :: eDefault == p ) {
    j = "Default";
    return;
  }
  if( LineRasterizationModeEXT :: eRectangular == p ) {
    j = "Rectangular";
    return;
  }
  if( LineRasterizationModeEXT :: eBresenham == p ) {
    j = "Bresenham";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkLineRasterizationModeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, LineRasterizationModeEXT &p ) {
  if( j.is_string() ) {
    if( "Default" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eDefault ;
      return;
    }
    if( "eDefault" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eDefault ;
      return;
    }
    if( "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eDefault ;
      return;
    }
    if( "Rectangular" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eRectangular ;
      return;
    }
    if( "eRectangular" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eRectangular ;
      return;
    }
    if( "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eRectangular ;
      return;
    }
    if( "Bresenham" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eBresenham ;
      return;
    }
    if( "eBresenham" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eBresenham ;
      return;
    }
    if( "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT" == j.get< std::string >() ) {
      p = LineRasterizationModeEXT :: eBresenham ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for LineRasterizationModeEXT" );
  }
  if( j.is_number() ) {
    p = LineRasterizationModeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for LineRasterizationModeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkLineRasterizationModeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: LineRasterizationModeEXT temp;
  from_json( j, temp );
  p = VkLineRasterizationModeEXT ( temp );
}
#endif


#endif
