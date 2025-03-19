/**
 * @file estudiante_tarea.h
 * @brief Implementación de la clase Estudiante
 */

#ifndef ESTUDIANTE_TAREA_H
#define ESTUDIANTE_TAREA_H

#include "persona_tarea.h"
#include <vector>

using namespace std;

class Estudiante : public Persona
{

    float _nota;
    int _codigo;

public:
    Estudiante();
    Estudiante(const string &name, const string &ape, const int &docid, const int &codigo);
    ~Estudiante();

    void CodEstudiante(const int &codigo) { _codigo = codigo; }; // Método de asignación de código de estudiante
    const int &getCodEstudiante() { return _codigo; };           // Método de obtención de código de estudiante

    vector<float> vector_notas(const size_t &cant_notas)
    {
        // Método para crear un vector de notas inicializado en 0
        return vector<float>(cant_notas, 0.);
    }

    void agregar_nota(vector<float> &notas, const float &nota);

    float promedio(const vector<float> notas);

    void setNota(const float &nota) { _nota = nota; };
    const float &getNota() { return _nota; };
};

#endif // ESTUDIANTE_TAREA_H