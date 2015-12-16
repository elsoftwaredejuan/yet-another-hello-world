cmake_minimum_required(VERSION 2.6)

################################
# GTest
################################
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(runUnitTests test1.cpp)

target_link_libraries(runUnitTests ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})


add_test(
    NAME runUnitTests
    COMMAND runUnitTests
)