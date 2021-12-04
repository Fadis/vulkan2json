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
#ifndef VULKAN2JSON_COVERAGEMODULATIONMODENV_HPP
#define VULKAN2JSON_COVERAGEMODULATIONMODENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const CoverageModulationModeNV &p ) {
  if( CoverageModulationModeNV :: eNone == p ) {
    j = "None";
    return;
  }
  if( CoverageModulationModeNV :: eRgb == p ) {
    j = "Rgb";
    return;
  }
  if( CoverageModulationModeNV :: eAlpha == p ) {
    j = "Alpha";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkCoverageModulationModeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, CoverageModulationModeNV &p ) {
  if( j.is_string() ) {
    if( "None" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eNone ;
      return;
    }
    if( "eNone" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eNone ;
      return;
    }
    if( "VK_COVERAGE_MODULATION_MODE_NONE_NV" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eNone ;
      return;
    }
    if( "Rgb" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eRgb ;
      return;
    }
    if( "eRgb" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eRgb ;
      return;
    }
    if( "VK_COVERAGE_MODULATION_MODE_RGB_NV" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eRgb ;
      return;
    }
    if( "Alpha" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eAlpha ;
      return;
    }
    if( "eAlpha" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eAlpha ;
      return;
    }
    if( "VK_COVERAGE_MODULATION_MODE_ALPHA_NV" == j.get< std::string >() ) {
      p = CoverageModulationModeNV :: eAlpha ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CoverageModulationModeNV" );
  }
  if( j.is_number() ) {
    p = CoverageModulationModeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CoverageModulationModeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkCoverageModulationModeNV &p ) {
  VULKAN_HPP_NAMESPACE :: CoverageModulationModeNV temp;
  from_json( j, temp );
  p = VkCoverageModulationModeNV ( temp );
}
#endif


#endif
