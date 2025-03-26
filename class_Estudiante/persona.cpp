#include"persona.h"

persona::persona(__cpp_raw_strings name, int doc_in){
    _name = name;
    _doc = doc_in;
}

persona::~persona(){
    cout << "Llamando al destructor de persona" << endl;
}