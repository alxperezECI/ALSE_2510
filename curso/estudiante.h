#include "persona.h"
#include <vector>
using namespace std;



class Estudiante:public Persona{
  vector<double> notas;
  int codigo;
  double _promedio;
  Estudiante( );

public:
  
  Estudiante( const string &nombre, const string &apellido,
    const int &docid, const int &cod);
  int Codigo() const;
  double Nota( const int &i);
  void agregarNota( const double &nota);
  double Promedio() ;
  bool operator<(const Estudiante &e) const;
  friend ostream &operator<<(ostream &os, const Estudiante &e); 

};
