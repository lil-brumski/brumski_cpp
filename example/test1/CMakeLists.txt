cmake_minimum_required(VERSION 3.20.3)

project(example VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(brumski_cpp)

add_executable(example src/main.cpp)

target_link_libraries(example PRIVATE brumski_cpp)

target_include_directories(example PUBLIC "${PROJECT_SOURCE_DIR}/brumski_cpp/include")