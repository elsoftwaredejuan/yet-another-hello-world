cmake_minimum_required(VERSION 2.6)
project(basic_test)

################################
# GTest
################################
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(foo test1.cpp)
target_link_libraries(foo ${GTEST_BOTH_LIBRARIES})

add_test(AllTestsInFoo foo)