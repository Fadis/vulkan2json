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
#ifndef VULKAN2JSON_PIPELINESTAGEFLAGS2KHR_HPP
#define VULKAN2JSON_PIPELINESTAGEFLAGS2KHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineStageFlagBits2KHR &p ) {
  if( PipelineStageFlagBits2KHR :: eNone == p ) {
    j = "None";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eTopOfPipe == p ) {
    j = "TopOfPipe";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eDrawIndirect == p ) {
    j = "DrawIndirect";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eVertexInput == p ) {
    j = "VertexInput";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eVertexShader == p ) {
    j = "VertexShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eTessellationControlShader == p ) {
    j = "TessellationControlShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eTessellationEvaluationShader == p ) {
    j = "TessellationEvaluationShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eGeometryShader == p ) {
    j = "GeometryShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eFragmentShader == p ) {
    j = "FragmentShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eEarlyFragmentTests == p ) {
    j = "EarlyFragmentTests";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eLateFragmentTests == p ) {
    j = "LateFragmentTests";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eColorAttachmentOutput == p ) {
    j = "ColorAttachmentOutput";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eComputeShader == p ) {
    j = "ComputeShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eAllTransfer == p ) {
    j = "AllTransfer";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eBottomOfPipe == p ) {
    j = "BottomOfPipe";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eHost == p ) {
    j = "Host";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eAllGraphics == p ) {
    j = "AllGraphics";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eAllCommands == p ) {
    j = "AllCommands";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eCopy == p ) {
    j = "Copy";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eResolve == p ) {
    j = "Resolve";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eBlit == p ) {
    j = "Blit";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eClear == p ) {
    j = "Clear";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eIndexInput == p ) {
    j = "IndexInput";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eVertexAttributeInput == p ) {
    j = "VertexAttributeInput";
    return;
  }
  if( PipelineStageFlagBits2KHR :: ePreRasterizationShaders == p ) {
    j = "PreRasterizationShaders";
    return;
  }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( PipelineStageFlagBits2KHR :: eVideoDecode == p ) {
    j = "VideoDecode";
    return;
  }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  if( PipelineStageFlagBits2KHR :: eVideoEncode == p ) {
    j = "VideoEncode";
    return;
  }
