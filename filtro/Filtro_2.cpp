/**
 * Project Untitled
 */


 #ifndef FILTRO_2H
 #define FILTRO_2H
 #include "Filtro.h"
 #include "Filtro_2.h"
 #include <list>
 #include <iostream>
 
 using namespace std;
 
 
 /**
  * @param a
  * @return void
  */

int _tamano=0;

 /**
  * @return float
  */
 float Filtro_2::aplicar_filtro( float x_n ){
     float prom =0.;
     if( _datos.empty() ) return 0.;
 
     _datos.pop_front();
     _datos.push_back( x_n );
     list<float>::iterator it;
     it = _datos.begin();
    
     int pos;
     float _ult_sal = 0.0;
     for( pos = 0; pos < _tamano -1; pos++){
         advance(it,_tamano - pos);
         prom += _coeficientes[ pos ] *(*it);
     }
 
     prom += _coeficientes[_tamano] * _ult_sal;
 
     _ult_sal = prom;
 
     return prom;
 }
 
 
 
 Filtro_2::Filtro_2(int tamano, float coef[] ){
     _tamano = tamano;
     for(int i = 0; i < _tamano ; i++){
       _coeficientes[i] = coef[i];
       _datos.push_back( 0.0 );
     }
 
 
 }
     int  getTamano(){ return _tamano;}
 
 /*
     int _tamano;
     std::list<float> _datos;
     std::vector<float> _coeficientes;
 
 */
 
 #endif // FILTRO_H
