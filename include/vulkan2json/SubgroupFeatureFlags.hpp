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
#ifndef VULKAN2JSON_SUBGROUPFEATUREFLAGS_HPP
#define VULKAN2JSON_SUBGROUPFEATUREFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_1
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SubgroupFeatureFlagBits &p ) {
  if( SubgroupFeatureFlagBits :: eBasic == p ) {
    j = "Basic";
    return;
  }
  if( SubgroupFeatureFlagBits :: eVote == p ) {
    j = "Vote";
    return;
  }
  if( SubgroupFeatureFlagBits :: eArithmetic == p ) {
    j = "Arithmetic";
    return;
  }
  if( SubgroupFeatureFlagBits :: eBallot == p ) {
    j = "Ballot";
    return;
  }
  if( SubgroupFeatureFlagBits :: eShuffle == p ) {
    j = "Shuffle";
    return;
  }
  if( SubgroupFeatureFlagBits :: eShuffleRelative == p ) {
    j = "ShuffleRelative";
    return;
  }
  if( SubgroupFeatureFlagBits :: eClustered == p ) {
    j = "Clustered";
    return;
  }
  if( SubgroupFeatureFlagBits :: eQuad == p ) {
    j = "Quad";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SubgroupFeatureFlagBits &p ) {
  if( j.is_string() ) {
    if( "Basic" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBasic ;
      return;
    }
    if( "eBasic" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBasic ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_BASIC_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBasic ;
      return;
    }
    if( "Vote" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eVote ;
      return;
    }
    if( "eVote" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eVote ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_VOTE_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eVote ;
      return;
    }
    if( "Arithmetic" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eArithmetic ;
      return;
    }
    if( "eArithmetic" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eArithmetic ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_ARITHMETIC_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eArithmetic ;
      return;
    }
    if( "Ballot" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBallot ;
      return;
    }
    if( "eBallot" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBallot ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_BALLOT_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eBallot ;
      return;
    }
    if( "Shuffle" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffle ;
      return;
    }
    if( "eShuffle" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffle ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_SHUFFLE_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffle ;
      return;
    }
    if( "ShuffleRelative" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffleRelative ;
      return;
    }
    if( "eShuffleRelative" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffleRelative ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eShuffleRelative ;
      return;
    }
    if( "Clustered" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eClustered ;
      return;
    }
    if( "eClustered" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eClustered ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_CLUSTERED_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eClustered ;
      return;
    }
    if( "Quad" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eQuad ;
      return;
    }
    if( "eQuad" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eQuad ;
      return;
    }
    if( "VK_SUBGROUP_FEATURE_QUAD_BIT" == j.get< std::string >() ) {
      p = SubgroupFeatureFlagBits :: eQuad ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SubgroupFeatureFlagBits" );
  }
  if( j.is_number() ) {
    p = SubgroupFeatureFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SubgroupFeatureFlagBits" );
}
inline void to_json( nlohmann::json &j, const SubgroupFeatureFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SubgroupFeatureFlagBits ) * 8u; ++n ) {
    if( p & SubgroupFeatureFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SubgroupFeatureFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SubgroupFeatureFlags &p ) {
  if( j.is_array() ) {
    p = SubgroupFeatureFlags ( 0 );
    for( auto &e:  j ) {
      SubgroupFeatureFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SubgroupFeatureFlags" );
}
}
#endif


#endif
