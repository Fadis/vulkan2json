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
#ifndef VULKAN2JSON_SHADERSTAGEFLAGS_HPP
#define VULKAN2JSON_SHADERSTAGEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ShaderStageFlagBits &p ) {
  if( ShaderStageFlagBits :: eVertex == p ) {
    j = "Vertex";
    return;
  }
  if( ShaderStageFlagBits :: eTessellationControl == p ) {
    j = "TessellationControl";
    return;
  }
  if( ShaderStageFlagBits :: eTessellationEvaluation == p ) {
    j = "TessellationEvaluation";
    return;
  }
  if( ShaderStageFlagBits :: eGeometry == p ) {
    j = "Geometry";
    return;
  }
  if( ShaderStageFlagBits :: eFragment == p ) {
    j = "Fragment";
    return;
  }
  if( ShaderStageFlagBits :: eCompute == p ) {
    j = "Compute";
    return;
  }
  if( ShaderStageFlagBits :: eAllGraphics == p ) {
    j = "AllGraphics";
    return;
  }
  if( ShaderStageFlagBits :: eAll == p ) {
    j = "All";
    return;
  }
  if( ShaderStageFlagBits :: eRaygenKHR == p ) {
    j = "RaygenKHR";
    return;
  }
  if( ShaderStageFlagBits :: eAnyHitKHR == p ) {
    j = "AnyHitKHR";
    return;
  }
  if( ShaderStageFlagBits :: eClosestHitKHR == p ) {
    j = "ClosestHitKHR";
    return;
  }
  if( ShaderStageFlagBits :: eMissKHR == p ) {
    j = "MissKHR";
    return;
  }
  if( ShaderStageFlagBits :: eIntersectionKHR == p ) {
    j = "IntersectionKHR";
    return;
  }
  if( ShaderStageFlagBits :: eCallableKHR == p ) {
    j = "CallableKHR";
    return;
  }
  if( ShaderStageFlagBits :: eTaskNV == p ) {
    j = "TaskNV";
    return;
  }
  if( ShaderStageFlagBits :: eMeshNV == p ) {
    j = "MeshNV";
    return;
  }
  if( ShaderStageFlagBits :: eSubpassShadingHUAWEI == p ) {
    j = "SubpassShadingHUAWEI";
    return;
  }
  if( ShaderStageFlagBits :: eAnyHitNV == p ) {
    j = "AnyHitNV";
    return;
  }
  if( ShaderStageFlagBits :: eCallableNV == p ) {
    j = "CallableNV";
    return;
  }
  if( ShaderStageFlagBits :: eClosestHitNV == p ) {
    j = "ClosestHitNV";
    return;
  }
  if( ShaderStageFlagBits :: eIntersectionNV == p ) {
    j = "IntersectionNV";
    return;
  }
  if( ShaderStageFlagBits :: eMissNV == p ) {
    j = "MissNV";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ShaderStageFlagBits &p ) {
  if( j.is_string() ) {
    if( "Vertex" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eVertex ;
      return;
    }
    if( "eVertex" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eVertex ;
      return;
    }
    if( "VK_SHADER_STAGE_VERTEX_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eVertex ;
      return;
    }
    if( "TessellationControl" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationControl ;
      return;
    }
    if( "eTessellationControl" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationControl ;
      return;
    }
    if( "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationControl ;
      return;
    }
    if( "TessellationEvaluation" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationEvaluation ;
      return;
    }
    if( "eTessellationEvaluation" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationEvaluation ;
      return;
    }
    if( "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTessellationEvaluation ;
      return;
    }
    if( "Geometry" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eGeometry ;
      return;
    }
    if( "eGeometry" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eGeometry ;
      return;
    }
    if( "VK_SHADER_STAGE_GEOMETRY_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eGeometry ;
      return;
    }
    if( "Fragment" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eFragment ;
      return;
    }
    if( "eFragment" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eFragment ;
      return;
    }
    if( "VK_SHADER_STAGE_FRAGMENT_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eFragment ;
      return;
    }
    if( "Compute" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCompute ;
      return;
    }
    if( "eCompute" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCompute ;
      return;
    }
    if( "VK_SHADER_STAGE_COMPUTE_BIT" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCompute ;
      return;
    }
    if( "AllGraphics" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "eAllGraphics" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "VK_SHADER_STAGE_ALL_GRAPHICS" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "All" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAll ;
      return;
    }
    if( "eAll" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAll ;
      return;
    }
    if( "VK_SHADER_STAGE_ALL" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAll ;
      return;
    }
    if( "RaygenKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eRaygenKHR ;
      return;
    }
    if( "eRaygenKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eRaygenKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_RAYGEN_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eRaygenKHR ;
      return;
    }
    if( "AnyHitKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitKHR ;
      return;
    }
    if( "eAnyHitKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_ANY_HIT_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitKHR ;
      return;
    }
    if( "ClosestHitKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitKHR ;
      return;
    }
    if( "eClosestHitKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_CLOSEST_HIT_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitKHR ;
      return;
    }
    if( "MissKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissKHR ;
      return;
    }
    if( "eMissKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_MISS_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissKHR ;
      return;
    }
    if( "IntersectionKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionKHR ;
      return;
    }
    if( "eIntersectionKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_INTERSECTION_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionKHR ;
      return;
    }
    if( "CallableKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableKHR ;
      return;
    }
    if( "eCallableKHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableKHR ;
      return;
    }
    if( "VK_SHADER_STAGE_CALLABLE_BIT_KHR" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableKHR ;
      return;
    }
    if( "TaskNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTaskNV ;
      return;
    }
    if( "eTaskNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTaskNV ;
      return;
    }
    if( "VK_SHADER_STAGE_TASK_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eTaskNV ;
      return;
    }
    if( "MeshNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMeshNV ;
      return;
    }
    if( "eMeshNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMeshNV ;
      return;
    }
    if( "VK_SHADER_STAGE_MESH_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMeshNV ;
      return;
    }
    if( "SubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "eSubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "VK_SHADER_STAGE_SUBPASS_SHADING_BIT_HUAWEI" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "AnyHitNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitNV ;
      return;
    }
    if( "eAnyHitNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitNV ;
      return;
    }
    if( "VK_SHADER_STAGE_ANY_HIT_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eAnyHitNV ;
      return;
    }
    if( "CallableNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableNV ;
      return;
    }
    if( "eCallableNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableNV ;
      return;
    }
    if( "VK_SHADER_STAGE_CALLABLE_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eCallableNV ;
      return;
    }
    if( "ClosestHitNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitNV ;
      return;
    }
    if( "eClosestHitNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitNV ;
      return;
    }
    if( "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eClosestHitNV ;
      return;
    }
    if( "IntersectionNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionNV ;
      return;
    }
    if( "eIntersectionNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionNV ;
      return;
    }
    if( "VK_SHADER_STAGE_INTERSECTION_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eIntersectionNV ;
      return;
    }
    if( "MissNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissNV ;
      return;
    }
    if( "eMissNV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissNV ;
      return;
    }
    if( "VK_SHADER_STAGE_MISS_BIT_NV" == j.get< std::string >() ) {
      p = ShaderStageFlagBits :: eMissNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ShaderStageFlagBits" );
  }
  if( j.is_number() ) {
    p = ShaderStageFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ShaderStageFlagBits" );
}
inline void to_json( nlohmann::json &j, const ShaderStageFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ShaderStageFlagBits ) * 8u; ++n ) {
    if( p & ShaderStageFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ShaderStageFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ShaderStageFlags &p ) {
  if( j.is_array() ) {
    p = ShaderStageFlags ( 0 );
    for( auto &e:  j ) {
      ShaderStageFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ShaderStageFlags" );
}
}
#endif


#endif
