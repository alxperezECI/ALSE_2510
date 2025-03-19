#ifndef _PERSONA
#define _PERSONA

#include <string>
#include <iostream>
using namespace std;

class Persona{
  string _nombre;
  string _apellido;
  int _doc_identidad;

public:
  Persona( string nombre, string apellido, int docid);
  string Apellido() const;
  int Doc_identidad() const;
  string Nombre() const;

  friend ostream &operator<<(ostream &os, const Persona &p);
};
#endif