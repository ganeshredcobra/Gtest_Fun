cmake_minimum_required(VERSION 3.10)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(sources main.cpp first_test.cpp ${PROJECT_SOURCE_DIR}/src/first.cpp)

add_executable(test ${sources})

target_include_directories(test PUBLIC ${PROJECT_SOURCE_DIR}/inc)
#target_link_libraries(test gmock)
target_link_libraries(test gtest)
target_link_libraries(test gtest_main)
target_link_libraries(test pthread)
