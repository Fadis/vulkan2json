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
#ifndef VULKAN2JSON_SURFACETRANSFORMFLAGSKHR_HPP
#define VULKAN2JSON_SURFACETRANSFORMFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SURFACE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SurfaceTransformFlagBitsKHR &p ) {
  if( SurfaceTransformFlagBitsKHR :: eIdentity == p ) {
    j = "Identity";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eRotate90 == p ) {
    j = "Rotate90";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eRotate180 == p ) {
    j = "Rotate180";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eRotate270 == p ) {
    j = "Rotate270";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eHorizontalMirror == p ) {
    j = "HorizontalMirror";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate90 == p ) {
    j = "HorizontalMirrorRotate90";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate180 == p ) {
    j = "HorizontalMirrorRotate180";
    return;
  }
  if( SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate270 == p ) {
    j = "HorizontalMirrorRotate270";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SurfaceTransformFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "Identity" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eIdentity ;
      return;
    }
    if( "eIdentity" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eIdentity ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eIdentity ;
      return;
    }
    if( "Rotate90" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate90 ;
      return;
    }
    if( "eRotate90" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate90 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate90 ;
      return;
    }
    if( "Rotate180" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate180 ;
      return;
    }
    if( "eRotate180" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate180 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate180 ;
      return;
    }
    if( "Rotate270" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate270 ;
      return;
    }
    if( "eRotate270" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate270 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eRotate270 ;
      return;
    }
    if( "HorizontalMirror" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirror ;
      return;
    }
    if( "eHorizontalMirror" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirror ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirror ;
      return;
    }
    if( "HorizontalMirrorRotate90" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate90 ;
      return;
    }
    if( "eHorizontalMirrorRotate90" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate90 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate90 ;
      return;
    }
    if( "HorizontalMirrorRotate180" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate180 ;
      return;
    }
    if( "eHorizontalMirrorRotate180" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate180 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate180 ;
      return;
    }
    if( "HorizontalMirrorRotate270" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate270 ;
      return;
    }
    if( "eHorizontalMirrorRotate270" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate270 ;
      return;
    }
    if( "VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR" == j.get< std::string >() ) {
      p = SurfaceTransformFlagBitsKHR :: eHorizontalMirrorRotate270 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SurfaceTransformFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = SurfaceTransformFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SurfaceTransformFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const SurfaceTransformFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SurfaceTransformFlagBitsKHR ) * 8u; ++n ) {
    if( p & SurfaceTransformFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SurfaceTransformFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SurfaceTransformFlagsKHR &p ) {
  if( j.is_array() ) {
    p = SurfaceTransformFlagsKHR ( 0 );
    for( auto &e:  j ) {
      SurfaceTransformFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SurfaceTransformFlagsKHR" );
}
}
#endif


#endif
