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
#ifndef VULKAN2JSON_BLENDOP_HPP
#define VULKAN2JSON_BLENDOP_HPP

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
inline void to_json( nlohmann::json &j, const BlendOp &p ) {
  if( BlendOp :: eAdd == p ) {
    j = "Add";
    return;
  }
  if( BlendOp :: eSubtract == p ) {
    j = "Subtract";
    return;
  }
  if( BlendOp :: eReverseSubtract == p ) {
    j = "ReverseSubtract";
    return;
  }
  if( BlendOp :: eMin == p ) {
    j = "Min";
    return;
  }
  if( BlendOp :: eMax == p ) {
    j = "Max";
    return;
  }
  if( BlendOp :: eZeroEXT == p ) {
    j = "ZeroEXT";
    return;
  }
  if( BlendOp :: eSrcEXT == p ) {
    j = "SrcEXT";
    return;
  }
  if( BlendOp :: eDstEXT == p ) {
    j = "DstEXT";
    return;
  }
  if( BlendOp :: eSrcOverEXT == p ) {
    j = "SrcOverEXT";
    return;
  }
  if( BlendOp :: eDstOverEXT == p ) {
    j = "DstOverEXT";
    return;
  }
  if( BlendOp :: eSrcInEXT == p ) {
    j = "SrcInEXT";
    return;
  }
  if( BlendOp :: eDstInEXT == p ) {
    j = "DstInEXT";
    return;
  }
  if( BlendOp :: eSrcOutEXT == p ) {
    j = "SrcOutEXT";
    return;
  }
  if( BlendOp :: eDstOutEXT == p ) {
    j = "DstOutEXT";
    return;
  }
  if( BlendOp :: eSrcAtopEXT == p ) {
    j = "SrcAtopEXT";
    return;
  }
  if( BlendOp :: eDstAtopEXT == p ) {
    j = "DstAtopEXT";
    return;
  }
  if( BlendOp :: eXorEXT == p ) {
    j = "XorEXT";
    return;
  }
  if( BlendOp :: eMultiplyEXT == p ) {
    j = "MultiplyEXT";
    return;
  }
  if( BlendOp :: eScreenEXT == p ) {
    j = "ScreenEXT";
    return;
  }
  if( BlendOp :: eOverlayEXT == p ) {
    j = "OverlayEXT";
    return;
  }
  if( BlendOp :: eDarkenEXT == p ) {
    j = "DarkenEXT";
    return;
  }
  if( BlendOp :: eLightenEXT == p ) {
    j = "LightenEXT";
    return;
  }
  if( BlendOp :: eColordodgeEXT == p ) {
    j = "ColordodgeEXT";
    return;
  }
  if( BlendOp :: eColorburnEXT == p ) {
    j = "ColorburnEXT";
    return;
  }
  if( BlendOp :: eHardlightEXT == p ) {
    j = "HardlightEXT";
    return;
  }
  if( BlendOp :: eSoftlightEXT == p ) {
    j = "SoftlightEXT";
    return;
  }
  if( BlendOp :: eDifferenceEXT == p ) {
    j = "DifferenceEXT";
    return;
  }
  if( BlendOp :: eExclusionEXT == p ) {
    j = "ExclusionEXT";
    return;
  }
  if( BlendOp :: eInvertEXT == p ) {
    j = "InvertEXT";
    return;
  }
  if( BlendOp :: eInvertRgbEXT == p ) {
    j = "InvertRgbEXT";
    return;
  }
  if( BlendOp :: eLineardodgeEXT == p ) {
    j = "LineardodgeEXT";
    return;
  }
  if( BlendOp :: eLinearburnEXT == p ) {
    j = "LinearburnEXT";
    return;
  }
  if( BlendOp :: eVividlightEXT == p ) {
    j = "VividlightEXT";
    return;
  }
  if( BlendOp :: eLinearlightEXT == p ) {
    j = "LinearlightEXT";
    return;
  }
  if( BlendOp :: ePinlightEXT == p ) {
    j = "PinlightEXT";
    return;
  }
  if( BlendOp :: eHardmixEXT == p ) {
    j = "HardmixEXT";
    return;
  }
  if( BlendOp :: eHslHueEXT == p ) {
    j = "HslHueEXT";
    return;
  }
  if( BlendOp :: eHslSaturationEXT == p ) {
    j = "HslSaturationEXT";
    return;
  }
  if( BlendOp :: eHslColorEXT == p ) {
    j = "HslColorEXT";
    return;
  }
  if( BlendOp :: eHslLuminosityEXT == p ) {
    j = "HslLuminosityEXT";
    return;
  }
  if( BlendOp :: ePlusEXT == p ) {
    j = "PlusEXT";
    return;
  }
  if( BlendOp :: ePlusClampedEXT == p ) {
    j = "PlusClampedEXT";
    return;
  }
  if( BlendOp :: ePlusClampedAlphaEXT == p ) {
    j = "PlusClampedAlphaEXT";
    return;
  }
  if( BlendOp :: ePlusDarkerEXT == p ) {
    j = "PlusDarkerEXT";
    return;
  }
  if( BlendOp :: eMinusEXT == p ) {
    j = "MinusEXT";
    return;
  }
  if( BlendOp :: eMinusClampedEXT == p ) {
    j = "MinusClampedEXT";
    return;
  }
  if( BlendOp :: eContrastEXT == p ) {
    j = "ContrastEXT";
    return;
  }
  if( BlendOp :: eInvertOvgEXT == p ) {
    j = "InvertOvgEXT";
    return;
  }
  if( BlendOp :: eRedEXT == p ) {
    j = "RedEXT";
    return;
  }
  if( BlendOp :: eGreenEXT == p ) {
    j = "GreenEXT";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkBlendOp &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: BlendOp ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, BlendOp &p ) {
  if( j.is_string() ) {
    if( "Add" == j.get< std::string >() ) {
      p = BlendOp :: eAdd ;
      return;
    }
    if( "eAdd" == j.get< std::string >() ) {
      p = BlendOp :: eAdd ;
      return;
    }
    if( "VK_BLEND_OP_ADD" == j.get< std::string >() ) {
      p = BlendOp :: eAdd ;
      return;
    }
    if( "Subtract" == j.get< std::string >() ) {
      p = BlendOp :: eSubtract ;
      return;
    }
    if( "eSubtract" == j.get< std::string >() ) {
      p = BlendOp :: eSubtract ;
      return;
    }
    if( "VK_BLEND_OP_SUBTRACT" == j.get< std::string >() ) {
      p = BlendOp :: eSubtract ;
      return;
    }
    if( "ReverseSubtract" == j.get< std::string >() ) {
      p = BlendOp :: eReverseSubtract ;
      return;
    }
    if( "eReverseSubtract" == j.get< std::string >() ) {
      p = BlendOp :: eReverseSubtract ;
      return;
    }
    if( "VK_BLEND_OP_REVERSE_SUBTRACT" == j.get< std::string >() ) {
      p = BlendOp :: eReverseSubtract ;
      return;
    }
    if( "Min" == j.get< std::string >() ) {
      p = BlendOp :: eMin ;
      return;
    }
    if( "eMin" == j.get< std::string >() ) {
      p = BlendOp :: eMin ;
      return;
    }
    if( "VK_BLEND_OP_MIN" == j.get< std::string >() ) {
      p = BlendOp :: eMin ;
      return;
    }
    if( "Max" == j.get< std::string >() ) {
      p = BlendOp :: eMax ;
      return;
    }
    if( "eMax" == j.get< std::string >() ) {
      p = BlendOp :: eMax ;
      return;
    }
    if( "VK_BLEND_OP_MAX" == j.get< std::string >() ) {
      p = BlendOp :: eMax ;
      return;
    }
    if( "ZeroEXT" == j.get< std::string >() ) {
      p = BlendOp :: eZeroEXT ;
      return;
    }
    if( "eZeroEXT" == j.get< std::string >() ) {
      p = BlendOp :: eZeroEXT ;
      return;
    }
    if( "VK_BLEND_OP_ZERO_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eZeroEXT ;
      return;
    }
    if( "SrcEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcEXT ;
      return;
    }
    if( "eSrcEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcEXT ;
      return;
    }
    if( "VK_BLEND_OP_SRC_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcEXT ;
      return;
    }
    if( "DstEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstEXT ;
      return;
    }
    if( "eDstEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstEXT ;
      return;
    }
    if( "VK_BLEND_OP_DST_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstEXT ;
      return;
    }
    if( "SrcOverEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOverEXT ;
      return;
    }
    if( "eSrcOverEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOverEXT ;
      return;
    }
    if( "VK_BLEND_OP_SRC_OVER_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOverEXT ;
      return;
    }
    if( "DstOverEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOverEXT ;
      return;
    }
    if( "eDstOverEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOverEXT ;
      return;
    }
    if( "VK_BLEND_OP_DST_OVER_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOverEXT ;
      return;
    }
    if( "SrcInEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcInEXT ;
      return;
    }
    if( "eSrcInEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcInEXT ;
      return;
    }
    if( "VK_BLEND_OP_SRC_IN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcInEXT ;
      return;
    }
    if( "DstInEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstInEXT ;
      return;
    }
    if( "eDstInEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstInEXT ;
      return;
    }
    if( "VK_BLEND_OP_DST_IN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstInEXT ;
      return;
    }
    if( "SrcOutEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOutEXT ;
      return;
    }
    if( "eSrcOutEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOutEXT ;
      return;
    }
    if( "VK_BLEND_OP_SRC_OUT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcOutEXT ;
      return;
    }
    if( "DstOutEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOutEXT ;
      return;
    }
    if( "eDstOutEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOutEXT ;
      return;
    }
    if( "VK_BLEND_OP_DST_OUT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstOutEXT ;
      return;
    }
    if( "SrcAtopEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcAtopEXT ;
      return;
    }
    if( "eSrcAtopEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcAtopEXT ;
      return;
    }
    if( "VK_BLEND_OP_SRC_ATOP_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSrcAtopEXT ;
      return;
    }
    if( "DstAtopEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstAtopEXT ;
      return;
    }
    if( "eDstAtopEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstAtopEXT ;
      return;
    }
    if( "VK_BLEND_OP_DST_ATOP_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDstAtopEXT ;
      return;
    }
    if( "XorEXT" == j.get< std::string >() ) {
      p = BlendOp :: eXorEXT ;
      return;
    }
    if( "eXorEXT" == j.get< std::string >() ) {
      p = BlendOp :: eXorEXT ;
      return;
    }
    if( "VK_BLEND_OP_XOR_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eXorEXT ;
      return;
    }
    if( "MultiplyEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMultiplyEXT ;
      return;
    }
    if( "eMultiplyEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMultiplyEXT ;
      return;
    }
    if( "VK_BLEND_OP_MULTIPLY_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eMultiplyEXT ;
      return;
    }
    if( "ScreenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eScreenEXT ;
      return;
    }
    if( "eScreenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eScreenEXT ;
      return;
    }
    if( "VK_BLEND_OP_SCREEN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eScreenEXT ;
      return;
    }
    if( "OverlayEXT" == j.get< std::string >() ) {
      p = BlendOp :: eOverlayEXT ;
      return;
    }
    if( "eOverlayEXT" == j.get< std::string >() ) {
      p = BlendOp :: eOverlayEXT ;
      return;
    }
    if( "VK_BLEND_OP_OVERLAY_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eOverlayEXT ;
      return;
    }
    if( "DarkenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDarkenEXT ;
      return;
    }
    if( "eDarkenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDarkenEXT ;
      return;
    }
    if( "VK_BLEND_OP_DARKEN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDarkenEXT ;
      return;
    }
    if( "LightenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLightenEXT ;
      return;
    }
    if( "eLightenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLightenEXT ;
      return;
    }
    if( "VK_BLEND_OP_LIGHTEN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eLightenEXT ;
      return;
    }
    if( "ColordodgeEXT" == j.get< std::string >() ) {
      p = BlendOp :: eColordodgeEXT ;
      return;
    }
    if( "eColordodgeEXT" == j.get< std::string >() ) {
      p = BlendOp :: eColordodgeEXT ;
      return;
    }
    if( "VK_BLEND_OP_COLORDODGE_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eColordodgeEXT ;
      return;
    }
    if( "ColorburnEXT" == j.get< std::string >() ) {
      p = BlendOp :: eColorburnEXT ;
      return;
    }
    if( "eColorburnEXT" == j.get< std::string >() ) {
      p = BlendOp :: eColorburnEXT ;
      return;
    }
    if( "VK_BLEND_OP_COLORBURN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eColorburnEXT ;
      return;
    }
    if( "HardlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardlightEXT ;
      return;
    }
    if( "eHardlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardlightEXT ;
      return;
    }
    if( "VK_BLEND_OP_HARDLIGHT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardlightEXT ;
      return;
    }
    if( "SoftlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSoftlightEXT ;
      return;
    }
    if( "eSoftlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eSoftlightEXT ;
      return;
    }
    if( "VK_BLEND_OP_SOFTLIGHT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eSoftlightEXT ;
      return;
    }
    if( "DifferenceEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDifferenceEXT ;
      return;
    }
    if( "eDifferenceEXT" == j.get< std::string >() ) {
      p = BlendOp :: eDifferenceEXT ;
      return;
    }
    if( "VK_BLEND_OP_DIFFERENCE_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eDifferenceEXT ;
      return;
    }
    if( "ExclusionEXT" == j.get< std::string >() ) {
      p = BlendOp :: eExclusionEXT ;
      return;
    }
    if( "eExclusionEXT" == j.get< std::string >() ) {
      p = BlendOp :: eExclusionEXT ;
      return;
    }
    if( "VK_BLEND_OP_EXCLUSION_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eExclusionEXT ;
      return;
    }
    if( "InvertEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertEXT ;
      return;
    }
    if( "eInvertEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertEXT ;
      return;
    }
    if( "VK_BLEND_OP_INVERT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertEXT ;
      return;
    }
    if( "InvertRgbEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertRgbEXT ;
      return;
    }
    if( "eInvertRgbEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertRgbEXT ;
      return;
    }
    if( "VK_BLEND_OP_INVERT_RGB_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertRgbEXT ;
      return;
    }
    if( "LineardodgeEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLineardodgeEXT ;
      return;
    }
    if( "eLineardodgeEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLineardodgeEXT ;
      return;
    }
    if( "VK_BLEND_OP_LINEARDODGE_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eLineardodgeEXT ;
      return;
    }
    if( "LinearburnEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearburnEXT ;
      return;
    }
    if( "eLinearburnEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearburnEXT ;
      return;
    }
    if( "VK_BLEND_OP_LINEARBURN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearburnEXT ;
      return;
    }
    if( "VividlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eVividlightEXT ;
      return;
    }
    if( "eVividlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eVividlightEXT ;
      return;
    }
    if( "VK_BLEND_OP_VIVIDLIGHT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eVividlightEXT ;
      return;
    }
    if( "LinearlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearlightEXT ;
      return;
    }
    if( "eLinearlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearlightEXT ;
      return;
    }
    if( "VK_BLEND_OP_LINEARLIGHT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eLinearlightEXT ;
      return;
    }
    if( "PinlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePinlightEXT ;
      return;
    }
    if( "ePinlightEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePinlightEXT ;
      return;
    }
    if( "VK_BLEND_OP_PINLIGHT_EXT" == j.get< std::string >() ) {
      p = BlendOp :: ePinlightEXT ;
      return;
    }
    if( "HardmixEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardmixEXT ;
      return;
    }
    if( "eHardmixEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardmixEXT ;
      return;
    }
    if( "VK_BLEND_OP_HARDMIX_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHardmixEXT ;
      return;
    }
    if( "HslHueEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslHueEXT ;
      return;
    }
    if( "eHslHueEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslHueEXT ;
      return;
    }
    if( "VK_BLEND_OP_HSL_HUE_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslHueEXT ;
      return;
    }
    if( "HslSaturationEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslSaturationEXT ;
      return;
    }
    if( "eHslSaturationEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslSaturationEXT ;
      return;
    }
    if( "VK_BLEND_OP_HSL_SATURATION_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslSaturationEXT ;
      return;
    }
    if( "HslColorEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslColorEXT ;
      return;
    }
    if( "eHslColorEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslColorEXT ;
      return;
    }
    if( "VK_BLEND_OP_HSL_COLOR_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslColorEXT ;
      return;
    }
    if( "HslLuminosityEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslLuminosityEXT ;
      return;
    }
    if( "eHslLuminosityEXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslLuminosityEXT ;
      return;
    }
    if( "VK_BLEND_OP_HSL_LUMINOSITY_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eHslLuminosityEXT ;
      return;
    }
    if( "PlusEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusEXT ;
      return;
    }
    if( "ePlusEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusEXT ;
      return;
    }
    if( "VK_BLEND_OP_PLUS_EXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusEXT ;
      return;
    }
    if( "PlusClampedEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedEXT ;
      return;
    }
    if( "ePlusClampedEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedEXT ;
      return;
    }
    if( "VK_BLEND_OP_PLUS_CLAMPED_EXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedEXT ;
      return;
    }
    if( "PlusClampedAlphaEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedAlphaEXT ;
      return;
    }
    if( "ePlusClampedAlphaEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedAlphaEXT ;
      return;
    }
    if( "VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusClampedAlphaEXT ;
      return;
    }
    if( "PlusDarkerEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusDarkerEXT ;
      return;
    }
    if( "ePlusDarkerEXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusDarkerEXT ;
      return;
    }
    if( "VK_BLEND_OP_PLUS_DARKER_EXT" == j.get< std::string >() ) {
      p = BlendOp :: ePlusDarkerEXT ;
      return;
    }
    if( "MinusEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusEXT ;
      return;
    }
    if( "eMinusEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusEXT ;
      return;
    }
    if( "VK_BLEND_OP_MINUS_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusEXT ;
      return;
    }
    if( "MinusClampedEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusClampedEXT ;
      return;
    }
    if( "eMinusClampedEXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusClampedEXT ;
      return;
    }
    if( "VK_BLEND_OP_MINUS_CLAMPED_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eMinusClampedEXT ;
      return;
    }
    if( "ContrastEXT" == j.get< std::string >() ) {
      p = BlendOp :: eContrastEXT ;
      return;
    }
    if( "eContrastEXT" == j.get< std::string >() ) {
      p = BlendOp :: eContrastEXT ;
      return;
    }
    if( "VK_BLEND_OP_CONTRAST_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eContrastEXT ;
      return;
    }
    if( "InvertOvgEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertOvgEXT ;
      return;
    }
    if( "eInvertOvgEXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertOvgEXT ;
      return;
    }
    if( "VK_BLEND_OP_INVERT_OVG_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eInvertOvgEXT ;
      return;
    }
    if( "RedEXT" == j.get< std::string >() ) {
      p = BlendOp :: eRedEXT ;
      return;
    }
    if( "eRedEXT" == j.get< std::string >() ) {
      p = BlendOp :: eRedEXT ;
      return;
    }
    if( "VK_BLEND_OP_RED_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eRedEXT ;
      return;
    }
    if( "GreenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eGreenEXT ;
      return;
    }
    if( "eGreenEXT" == j.get< std::string >() ) {
      p = BlendOp :: eGreenEXT ;
      return;
    }
    if( "VK_BLEND_OP_GREEN_EXT" == j.get< std::string >() ) {
      p = BlendOp :: eGreenEXT ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BlendOp" );
  }
  if( j.is_number() ) {
    p = BlendOp ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BlendOp" );
}
}
inline void from_json( const nlohmann::json &j, VkBlendOp &p ) {
  VULKAN_HPP_NAMESPACE :: BlendOp temp;
  from_json( j, temp );
  p = VkBlendOp ( temp );
}
#endif


#endif
