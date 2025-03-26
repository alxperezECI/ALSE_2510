#include "persona.h"
#include <vector>
#include <iostream>
#include <string>   
using namespace std;


Persona::Persona(string nombre, string apellido, int docid)
{
    this->_apellido = apellido;
    this->_nombre = nombre;
    this->_doc_identidad = docid;
}

string Persona::Apellido() const
{
    return _apellido;
}

int Persona::Doc_identidad() const
{
    return _doc_identidad;
}

string Persona::Nombre() const
{
    return _nombre;
}

ostream &operator<<(ostream &os, const Persona &p)
{
    os << p._nombre << " " << p._apellido << " con C.C: " << p._doc_identidad;
    return os;
}
