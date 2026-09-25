cmake_minimum_required(VERSION 3.16)

project(practica3_informatica2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(practica3_informatica2 main.cpp
    rle.h rle.cpp
    lz78.h lz78.cpp
    encriptacion.h encriptacion.cpp
    funciones.h funciones.cpp)

include(GNUInstallDirs)
install(TARGETS practica3_informatica2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
