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
#ifndef VULKAN2JSON_STENCILOP_HPP
#define VULKAN2JSON_STENCILOP_HPP

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
inline void to_json( nlohmann::json &j, const StencilOp &p ) {
  if( StencilOp :: eKeep == p ) {
    j = "Keep";
    return;
  }
  if( StencilOp :: eZero == p ) {
    j = "Zero";
    return;
  }
  if( StencilOp :: eReplace == p ) {
    j = "Replace";
    return;
  }
  if( StencilOp :: eIncrementAndClamp == p ) {
    j = "IncrementAndClamp";
    return;
  }
  if( StencilOp :: eDecrementAndClamp == p ) {
    j = "DecrementAndClamp";
    return;
  }
  if( StencilOp :: eInvert == p ) {
    j = "Invert";
    return;
  }
  if( StencilOp :: eIncrementAndWrap == p ) {
    j = "IncrementAndWrap";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkStencilOp &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: StencilOp ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, StencilOp &p ) {
  if( j.is_string() ) {
    if( "Keep" == j.get< std::string >() ) {
      p = StencilOp :: eKeep ;
      return;
    }
    if( "eKeep" == j.get< std::string >() ) {
      p = StencilOp :: eKeep ;
      return;
    }
    if( "VK_STENCIL_OP_KEEP" == j.get< std::string >() ) {
      p = StencilOp :: eKeep ;
      return;
    }
    if( "Zero" == j.get< std::string >() ) {
      p = StencilOp :: eZero ;
      return;
    }
    if( "eZero" == j.get< std::string >() ) {
      p = StencilOp :: eZero ;
      return;
    }
    if( "VK_STENCIL_OP_ZERO" == j.get< std::string >() ) {
      p = StencilOp :: eZero ;
      return;
    }
    if( "Replace" == j.get< std::string >() ) {
      p = StencilOp :: eReplace ;
      return;
    }
    if( "eReplace" == j.get< std::string >() ) {
      p = StencilOp :: eReplace ;
      return;
    }
    if( "VK_STENCIL_OP_REPLACE" == j.get< std::string >() ) {
      p = StencilOp :: eReplace ;
      return;
    }
    if( "IncrementAndClamp" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndClamp ;
      return;
    }
    if( "eIncrementAndClamp" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndClamp ;
      return;
    }
    if( "VK_STENCIL_OP_INCREMENT_AND_CLAMP" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndClamp ;
      return;
    }
    if( "DecrementAndClamp" == j.get< std::string >() ) {
      p = StencilOp :: eDecrementAndClamp ;
      return;
    }
    if( "eDecrementAndClamp" == j.get< std::string >() ) {
      p = StencilOp :: eDecrementAndClamp ;
      return;
    }
    if( "VK_STENCIL_OP_DECREMENT_AND_CLAMP" == j.get< std::string >() ) {
      p = StencilOp :: eDecrementAndClamp ;
      return;
    }
    if( "Invert" == j.get< std::string >() ) {
      p = StencilOp :: eInvert ;
      return;
    }
    if( "eInvert" == j.get< std::string >() ) {
      p = StencilOp :: eInvert ;
      return;
    }
    if( "VK_STENCIL_OP_INVERT" == j.get< std::string >() ) {
      p = StencilOp :: eInvert ;
      return;
    }
    if( "IncrementAndWrap" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndWrap ;
      return;
    }
    if( "eIncrementAndWrap" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndWrap ;
      return;
    }
    if( "VK_STENCIL_OP_INCREMENT_AND_WRAP" == j.get< std::string >() ) {
      p = StencilOp :: eIncrementAndWrap ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for StencilOp" );
  }
  if( j.is_number() ) {
    p = StencilOp ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for StencilOp" );
}
}
inline void from_json( const nlohmann::json &j, VkStencilOp &p ) {
  VULKAN_HPP_NAMESPACE :: StencilOp temp;
  from_json( j, temp );
  p = VkStencilOp ( temp );
}
#endif


#endif
