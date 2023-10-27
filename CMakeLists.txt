cmake_minimum_required(VERSION 3.0.0)
project(Fuze VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(
    Fuze 
    src/core/main.cpp
)

# Find GLFW and OpenGL
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

# Include the directory with header files
target_include_directories(Fuze PRIVATE ./include)

# Link against OpenGL and GLFW
target_link_libraries(Fuze PRIVATE OpenGL::GL glfw GLEW::GLEW)

# Set the C++ standard version
set(CMAKE_CXX_STANDARD 11)

# Set the name of the generated executable
set_target_properties(Fuze PROPERTIES OUTPUT_NAME "Fuze")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
