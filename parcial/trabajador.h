 #include "persona.h"
#include <vector>
using namespace std;

struct h_extra{
  char dia;
  float horas_extra;
};

class Trabajador:public Persona{
  vector<h_extra> _vec_h_extra;
  double _salario;
  Trabajador( );

public:
  
  Trabajador( const string &nombre, const string &apellido,
    const int &docid, const double &salario);
  double horas_extra_dia( const int &i);
  void   horas_extra_dia( const char &d, const float cant);
  double Pago_mensual() ;
  void  salario( const double &s);
  double salario() const;
  friend ostream &operator<<(ostream &os, Trabajador &t); 

};
