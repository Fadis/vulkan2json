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
#ifndef VULKAN2JSON_IMAGEASPECTFLAGS_HPP
#define VULKAN2JSON_IMAGEASPECTFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ImageAspectFlagBits &p ) {
  if( ImageAspectFlagBits :: eColor == p ) {
    j = "Color";
    return;
  }
  if( ImageAspectFlagBits :: eDepth == p ) {
    j = "Depth";
    return;
  }
  if( ImageAspectFlagBits :: eStencil == p ) {
    j = "Stencil";
    return;
  }
  if( ImageAspectFlagBits :: eMetadata == p ) {
    j = "Metadata";
    return;
  }
  if( ImageAspectFlagBits :: ePlane0 == p ) {
    j = "Plane0";
    return;
  }
  if( ImageAspectFlagBits :: ePlane1 == p ) {
    j = "Plane1";
    return;
  }
  if( ImageAspectFlagBits :: ePlane2 == p ) {
    j = "Plane2";
    return;
  }
  if( ImageAspectFlagBits :: eMemoryPlane0EXT == p ) {
    j = "MemoryPlane0EXT";
    return;
  }
  if( ImageAspectFlagBits :: eMemoryPlane1EXT == p ) {
    j = "MemoryPlane1EXT";
    return;
  }
  if( ImageAspectFlagBits :: eMemoryPlane2EXT == p ) {
    j = "MemoryPlane2EXT";
    return;
  }
  if( ImageAspectFlagBits :: eMemoryPlane3EXT == p ) {
    j = "MemoryPlane3EXT";
    return;
  }
  if( ImageAspectFlagBits :: ePlane0KHR == p ) {
    j = "Plane0KHR";
    return;
  }
  if( ImageAspectFlagBits :: ePlane1KHR == p ) {
    j = "Plane1KHR";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ImageAspectFlagBits &p ) {
  if( j.is_string() ) {
    if( "Color" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eColor ;
      return;
    }
    if( "eColor" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eColor ;
      return;
    }
    if( "VK_IMAGE_ASPECT_COLOR_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eColor ;
      return;
    }
    if( "Depth" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eDepth ;
      return;
    }
    if( "eDepth" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eDepth ;
      return;
    }
    if( "VK_IMAGE_ASPECT_DEPTH_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eDepth ;
      return;
    }
    if( "Stencil" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eStencil ;
      return;
    }
    if( "eStencil" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eStencil ;
      return;
    }
    if( "VK_IMAGE_ASPECT_STENCIL_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eStencil ;
      return;
    }
    if( "Metadata" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMetadata ;
      return;
    }
    if( "eMetadata" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMetadata ;
      return;
    }
    if( "VK_IMAGE_ASPECT_METADATA_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMetadata ;
      return;
    }
    if( "Plane0" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0 ;
      return;
    }
    if( "ePlane0" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0 ;
      return;
    }
    if( "VK_IMAGE_ASPECT_PLANE_0_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0 ;
      return;
    }
    if( "Plane1" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1 ;
      return;
    }
    if( "ePlane1" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1 ;
      return;
    }
    if( "VK_IMAGE_ASPECT_PLANE_1_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1 ;
      return;
    }
    if( "Plane2" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane2 ;
      return;
    }
    if( "ePlane2" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane2 ;
      return;
    }
    if( "VK_IMAGE_ASPECT_PLANE_2_BIT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane2 ;
      return;
    }
    if( "MemoryPlane0EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane0EXT ;
      return;
    }
    if( "eMemoryPlane0EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane0EXT ;
      return;
    }
    if( "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane0EXT ;
      return;
    }
    if( "MemoryPlane1EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane1EXT ;
      return;
    }
    if( "eMemoryPlane1EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane1EXT ;
      return;
    }
    if( "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane1EXT ;
      return;
    }
    if( "MemoryPlane2EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane2EXT ;
      return;
    }
    if( "eMemoryPlane2EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane2EXT ;
      return;
    }
    if( "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane2EXT ;
      return;
    }
    if( "MemoryPlane3EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane3EXT ;
      return;
    }
    if( "eMemoryPlane3EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane3EXT ;
      return;
    }
    if( "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: eMemoryPlane3EXT ;
      return;
    }
    if( "Plane0KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0KHR ;
      return;
    }
    if( "ePlane0KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0KHR ;
      return;
    }
    if( "VK_IMAGE_ASPECT_PLANE_0_BIT_KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane0KHR ;
      return;
    }
    if( "Plane1KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1KHR ;
      return;
    }
    if( "ePlane1KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1KHR ;
      return;
    }
    if( "VK_IMAGE_ASPECT_PLANE_1_BIT_KHR" == j.get< std::string >() ) {
      p = ImageAspectFlagBits :: ePlane1KHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageAspectFlagBits" );
  }
  if( j.is_number() ) {
    p = ImageAspectFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageAspectFlagBits" );
}
inline void to_json( nlohmann::json &j, const ImageAspectFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ImageAspectFlagBits ) * 8u; ++n ) {
    if( p & ImageAspectFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ImageAspectFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ImageAspectFlags &p ) {
  if( j.is_array() ) {
    p = ImageAspectFlags ( 0 );
    for( auto &e:  j ) {
      ImageAspectFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ImageAspectFlags" );
}
}
#endif


#endif
