cmake_minimum_required(VERSION 2.8)

project(fig_geometricas_her)
add_executable(${PROJECT_NAME} "main.cpp" "Geometrica.h" "Geometrica.cpp" "Circulo.h" "Circulo.cpp" "Cuadrado.h"
    "Cuadrado.cpp" "Triangulo.h" "Triangulo.cpp" "Pentagono.h" "Pentagono.cpp")
