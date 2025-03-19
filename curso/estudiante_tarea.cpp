/**
 * @file estudiante_tarea.cpp
 * @brief Implementación de la clase Estudiante
 */

#include "estudiante_tarea.h"
#include <algorithm>
#include <numeric>

float Estudiante::promedio(const vector<float> notas)
{
    return accumulate(notas.begin(), notas.end(), 0.0) / notas.size();
}

void Estudiante::agregar_nota(vector<float> &notas, const float &nota)
{
    notas.push_back(nota);
}
