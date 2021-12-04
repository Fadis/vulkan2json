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
#ifndef VULKAN2JSON_IMAGEVIEWCREATEFLAGS_HPP
#define VULKAN2JSON_IMAGEVIEWCREATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ImageViewCreateFlagBits &p ) {
  if( ImageViewCreateFlagBits :: eFragmentDensityMapDynamicEXT == p ) {
    j = "FragmentDensityMapDynamicEXT";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ImageViewCreateFlagBits &p ) {
  if( j.is_string() ) {
    if( "FragmentDensityMapDynamicEXT" == j.get< std::string >() ) {
      p = ImageViewCreateFlagBits :: eFragmentDensityMapDynamicEXT ;
      return;
    }
    if( "eFragmentDensityMapDynamicEXT" == j.get< std::string >() ) {
      p = ImageViewCreateFlagBits :: eFragmentDensityMapDynamicEXT ;
      return;
    }
    if( "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT" == j.get< std::string >() ) {
      p = ImageViewCreateFlagBits :: eFragmentDensityMapDynamicEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageViewCreateFlagBits" );
  }
  if( j.is_number() ) {
    p = ImageViewCreateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageViewCreateFlagBits" );
}
inline void to_json( nlohmann::json &j, const ImageViewCreateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ImageViewCreateFlagBits ) * 8u; ++n ) {
    if( p & ImageViewCreateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ImageViewCreateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ImageViewCreateFlags &p ) {
  if( j.is_array() ) {
    p = ImageViewCreateFlags ( 0 );
    for( auto &e:  j ) {
      ImageViewCreateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ImageViewCreateFlags" );
}
}
#endif


#endif
