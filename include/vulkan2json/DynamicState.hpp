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
#ifndef VULKAN2JSON_DYNAMICSTATE_HPP
#define VULKAN2JSON_DYNAMICSTATE_HPP

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
inline void to_json( nlohmann::json &j, const DynamicState &p ) {
  if( DynamicState :: eViewport == p ) {
    j = "Viewport";
    return;
  }
  if( DynamicState :: eScissor == p ) {
    j = "Scissor";
    return;
  }
  if( DynamicState :: eLineWidth == p ) {
    j = "LineWidth";
    return;
  }
  if( DynamicState :: eDepthBias == p ) {
    j = "DepthBias";
    return;
  }
  if( DynamicState :: eBlendConstants == p ) {
    j = "BlendConstants";
    return;
  }
  if( DynamicState :: eDepthBounds == p ) {
    j = "DepthBounds";
    return;
  }
  if( DynamicState :: eStencilCompareMask == p ) {
    j = "StencilCompareMask";
    return;
  }
  if( DynamicState :: eStencilWriteMask == p ) {
    j = "StencilWriteMask";
    return;
  }
  if( DynamicState :: eStencilReference == p ) {
    j = "StencilReference";
    return;
  }
  if( DynamicState :: eViewportWScalingNV == p ) {
    j = "ViewportWScalingNV";
    return;
  }
  if( DynamicState :: eDiscardRectangleEXT == p ) {
    j = "DiscardRectangleEXT";
    return;
  }
  if( DynamicState :: eSampleLocationsEXT == p ) {
    j = "SampleLocationsEXT";
    return;
  }
  if( DynamicState :: eRayTracingPipelineStackSizeKHR == p ) {
    j = "RayTracingPipelineStackSizeKHR";
    return;
  }
  if( DynamicState :: eViewportShadingRatePaletteNV == p ) {
    j = "ViewportShadingRatePaletteNV";
    return;
  }
  if( DynamicState :: eViewportCoarseSampleOrderNV == p ) {
    j = "ViewportCoarseSampleOrderNV";
    return;
  }
  if( DynamicState :: eExclusiveScissorNV == p ) {
    j = "ExclusiveScissorNV";
    return;
  }
  if( DynamicState :: eFragmentShadingRateKHR == p ) {
    j = "FragmentShadingRateKHR";
    return;
  }
  if( DynamicState :: eLineStippleEXT == p ) {
    j = "LineStippleEXT";
    return;
  }
  if( DynamicState :: eCullModeEXT == p ) {
    j = "CullModeEXT";
    return;
  }
  if( DynamicState :: eFrontFaceEXT == p ) {
    j = "FrontFaceEXT";
    return;
  }
  if( DynamicState :: ePrimitiveTopologyEXT == p ) {
    j = "PrimitiveTopologyEXT";
    return;
  }
  if( DynamicState :: eViewportWithCountEXT == p ) {
    j = "ViewportWithCountEXT";
    return;
  }
  if( DynamicState :: eScissorWithCountEXT == p ) {
    j = "ScissorWithCountEXT";
    return;
  }
  if( DynamicState :: eVertexInputBindingStrideEXT == p ) {
    j = "VertexInputBindingStrideEXT";
    return;
  }
  if( DynamicState :: eDepthTestEnableEXT == p ) {
    j = "DepthTestEnableEXT";
    return;
  }
  if( DynamicState :: eDepthWriteEnableEXT == p ) {
    j = "DepthWriteEnableEXT";
    return;
  }
  if( DynamicState :: eDepthCompareOpEXT == p ) {
    j = "DepthCompareOpEXT";
    return;
  }
  if( DynamicState :: eDepthBoundsTestEnableEXT == p ) {
    j = "DepthBoundsTestEnableEXT";
    return;
  }
  if( DynamicState :: eStencilTestEnableEXT == p ) {
    j = "StencilTestEnableEXT";
    return;
  }
  if( DynamicState :: eStencilOpEXT == p ) {
    j = "StencilOpEXT";
    return;
  }
  if( DynamicState :: eVertexInputEXT == p ) {
    j = "VertexInputEXT";
    return;
  }
  if( DynamicState :: ePatchControlPointsEXT == p ) {
    j = "PatchControlPointsEXT";
    return;
  }
  if( DynamicState :: eRasterizerDiscardEnableEXT == p ) {
    j = "RasterizerDiscardEnableEXT";
    return;
  }
  if( DynamicState :: eDepthBiasEnableEXT == p ) {
    j = "DepthBiasEnableEXT";
    return;
  }
  if( DynamicState :: eLogicOpEXT == p ) {
    j = "LogicOpEXT";
    return;
  }
  if( DynamicState :: ePrimitiveRestartEnableEXT == p ) {
    j = "PrimitiveRestartEnableEXT";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDynamicState &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DynamicState ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DynamicState &p ) {
  if( j.is_string() ) {
    if( "Viewport" == j.get< std::string >() ) {
      p = DynamicState :: eViewport ;
      return;
    }
    if( "eViewport" == j.get< std::string >() ) {
      p = DynamicState :: eViewport ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VIEWPORT" == j.get< std::string >() ) {
      p = DynamicState :: eViewport ;
      return;
    }
    if( "Scissor" == j.get< std::string >() ) {
      p = DynamicState :: eScissor ;
      return;
    }
    if( "eScissor" == j.get< std::string >() ) {
      p = DynamicState :: eScissor ;
      return;
    }
    if( "VK_DYNAMIC_STATE_SCISSOR" == j.get< std::string >() ) {
      p = DynamicState :: eScissor ;
      return;
    }
    if( "LineWidth" == j.get< std::string >() ) {
      p = DynamicState :: eLineWidth ;
      return;
    }
    if( "eLineWidth" == j.get< std::string >() ) {
      p = DynamicState :: eLineWidth ;
      return;
    }
    if( "VK_DYNAMIC_STATE_LINE_WIDTH" == j.get< std::string >() ) {
      p = DynamicState :: eLineWidth ;
      return;
    }
    if( "DepthBias" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBias ;
      return;
    }
    if( "eDepthBias" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBias ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_BIAS" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBias ;
      return;
    }
    if( "BlendConstants" == j.get< std::string >() ) {
      p = DynamicState :: eBlendConstants ;
      return;
    }
    if( "eBlendConstants" == j.get< std::string >() ) {
      p = DynamicState :: eBlendConstants ;
      return;
    }
    if( "VK_DYNAMIC_STATE_BLEND_CONSTANTS" == j.get< std::string >() ) {
      p = DynamicState :: eBlendConstants ;
      return;
    }
    if( "DepthBounds" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBounds ;
      return;
    }
    if( "eDepthBounds" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBounds ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_BOUNDS" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBounds ;
      return;
    }
    if( "StencilCompareMask" == j.get< std::string >() ) {
      p = DynamicState :: eStencilCompareMask ;
      return;
    }
    if( "eStencilCompareMask" == j.get< std::string >() ) {
      p = DynamicState :: eStencilCompareMask ;
      return;
    }
    if( "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK" == j.get< std::string >() ) {
      p = DynamicState :: eStencilCompareMask ;
      return;
    }
    if( "StencilWriteMask" == j.get< std::string >() ) {
      p = DynamicState :: eStencilWriteMask ;
      return;
    }
    if( "eStencilWriteMask" == j.get< std::string >() ) {
      p = DynamicState :: eStencilWriteMask ;
      return;
    }
    if( "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK" == j.get< std::string >() ) {
      p = DynamicState :: eStencilWriteMask ;
      return;
    }
    if( "StencilReference" == j.get< std::string >() ) {
      p = DynamicState :: eStencilReference ;
      return;
    }
    if( "eStencilReference" == j.get< std::string >() ) {
      p = DynamicState :: eStencilReference ;
      return;
    }
    if( "VK_DYNAMIC_STATE_STENCIL_REFERENCE" == j.get< std::string >() ) {
      p = DynamicState :: eStencilReference ;
      return;
    }
    if( "ViewportWScalingNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWScalingNV ;
      return;
    }
    if( "eViewportWScalingNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWScalingNV ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWScalingNV ;
      return;
    }
    if( "DiscardRectangleEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDiscardRectangleEXT ;
      return;
    }
    if( "eDiscardRectangleEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDiscardRectangleEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDiscardRectangleEXT ;
      return;
    }
    if( "SampleLocationsEXT" == j.get< std::string >() ) {
      p = DynamicState :: eSampleLocationsEXT ;
      return;
    }
    if( "eSampleLocationsEXT" == j.get< std::string >() ) {
      p = DynamicState :: eSampleLocationsEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eSampleLocationsEXT ;
      return;
    }
    if( "RayTracingPipelineStackSizeKHR" == j.get< std::string >() ) {
      p = DynamicState :: eRayTracingPipelineStackSizeKHR ;
      return;
    }
    if( "eRayTracingPipelineStackSizeKHR" == j.get< std::string >() ) {
      p = DynamicState :: eRayTracingPipelineStackSizeKHR ;
      return;
    }
    if( "VK_DYNAMIC_STATE_RAY_TRACING_PIPELINE_STACK_SIZE_KHR" == j.get< std::string >() ) {
      p = DynamicState :: eRayTracingPipelineStackSizeKHR ;
      return;
    }
    if( "ViewportShadingRatePaletteNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportShadingRatePaletteNV ;
      return;
    }
    if( "eViewportShadingRatePaletteNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportShadingRatePaletteNV ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportShadingRatePaletteNV ;
      return;
    }
    if( "ViewportCoarseSampleOrderNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportCoarseSampleOrderNV ;
      return;
    }
    if( "eViewportCoarseSampleOrderNV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportCoarseSampleOrderNV ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV" == j.get< std::string >() ) {
      p = DynamicState :: eViewportCoarseSampleOrderNV ;
      return;
    }
    if( "ExclusiveScissorNV" == j.get< std::string >() ) {
      p = DynamicState :: eExclusiveScissorNV ;
      return;
    }
    if( "eExclusiveScissorNV" == j.get< std::string >() ) {
      p = DynamicState :: eExclusiveScissorNV ;
      return;
    }
    if( "VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV" == j.get< std::string >() ) {
      p = DynamicState :: eExclusiveScissorNV ;
      return;
    }
    if( "FragmentShadingRateKHR" == j.get< std::string >() ) {
      p = DynamicState :: eFragmentShadingRateKHR ;
      return;
    }
    if( "eFragmentShadingRateKHR" == j.get< std::string >() ) {
      p = DynamicState :: eFragmentShadingRateKHR ;
      return;
    }
    if( "VK_DYNAMIC_STATE_FRAGMENT_SHADING_RATE_KHR" == j.get< std::string >() ) {
      p = DynamicState :: eFragmentShadingRateKHR ;
      return;
    }
    if( "LineStippleEXT" == j.get< std::string >() ) {
      p = DynamicState :: eLineStippleEXT ;
      return;
    }
    if( "eLineStippleEXT" == j.get< std::string >() ) {
      p = DynamicState :: eLineStippleEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_LINE_STIPPLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eLineStippleEXT ;
      return;
    }
    if( "CullModeEXT" == j.get< std::string >() ) {
      p = DynamicState :: eCullModeEXT ;
      return;
    }
    if( "eCullModeEXT" == j.get< std::string >() ) {
      p = DynamicState :: eCullModeEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_CULL_MODE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eCullModeEXT ;
      return;
    }
    if( "FrontFaceEXT" == j.get< std::string >() ) {
      p = DynamicState :: eFrontFaceEXT ;
      return;
    }
    if( "eFrontFaceEXT" == j.get< std::string >() ) {
      p = DynamicState :: eFrontFaceEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_FRONT_FACE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eFrontFaceEXT ;
      return;
    }
    if( "PrimitiveTopologyEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveTopologyEXT ;
      return;
    }
    if( "ePrimitiveTopologyEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveTopologyEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY_EXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveTopologyEXT ;
      return;
    }
    if( "ViewportWithCountEXT" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWithCountEXT ;
      return;
    }
    if( "eViewportWithCountEXT" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWithCountEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VIEWPORT_WITH_COUNT_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eViewportWithCountEXT ;
      return;
    }
    if( "ScissorWithCountEXT" == j.get< std::string >() ) {
      p = DynamicState :: eScissorWithCountEXT ;
      return;
    }
    if( "eScissorWithCountEXT" == j.get< std::string >() ) {
      p = DynamicState :: eScissorWithCountEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_SCISSOR_WITH_COUNT_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eScissorWithCountEXT ;
      return;
    }
    if( "VertexInputBindingStrideEXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputBindingStrideEXT ;
      return;
    }
    if( "eVertexInputBindingStrideEXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputBindingStrideEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VERTEX_INPUT_BINDING_STRIDE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputBindingStrideEXT ;
      return;
    }
    if( "DepthTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthTestEnableEXT ;
      return;
    }
    if( "eDepthTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthTestEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthTestEnableEXT ;
      return;
    }
    if( "DepthWriteEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthWriteEnableEXT ;
      return;
    }
    if( "eDepthWriteEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthWriteEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthWriteEnableEXT ;
      return;
    }
    if( "DepthCompareOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthCompareOpEXT ;
      return;
    }
    if( "eDepthCompareOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthCompareOpEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthCompareOpEXT ;
      return;
    }
    if( "DepthBoundsTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBoundsTestEnableEXT ;
      return;
    }
    if( "eDepthBoundsTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBoundsTestEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_BOUNDS_TEST_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBoundsTestEnableEXT ;
      return;
    }
    if( "StencilTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilTestEnableEXT ;
      return;
    }
    if( "eStencilTestEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilTestEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilTestEnableEXT ;
      return;
    }
    if( "StencilOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilOpEXT ;
      return;
    }
    if( "eStencilOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilOpEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_STENCIL_OP_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eStencilOpEXT ;
      return;
    }
    if( "VertexInputEXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputEXT ;
      return;
    }
    if( "eVertexInputEXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_VERTEX_INPUT_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eVertexInputEXT ;
      return;
    }
    if( "PatchControlPointsEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePatchControlPointsEXT ;
      return;
    }
    if( "ePatchControlPointsEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePatchControlPointsEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_PATCH_CONTROL_POINTS_EXT" == j.get< std::string >() ) {
      p = DynamicState :: ePatchControlPointsEXT ;
      return;
    }
    if( "RasterizerDiscardEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eRasterizerDiscardEnableEXT ;
      return;
    }
    if( "eRasterizerDiscardEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eRasterizerDiscardEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_RASTERIZER_DISCARD_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eRasterizerDiscardEnableEXT ;
      return;
    }
    if( "DepthBiasEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBiasEnableEXT ;
      return;
    }
    if( "eDepthBiasEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBiasEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_DEPTH_BIAS_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eDepthBiasEnableEXT ;
      return;
    }
    if( "LogicOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eLogicOpEXT ;
      return;
    }
    if( "eLogicOpEXT" == j.get< std::string >() ) {
      p = DynamicState :: eLogicOpEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_LOGIC_OP_EXT" == j.get< std::string >() ) {
      p = DynamicState :: eLogicOpEXT ;
      return;
    }
    if( "PrimitiveRestartEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveRestartEnableEXT ;
      return;
    }
    if( "ePrimitiveRestartEnableEXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveRestartEnableEXT ;
      return;
    }
    if( "VK_DYNAMIC_STATE_PRIMITIVE_RESTART_ENABLE_EXT" == j.get< std::string >() ) {
      p = DynamicState :: ePrimitiveRestartEnableEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DynamicState" );
  }
  if( j.is_number() ) {
    p = DynamicState ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DynamicState" );
}
}
inline void from_json( const nlohmann::json &j, VkDynamicState &p ) {
  VULKAN_HPP_NAMESPACE :: DynamicState temp;
  from_json( j, temp );
  p = VkDynamicState ( temp );
}
#endif


#endif
