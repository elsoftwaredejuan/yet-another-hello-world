# CMakeLists files in this project can
# refer to the root source directory of the project as  and
# to the root binary directory of the project as .
cmake_minimum_required (VERSION 2.8.11)

project (hello-world-dll)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

#message( STATUS 'CMAKE_BINARY_DIR ' ${CMAKE_BINARY_DIR})

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

add_library(hello_lib SHARED foo.cpp)
