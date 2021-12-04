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
#ifndef VULKAN2JSON_LAYERPROPERTIES_HPP
#define VULKAN2JSON_LAYERPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const LayerProperties &p ) {
  j = nlohmann::json::object();
  j[ "layerName" ] = std::string( p.layerName.begin(), std::find( p.layerName.begin(), p.layerName.end(), '\0' ) );
  j[ "specVersion" ] = p.specVersion;
  j[ "implementationVersion" ] = p.implementationVersion;
  j[ "description" ] = std::string( p.description.begin(), std::find( p.description.begin(), p.description.end(), '\0' ) );
}
}
inline void to_json( nlohmann::json &j, const VkLayerProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: LayerProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, LayerProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for LayerProperties" );
  {
    std::string s = j[ "layerName" ];
    if( !p.layerName.empty() ) {
      p.layerName[ p.layerName.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.layerName.size() - 1u ) ), p.layerName.begin() );
    }
  }
  p.specVersion = j[ "specVersion" ];
  p.implementationVersion = j[ "implementationVersion" ];
  {
    std::string s = j[ "description" ];
    if( !p.description.empty() ) {
      p.description[ p.description.size() - 1u ] = '\0';
      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.description.size() - 1u ) ), p.description.begin() );
    }
  }
}
}
inline void from_json( const nlohmann::json &j, VkLayerProperties &p ) {
  VULKAN_HPP_NAMESPACE :: LayerProperties temp;
  from_json( j, temp );
  p = VkLayerProperties ( temp );
}


#endif
