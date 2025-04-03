#include "empresa.h"

Empresa::Empresa(string nombre)
{
}

void Empresa::agregar_trabajador(const Trabajador &t)
{
}

double Empresa::total_horas_extra_mes() const
{
  return 0.0;
}   

double Empresa::total_horas_extra_dia(const int &dia) const
{
  return 0.0;
}

double Empresa::total_nomina() const
{
  return 0.0;
}

ostream &operator<<(ostream &os, Empresa &e)
{
  return os;
}
