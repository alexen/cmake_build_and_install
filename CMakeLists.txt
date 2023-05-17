cmake_minimum_required(VERSION 3.22)

project(cmake_build_and_install)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED YES)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src)