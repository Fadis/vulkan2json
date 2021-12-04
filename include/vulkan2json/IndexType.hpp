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
#ifndef VULKAN2JSON_INDEXTYPE_HPP
#define VULKAN2JSON_INDEXTYPE_HPP

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
inline void to_json( nlohmann::json &j, const IndexType &p ) {
  if( IndexType :: eUint16 == p ) {
    j = "Uint16";
    return;
  }
  if( IndexType :: eUint32 == p ) {
    j = "Uint32";
    return;
  }
  if( IndexType :: eNoneKHR == p ) {
    j = "NoneKHR";
    return;
  }
  if( IndexType :: eUint8EXT == p ) {
    j = "Uint8EXT";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkIndexType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: IndexType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, IndexType &p ) {
  if( j.is_string() ) {
    if( "Uint16" == j.get< std::string >() ) {
      p = IndexType :: eUint16 ;
      return;
    }
    if( "eUint16" == j.get< std::string >() ) {
      p = IndexType :: eUint16 ;
      return;
    }
    if( "VK_INDEX_TYPE_UINT16" == j.get< std::string >() ) {
      p = IndexType :: eUint16 ;
      return;
    }
    if( "Uint32" == j.get< std::string >() ) {
      p = IndexType :: eUint32 ;
      return;
    }
    if( "eUint32" == j.get< std::string >() ) {
      p = IndexType :: eUint32 ;
      return;
    }
    if( "VK_INDEX_TYPE_UINT32" == j.get< std::string >() ) {
      p = IndexType :: eUint32 ;
      return;
    }
    if( "NoneKHR" == j.get< std::string >() ) {
      p = IndexType :: eNoneKHR ;
      return;
    }
    if( "eNoneKHR" == j.get< std::string >() ) {
      p = IndexType :: eNoneKHR ;
      return;
    }
    if( "VK_INDEX_TYPE_NONE_KHR" == j.get< std::string >() ) {
      p = IndexType :: eNoneKHR ;
      return;
    }
    if( "Uint8EXT" == j.get< std::string >() ) {
      p = IndexType :: eUint8EXT ;
      return;
    }
    if( "eUint8EXT" == j.get< std::string >() ) {
      p = IndexType :: eUint8EXT ;
      return;
    }
    if( "VK_INDEX_TYPE_UINT8_EXT" == j.get< std::string >() ) {
      p = IndexType :: eUint8EXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for IndexType" );
  }
  if( j.is_number() ) {
    p = IndexType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for IndexType" );
}
}
inline void from_json( const nlohmann::json &j, VkIndexType &p ) {
  VULKAN_HPP_NAMESPACE :: IndexType temp;
  from_json( j, temp );
  p = VkIndexType ( temp );
}
#endif


#endif
