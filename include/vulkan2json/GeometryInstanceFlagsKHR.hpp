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
#ifndef VULKAN2JSON_GEOMETRYINSTANCEFLAGSKHR_HPP
#define VULKAN2JSON_GEOMETRYINSTANCEFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const GeometryInstanceFlagBitsKHR &p ) {
  if( GeometryInstanceFlagBitsKHR :: eTriangleFacingCullDisable == p ) {
    j = "TriangleFacingCullDisable";
    return;
  }
  if( GeometryInstanceFlagBitsKHR :: eTriangleFrontCounterclockwise == p ) {
    j = "TriangleFrontCounterclockwise";
    return;
  }
  if( GeometryInstanceFlagBitsKHR :: eForceOpaque == p ) {
    j = "ForceOpaque";
    return;
  }
  if( GeometryInstanceFlagBitsKHR :: eForceNoOpaque == p ) {
    j = "ForceNoOpaque";
    return;
  }
}
inline void from_json( const nlohmann::json &j, GeometryInstanceFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "TriangleFacingCullDisable" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFacingCullDisable ;
      return;
    }
    if( "eTriangleFacingCullDisable" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFacingCullDisable ;
      return;
    }
    if( "VK_GEOMETRY_INSTANCE_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFacingCullDisable ;
      return;
    }
    if( "TriangleFrontCounterclockwise" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFrontCounterclockwise ;
      return;
    }
    if( "eTriangleFrontCounterclockwise" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFrontCounterclockwise ;
      return;
    }
    if( "VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_KHR" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eTriangleFrontCounterclockwise ;
      return;
    }
    if( "ForceOpaque" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceOpaque ;
      return;
    }
    if( "eForceOpaque" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceOpaque ;
      return;
    }
    if( "VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_KHR" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceOpaque ;
      return;
    }
    if( "ForceNoOpaque" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceNoOpaque ;
      return;
    }
    if( "eForceNoOpaque" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceNoOpaque ;
      return;
    }
    if( "VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_KHR" == j.get< std::string >() ) {
      p = GeometryInstanceFlagBitsKHR :: eForceNoOpaque ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for GeometryInstanceFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = GeometryInstanceFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for GeometryInstanceFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const GeometryInstanceFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( GeometryInstanceFlagBitsKHR ) * 8u; ++n ) {
    if( p & GeometryInstanceFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, GeometryInstanceFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, GeometryInstanceFlagsKHR &p ) {
  if( j.is_array() ) {
    p = GeometryInstanceFlagsKHR ( 0 );
    for( auto &e:  j ) {
      GeometryInstanceFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for GeometryInstanceFlagsKHR" );
}
}
#endif


#endif
