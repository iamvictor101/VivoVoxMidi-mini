cmake_minimum_required(VERSION 4.1.1)
project(VivoVoxMidi)
# C++ 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 支持多配置（Debug/Release）
if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
    set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)
endif()

# 输出目录
set(OUTPUT_DIR "${CMAKE_BINARY_DIR}/bin")
set(INT_DIR "${CMAKE_BINARY_DIR}/int")

add_subdirectory(vvmidi)
add_subdirectory(test)
