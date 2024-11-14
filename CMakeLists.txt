# CMakeLists.txt for gcdtest
# 14-11-2018 by madpl

cmake_minimum_required(VERSION 3.10)

project(gcdtest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Os -march=native -std=c++17")
message("-- compiler flags:" ${CMAKE_CXX_FLAGS})

file(GLOB SOURCES ./source/*)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})
