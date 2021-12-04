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
#ifndef VULKAN2JSON_COMPOSITEALPHAFLAGSKHR_HPP
#define VULKAN2JSON_COMPOSITEALPHAFLAGSKHR_HPP

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
inline void to_json( nlohmann::json &j, const CompositeAlphaFlagBitsKHR &p ) {
  if( CompositeAlphaFlagBitsKHR :: eOpaque == p ) {
    j = "Opaque";
    return;
  }
  if( CompositeAlphaFlagBitsKHR :: ePreMultiplied == p ) {
    j = "PreMultiplied";
    return;
  }
  if( CompositeAlphaFlagBitsKHR :: ePostMultiplied == p ) {
    j = "PostMultiplied";
    return;
  }
}
inline void from_json( const nlohmann::json &j, CompositeAlphaFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "Opaque" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "eOpaque" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: eOpaque ;
      return;
    }
    if( "PreMultiplied" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePreMultiplied ;
      return;
    }
    if( "ePreMultiplied" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePreMultiplied ;
      return;
    }
    if( "VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePreMultiplied ;
      return;
    }
    if( "PostMultiplied" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePostMultiplied ;
      return;
    }
    if( "ePostMultiplied" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePostMultiplied ;
      return;
    }
    if( "VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR" == j.get< std::string >() ) {
      p = CompositeAlphaFlagBitsKHR :: ePostMultiplied ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CompositeAlphaFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = CompositeAlphaFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CompositeAlphaFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const CompositeAlphaFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( CompositeAlphaFlagBitsKHR ) * 8u; ++n ) {
    if( p & CompositeAlphaFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, CompositeAlphaFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, CompositeAlphaFlagsKHR &p ) {
  if( j.is_array() ) {
    p = CompositeAlphaFlagsKHR ( 0 );
    for( auto &e:  j ) {
      CompositeAlphaFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for CompositeAlphaFlagsKHR" );
}
}
#endif


#endif
