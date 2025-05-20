#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include "tarea_persona.h"
#include <vector>
#include <iostream>
using namespace std;

struct h_extra{
  int dia;
  float horas_extra;
};

class Trabajador:public Persona{
private:
  std::vector<h_extra> _vec_h_extra;
  double _salario;
  Trabajador( );

public:
  Trabajador( const std::string &nombre, const std::string &apellido,
    const int &docid, const double &sal);
  double horas_extra_dia( const int &i);
  void   horas_extra_dia( const int &d, const float cant);
  double Pago_mensual() const;
  void  salario( const double &s);
  double salario() const;
  friend std::ostream &operator<<(std::ostream &os, Trabajador &t); 

};

#endif
