/**
 * @file persona_tarea.h
 * @brief Declaración de la clase Persona
 */

#ifndef PERSONA_TAREA_H
#define PERSONA_TAREA_H

#include <iostream>
#include <string>

using namespace std;

class Persona
{
    // Atributos de la clase (Variables a usar)

    string _name;
    string _ape;
    int _docid;
    Persona(); // Constructor por omisión privado

public:
    Persona(const string &name, const string &ape, int docid); // Constructor con parámetros
    ~Persona();                                                // Destructor

    const string &getNombre() const; // Método de obtención de nombre

    const string &getApellido() const; // Método de obtención de apellido

    const int &getDocumento() const; // Método de obtención de documento de identidad
};

#endif // PERSONA_TAREA_H