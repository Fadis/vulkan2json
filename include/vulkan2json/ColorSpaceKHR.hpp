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
#ifndef VULKAN2JSON_COLORSPACEKHR_HPP
#define VULKAN2JSON_COLORSPACEKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SURFACE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ColorSpaceKHR &p ) {
  if( ColorSpaceKHR :: eSrgbNonlinear == p ) {
    j = "SrgbNonlinear";
    return;
  }
  if( ColorSpaceKHR :: eDisplayP3NonlinearEXT == p ) {
    j = "DisplayP3NonlinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eExtendedSrgbLinearEXT == p ) {
    j = "ExtendedSrgbLinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eDisplayP3LinearEXT == p ) {
    j = "DisplayP3LinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eDciP3NonlinearEXT == p ) {
    j = "DciP3NonlinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eBt709LinearEXT == p ) {
    j = "Bt709LinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eBt709NonlinearEXT == p ) {
    j = "Bt709NonlinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eBt2020LinearEXT == p ) {
    j = "Bt2020LinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eHdr10St2084EXT == p ) {
    j = "Hdr10St2084EXT";
    return;
  }
  if( ColorSpaceKHR :: eDolbyvisionEXT == p ) {
    j = "DolbyvisionEXT";
    return;
  }
  if( ColorSpaceKHR :: eHdr10HlgEXT == p ) {
    j = "Hdr10HlgEXT";
    return;
  }
  if( ColorSpaceKHR :: eAdobergbLinearEXT == p ) {
    j = "AdobergbLinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eAdobergbNonlinearEXT == p ) {
    j = "AdobergbNonlinearEXT";
    return;
  }
  if( ColorSpaceKHR :: ePassThroughEXT == p ) {
    j = "PassThroughEXT";
    return;
  }
  if( ColorSpaceKHR :: eExtendedSrgbNonlinearEXT == p ) {
    j = "ExtendedSrgbNonlinearEXT";
    return;
  }
  if( ColorSpaceKHR :: eDisplayNativeAMD == p ) {
    j = "DisplayNativeAMD";
    return;
  }
  if( ColorSpaceKHR :: eVkColorspaceSrgbNonlinear == p ) {
    j = "VkColorspaceSrgbNonlinear";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkColorSpaceKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ColorSpaceKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ColorSpaceKHR &p ) {
  if( j.is_string() ) {
    if( "SrgbNonlinear" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eSrgbNonlinear ;
      return;
    }
    if( "eSrgbNonlinear" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eSrgbNonlinear ;
      return;
    }
    if( "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eSrgbNonlinear ;
      return;
    }
    if( "DisplayP3NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3NonlinearEXT ;
      return;
    }
    if( "eDisplayP3NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3NonlinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3NonlinearEXT ;
      return;
    }
    if( "ExtendedSrgbLinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbLinearEXT ;
      return;
    }
    if( "eExtendedSrgbLinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbLinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbLinearEXT ;
      return;
    }
    if( "DisplayP3LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3LinearEXT ;
      return;
    }
    if( "eDisplayP3LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3LinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayP3LinearEXT ;
      return;
    }
    if( "DciP3NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDciP3NonlinearEXT ;
      return;
    }
    if( "eDciP3NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDciP3NonlinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDciP3NonlinearEXT ;
      return;
    }
    if( "Bt709LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709LinearEXT ;
      return;
    }
    if( "eBt709LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709LinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_BT709_LINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709LinearEXT ;
      return;
    }
    if( "Bt709NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709NonlinearEXT ;
      return;
    }
    if( "eBt709NonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709NonlinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_BT709_NONLINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt709NonlinearEXT ;
      return;
    }
    if( "Bt2020LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt2020LinearEXT ;
      return;
    }
    if( "eBt2020LinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt2020LinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_BT2020_LINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eBt2020LinearEXT ;
      return;
    }
    if( "Hdr10St2084EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10St2084EXT ;
      return;
    }
    if( "eHdr10St2084EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10St2084EXT ;
      return;
    }
    if( "VK_COLOR_SPACE_HDR10_ST2084_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10St2084EXT ;
      return;
    }
    if( "DolbyvisionEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDolbyvisionEXT ;
      return;
    }
    if( "eDolbyvisionEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDolbyvisionEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_DOLBYVISION_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDolbyvisionEXT ;
      return;
    }
    if( "Hdr10HlgEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10HlgEXT ;
      return;
    }
    if( "eHdr10HlgEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10HlgEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_HDR10_HLG_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eHdr10HlgEXT ;
      return;
    }
    if( "AdobergbLinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbLinearEXT ;
      return;
    }
    if( "eAdobergbLinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbLinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbLinearEXT ;
      return;
    }
    if( "AdobergbNonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbNonlinearEXT ;
      return;
    }
    if( "eAdobergbNonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbNonlinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eAdobergbNonlinearEXT ;
      return;
    }
    if( "PassThroughEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: ePassThroughEXT ;
      return;
    }
    if( "ePassThroughEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: ePassThroughEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_PASS_THROUGH_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: ePassThroughEXT ;
      return;
    }
    if( "ExtendedSrgbNonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbNonlinearEXT ;
      return;
    }
    if( "eExtendedSrgbNonlinearEXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbNonlinearEXT ;
      return;
    }
    if( "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eExtendedSrgbNonlinearEXT ;
      return;
    }
    if( "DisplayNativeAMD" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayNativeAMD ;
      return;
    }
    if( "eDisplayNativeAMD" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayNativeAMD ;
      return;
    }
    if( "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eDisplayNativeAMD ;
      return;
    }
    if( "VkColorspaceSrgbNonlinear" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eVkColorspaceSrgbNonlinear ;
      return;
    }
    if( "eVkColorspaceSrgbNonlinear" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eVkColorspaceSrgbNonlinear ;
      return;
    }
    if( "VK_COLORSPACE_SRGB_NONLINEAR_KHR" == j.get< std::string >() ) {
      p = ColorSpaceKHR :: eVkColorspaceSrgbNonlinear ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ColorSpaceKHR" );
  }
  if( j.is_number() ) {
    p = ColorSpaceKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ColorSpaceKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkColorSpaceKHR &p ) {
  VULKAN_HPP_NAMESPACE :: ColorSpaceKHR temp;
  from_json( j, temp );
  p = VkColorSpaceKHR ( temp );
}
#endif


#endif
