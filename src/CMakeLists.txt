# CMakeLists files in this project can
# refer to the root source directory of the project as  and
# to the root binary directory of the project as .
cmake_minimum_required (VERSION 2.8.11)

project (hello-world-project)

add_definitions(-std=gnu++0x)

add_subdirectory(hello-dll)
add_subdirectory(hello-exe)
#add_subdirectory(test)