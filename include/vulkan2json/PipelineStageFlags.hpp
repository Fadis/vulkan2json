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
#ifndef VULKAN2JSON_PIPELINESTAGEFLAGS_HPP
#define VULKAN2JSON_PIPELINESTAGEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const PipelineStageFlagBits &p ) {
  if( PipelineStageFlagBits :: eTopOfPipe == p ) {
    j = "TopOfPipe";
    return;
  }
  if( PipelineStageFlagBits :: eDrawIndirect == p ) {
    j = "DrawIndirect";
    return;
  }
  if( PipelineStageFlagBits :: eVertexInput == p ) {
    j = "VertexInput";
    return;
  }
  if( PipelineStageFlagBits :: eVertexShader == p ) {
    j = "VertexShader";
    return;
  }
  if( PipelineStageFlagBits :: eTessellationControlShader == p ) {
    j = "TessellationControlShader";
    return;
  }
  if( PipelineStageFlagBits :: eTessellationEvaluationShader == p ) {
    j = "TessellationEvaluationShader";
    return;
  }
  if( PipelineStageFlagBits :: eGeometryShader == p ) {
    j = "GeometryShader";
    return;
  }
  if( PipelineStageFlagBits :: eFragmentShader == p ) {
    j = "FragmentShader";
    return;
  }
  if( PipelineStageFlagBits :: eEarlyFragmentTests == p ) {
    j = "EarlyFragmentTests";
    return;
  }
  if( PipelineStageFlagBits :: eLateFragmentTests == p ) {
    j = "LateFragmentTests";
    return;
  }
  if( PipelineStageFlagBits :: eColorAttachmentOutput == p ) {
    j = "ColorAttachmentOutput";
    return;
  }
  if( PipelineStageFlagBits :: eComputeShader == p ) {
    j = "ComputeShader";
    return;
  }
  if( PipelineStageFlagBits :: eTransfer == p ) {
    j = "Transfer";
    return;
  }
  if( PipelineStageFlagBits :: eBottomOfPipe == p ) {
    j = "BottomOfPipe";
    return;
  }
  if( PipelineStageFlagBits :: eHost == p ) {
    j = "Host";
    return;
  }
  if( PipelineStageFlagBits :: eAllGraphics == p ) {
    j = "AllGraphics";
    return;
  }
  if( PipelineStageFlagBits :: eAllCommands == p ) {
    j = "AllCommands";
    return;
  }
  if( PipelineStageFlagBits :: eTransformFeedbackEXT == p ) {
    j = "TransformFeedbackEXT";
    return;
  }
  if( PipelineStageFlagBits :: eConditionalRenderingEXT == p ) {
    j = "ConditionalRenderingEXT";
    return;
  }
  if( PipelineStageFlagBits :: eAccelerationStructureBuildKHR == p ) {
    j = "AccelerationStructureBuildKHR";
    return;
  }
  if( PipelineStageFlagBits :: eRayTracingShaderKHR == p ) {
    j = "RayTracingShaderKHR";
    return;
  }
  if( PipelineStageFlagBits :: eTaskShaderNV == p ) {
    j = "TaskShaderNV";
    return;
  }
  if( PipelineStageFlagBits :: eMeshShaderNV == p ) {
    j = "MeshShaderNV";
    return;
  }
  if( PipelineStageFlagBits :: eFragmentDensityProcessEXT == p ) {
    j = "FragmentDensityProcessEXT";
    return;
  }
  if( PipelineStageFlagBits :: eFragmentShadingRateAttachmentKHR == p ) {
    j = "FragmentShadingRateAttachmentKHR";
    return;
  }
  if( PipelineStageFlagBits :: eCommandPreprocessNV == p ) {
    j = "CommandPreprocessNV";
    return;
  }
  if( PipelineStageFlagBits :: eNoneKHR == p ) {
    j = "NoneKHR";
    return;
  }
  if( PipelineStageFlagBits :: eAccelerationStructureBuildNV == p ) {
    j = "AccelerationStructureBuildNV";
    return;
  }
  if( PipelineStageFlagBits :: eRayTracingShaderNV == p ) {
    j = "RayTracingShaderNV";
    return;
  }
}
inline void from_json( const nlohmann::json &j, PipelineStageFlagBits &p ) {
  if( j.is_string() ) {
    if( "TopOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTopOfPipe ;
      return;
    }
    if( "eTopOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTopOfPipe ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTopOfPipe ;
      return;
    }
    if( "DrawIndirect" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eDrawIndirect ;
      return;
    }
    if( "eDrawIndirect" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eDrawIndirect ;
      return;
    }
    if( "VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eDrawIndirect ;
      return;
    }
    if( "VertexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexInput ;
      return;
    }
    if( "eVertexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexInput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_VERTEX_INPUT_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexInput ;
      return;
    }
    if( "VertexShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexShader ;
      return;
    }
    if( "eVertexShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_VERTEX_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eVertexShader ;
      return;
    }
    if( "TessellationControlShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationControlShader ;
      return;
    }
    if( "eTessellationControlShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationControlShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationControlShader ;
      return;
    }
    if( "TessellationEvaluationShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationEvaluationShader ;
      return;
    }
    if( "eTessellationEvaluationShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationEvaluationShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTessellationEvaluationShader ;
      return;
    }
    if( "GeometryShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eGeometryShader ;
      return;
    }
    if( "eGeometryShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eGeometryShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eGeometryShader ;
      return;
    }
    if( "FragmentShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShader ;
      return;
    }
    if( "eFragmentShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShader ;
      return;
    }
    if( "EarlyFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eEarlyFragmentTests ;
      return;
    }
    if( "eEarlyFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eEarlyFragmentTests ;
      return;
    }
    if( "VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eEarlyFragmentTests ;
      return;
    }
    if( "LateFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eLateFragmentTests ;
      return;
    }
    if( "eLateFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eLateFragmentTests ;
      return;
    }
    if( "VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eLateFragmentTests ;
      return;
    }
    if( "ColorAttachmentOutput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eColorAttachmentOutput ;
      return;
    }
    if( "eColorAttachmentOutput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eColorAttachmentOutput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eColorAttachmentOutput ;
      return;
    }
    if( "ComputeShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eComputeShader ;
      return;
    }
    if( "eComputeShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eComputeShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eComputeShader ;
      return;
    }
    if( "Transfer" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransfer ;
      return;
    }
    if( "eTransfer" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransfer ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TRANSFER_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransfer ;
      return;
    }
    if( "BottomOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eBottomOfPipe ;
      return;
    }
    if( "eBottomOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eBottomOfPipe ;
      return;
    }
    if( "VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eBottomOfPipe ;
      return;
    }
    if( "Host" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eHost ;
      return;
    }
    if( "eHost" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eHost ;
      return;
    }
    if( "VK_PIPELINE_STAGE_HOST_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eHost ;
      return;
    }
    if( "AllGraphics" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "eAllGraphics" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllGraphics ;
      return;
    }
    if( "AllCommands" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllCommands ;
      return;
    }
    if( "eAllCommands" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllCommands ;
      return;
    }
    if( "VK_PIPELINE_STAGE_ALL_COMMANDS_BIT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAllCommands ;
      return;
    }
    if( "TransformFeedbackEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransformFeedbackEXT ;
      return;
    }
    if( "eTransformFeedbackEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransformFeedbackEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTransformFeedbackEXT ;
      return;
    }
    if( "ConditionalRenderingEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "eConditionalRenderingEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eConditionalRenderingEXT ;
      return;
    }
    if( "AccelerationStructureBuildKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildKHR ;
      return;
    }
    if( "eAccelerationStructureBuildKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildKHR ;
      return;
    }
    if( "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildKHR ;
      return;
    }
    if( "RayTracingShaderKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderKHR ;
      return;
    }
    if( "eRayTracingShaderKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderKHR ;
      return;
    }
    if( "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderKHR ;
      return;
    }
    if( "TaskShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTaskShaderNV ;
      return;
    }
    if( "eTaskShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTaskShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eTaskShaderNV ;
      return;
    }
    if( "MeshShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eMeshShaderNV ;
      return;
    }
    if( "eMeshShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eMeshShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eMeshShaderNV ;
      return;
    }
    if( "FragmentDensityProcessEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "eFragmentDensityProcessEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "FragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "eFragmentShadingRateAttachmentKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "VK_PIPELINE_STAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eFragmentShadingRateAttachmentKHR ;
      return;
    }
    if( "CommandPreprocessNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eCommandPreprocessNV ;
      return;
    }
    if( "eCommandPreprocessNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eCommandPreprocessNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_COMMAND_PREPROCESS_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eCommandPreprocessNV ;
      return;
    }
    if( "NoneKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eNoneKHR ;
      return;
    }
    if( "eNoneKHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eNoneKHR ;
      return;
    }
    if( "VK_PIPELINE_STAGE_NONE_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eNoneKHR ;
      return;
    }
    if( "AccelerationStructureBuildNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "eAccelerationStructureBuildNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "RayTracingShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderNV ;
      return;
    }
    if( "eRayTracingShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits :: eRayTracingShaderNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PipelineStageFlagBits" );
  }
  if( j.is_number() ) {
    p = PipelineStageFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PipelineStageFlagBits" );
}
inline void to_json( nlohmann::json &j, const PipelineStageFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( PipelineStageFlagBits ) * 8u; ++n ) {
    if( p & PipelineStageFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, PipelineStageFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, PipelineStageFlags &p ) {
  if( j.is_array() ) {
    p = PipelineStageFlags ( 0 );
    for( auto &e:  j ) {
      PipelineStageFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for PipelineStageFlags" );
}
}
#endif


#endif
