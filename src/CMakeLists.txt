cmake_minimum_required(VERSION 2.8.7)

project(hello_lib CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(include)

set(${PROJECT_NAME}_SRC
    hello.cpp
)

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}_SRC})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)

