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
#ifndef VULKAN2JSON_SHADINGRATEPALETTEENTRYNV_HPP
#define VULKAN2JSON_SHADINGRATEPALETTEENTRYNV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ShadingRatePaletteEntryNV &p ) {
  if( ShadingRatePaletteEntryNV :: eNoInvocations == p ) {
    j = "NoInvocations";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e16InvocationsPerPixel == p ) {
    j = "16InvocationsPerPixel";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e8InvocationsPerPixel == p ) {
    j = "8InvocationsPerPixel";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e4InvocationsPerPixel == p ) {
    j = "4InvocationsPerPixel";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e2InvocationsPerPixel == p ) {
    j = "2InvocationsPerPixel";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPerPixel == p ) {
    j = "1InvocationPerPixel";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPer2X1Pixels == p ) {
    j = "1InvocationPer2X1Pixels";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPer1X2Pixels == p ) {
    j = "1InvocationPer1X2Pixels";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPer2X2Pixels == p ) {
    j = "1InvocationPer2X2Pixels";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPer4X2Pixels == p ) {
    j = "1InvocationPer4X2Pixels";
    return;
  }
  if( ShadingRatePaletteEntryNV :: e1InvocationPer2X4Pixels == p ) {
    j = "1InvocationPer2X4Pixels";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkShadingRatePaletteEntryNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ShadingRatePaletteEntryNV &p ) {
  if( j.is_string() ) {
    if( "NoInvocations" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: eNoInvocations ;
      return;
    }
    if( "eNoInvocations" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: eNoInvocations ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: eNoInvocations ;
      return;
    }
    if( "16InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e16InvocationsPerPixel ;
      return;
    }
    if( "e16InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e16InvocationsPerPixel ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e16InvocationsPerPixel ;
      return;
    }
    if( "8InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e8InvocationsPerPixel ;
      return;
    }
    if( "e8InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e8InvocationsPerPixel ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e8InvocationsPerPixel ;
      return;
    }
    if( "4InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e4InvocationsPerPixel ;
      return;
    }
    if( "e4InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e4InvocationsPerPixel ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e4InvocationsPerPixel ;
      return;
    }
    if( "2InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e2InvocationsPerPixel ;
      return;
    }
    if( "e2InvocationsPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e2InvocationsPerPixel ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e2InvocationsPerPixel ;
      return;
    }
    if( "1InvocationPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPerPixel ;
      return;
    }
    if( "e1InvocationPerPixel" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPerPixel ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPerPixel ;
      return;
    }
    if( "1InvocationPer2X1Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X1Pixels ;
      return;
    }
    if( "e1InvocationPer2X1Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X1Pixels ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X1Pixels ;
      return;
    }
    if( "1InvocationPer1X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer1X2Pixels ;
      return;
    }
    if( "e1InvocationPer1X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer1X2Pixels ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer1X2Pixels ;
      return;
    }
    if( "1InvocationPer2X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X2Pixels ;
      return;
    }
    if( "e1InvocationPer2X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X2Pixels ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X2Pixels ;
      return;
    }
    if( "1InvocationPer4X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer4X2Pixels ;
      return;
    }
    if( "e1InvocationPer4X2Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer4X2Pixels ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer4X2Pixels ;
      return;
    }
    if( "1InvocationPer2X4Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X4Pixels ;
      return;
    }
    if( "e1InvocationPer2X4Pixels" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X4Pixels ;
      return;
    }
    if( "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV" == j.get< std::string >() ) {
      p = ShadingRatePaletteEntryNV :: e1InvocationPer2X4Pixels ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ShadingRatePaletteEntryNV" );
  }
  if( j.is_number() ) {
    p = ShadingRatePaletteEntryNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ShadingRatePaletteEntryNV" );
}
}
inline void from_json( const nlohmann::json &j, VkShadingRatePaletteEntryNV &p ) {
  VULKAN_HPP_NAMESPACE :: ShadingRatePaletteEntryNV temp;
  from_json( j, temp );
  p = VkShadingRatePaletteEntryNV ( temp );
}
#endif


#endif
