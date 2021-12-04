cmake_minimum_required(VERSION 3.10)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")
PROJECT(vulkan2json)
include(CheckIncludeFiles)
include(CheckCXXSourceCompiles)
enable_testing()

# build type
set(CMAKE_BUILD_TYPE Debug)

set( ADDITIONAL_COMPILE_FLAGS )
option( ENABLE_ADDRSAN "build with address sanitizer" OFF )
if( ENABLE_ADDRSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=address" )
  if( CMAKE_CXX_COMPILER_ID STREQUAL "GNU" )
    list(APPEND ADDITIONAL_COMPILE_FLAGS "-static-libasan" )
  endif()
endif()
option( ENABLE_PCOMPSAN "build with pointer compare sanitizer" OFF )
if( ENABLE_PCOMPSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=pointer-compare" )
endif()
option( ENABLE_PSUBSAN "build with pointer subtract sanitizer" OFF )
if( ENABLE_PSUBSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=pointer-subtract" )
endif()
option( ENABLE_THREADSAN "build with thread sanitizer" OFF )
if( ENABLE_THREADSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=thread" )
endif()
option( ENABLE_LEAKSAN "build with leak sanitizer" OFF )
if( ENABLE_LEAKSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=leak" )
endif()
option( ENABLE_UBSAN "build with undefined behavior sanitizer" OFF )
if( ENABLE_UBSAN )
  list(APPEND ADDITIONAL_COMPILE_FLAGS "-fsanitize=undefined" )
endif()
option( ENABLE_WERROR "build with -Werror" ON )
list( APPEND ADDITIONAL_COMPILE_FLAGS "-Wall" )
if( ENABLE_WERROR )
  list( APPEND ADDITIONAL_COMPILE_FLAGS "-Werror" )
endif()

# compile option (Debug) 
set(CMAKE_CXX_FLAGS_DEBUG "-std=c++2a -O0 -g ${ADDITIONAL_COMPILER_FLAGS}")
set(CMAKE_C_FLAGS_DEBUG "-std=c14 -O0 -g ${ADDITIONAL_COMPILER_FLAGS}")

# compile option (Release)
set(CMAKE_CXX_FLAGS_RELEASE "-std=c++2a -march=native -O2 ${ADDITIONAL_COMPILER_FLAGS}")
set(CMAKE_C_FLAGS_RELEASE "-std=c14 -march=native -O2 ${ADDITIONAL_COMPILER_FLAGS}")

find_package(Vulkan REQUIRED)
find_package(JSON REQUIRED)

INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_BINARY_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/external/VulkanMemoryAllocator/include
  ${JSON_INCLUDE_DIRS}
  ${Vulkan_INCLUDE_DIRS}
)
link_directories(
  ${Vulkan_LIBRARY_DIRS}
)

add_definitions( -DVK_ENABLE_BETA_EXTENSIONS )

subdirs( include src test )

