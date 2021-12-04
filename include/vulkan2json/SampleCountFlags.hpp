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
#ifndef VULKAN2JSON_SAMPLECOUNTFLAGS_HPP
#define VULKAN2JSON_SAMPLECOUNTFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const SampleCountFlagBits &p ) {
  if( SampleCountFlagBits :: e1 == p ) {
    j = "1";
    return;
  }
  if( SampleCountFlagBits :: e2 == p ) {
    j = "2";
    return;
  }
  if( SampleCountFlagBits :: e4 == p ) {
    j = "4";
    return;
  }
  if( SampleCountFlagBits :: e8 == p ) {
    j = "8";
    return;
  }
  if( SampleCountFlagBits :: e16 == p ) {
    j = "16";
    return;
  }
  if( SampleCountFlagBits :: e32 == p ) {
    j = "32";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SampleCountFlagBits &p ) {
  if( j.is_string() ) {
    if( "1" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e1 ;
      return;
    }
    if( "e1" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e1 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_1_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e1 ;
      return;
    }
    if( "2" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e2 ;
      return;
    }
    if( "e2" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e2 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_2_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e2 ;
      return;
    }
    if( "4" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e4 ;
      return;
    }
    if( "e4" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e4 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_4_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e4 ;
      return;
    }
    if( "8" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e8 ;
      return;
    }
    if( "e8" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e8 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_8_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e8 ;
      return;
    }
    if( "16" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e16 ;
      return;
    }
    if( "e16" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e16 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_16_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e16 ;
      return;
    }
    if( "32" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e32 ;
      return;
    }
    if( "e32" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e32 ;
      return;
    }
    if( "VK_SAMPLE_COUNT_32_BIT" == j.get< std::string >() ) {
      p = SampleCountFlagBits :: e32 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SampleCountFlagBits" );
  }
  if( j.is_number() ) {
    p = SampleCountFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SampleCountFlagBits" );
}
inline void to_json( nlohmann::json &j, const SampleCountFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SampleCountFlagBits ) * 8u; ++n ) {
    if( p & SampleCountFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SampleCountFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SampleCountFlags &p ) {
  if( j.is_array() ) {
    p = SampleCountFlags ( 0 );
    for( auto &e:  j ) {
      SampleCountFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SampleCountFlags" );
}
}
#endif


#endif
