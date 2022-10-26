cmake_minimum_required(VERSION 3.10)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(sources main.cpp first_test.cpp)

add_executable(test ${sources})

target_include_directories(test PRIVATE ${PROJECT_SOURCE_DIR}/test/mocks_inc)
target_link_libraries(test gmock)
target_link_libraries(test gtest)
target_link_libraries(test gtest_main)
target_link_libraries(test pthread)

