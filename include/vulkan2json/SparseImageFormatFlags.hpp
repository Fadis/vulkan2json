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
#ifndef VULKAN2JSON_SPARSEIMAGEFORMATFLAGS_HPP
#define VULKAN2JSON_SPARSEIMAGEFORMATFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const SparseImageFormatFlagBits &p ) {
  if( SparseImageFormatFlagBits :: eSingleMiptail == p ) {
    j = "SingleMiptail";
    return;
  }
  if( SparseImageFormatFlagBits :: eAlignedMipSize == p ) {
    j = "AlignedMipSize";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SparseImageFormatFlagBits &p ) {
  if( j.is_string() ) {
    if( "SingleMiptail" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eSingleMiptail ;
      return;
    }
    if( "eSingleMiptail" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eSingleMiptail ;
      return;
    }
    if( "VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eSingleMiptail ;
      return;
    }
    if( "AlignedMipSize" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eAlignedMipSize ;
      return;
    }
    if( "eAlignedMipSize" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eAlignedMipSize ;
      return;
    }
    if( "VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT" == j.get< std::string >() ) {
      p = SparseImageFormatFlagBits :: eAlignedMipSize ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SparseImageFormatFlagBits" );
  }
  if( j.is_number() ) {
    p = SparseImageFormatFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SparseImageFormatFlagBits" );
}
inline void to_json( nlohmann::json &j, const SparseImageFormatFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SparseImageFormatFlagBits ) * 8u; ++n ) {
    if( p & SparseImageFormatFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SparseImageFormatFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SparseImageFormatFlags &p ) {
  if( j.is_array() ) {
    p = SparseImageFormatFlags ( 0 );
    for( auto &e:  j ) {
      SparseImageFormatFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SparseImageFormatFlags" );
}
}
#endif


#endif
