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
#ifndef VULKAN2JSON_SAMPLERREDUCTIONMODE_HPP
#define VULKAN2JSON_SAMPLERREDUCTIONMODE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_2
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SamplerReductionMode &p ) {
  if( SamplerReductionMode :: eWeightedAverage == p ) {
    j = "WeightedAverage";
    return;
  }
  if( SamplerReductionMode :: eMin == p ) {
    j = "Min";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkSamplerReductionMode &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SamplerReductionMode ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SamplerReductionMode &p ) {
  if( j.is_string() ) {
    if( "WeightedAverage" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eWeightedAverage ;
      return;
    }
    if( "eWeightedAverage" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eWeightedAverage ;
      return;
    }
    if( "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eWeightedAverage ;
      return;
    }
    if( "Min" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eMin ;
      return;
    }
    if( "eMin" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eMin ;
      return;
    }
    if( "VK_SAMPLER_REDUCTION_MODE_MIN" == j.get< std::string >() ) {
      p = SamplerReductionMode :: eMin ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SamplerReductionMode" );
  }
  if( j.is_number() ) {
    p = SamplerReductionMode ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SamplerReductionMode" );
}
}
inline void from_json( const nlohmann::json &j, VkSamplerReductionMode &p ) {
  VULKAN_HPP_NAMESPACE :: SamplerReductionMode temp;
  from_json( j, temp );
  p = VkSamplerReductionMode ( temp );
}
#endif


#endif
