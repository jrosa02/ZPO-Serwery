cmake_minimum_required(VERSION 3.23)
project(ZPO_Serwery)

set(CMAKE_CXX_STANDARD 17)

add_executable(ZPO_Serwery main.cpp P/types.hpp P/package.cpp P/package.hpp P/storage_types.cpp P/storage_types.hpp)

#add_subdirectory(tests)
include_directories(P
        )