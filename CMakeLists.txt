cmake_minimum_required(VERSION 3.5)

project(CppTask LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CppTask main.cpp)

install(TARGETS CppTask
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
