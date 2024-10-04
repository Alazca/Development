cmake_minimum_required(VERSION 3.20)
project(a)
set(CMAKE_C_CXX_STANDARD 17)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -pthread -Wall")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -pthread -O3 -Wall")
include_directories(HEADER_FILES)
file(GLOB MAIN
    "*.cpp"
    "*.hpp"
)
add_executable(${PROJECT_NAME} ${MAIN})

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()
