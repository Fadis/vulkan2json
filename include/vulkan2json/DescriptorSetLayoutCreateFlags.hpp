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
#ifndef VULKAN2JSON_DESCRIPTORSETLAYOUTCREATEFLAGS_HPP
#define VULKAN2JSON_DESCRIPTORSETLAYOUTCREATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const DescriptorSetLayoutCreateFlagBits &p ) {
  if( DescriptorSetLayoutCreateFlagBits :: eUpdateAfterBindPool == p ) {
    j = "UpdateAfterBindPool";
    return;
  }
  if( DescriptorSetLayoutCreateFlagBits :: ePushDescriptorKHR == p ) {
    j = "PushDescriptorKHR";
    return;
  }
  if( DescriptorSetLayoutCreateFlagBits :: eHostOnlyPoolVALVE == p ) {
    j = "HostOnlyPoolVALVE";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DescriptorSetLayoutCreateFlagBits &p ) {
  if( j.is_string() ) {
    if( "UpdateAfterBindPool" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eUpdateAfterBindPool ;
      return;
    }
    if( "eUpdateAfterBindPool" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eUpdateAfterBindPool ;
      return;
    }
    if( "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eUpdateAfterBindPool ;
      return;
    }
    if( "PushDescriptorKHR" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: ePushDescriptorKHR ;
      return;
    }
    if( "ePushDescriptorKHR" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: ePushDescriptorKHR ;
      return;
    }
    if( "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: ePushDescriptorKHR ;
      return;
    }
    if( "HostOnlyPoolVALVE" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eHostOnlyPoolVALVE ;
      return;
    }
    if( "eHostOnlyPoolVALVE" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eHostOnlyPoolVALVE ;
      return;
    }
    if( "VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_VALVE" == j.get< std::string >() ) {
      p = DescriptorSetLayoutCreateFlagBits :: eHostOnlyPoolVALVE ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DescriptorSetLayoutCreateFlagBits" );
  }
  if( j.is_number() ) {
    p = DescriptorSetLayoutCreateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DescriptorSetLayoutCreateFlagBits" );
}
inline void to_json( nlohmann::json &j, const DescriptorSetLayoutCreateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DescriptorSetLayoutCreateFlagBits ) * 8u; ++n ) {
    if( p & DescriptorSetLayoutCreateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DescriptorSetLayoutCreateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DescriptorSetLayoutCreateFlags &p ) {
  if( j.is_array() ) {
    p = DescriptorSetLayoutCreateFlags ( 0 );
    for( auto &e:  j ) {
      DescriptorSetLayoutCreateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DescriptorSetLayoutCreateFlags" );
}
}
#endif


#endif
