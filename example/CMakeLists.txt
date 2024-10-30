cmake_minimum_required(VERSION 3.30.4)

project(example VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the path to your static library
set(BRUMSKI_CPP_LIBRARY_PATH "${CMAKE_SOURCE_DIR}/brumski_cpp/lib/brumski_cpp.a")

# Add the library as an IMPORTED target
add_library(brumski_cpp STATIC IMPORTED)

# Set the properties for the imported library
set_target_properties(brumski_cpp PROPERTIES
    IMPORTED_LOCATION "${BRUMSKI_CPP_LIBRARY_PATH}"
    INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/brumski_cpp/include"
)

# Define your executable target
add_executable(example.o src/main.cpp)

# Link against the imported library
target_link_libraries(example.o PRIVATE brumski_cpp)