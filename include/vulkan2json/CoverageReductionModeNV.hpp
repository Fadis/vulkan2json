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
#ifndef VULKAN2JSON_COVERAGEREDUCTIONMODENV_HPP
#define VULKAN2JSON_COVERAGEREDUCTIONMODENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const CoverageReductionModeNV &p ) {
  if( CoverageReductionModeNV :: eMerge == p ) {
    j = "Merge";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkCoverageReductionModeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: CoverageReductionModeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, CoverageReductionModeNV &p ) {
  if( j.is_string() ) {
    if( "Merge" == j.get< std::string >() ) {
      p = CoverageReductionModeNV :: eMerge ;
      return;
    }
    if( "eMerge" == j.get< std::string >() ) {
      p = CoverageReductionModeNV :: eMerge ;
      return;
    }
    if( "VK_COVERAGE_REDUCTION_MODE_MERGE_NV" == j.get< std::string >() ) {
      p = CoverageReductionModeNV :: eMerge ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CoverageReductionModeNV" );
  }
  if( j.is_number() ) {
    p = CoverageReductionModeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CoverageReductionModeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkCoverageReductionModeNV &p ) {
  VULKAN_HPP_NAMESPACE :: CoverageReductionModeNV temp;
  from_json( j, temp );
  p = VkCoverageReductionModeNV ( temp );
}
#endif


#endif
