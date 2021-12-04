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
#ifndef VULKAN2JSON_STENCILFACEFLAGS_HPP
#define VULKAN2JSON_STENCILFACEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const StencilFaceFlagBits &p ) {
  if( StencilFaceFlagBits :: eFront == p ) {
    j = "Front";
    return;
  }
  if( StencilFaceFlagBits :: eBack == p ) {
    j = "Back";
    return;
  }
  if( StencilFaceFlagBits :: eFrontAndBack == p ) {
    j = "FrontAndBack";
    return;
  }
}
inline void from_json( const nlohmann::json &j, StencilFaceFlagBits &p ) {
  if( j.is_string() ) {
    if( "Front" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFront ;
      return;
    }
    if( "eFront" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFront ;
      return;
    }
    if( "VK_STENCIL_FACE_FRONT_BIT" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFront ;
      return;
    }
    if( "Back" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eBack ;
      return;
    }
    if( "eBack" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eBack ;
      return;
    }
    if( "VK_STENCIL_FACE_BACK_BIT" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eBack ;
      return;
    }
    if( "FrontAndBack" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFrontAndBack ;
      return;
    }
    if( "eFrontAndBack" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFrontAndBack ;
      return;
    }
    if( "VK_STENCIL_FACE_FRONT_AND_BACK" == j.get< std::string >() ) {
      p = StencilFaceFlagBits :: eFrontAndBack ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for StencilFaceFlagBits" );
  }
  if( j.is_number() ) {
    p = StencilFaceFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for StencilFaceFlagBits" );
}
inline void to_json( nlohmann::json &j, const StencilFaceFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( StencilFaceFlagBits ) * 8u; ++n ) {
    if( p & StencilFaceFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, StencilFaceFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, StencilFaceFlags &p ) {
  if( j.is_array() ) {
    p = StencilFaceFlags ( 0 );
    for( auto &e:  j ) {
      StencilFaceFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for StencilFaceFlags" );
}
}
#endif


#endif
