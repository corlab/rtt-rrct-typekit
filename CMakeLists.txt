cmake_minimum_required(VERSION 2.8.3)

project(rst-rt_typekit CXX)

set(LIBRARY_NAME ${CMAKE_PROJECT_NAME})

# Dependencies

find_package(rst-rt REQUIRED)

include_directories(${RST-RT_INCLUDE_DIRS})

link_directories(${RST-RT_LIBRARY_DIRS})

find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

# Sub-directory

add_subdirectory(src)
