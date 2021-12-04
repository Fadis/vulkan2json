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
#ifndef VULKAN2JSON_PIPELINEFRAGMENTSHADINGRATEENUMSTATECREATEINFONV_HPP
#define VULKAN2JSON_PIPELINEFRAGMENTSHADINGRATEENUMSTATECREATEINFONV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/FragmentShadingRateTypeNV.hpp>
#include <vulkan2json/FragmentShadingRateNV.hpp>
#include <vulkan2json/FragmentShadingRateCombinerOpKHR.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineFragmentShadingRateEnumStateCreateInfoNV &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "shadingRateType" ] = p.shadingRateType;
  j[ "shadingRate" ] = p.shadingRate;
  j[ "combinerOps" ] = nlohmann::json::array();
  std::copy( p.combinerOps.begin(), p.combinerOps.end(), std::back_inserter( j[ "combinerOps" ] ) );
}
}
inline void to_json( nlohmann::json &j, const VkPipelineFragmentShadingRateEnumStateCreateInfoNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineFragmentShadingRateEnumStateCreateInfoNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineFragmentShadingRateEnumStateCreateInfoNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PipelineFragmentShadingRateEnumStateCreateInfoNV" );
  p.shadingRateType = FragmentShadingRateTypeNV ( j[ "shadingRateType" ] );
  p.shadingRate = FragmentShadingRateNV ( j[ "shadingRate" ] );
  if( !j[ "combinerOps" ].is_array() ) throw vulkan2json::invalid_array_value( "incompatible value for PipelineFragmentShadingRateEnumStateCreateInfoNV.combinerOps" );
  if( !j[ "combinerOps" ].size() > p.combinerOps.size() ) throw vulkan2json::invalid_array_value(  "too many values in array for PipelineFragmentShadingRateEnumStateCreateInfoNV.combinerOps" );
  std::fill( p.combinerOps.begin(), p.combinerOps.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.combinerOps.begin() ) > >() );
  std::copy( j[ "combinerOps" ].begin(), j[ "combinerOps" ].end(), p.combinerOps.begin() );
}
}
inline void from_json( const nlohmann::json &j, VkPipelineFragmentShadingRateEnumStateCreateInfoNV &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineFragmentShadingRateEnumStateCreateInfoNV temp;
  from_json( j, temp );
  p = VkPipelineFragmentShadingRateEnumStateCreateInfoNV ( temp );
}


#endif
