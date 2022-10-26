cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD_17)
set(CMAKE_CXX_REQUIRED ON)

project(Application)

set(sources main.cpp ${PROJECT_SOURCE_DIR}/src/first.cpp)

add_executable(Application ${sources})
target_include_directories(Application PRIVATE ${PROJECT_SOURCE_DIR}/inc)

add_subdirectory(test)
