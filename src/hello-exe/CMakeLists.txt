# CMakeLists files in this project can
# refer to the root source directory of the project as  and
# to the root binary directory of the project as .
cmake_minimum_required (VERSION 2.8.11)

project (hello_world)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

add_executable(hello_world main.cpp )

# Make sure the linker can find the Lib library once it is built. 
link_directories (${LIB_BINARY_DIR}/hello-dll) 

target_link_libraries (hello_world  hello_lib)
