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
#ifndef VULKAN2JSON_SUBPASSDESCRIPTIONFLAGS_HPP
#define VULKAN2JSON_SUBPASSDESCRIPTIONFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const SubpassDescriptionFlagBits &p ) {
  if( SubpassDescriptionFlagBits :: ePerViewAttributesNVX == p ) {
    j = "PerViewAttributesNVX";
    return;
  }
  if( SubpassDescriptionFlagBits :: ePerViewPositionXOnlyNVX == p ) {
    j = "PerViewPositionXOnlyNVX";
    return;
  }
  if( SubpassDescriptionFlagBits :: eFragmentRegionQCOM == p ) {
    j = "FragmentRegionQCOM";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SubpassDescriptionFlagBits &p ) {
  if( j.is_string() ) {
    if( "PerViewAttributesNVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewAttributesNVX ;
      return;
    }
    if( "ePerViewAttributesNVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewAttributesNVX ;
      return;
    }
    if( "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewAttributesNVX ;
      return;
    }
    if( "PerViewPositionXOnlyNVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewPositionXOnlyNVX ;
      return;
    }
    if( "ePerViewPositionXOnlyNVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewPositionXOnlyNVX ;
      return;
    }
    if( "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: ePerViewPositionXOnlyNVX ;
      return;
    }
    if( "FragmentRegionQCOM" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: eFragmentRegionQCOM ;
      return;
    }
    if( "eFragmentRegionQCOM" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: eFragmentRegionQCOM ;
      return;
    }
    if( "VK_SUBPASS_DESCRIPTION_FRAGMENT_REGION_BIT_QCOM" == j.get< std::string >() ) {
      p = SubpassDescriptionFlagBits :: eFragmentRegionQCOM ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SubpassDescriptionFlagBits" );
  }
  if( j.is_number() ) {
    p = SubpassDescriptionFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SubpassDescriptionFlagBits" );
}
inline void to_json( nlohmann::json &j, const SubpassDescriptionFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SubpassDescriptionFlagBits ) * 8u; ++n ) {
    if( p & SubpassDescriptionFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SubpassDescriptionFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SubpassDescriptionFlags &p ) {
  if( j.is_array() ) {
    p = SubpassDescriptionFlags ( 0 );
    for( auto &e:  j ) {
      SubpassDescriptionFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SubpassDescriptionFlags" );
}
}
#endif


#endif
