 #include "persona-tarea2.h"

 Persona::Persona()
 {
     _nombre = " ";
     _apellido= " ";
     _docid = 0;
 }
 
 Persona::Persona(const string &name, const string &ape, int docid)
 {
     _nombre = name;
     _apellido= ape;
     _docid = docid;
 }
 
string Persona::Nombre() const
 {
     return _nombre;
 }
 
  string Persona::Apellido() const
 {
     return _apellido;
 }
 
 int Persona::DocID() const
 {
     return _docid;
 }