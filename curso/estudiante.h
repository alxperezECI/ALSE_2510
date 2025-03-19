#include "persona.h"
#include <vector>
using namespace std;



class Estudiante:public Persona{
  vector<double> notas;
  int codigo;
  Estudiante( );

public:
  
  Estudiante( const string &nombre, const string &apellido,
    const int &docid, const int &cod);
  int Codigo() const;
  double Nota( const int &i);
  void agregarNota( const double &nota);
  double Promedio() const;
  friend ostream &operator<<(ostream &os, const Estudiante &e); 

};
