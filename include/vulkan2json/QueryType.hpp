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
#ifndef VULKAN2JSON_QUERYTYPE_HPP
#define VULKAN2JSON_QUERYTYPE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 182, "Wrong VK_HEADER_VERSION!" );

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const QueryType &p ) {
  if( QueryType :: eOcclusion == p ) {
    j = "Occlusion";
    return;
  }
  if( QueryType :: ePipelineStatistics == p ) {
    j = "PipelineStatistics";
    return;
  }
  if( QueryType :: eTimestamp == p ) {
    j = "Timestamp";
    return;
  }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
  if( QueryType :: eResultStatusOnlyKHR == p ) {
    j = "ResultStatusOnlyKHR";
    return;
  }
#endif
  if( QueryType :: eTransformFeedbackStreamEXT == p ) {
    j = "TransformFeedbackStreamEXT";
    return;
  }
  if( QueryType :: ePerformanceQueryKHR == p ) {
    j = "PerformanceQueryKHR";
    return;
  }
  if( QueryType :: eAccelerationStructureCompactedSizeKHR == p ) {
    j = "AccelerationStructureCompactedSizeKHR";
    return;
  }
  if( QueryType :: eAccelerationStructureSerializationSizeKHR == p ) {
    j = "AccelerationStructureSerializationSizeKHR";
    return;
  }
  if( QueryType :: eAccelerationStructureCompactedSizeNV == p ) {
    j = "AccelerationStructureCompactedSizeNV";
    return;
  }
  if( QueryType :: ePerformanceQueryINTEL == p ) {
    j = "PerformanceQueryINTEL";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkQueryType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: QueryType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, QueryType &p ) {
  if( j.is_string() ) {
    if( "Occlusion" == j.get< std::string >() ) {
      p = QueryType :: eOcclusion ;
      return;
    }
    if( "eOcclusion" == j.get< std::string >() ) {
      p = QueryType :: eOcclusion ;
      return;
    }
    if( "VK_QUERY_TYPE_OCCLUSION" == j.get< std::string >() ) {
      p = QueryType :: eOcclusion ;
      return;
    }
    if( "PipelineStatistics" == j.get< std::string >() ) {
      p = QueryType :: ePipelineStatistics ;
      return;
    }
    if( "ePipelineStatistics" == j.get< std::string >() ) {
      p = QueryType :: ePipelineStatistics ;
      return;
    }
    if( "VK_QUERY_TYPE_PIPELINE_STATISTICS" == j.get< std::string >() ) {
      p = QueryType :: ePipelineStatistics ;
      return;
    }
    if( "Timestamp" == j.get< std::string >() ) {
      p = QueryType :: eTimestamp ;
      return;
    }
    if( "eTimestamp" == j.get< std::string >() ) {
      p = QueryType :: eTimestamp ;
      return;
    }
    if( "VK_QUERY_TYPE_TIMESTAMP" == j.get< std::string >() ) {
      p = QueryType :: eTimestamp ;
      return;
    }
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "ResultStatusOnlyKHR" == j.get< std::string >() ) {
      p = QueryType :: eResultStatusOnlyKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "eResultStatusOnlyKHR" == j.get< std::string >() ) {
      p = QueryType :: eResultStatusOnlyKHR ;
      return;
    }
#endif
#if defined( VK_ENABLE_BETA_EXTENSIONS )
    if( "VK_QUERY_TYPE_RESULT_STATUS_ONLY_KHR" == j.get< std::string >() ) {
      p = QueryType :: eResultStatusOnlyKHR ;
      return;
    }
#endif
    if( "TransformFeedbackStreamEXT" == j.get< std::string >() ) {
      p = QueryType :: eTransformFeedbackStreamEXT ;
      return;
    }
    if( "eTransformFeedbackStreamEXT" == j.get< std::string >() ) {
      p = QueryType :: eTransformFeedbackStreamEXT ;
      return;
    }
    if( "VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT" == j.get< std::string >() ) {
      p = QueryType :: eTransformFeedbackStreamEXT ;
      return;
    }
    if( "PerformanceQueryKHR" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryKHR ;
      return;
    }
    if( "ePerformanceQueryKHR" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryKHR ;
      return;
    }
    if( "VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryKHR ;
      return;
    }
    if( "AccelerationStructureCompactedSizeKHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeKHR ;
      return;
    }
    if( "eAccelerationStructureCompactedSizeKHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeKHR ;
      return;
    }
    if( "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeKHR ;
      return;
    }
    if( "AccelerationStructureSerializationSizeKHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureSerializationSizeKHR ;
      return;
    }
    if( "eAccelerationStructureSerializationSizeKHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureSerializationSizeKHR ;
      return;
    }
    if( "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureSerializationSizeKHR ;
      return;
    }
    if( "AccelerationStructureCompactedSizeNV" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeNV ;
      return;
    }
    if( "eAccelerationStructureCompactedSizeNV" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeNV ;
      return;
    }
    if( "VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV" == j.get< std::string >() ) {
      p = QueryType :: eAccelerationStructureCompactedSizeNV ;
      return;
    }
    if( "PerformanceQueryINTEL" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryINTEL ;
      return;
    }
    if( "ePerformanceQueryINTEL" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryINTEL ;
      return;
    }
    if( "VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL" == j.get< std::string >() ) {
      p = QueryType :: ePerformanceQueryINTEL ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for QueryType" );
  }
  if( j.is_number() ) {
    p = QueryType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for QueryType" );
}
}
inline void from_json( const nlohmann::json &j, VkQueryType &p ) {
  VULKAN_HPP_NAMESPACE :: QueryType temp;
  from_json( j, temp );
  p = VkQueryType ( temp );
}


#endif
