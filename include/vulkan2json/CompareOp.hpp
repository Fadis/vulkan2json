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
#ifndef VULKAN2JSON_COMPAREOP_HPP
#define VULKAN2JSON_COMPAREOP_HPP

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
inline void to_json( nlohmann::json &j, const CompareOp &p ) {
  if( CompareOp :: eNever == p ) {
    j = "Never";
    return;
  }
  if( CompareOp :: eLess == p ) {
    j = "Less";
    return;
  }
  if( CompareOp :: eEqual == p ) {
    j = "Equal";
    return;
  }
  if( CompareOp :: eLessOrEqual == p ) {
    j = "LessOrEqual";
    return;
  }
  if( CompareOp :: eGreater == p ) {
    j = "Greater";
    return;
  }
  if( CompareOp :: eNotEqual == p ) {
    j = "NotEqual";
    return;
  }
  if( CompareOp :: eGreaterOrEqual == p ) {
    j = "GreaterOrEqual";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkCompareOp &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: CompareOp ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, CompareOp &p ) {
  if( j.is_string() ) {
    if( "Never" == j.get< std::string >() ) {
      p = CompareOp :: eNever ;
      return;
    }
    if( "eNever" == j.get< std::string >() ) {
      p = CompareOp :: eNever ;
      return;
    }
    if( "VK_COMPARE_OP_NEVER" == j.get< std::string >() ) {
      p = CompareOp :: eNever ;
      return;
    }
    if( "Less" == j.get< std::string >() ) {
      p = CompareOp :: eLess ;
      return;
    }
    if( "eLess" == j.get< std::string >() ) {
      p = CompareOp :: eLess ;
      return;
    }
    if( "VK_COMPARE_OP_LESS" == j.get< std::string >() ) {
      p = CompareOp :: eLess ;
      return;
    }
    if( "Equal" == j.get< std::string >() ) {
      p = CompareOp :: eEqual ;
      return;
    }
    if( "eEqual" == j.get< std::string >() ) {
      p = CompareOp :: eEqual ;
      return;
    }
    if( "VK_COMPARE_OP_EQUAL" == j.get< std::string >() ) {
      p = CompareOp :: eEqual ;
      return;
    }
    if( "LessOrEqual" == j.get< std::string >() ) {
      p = CompareOp :: eLessOrEqual ;
      return;
    }
    if( "eLessOrEqual" == j.get< std::string >() ) {
      p = CompareOp :: eLessOrEqual ;
      return;
    }
    if( "VK_COMPARE_OP_LESS_OR_EQUAL" == j.get< std::string >() ) {
      p = CompareOp :: eLessOrEqual ;
      return;
    }
    if( "Greater" == j.get< std::string >() ) {
      p = CompareOp :: eGreater ;
      return;
    }
    if( "eGreater" == j.get< std::string >() ) {
      p = CompareOp :: eGreater ;
      return;
    }
    if( "VK_COMPARE_OP_GREATER" == j.get< std::string >() ) {
      p = CompareOp :: eGreater ;
      return;
    }
    if( "NotEqual" == j.get< std::string >() ) {
      p = CompareOp :: eNotEqual ;
      return;
    }
    if( "eNotEqual" == j.get< std::string >() ) {
      p = CompareOp :: eNotEqual ;
      return;
    }
    if( "VK_COMPARE_OP_NOT_EQUAL" == j.get< std::string >() ) {
      p = CompareOp :: eNotEqual ;
      return;
    }
    if( "GreaterOrEqual" == j.get< std::string >() ) {
      p = CompareOp :: eGreaterOrEqual ;
      return;
    }
    if( "eGreaterOrEqual" == j.get< std::string >() ) {
      p = CompareOp :: eGreaterOrEqual ;
      return;
    }
    if( "VK_COMPARE_OP_GREATER_OR_EQUAL" == j.get< std::string >() ) {
      p = CompareOp :: eGreaterOrEqual ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CompareOp" );
  }
  if( j.is_number() ) {
    p = CompareOp ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CompareOp" );
}
}
inline void from_json( const nlohmann::json &j, VkCompareOp &p ) {
  VULKAN_HPP_NAMESPACE :: CompareOp temp;
  from_json( j, temp );
  p = VkCompareOp ( temp );
}
#endif


#endif
