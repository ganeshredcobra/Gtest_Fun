cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD_17)
set(CMAKE_CXX_REQUIRED ON)

project(Application)

add_executable(Application main.cpp src/first.cpp)
target_include_directories(Application PUBLIC inc)

add_subdirectory(test)

