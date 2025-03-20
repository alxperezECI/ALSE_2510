/**
 * @file persona_tarea.cpp
 * @brief Implementación de la clase Persona
 */

#include "persona_tarea.h"

Persona::Persona()
{
    _name = "";
    _ape = "";
    _docid = 0;
}

Persona::Persona(const string &name, const string &ape, int docid)
{
    _name = name;
    _ape = ape;
    _docid = docid;
}

Persona::~Persona(){
    
}

const string &Persona::getNombre() const
{
    return _name;
}

const string &Persona::getApellido() const
{
    return _ape;
}

const int &Persona::getDocumento() const
{
    return _docid;
}
