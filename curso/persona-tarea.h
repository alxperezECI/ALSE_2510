#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona
{
    string _nombre;
    string _apellido;
    int _docid;

public:
    Persona();
    Persona(const string &name, const string &ape, int docid);                                      

    string Nombre() const; // Método de obtención de nombre
    string Apellido() const; // Método de obtención de apellido
    int DocID() const; // Método de obtención de documento de identidad
};

#endif // PERSONA_H