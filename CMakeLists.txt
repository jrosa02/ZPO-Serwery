cmake_minimum_required(VERSION 3.23)
project(ZPO_Serwery)

set(CMAKE_CXX_STANDARD 17)

add_executable(ZPO_Serwery main.cpp P/types.hpp P/package.cpp P/package.hpp P/storage_types.cpp P/storage_types.hpp tests/P_tests/PackageQueue_test.cpp)

add_subdirectory(tests)
include_directories(include                     #nasz folder include
        tests/lib/googlemock/include    #foldery google test
        tests/lib/googletest/include)