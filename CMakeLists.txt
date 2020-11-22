cmake_minimum_required(VERSION 3.2)

project(JET)

set(CMAKE_CXX STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(JET_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(JET_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(JET_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(JET_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/Foundations/Assertion)

include_directories(${JET_INSTALL_INCLUDE_DIR})
include_directories(${JET_HEADERS_DIR})

add_subdirectory(src)
