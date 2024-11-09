cmake_minimum_required(VERSION 3.20.3)

project(brumski_cpp VERSION 1.0.1 LANGUAGES CXX DESCRIPTION "A static C++ library for basic maths, ASCII Art and CGPA calculations.")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
 
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
   message(STATUS "==========Building with GNU Compiler==========")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
   message(STATUS "==========Building with Clang Compiler==========")
else()
   message(STATUS "==========Building with Unknown Compiler==========")
endif()

configure_file(brumski_cpp.h.in ${CMAKE_SOURCE_DIR}/brumski_cpp/include/brumski_cpp/brumski_cpp.h)

file(GLOB ASCII_SRC src/ascii/*.cpp)

add_library(brumski_cpp STATIC 
           ${ASCII_SRC}
           src/math/area2dshapes.cpp
           src/math/grade_calculator.cpp           
           src/school/cgpa.cpp
           src/brumski_cpp_VERSION.cpp
)

target_include_directories(brumski_cpp PUBLIC include)

option(USE_DERIV_INT "To use math/derivatives." OFF)

if(USE_DERIV_INT)
  message(STATUS "==========Adding derivative and integration libraries to build==========")
  target_compile_definitions(brumski_cpp PUBLIC "USE_DERIV_INT")
  add_library(DerivInt STATIC src/math/derivatives.cpp src/math/integration.cpp)
  target_include_directories(DerivInt PUBLIC include)
  target_link_libraries(brumski_cpp PRIVATE DerivInt)
else()
  message(STATUS "==========Building without derivative and integration libraries==========")
endif()