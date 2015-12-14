cmake_minimum_required(VERSION 2.6)

################################
# GTest
################################
enable_testing()
#find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(runUnitTests test1.cpp)
target_link_libraries(runUnitTests gtest gtest_main)

add_test(
    NAME runUnitTests
    COMMAND runUnitTests
)
	