#include "empresa.h"

Empresa::Empresa(string nombre)
{
  _nombre = nombre;
  _total_nomina = 0.0;
  _total_horas_extra = 0.0;
  _total_horas_extra_dia = 0.0;
}

void Empresa::agregar_trabajador(const Trabajador &t)
{
  _trabajadores.push_back(t);
}

double Empresa::total_horas_extra_mes() const
{
  for (int i = 0; i < _trabajadores.size(); i++)
  {
    for (int j = 1; j < 31; j++)
    {
      _total_horas_extra += _trabajadores[i].horas_extra_dia(j);
    }
  }
  return _total_horas_extra;
}

double Empresa::total_horas_extra_dia(const int &dia) const
{
  _total_horas_extra_dia = 0.0;
  for (int i = 0; i < _trabajadores.size(); i++)
  {
    _total_horas_extra_dia += _trabajadores[i].horas_extra_dia(dia);
  }
  return _total_horas_extra_dia;
}

double Empresa::total_nomina() const
{
  for (int i = 0; i < _trabajadores.size(); i++)
  {
    _total_nomina += _trabajadores[i].Pago_mensual();
  }
  return _total_nomina;
}

ostream &operator<<(ostream &os, Empresa &e)
{
  os << "Nombre de la empresa: " << e._nombre << ", Cantidad de trabajadores: " << e._trabajadores.size()
     << ", horas extra en el mes: " << e._total_horas_extra << ", el pago de nomina total es: " << e._total_nomina << endl;
  return os;
}
