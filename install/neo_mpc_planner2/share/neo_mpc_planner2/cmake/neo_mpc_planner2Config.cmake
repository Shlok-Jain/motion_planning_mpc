# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_neo_mpc_planner2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED neo_mpc_planner2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(neo_mpc_planner2_FOUND FALSE)
  elseif(NOT neo_mpc_planner2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(neo_mpc_planner2_FOUND FALSE)
  endif()
  return()
endif()
set(_neo_mpc_planner2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT neo_mpc_planner2_FIND_QUIETLY)
  message(STATUS "Found neo_mpc_planner2: 1.0.0 (${neo_mpc_planner2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'neo_mpc_planner2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${neo_mpc_planner2_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(neo_mpc_planner2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${neo_mpc_planner2_DIR}/${_extra}")
endforeach()
