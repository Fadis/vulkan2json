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
#ifndef VULKAN2JSON_DISPLAYPLANEALPHAFLAGSKHR_HPP
#define VULKAN2JSON_DISPLAYPLANEALPHAFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_DISPLAY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DisplayPlaneAlphaFlagBitsKHR &p ) {
  if( DisplayPlaneAlphaFlagBitsKHR :: eOpaque == p ) {
    j = "Opaque";
    return;
  }
  if( DisplayPlaneAlphaFlagBitsKHR :: eGlobal == p ) {
    j = "Global";
    return;
  }
  if( DisplayPlaneAlphaFlagBitsKHR :: ePerPixel == p ) {
    j = "PerPixel";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DisplayPlaneAlphaFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "Opaque" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "eOpaque" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "Global" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eGlobal ;
      return;
    }
    if( "eGlobal" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eGlobal ;
      return;
    }
    if( "VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: eGlobal ;
      return;
    }
    if( "PerPixel" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: ePerPixel ;
      return;
    }
    if( "ePerPixel" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: ePerPixel ;
      return;
    }
    if( "VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR" == j.get< std::string >() ) {
      p = DisplayPlaneAlphaFlagBitsKHR :: ePerPixel ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DisplayPlaneAlphaFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = DisplayPlaneAlphaFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DisplayPlaneAlphaFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const DisplayPlaneAlphaFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DisplayPlaneAlphaFlagBitsKHR ) * 8u; ++n ) {
    if( p & DisplayPlaneAlphaFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DisplayPlaneAlphaFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DisplayPlaneAlphaFlagsKHR &p ) {
  if( j.is_array() ) {
    p = DisplayPlaneAlphaFlagsKHR ( 0 );
    for( auto &e:  j ) {
      DisplayPlaneAlphaFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DisplayPlaneAlphaFlagsKHR" );
}
}
#endif


#endif
