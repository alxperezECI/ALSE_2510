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

public:
    void Nombre(const string &name) { _name = name; }; // Método de asignación de nombre
    const string &getNombre() { return _name; };       // Método de obtención de nombre

    void Apellido(const string &ape) { _ape = ape; }; // Método de asignación de apellido
    const string &getApellido() { return _ape; };     // Método de obtención de apellido

    void DocIdentidad(const int &docid) { _docid = docid; }; // Método de asignación de documento de identidad
    const int &getDocIdentidad() { return _docid; };         // Método de obtención de documento de identidad

    Persona();                                                 // Constructor por omisión
    Persona(const string &name, const string &ape, int docid); // Constructor con parámetros
    ~Persona();                                                // Destructor
};

#endif // PERSONA_TAREA_H