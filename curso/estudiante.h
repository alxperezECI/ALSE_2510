#include "persona.h"
#include <vector>
using namespace std;



class Estudiante:public Persona{
  vector<double> notas;
  int codigo;
<<<<<<< HEAD
  double _promedio;
=======
>>>>>>> 79db24c (Subiendo tarea interseccion circulos)
  Estudiante( );

public:
  
  Estudiante( const string &nombre, const string &apellido,
    const int &docid, const int &cod);
  int Codigo() const;
  double Nota( const int &i);
  void agregarNota( const double &nota);
<<<<<<< HEAD
  double Promedio() ;
  bool operator<(const Estudiante &e) const;
=======
  double Promedio() const;
>>>>>>> 79db24c (Subiendo tarea interseccion circulos)
  friend ostream &operator<<(ostream &os, const Estudiante &e); 

};
