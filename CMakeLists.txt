cmake_minimum_required(VERSION 2.8.7)

project(hello CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(include)

enable_testing()
add_subdirectory(src)
add_subdirectory(test)
