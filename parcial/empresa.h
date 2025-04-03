#ifndef _EMPRESA_H
#define _EMPRESA_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "trabajador-parcial.h"
#include "persona.h"
using namespace std;
class Empresa{
private:
  string _nombre;
  vector<Trabajador> _trabajadores;
  double _total_nomina;
  double _total_horas_extra;
  double _total_horas_extra_dia;
  Empresa();
public:
  Empresa(string nombre);
  void agregar_trabajador(const Trabajador &t);
  double total_horas_extra_mes();
  double total_horas_extra_dia(const int &dia);
  double total_nomina();
  friend ostream &operator<<(ostream &os, Empresa &e);
  int num_trabajadores() const { return _trabajadores.size(); }
};

#endif