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

const string &Persona::getNombre()
{
    return _name;
}

const string &Persona::getApellido()
{
    return _ape;
}

const int &Persona::getDocumento()
{
    return _docid;
}
