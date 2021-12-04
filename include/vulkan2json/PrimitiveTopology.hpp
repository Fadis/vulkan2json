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
#ifndef VULKAN2JSON_PRIMITIVETOPOLOGY_HPP
#define VULKAN2JSON_PRIMITIVETOPOLOGY_HPP

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
inline void to_json( nlohmann::json &j, const PrimitiveTopology &p ) {
  if( PrimitiveTopology :: ePointList == p ) {
    j = "PointList";
    return;
  }
  if( PrimitiveTopology :: eLineList == p ) {
    j = "LineList";
    return;
  }
  if( PrimitiveTopology :: eLineStrip == p ) {
    j = "LineStrip";
    return;
  }
  if( PrimitiveTopology :: eTriangleList == p ) {
    j = "TriangleList";
    return;
  }
  if( PrimitiveTopology :: eTriangleStrip == p ) {
    j = "TriangleStrip";
    return;
  }
  if( PrimitiveTopology :: eTriangleFan == p ) {
    j = "TriangleFan";
    return;
  }
  if( PrimitiveTopology :: eLineListWithAdjacency == p ) {
    j = "LineListWithAdjacency";
    return;
  }
  if( PrimitiveTopology :: eLineStripWithAdjacency == p ) {
    j = "LineStripWithAdjacency";
    return;
  }
  if( PrimitiveTopology :: eTriangleListWithAdjacency == p ) {
    j = "TriangleListWithAdjacency";
    return;
  }
  if( PrimitiveTopology :: eTriangleStripWithAdjacency == p ) {
    j = "TriangleStripWithAdjacency";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPrimitiveTopology &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PrimitiveTopology ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PrimitiveTopology &p ) {
  if( j.is_string() ) {
    if( "PointList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: ePointList ;
      return;
    }
    if( "ePointList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: ePointList ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_POINT_LIST" == j.get< std::string >() ) {
      p = PrimitiveTopology :: ePointList ;
      return;
    }
    if( "LineList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineList ;
      return;
    }
    if( "eLineList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineList ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_LINE_LIST" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineList ;
      return;
    }
    if( "LineStrip" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStrip ;
      return;
    }
    if( "eLineStrip" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStrip ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStrip ;
      return;
    }
    if( "TriangleList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleList ;
      return;
    }
    if( "eTriangleList" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleList ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleList ;
      return;
    }
    if( "TriangleStrip" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStrip ;
      return;
    }
    if( "eTriangleStrip" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStrip ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStrip ;
      return;
    }
    if( "TriangleFan" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleFan ;
      return;
    }
    if( "eTriangleFan" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleFan ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleFan ;
      return;
    }
    if( "LineListWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineListWithAdjacency ;
      return;
    }
    if( "eLineListWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineListWithAdjacency ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineListWithAdjacency ;
      return;
    }
    if( "LineStripWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStripWithAdjacency ;
      return;
    }
    if( "eLineStripWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStripWithAdjacency ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eLineStripWithAdjacency ;
      return;
    }
    if( "TriangleListWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleListWithAdjacency ;
      return;
    }
    if( "eTriangleListWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleListWithAdjacency ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleListWithAdjacency ;
      return;
    }
    if( "TriangleStripWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStripWithAdjacency ;
      return;
    }
    if( "eTriangleStripWithAdjacency" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStripWithAdjacency ;
      return;
    }
    if( "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY" == j.get< std::string >() ) {
      p = PrimitiveTopology :: eTriangleStripWithAdjacency ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PrimitiveTopology" );
  }
  if( j.is_number() ) {
    p = PrimitiveTopology ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PrimitiveTopology" );
}
}
inline void from_json( const nlohmann::json &j, VkPrimitiveTopology &p ) {
  VULKAN_HPP_NAMESPACE :: PrimitiveTopology temp;
  from_json( j, temp );
  p = VkPrimitiveTopology ( temp );
}
#endif


#endif
