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
#ifndef VULKAN2JSON_QUERYPIPELINESTATISTICFLAGS_HPP
#define VULKAN2JSON_QUERYPIPELINESTATISTICFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const QueryPipelineStatisticFlagBits &p ) {
  if( QueryPipelineStatisticFlagBits :: eInputAssemblyVertices == p ) {
    j = "InputAssemblyVertices";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eInputAssemblyPrimitives == p ) {
    j = "InputAssemblyPrimitives";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eVertexShaderInvocations == p ) {
    j = "VertexShaderInvocations";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eGeometryShaderInvocations == p ) {
    j = "GeometryShaderInvocations";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eGeometryShaderPrimitives == p ) {
    j = "GeometryShaderPrimitives";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eClippingInvocations == p ) {
    j = "ClippingInvocations";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eClippingPrimitives == p ) {
    j = "ClippingPrimitives";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eFragmentShaderInvocations == p ) {
    j = "FragmentShaderInvocations";
    return;
  }
  if( QueryPipelineStatisticFlagBits :: eTessellationControlShaderPatches == p ) {
    j = "TessellationControlShaderPatches";
    return;
  }
}
inline void from_json( const nlohmann::json &j, QueryPipelineStatisticFlagBits &p ) {
  if( j.is_string() ) {
    if( "InputAssemblyVertices" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyVertices ;
      return;
    }
    if( "eInputAssemblyVertices" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyVertices ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyVertices ;
      return;
    }
    if( "InputAssemblyPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyPrimitives ;
      return;
    }
    if( "eInputAssemblyPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyPrimitives ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eInputAssemblyPrimitives ;
      return;
    }
    if( "VertexShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eVertexShaderInvocations ;
      return;
    }
    if( "eVertexShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eVertexShaderInvocations ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eVertexShaderInvocations ;
      return;
    }
    if( "GeometryShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderInvocations ;
      return;
    }
    if( "eGeometryShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderInvocations ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderInvocations ;
      return;
    }
    if( "GeometryShaderPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderPrimitives ;
      return;
    }
    if( "eGeometryShaderPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderPrimitives ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eGeometryShaderPrimitives ;
      return;
    }
    if( "ClippingInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingInvocations ;
      return;
    }
    if( "eClippingInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingInvocations ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingInvocations ;
      return;
    }
    if( "ClippingPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingPrimitives ;
      return;
    }
    if( "eClippingPrimitives" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingPrimitives ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eClippingPrimitives ;
      return;
    }
    if( "FragmentShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eFragmentShaderInvocations ;
      return;
    }
    if( "eFragmentShaderInvocations" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eFragmentShaderInvocations ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eFragmentShaderInvocations ;
      return;
    }
    if( "TessellationControlShaderPatches" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eTessellationControlShaderPatches ;
      return;
    }
    if( "eTessellationControlShaderPatches" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eTessellationControlShaderPatches ;
      return;
    }
    if( "VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT" == j.get< std::string >() ) {
      p = QueryPipelineStatisticFlagBits :: eTessellationControlShaderPatches ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for QueryPipelineStatisticFlagBits" );
  }
  if( j.is_number() ) {
    p = QueryPipelineStatisticFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for QueryPipelineStatisticFlagBits" );
}
inline void to_json( nlohmann::json &j, const QueryPipelineStatisticFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( QueryPipelineStatisticFlagBits ) * 8u; ++n ) {
    if( p & QueryPipelineStatisticFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, QueryPipelineStatisticFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, QueryPipelineStatisticFlags &p ) {
  if( j.is_array() ) {
    p = QueryPipelineStatisticFlags ( 0 );
    for( auto &e:  j ) {
      QueryPipelineStatisticFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for QueryPipelineStatisticFlags" );
}
}
#endif


#endif
