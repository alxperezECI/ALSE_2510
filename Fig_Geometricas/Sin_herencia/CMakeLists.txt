cmake_minimum_required(VERSION 3.10)

project(fig_geometricas)
add_executable(${PROJECT_NAME} main.cpp  Circulo.h Circulo.cpp Triangulo.h Triangulo.cpp
   Cuadrado.h Cuadrado.cpp Pentagono.h Pentagono.cpp)
