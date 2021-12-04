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
#ifndef VULKAN2JSON_IMAGECREATEFLAGS_HPP
#define VULKAN2JSON_IMAGECREATEFLAGS_HPP

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
inline void to_json( nlohmann::json &j, const ImageCreateFlagBits &p ) {
  if( ImageCreateFlagBits :: eSparseBinding == p ) {
    j = "SparseBinding";
    return;
  }
  if( ImageCreateFlagBits :: eSparseResidency == p ) {
    j = "SparseResidency";
    return;
  }
  if( ImageCreateFlagBits :: eSparseAliased == p ) {
    j = "SparseAliased";
    return;
  }
  if( ImageCreateFlagBits :: eMutableFormat == p ) {
    j = "MutableFormat";
    return;
  }
  if( ImageCreateFlagBits :: eCubeCompatible == p ) {
    j = "CubeCompatible";
    return;
  }
  if( ImageCreateFlagBits :: eAlias == p ) {
    j = "Alias";
    return;
  }
  if( ImageCreateFlagBits :: eSplitInstanceBindRegions == p ) {
    j = "SplitInstanceBindRegions";
    return;
  }
  if( ImageCreateFlagBits :: e2DArrayCompatible == p ) {
    j = "2DArrayCompatible";
    return;
  }
  if( ImageCreateFlagBits :: eBlockTexelViewCompatible == p ) {
    j = "BlockTexelViewCompatible";
    return;
  }
  if( ImageCreateFlagBits :: eExtendedUsage == p ) {
    j = "ExtendedUsage";
    return;
  }
  if( ImageCreateFlagBits :: eProtected == p ) {
    j = "Protected";
    return;
  }
  if( ImageCreateFlagBits :: eDisjoint == p ) {
    j = "Disjoint";
    return;
  }
  if( ImageCreateFlagBits :: eCornerSampledNV == p ) {
    j = "CornerSampledNV";
    return;
  }
  if( ImageCreateFlagBits :: eSampleLocationsCompatibleDepthEXT == p ) {
    j = "SampleLocationsCompatibleDepthEXT";
    return;
  }
  if( ImageCreateFlagBits :: eSubsampledEXT == p ) {
    j = "SubsampledEXT";
    return;
  }
  if( ImageCreateFlagBits :: e2DArrayCompatibleKHR == p ) {
    j = "2DArrayCompatibleKHR";
    return;
  }
  if( ImageCreateFlagBits :: eAliasKHR == p ) {
    j = "AliasKHR";
    return;
  }
  if( ImageCreateFlagBits :: eBlockTexelViewCompatibleKHR == p ) {
    j = "BlockTexelViewCompatibleKHR";
    return;
  }
  if( ImageCreateFlagBits :: eDisjointKHR == p ) {
    j = "DisjointKHR";
    return;
  }
  if( ImageCreateFlagBits :: eExtendedUsageKHR == p ) {
    j = "ExtendedUsageKHR";
    return;
  }
}
inline void from_json( const nlohmann::json &j, ImageCreateFlagBits &p ) {
  if( j.is_string() ) {
    if( "SparseBinding" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "eSparseBinding" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "VK_IMAGE_CREATE_SPARSE_BINDING_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseBinding ;
      return;
    }
    if( "SparseResidency" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "eSparseResidency" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseResidency ;
      return;
    }
    if( "SparseAliased" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "eSparseAliased" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "VK_IMAGE_CREATE_SPARSE_ALIASED_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSparseAliased ;
      return;
    }
    if( "MutableFormat" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eMutableFormat ;
      return;
    }
    if( "eMutableFormat" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eMutableFormat ;
      return;
    }
    if( "VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eMutableFormat ;
      return;
    }
    if( "CubeCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCubeCompatible ;
      return;
    }
    if( "eCubeCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCubeCompatible ;
      return;
    }
    if( "VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCubeCompatible ;
      return;
    }
    if( "Alias" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAlias ;
      return;
    }
    if( "eAlias" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAlias ;
      return;
    }
    if( "VK_IMAGE_CREATE_ALIAS_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAlias ;
      return;
    }
    if( "SplitInstanceBindRegions" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSplitInstanceBindRegions ;
      return;
    }
    if( "eSplitInstanceBindRegions" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSplitInstanceBindRegions ;
      return;
    }
    if( "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSplitInstanceBindRegions ;
      return;
    }
    if( "2DArrayCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatible ;
      return;
    }
    if( "e2DArrayCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatible ;
      return;
    }
    if( "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatible ;
      return;
    }
    if( "BlockTexelViewCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatible ;
      return;
    }
    if( "eBlockTexelViewCompatible" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatible ;
      return;
    }
    if( "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatible ;
      return;
    }
    if( "ExtendedUsage" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsage ;
      return;
    }
    if( "eExtendedUsage" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsage ;
      return;
    }
    if( "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsage ;
      return;
    }
    if( "Protected" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eProtected ;
      return;
    }
    if( "eProtected" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eProtected ;
      return;
    }
    if( "VK_IMAGE_CREATE_PROTECTED_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eProtected ;
      return;
    }
    if( "Disjoint" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjoint ;
      return;
    }
    if( "eDisjoint" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjoint ;
      return;
    }
    if( "VK_IMAGE_CREATE_DISJOINT_BIT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjoint ;
      return;
    }
    if( "CornerSampledNV" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCornerSampledNV ;
      return;
    }
    if( "eCornerSampledNV" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCornerSampledNV ;
      return;
    }
    if( "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eCornerSampledNV ;
      return;
    }
    if( "SampleLocationsCompatibleDepthEXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSampleLocationsCompatibleDepthEXT ;
      return;
    }
    if( "eSampleLocationsCompatibleDepthEXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSampleLocationsCompatibleDepthEXT ;
      return;
    }
    if( "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSampleLocationsCompatibleDepthEXT ;
      return;
    }
    if( "SubsampledEXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSubsampledEXT ;
      return;
    }
    if( "eSubsampledEXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSubsampledEXT ;
      return;
    }
    if( "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eSubsampledEXT ;
      return;
    }
    if( "2DArrayCompatibleKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatibleKHR ;
      return;
    }
    if( "e2DArrayCompatibleKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatibleKHR ;
      return;
    }
    if( "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: e2DArrayCompatibleKHR ;
      return;
    }
    if( "AliasKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAliasKHR ;
      return;
    }
    if( "eAliasKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAliasKHR ;
      return;
    }
    if( "VK_IMAGE_CREATE_ALIAS_BIT_KHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eAliasKHR ;
      return;
    }
    if( "BlockTexelViewCompatibleKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatibleKHR ;
      return;
    }
    if( "eBlockTexelViewCompatibleKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatibleKHR ;
      return;
    }
    if( "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eBlockTexelViewCompatibleKHR ;
      return;
    }
    if( "DisjointKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjointKHR ;
      return;
    }
    if( "eDisjointKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjointKHR ;
      return;
    }
    if( "VK_IMAGE_CREATE_DISJOINT_BIT_KHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eDisjointKHR ;
      return;
    }
    if( "ExtendedUsageKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsageKHR ;
      return;
    }
    if( "eExtendedUsageKHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsageKHR ;
      return;
    }
    if( "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR" == j.get< std::string >() ) {
      p = ImageCreateFlagBits :: eExtendedUsageKHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageCreateFlagBits" );
  }
  if( j.is_number() ) {
    p = ImageCreateFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageCreateFlagBits" );
}
inline void to_json( nlohmann::json &j, const ImageCreateFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( ImageCreateFlagBits ) * 8u; ++n ) {
    if( p & ImageCreateFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, ImageCreateFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, ImageCreateFlags &p ) {
  if( j.is_array() ) {
    p = ImageCreateFlags ( 0 );
    for( auto &e:  j ) {
      ImageCreateFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for ImageCreateFlags" );
}
}
#endif


#endif
