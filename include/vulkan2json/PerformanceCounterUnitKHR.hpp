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
#ifndef VULKAN2JSON_PERFORMANCECOUNTERUNITKHR_HPP
#define VULKAN2JSON_PERFORMANCECOUNTERUNITKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PerformanceCounterUnitKHR &p ) {
  if( PerformanceCounterUnitKHR :: eGeneric == p ) {
    j = "Generic";
    return;
  }
  if( PerformanceCounterUnitKHR :: ePercentage == p ) {
    j = "Percentage";
    return;
  }
  if( PerformanceCounterUnitKHR :: eNanoseconds == p ) {
    j = "Nanoseconds";
    return;
  }
  if( PerformanceCounterUnitKHR :: eBytes == p ) {
    j = "Bytes";
    return;
  }
  if( PerformanceCounterUnitKHR :: eBytesPerSecond == p ) {
    j = "BytesPerSecond";
    return;
  }
  if( PerformanceCounterUnitKHR :: eKelvin == p ) {
    j = "Kelvin";
    return;
  }
  if( PerformanceCounterUnitKHR :: eWatts == p ) {
    j = "Watts";
    return;
  }
  if( PerformanceCounterUnitKHR :: eVolts == p ) {
    j = "Volts";
    return;
  }
  if( PerformanceCounterUnitKHR :: eAmps == p ) {
    j = "Amps";
    return;
  }
  if( PerformanceCounterUnitKHR :: eHertz == p ) {
    j = "Hertz";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPerformanceCounterUnitKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PerformanceCounterUnitKHR &p ) {
  if( j.is_string() ) {
    if( "Generic" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eGeneric ;
      return;
    }
    if( "eGeneric" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eGeneric ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eGeneric ;
      return;
    }
    if( "Percentage" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: ePercentage ;
      return;
    }
    if( "ePercentage" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: ePercentage ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: ePercentage ;
      return;
    }
    if( "Nanoseconds" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eNanoseconds ;
      return;
    }
    if( "eNanoseconds" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eNanoseconds ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eNanoseconds ;
      return;
    }
    if( "Bytes" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytes ;
      return;
    }
    if( "eBytes" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytes ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytes ;
      return;
    }
    if( "BytesPerSecond" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytesPerSecond ;
      return;
    }
    if( "eBytesPerSecond" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytesPerSecond ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eBytesPerSecond ;
      return;
    }
    if( "Kelvin" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eKelvin ;
      return;
    }
    if( "eKelvin" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eKelvin ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eKelvin ;
      return;
    }
    if( "Watts" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eWatts ;
      return;
    }
    if( "eWatts" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eWatts ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eWatts ;
      return;
    }
    if( "Volts" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eVolts ;
      return;
    }
    if( "eVolts" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eVolts ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eVolts ;
      return;
    }
    if( "Amps" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eAmps ;
      return;
    }
    if( "eAmps" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eAmps ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eAmps ;
      return;
    }
    if( "Hertz" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eHertz ;
      return;
    }
    if( "eHertz" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eHertz ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterUnitKHR :: eHertz ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PerformanceCounterUnitKHR" );
  }
  if( j.is_number() ) {
    p = PerformanceCounterUnitKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PerformanceCounterUnitKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkPerformanceCounterUnitKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PerformanceCounterUnitKHR temp;
  from_json( j, temp );
  p = VkPerformanceCounterUnitKHR ( temp );
}
#endif


#endif
