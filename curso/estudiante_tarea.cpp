/**
 * @file estudiante_tarea.cpp
 * @brief Implementación de la clase Estudiante
 */

#include "estudiante_tarea.h"

Estudiante::Estudiante() : Persona("", "", 0)
{
    _codigo = 0;
    _promedio = 0;
}

Estudiante::Estudiante(const string &name, const string &ape, const int &docid, const int &codigo) : Persona(name, ape, docid)
{
    _codigo = codigo;
    _promedio = 0;
}

Estudiante::~Estudiante()
{
}

void Estudiante::agregar_nota(const float &nota)
{
    vector_notas.push_back(nota);
}

const float Estudiante::promedio()
{
    if (_promedio == 0)
    {
        for (int i = 0; i < vector_notas.size(); i++)
        {
            _promedio += vector_notas[i];
        }

        _promedio /= vector_notas.size();
    }
    return _promedio;
}

const float &Estudiante::getNota(const int &num_nota)
{
    return vector_notas[num_nota];
}

const int &Estudiante::getCod() const
{
    return _codigo;
}

const float Estudiante::mayor_nota()
{
    float mayor = vector_notas[0];

    for (int i = 1; i < vector_notas.size(); i++)
    {
        mayor = (mayor < vector_notas[i]) ? vector_notas[i] : mayor;
    }
    return mayor;
}

ostream &operator<<(ostream &os, const Estudiante &estudiante)
{
    os << "ID: " << estudiante.getCod() << ", Nombre: " << estudiante.getNombre() << ", Apellido: " << estudiante.getApellido()
       << ", Promedio: " << estudiante._promedio << endl;
    return os;
}