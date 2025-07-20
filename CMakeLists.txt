cmake_minimum_required(VERSION 3.10)
project(MiProyecto LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ruta base para MSYS2/mingw-w64
if(MINGW)
    set(CMAKE_PREFIX_PATH "C:/msys64/mingw64")
endif()

# Buscar GLFW con pkg-config
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)

# Incluir directorios de GLFW
include_directories(${GLFW_INCLUDE_DIRS})

# Agregar ejecutable
add_executable(MiProyecto main.cpp)

# Agregar OpenGL (en Windows se usa opengl32)
if (WIN32)
    target_link_libraries(MiProyecto ${GLFW_LIBRARIES} opengl32)
else()
    find_package(OpenGL REQUIRED)
    target_link_libraries(MiProyecto ${GLFW_LIBRARIES} OpenGL::GL)
endif()
