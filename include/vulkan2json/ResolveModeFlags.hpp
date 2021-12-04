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
#ifndef VULKAN2JSON_RESOLVEMODEFLAGS_HPP
#define VULKAN2JSON_RESOLVEMODEFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_2
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ResolveModeFlagBits &p ) {
  if( ResolveModeFlagBits :: eNone == p ) {
    j = "None";
    return;
  }
  if( ResolveModeFlagBits :: eSampleZero == p ) {
    j = "SampleZero";
    return;
  }
  if( ResolveModeFlagBits :: eAverage == p ) {
    j = "Average";
    return;
  }
  if( ResolveModeFlagBits :: eMin == p ) {
    j = "Min";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ResolveModeFlagBits &p ) {
  if( j.is_string() ) {
    if( "None" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eNone ;
      return;
    }
    if( "eNone" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eNone ;
      return;
    }
    if( "VK_RESOLVE_MODE_NONE" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eNone ;
      return;
    }
    if( "SampleZero" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eSampleZero ;
      return;
    }
    if( "eSampleZero" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eSampleZero ;
      return;
    }
    if( "VK_RESOLVE_MODE_SAMPLE_ZERO_BIT" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eSampleZero ;
      return;
    }
    if( "Average" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eAverage ;
      return;
    }
    if( "eAverage" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eAverage ;
      return;
    }
    if( "VK_RESOLVE_MODE_AVERAGE_BIT" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eAverage ;
      return;
    }
    if( "Min" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eMin ;
      return;
    }
    if( "eMin" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eMin ;
      return;
    }
    if( "VK_RESOLVE_MODE_MIN_BIT" == j.get< std::string >() ) {
      p = ResolveModeFlagBits :: eMin ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ResolveModeFlagBits" );
  }
  if( j.is_number() ) {
    p = ResolveModeFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ResolveModeFlagBits" );
}
inline void to_json( nlohmann::json &j, const ResolveModeFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ResolveModeFlagBits ) * 8u; ++n ) {
    if( p & ResolveModeFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ResolveModeFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ResolveModeFlags &p ) {
  if( j.is_array() ) {
    p = ResolveModeFlags ( 0 );
    for( auto &e:  j ) {
      ResolveModeFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ResolveModeFlags" );
}
}
#endif


#endif
