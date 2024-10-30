cmake_minimum_required(VERSION 3.30.4)

project(brumski_cpp VERSION 1.0 LANGUAGES CXX DESCRIPTION "A static C++ library for basic maths, ASCII Art and CGPA calculations.")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB ASCII_SRC src/ascii/*.cpp)

add_library(brumski_cpp STATIC 
           ${ASCII_SRC}
           src/math/area2dshapes.cpp
           src/math/derivatives.cpp
           src/math/grade_calculator.cpp
           src/math/integration.cpp
           src/school/cgpa.cpp
)

target_include_directories(brumski_cpp PUBLIC include)

set_target_properties(brumski_cpp PROPERTIES
    PREFIX "" OUTPUT_NAME "brumski_cpp"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)