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

    int _codigo;
    mutable float _promedio = -1.;
    vector<float> vector_notas;

    Estudiante();

public:
    Estudiante(const string &name, const string &ape, const int &docid, const int &codigo);
    ~Estudiante();

    void agregar_nota(const float &nota);

    const float promedio() const;

    bool operator<(const Estudiante &estudiante) const;

    const float &getNota(const int &num_nota);

    const int &getCod() const;

    const float mayor_nota();

    friend ostream &operator<<(ostream &os, const Estudiante &estudiante);
};

#endif // ESTUDIANTE_TAREA_H