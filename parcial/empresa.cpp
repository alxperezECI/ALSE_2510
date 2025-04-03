#include "empresa.h"
using namespace std;

Empresa::Empresa(string nombre): _nombre(nombre) {}

void Empresa::agregar_trabajador(const Trabajador &t){
    _trabajadores.push_back(t);
}

double Empresa::total_horas_extra_mes(){
    double horas_acum = 0;
    for(int i =0; i < _trabajadores.size(); i++)
    {
      for(int j =0; j < 31; j++)
        horas_acum += _trabajadores[i].gethoras_extra_dia(j);
    }
    _total_horas_extra = horas_acum;
    return horas_acum;
}   

double Empresa::total_horas_extra_dia(const int &dia){
  double horas_acum_dia = 0;
  for(int i =0; i < _trabajadores.size(); i++)
     horas_acum_dia += _trabajadores[i].gethoras_extra_dia(dia);
  _total_horas_extra_dia = horas_acum_dia;
  return horas_acum_dia;
}

double Empresa::total_nomina(){
  double nomina;
  for(int i = 0; i < _trabajadores.size(); i++)
    nomina += _trabajadores[i].Pago_mensual();
  _total_nomina = nomina;
  return nomina;
}

ostream &operator<<(ostream &os, Empresa &e)
{
  os << "Nombre: "<< e._nombre << " Numero de trabjadores: " << e.num_trabajadores() << " Nomina: " << e._total_nomina << endl;
  return os;
}