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
#ifndef VULKAN2JSON_COMPONENTSWIZZLE_HPP
#define VULKAN2JSON_COMPONENTSWIZZLE_HPP

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
inline void to_json( nlohmann::json &j, const ComponentSwizzle &p ) {
  if( ComponentSwizzle :: eIdentity == p ) {
    j = "Identity";
    return;
  }
  if( ComponentSwizzle :: eZero == p ) {
    j = "Zero";
    return;
  }
  if( ComponentSwizzle :: eOne == p ) {
    j = "One";
    return;
  }
  if( ComponentSwizzle :: eR == p ) {
    j = "R";
    return;
  }
  if( ComponentSwizzle :: eG == p ) {
    j = "G";
    return;
  }
  if( ComponentSwizzle :: eB == p ) {
    j = "B";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkComponentSwizzle &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ComponentSwizzle ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ComponentSwizzle &p ) {
  if( j.is_string() ) {
    if( "Identity" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eIdentity ;
      return;
    }
    if( "eIdentity" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eIdentity ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_IDENTITY" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eIdentity ;
      return;
    }
    if( "Zero" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eZero ;
      return;
    }
    if( "eZero" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eZero ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_ZERO" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eZero ;
      return;
    }
    if( "One" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eOne ;
      return;
    }
    if( "eOne" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eOne ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_ONE" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eOne ;
      return;
    }
    if( "R" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eR ;
      return;
    }
    if( "eR" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eR ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_R" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eR ;
      return;
    }
    if( "G" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eG ;
      return;
    }
    if( "eG" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eG ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_G" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eG ;
      return;
    }
    if( "B" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eB ;
      return;
    }
    if( "eB" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eB ;
      return;
    }
    if( "VK_COMPONENT_SWIZZLE_B" == j.get< std::string >() ) {
      p = ComponentSwizzle :: eB ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ComponentSwizzle" );
  }
  if( j.is_number() ) {
    p = ComponentSwizzle ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ComponentSwizzle" );
}
}
inline void from_json( const nlohmann::json &j, VkComponentSwizzle &p ) {
  VULKAN_HPP_NAMESPACE :: ComponentSwizzle temp;
  from_json( j, temp );
  p = VkComponentSwizzle ( temp );
}
#endif


#endif