#endif
  if( PipelineStageFlagBits2KHR :: eTransformFeedbackEXT == p ) {
    j = "TransformFeedbackEXT";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eConditionalRenderingEXT == p ) {
    j = "ConditionalRenderingEXT";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eCommandPreprocessNV == p ) {
    j = "CommandPreprocessNV";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eFragmentShadingRateAttachment == p ) {
    j = "FragmentShadingRateAttachment";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eAccelerationStructureBuild == p ) {
    j = "AccelerationStructureBuild";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eRayTracingShader == p ) {
    j = "RayTracingShader";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eFragmentDensityProcessEXT == p ) {
    j = "FragmentDensityProcessEXT";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eTaskShaderNV == p ) {
    j = "TaskShaderNV";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eMeshShaderNV == p ) {
    j = "MeshShaderNV";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eSubpassShadingHUAWEI == p ) {
    j = "SubpassShadingHUAWEI";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eAccelerationStructureBuildNV == p ) {
    j = "AccelerationStructureBuildNV";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eRayTracingShaderNV == p ) {
    j = "RayTracingShaderNV";
    return;
  }
  if( PipelineStageFlagBits2KHR :: eShadingRateImageNV == p ) {
    j = "ShadingRateImageNV";
    return;
  }
}
inline void from_json( const nlohmann::json &j, PipelineStageFlagBits2KHR &p ) {
  if( j.is_string() ) {
    if( "None" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eNone ;
      return;
    }
    if( "eNone" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eNone ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_NONE_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eNone ;
      return;
    }
    if( "TopOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTopOfPipe ;
      return;
    }
    if( "eTopOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTopOfPipe ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTopOfPipe ;
      return;
    }
    if( "DrawIndirect" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eDrawIndirect ;
      return;
    }
    if( "eDrawIndirect" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eDrawIndirect ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eDrawIndirect ;
      return;
    }
    if( "VertexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexInput ;
      return;
    }
    if( "eVertexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexInput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexInput ;
      return;
    }
    if( "VertexShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexShader ;
      return;
    }
    if( "eVertexShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexShader ;
      return;
    }
    if( "TessellationControlShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationControlShader ;
      return;
    }
    if( "eTessellationControlShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationControlShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationControlShader ;
      return;
    }
    if( "TessellationEvaluationShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationEvaluationShader ;
      return;
    }
    if( "eTessellationEvaluationShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationEvaluationShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTessellationEvaluationShader ;
      return;
    }
    if( "GeometryShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eGeometryShader ;
      return;
    }
    if( "eGeometryShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eGeometryShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eGeometryShader ;
      return;
    }
    if( "FragmentShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShader ;
      return;
    }
    if( "eFragmentShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShader ;
      return;
    }
    if( "EarlyFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eEarlyFragmentTests ;
      return;
    }
    if( "eEarlyFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eEarlyFragmentTests ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eEarlyFragmentTests ;
      return;
    }
    if( "LateFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eLateFragmentTests ;
      return;
    }
    if( "eLateFragmentTests" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eLateFragmentTests ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eLateFragmentTests ;
      return;
    }
    if( "ColorAttachmentOutput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eColorAttachmentOutput ;
      return;
    }
    if( "eColorAttachmentOutput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eColorAttachmentOutput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eColorAttachmentOutput ;
      return;
    }
    if( "ComputeShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eComputeShader ;
      return;
    }
    if( "eComputeShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eComputeShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eComputeShader ;
      return;
    }
    if( "AllTransfer" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllTransfer ;
      return;
    }
    if( "eAllTransfer" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllTransfer ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllTransfer ;
      return;
    }
    if( "BottomOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBottomOfPipe ;
      return;
    }
    if( "eBottomOfPipe" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBottomOfPipe ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBottomOfPipe ;
      return;
    }
    if( "Host" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eHost ;
      return;
    }
    if( "eHost" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eHost ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_HOST_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eHost ;
      return;
    }
    if( "AllGraphics" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllGraphics ;
      return;
    }
    if( "eAllGraphics" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllGraphics ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllGraphics ;
      return;
    }
    if( "AllCommands" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllCommands ;
      return;
    }
    if( "eAllCommands" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllCommands ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAllCommands ;
      return;
    }
    if( "Copy" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCopy ;
      return;
    }
    if( "eCopy" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCopy ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_COPY_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCopy ;
      return;
    }
    if( "Resolve" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eResolve ;
      return;
    }
    if( "eResolve" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eResolve ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_RESOLVE_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eResolve ;
      return;
    }
    if( "Blit" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBlit ;
      return;
    }
    if( "eBlit" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBlit ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_BLIT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eBlit ;
      return;
    }
    if( "Clear" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eClear ;
      return;
    }
    if( "eClear" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eClear ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_CLEAR_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eClear ;
      return;
    }
    if( "IndexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eIndexInput ;
      return;
    }
    if( "eIndexInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eIndexInput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eIndexInput ;
      return;
    }
    if( "VertexAttributeInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexAttributeInput ;
      return;
    }
    if( "eVertexAttributeInput" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexAttributeInput ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVertexAttributeInput ;
      return;
    }
    if( "PreRasterizationShaders" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: ePreRasterizationShaders ;
      return;
    }
    if( "ePreRasterizationShaders" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: ePreRasterizationShaders ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: ePreRasterizationShaders ;
      return;
    }
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoDecode" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoDecode ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoDecode" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoDecode ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_PIPELINE_STAGE_2_VIDEO_DECODE_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoDecode ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VideoEncode" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoEncode ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "eVideoEncode" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoEncode ;
      return;
    }
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    if( "VK_PIPELINE_STAGE_2_VIDEO_ENCODE_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eVideoEncode ;
      return;
    }
#endif
    if( "TransformFeedbackEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTransformFeedbackEXT ;
      return;
    }
    if( "eTransformFeedbackEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTransformFeedbackEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTransformFeedbackEXT ;
      return;
    }
    if( "ConditionalRenderingEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eConditionalRenderingEXT ;
      return;
    }
    if( "eConditionalRenderingEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eConditionalRenderingEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eConditionalRenderingEXT ;
      return;
    }
    if( "CommandPreprocessNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCommandPreprocessNV ;
      return;
    }
    if( "eCommandPreprocessNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCommandPreprocessNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eCommandPreprocessNV ;
      return;
    }
    if( "FragmentShadingRateAttachment" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShadingRateAttachment ;
      return;
    }
    if( "eFragmentShadingRateAttachment" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShadingRateAttachment ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentShadingRateAttachment ;
      return;
    }
    if( "AccelerationStructureBuild" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuild ;
      return;
    }
    if( "eAccelerationStructureBuild" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuild ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuild ;
      return;
    }
    if( "RayTracingShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShader ;
      return;
    }
    if( "eRayTracingShader" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShader ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShader ;
      return;
    }
    if( "FragmentDensityProcessEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "eFragmentDensityProcessEXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eFragmentDensityProcessEXT ;
      return;
    }
    if( "TaskShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTaskShaderNV ;
      return;
    }
    if( "eTaskShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTaskShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eTaskShaderNV ;
      return;
    }
    if( "MeshShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eMeshShaderNV ;
      return;
    }
    if( "eMeshShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eMeshShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eMeshShaderNV ;
      return;
    }
    if( "SubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "eSubpassShadingHUAWEI" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_SUBPASS_SHADING_BIT_HUAWEI" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eSubpassShadingHUAWEI ;
      return;
    }
    if( "AccelerationStructureBuildNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "eAccelerationStructureBuildNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eAccelerationStructureBuildNV ;
      return;
    }
    if( "RayTracingShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShaderNV ;
      return;
    }
    if( "eRayTracingShaderNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShaderNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eRayTracingShaderNV ;
      return;
    }
    if( "ShadingRateImageNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eShadingRateImageNV ;
      return;
    }
    if( "eShadingRateImageNV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eShadingRateImageNV ;
      return;
    }
    if( "VK_PIPELINE_STAGE_2_SHADING_RATE_IMAGE_BIT_NV" == j.get< std::string >() ) {
      p = PipelineStageFlagBits2KHR :: eShadingRateImageNV ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PipelineStageFlagBits2KHR" );
  }
  if( j.is_number() ) {
    p = PipelineStageFlagBits2KHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PipelineStageFlagBits2KHR" );
}
inline void to_json( nlohmann::json &j, const PipelineStageFlags2KHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( PipelineStageFlagBits2KHR ) * 8u; ++n ) {
    if( p & PipelineStageFlags2KHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, PipelineStageFlagBits2KHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, PipelineStageFlags2KHR &p ) {
  if( j.is_array() ) {
    p = PipelineStageFlags2KHR ( 0 );
    for( auto &e:  j ) {
      PipelineStageFlagBits2KHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for PipelineStageFlags2KHR" );
}
}
#endif


#endif
