#ifndef _PERSONA_H
#define _PERSONA_H
#include<iostream>

using namespace std;

class persona{
    string nombre;
    string apellido;
    int doc_identidad;
  
  public:
    Persona(int docid);
  
  
    string Nombre();
    void Nombre( const string &nombre);
  };