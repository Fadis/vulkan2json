cmake_minimum_required(VERSION 3.10)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
  "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")
PROJECT(
  vulkan2json
  LANGUAGES CXX
  HOMEPAGE_URL https://github.com/Fadis/vulkan2json
  DESCRIPTION "C++ library that implements functions for nlohmann::json to serialize/deserialize Vulkan objects."
  VERSION 1.2.182
)
include(CheckIncludeFiles)
include(CheckCXXSourceCompiles)
include(GNUInstallDirs)

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

set(CMAKE_CXX_FLAGS "-std=c++2a ${ADDITIONAL_COMPILER_FLAGS}")
set(CMAKE_C_FLAGS "-std=c14 ${ADDITIONAL_COMPILER_FLAGS}")
# compile option (Debug) 
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_C_FLAGS_DEBUG "-O0 -g")

# compile option (Release)
set(CMAKE_CXX_FLAGS_RELEASE "-march=native -O2")
set(CMAKE_C_FLAGS_RELEASE "-march=native -O2")

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

configure_file(vulkan2json.pc.in vulkan2json.pc @ONLY) 
install(
  FILES
  ${CMAKE_BINARY_DIR}/vulkan2json.pc
  DESTINATION
  ${CMAKE_INSTALL_FULL_LIBDIR}/pkgconfig
  PERMISSIONS
  OWNER_READ OWNER_WRITE
  GROUP_READ
  WORLD_READ
)

set( EASYPACK_VENDOR "fadis" )
set( EASYPACK_RELEASE "1" )
set( EASYPACK_MAINTAINER "Naomasa Matsubayashi <foo@exmple.com>" )
set( EASYPACK_COMPRESSION_TYPE "xz" )
set( EASYPACK_LICENSE_NAME "MIT" )
include(EasyPack)

subdirs( include src test )

