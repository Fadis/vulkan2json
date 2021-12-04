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
#ifndef VULKAN2JSON_COMPONENTTYPENV_HPP
#define VULKAN2JSON_COMPONENTTYPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ComponentTypeNV &p ) {
  if( ComponentTypeNV :: eFloat16 == p ) {
    j = "Float16";
    return;
  }
  if( ComponentTypeNV :: eFloat32 == p ) {
    j = "Float32";
    return;
  }
  if( ComponentTypeNV :: eFloat64 == p ) {
    j = "Float64";
    return;
  }
  if( ComponentTypeNV :: eSint8 == p ) {
    j = "Sint8";
    return;
  }
  if( ComponentTypeNV :: eSint16 == p ) {
    j = "Sint16";
    return;
  }
  if( ComponentTypeNV :: eSint32 == p ) {
    j = "Sint32";
    return;
  }
  if( ComponentTypeNV :: eSint64 == p ) {
    j = "Sint64";
    return;
  }
  if( ComponentTypeNV :: eUint8 == p ) {
    j = "Uint8";
    return;
  }
  if( ComponentTypeNV :: eUint16 == p ) {
    j = "Uint16";
    return;
  }
  if( ComponentTypeNV :: eUint32 == p ) {
    j = "Uint32";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkComponentTypeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ComponentTypeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ComponentTypeNV &p ) {
  if( j.is_string() ) {
    if( "Float16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat16 ;
      return;
    }
    if( "eFloat16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat16 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_FLOAT16_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat16 ;
      return;
    }
    if( "Float32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat32 ;
      return;
    }
    if( "eFloat32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat32 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_FLOAT32_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat32 ;
      return;
    }
    if( "Float64" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat64 ;
      return;
    }
    if( "eFloat64" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat64 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_FLOAT64_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eFloat64 ;
      return;
    }
    if( "Sint8" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint8 ;
      return;
    }
    if( "eSint8" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint8 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_SINT8_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint8 ;
      return;
    }
    if( "Sint16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint16 ;
      return;
    }
    if( "eSint16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint16 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_SINT16_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint16 ;
      return;
    }
    if( "Sint32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint32 ;
      return;
    }
    if( "eSint32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint32 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_SINT32_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint32 ;
      return;
    }
    if( "Sint64" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint64 ;
      return;
    }
    if( "eSint64" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint64 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_SINT64_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eSint64 ;
      return;
    }
    if( "Uint8" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint8 ;
      return;
    }
    if( "eUint8" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint8 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_UINT8_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint8 ;
      return;
    }
    if( "Uint16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint16 ;
      return;
    }
    if( "eUint16" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint16 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_UINT16_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint16 ;
      return;
    }
    if( "Uint32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint32 ;
      return;
    }
    if( "eUint32" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint32 ;
      return;
    }
    if( "VK_COMPONENT_TYPE_UINT32_NV" == j.get< std::string >() ) {
      p = ComponentTypeNV :: eUint32 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ComponentTypeNV" );
  }
  if( j.is_number() ) {
    p = ComponentTypeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ComponentTypeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkComponentTypeNV &p ) {
  VULKAN_HPP_NAMESPACE :: ComponentTypeNV temp;
  from_json( j, temp );
  p = VkComponentTypeNV ( temp );
}
#endif


#endif
