file( GLOB SOURCES "*.cpp" )
add_library(
  vulkan2json
  SHARED
  ${SOURCES}
)
install( TARGETS vulkan2json )
set_target_properties(
  vulkan2json
  PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION 1
)
