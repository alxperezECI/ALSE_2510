#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

// Deben incluir el archivo donde tienen la función
#include "funcion"


using namespace std;
/** Esta función calcula el min y el max del vector x pasados como parámetros
*/


/** Esta función calcula la frecuencia de los datos contenidos en el vector x 
  * dividida en un número de categorías de igual rango determinada por 
  * el parámetro cant.
*/
void histo( const double x[], const int &cant, const int &num_cat){
  int *categorias = new int[num_cat];  // Vector para contar elementos dentro de cada
				       // categoria
  for(int i=0; i < num_cat; i++)
    categorias[i] = 0;

  double vec_min, vec_max;

  // Aquí deben llamar la función para llenar los dos datos.


  double delta = (vec_max - vec_min) / num_cat;
  for(int i = 0; i < cant; i++){
    for(int j = 0; j < num_cat; j++){
      if( x[i] < vec_min + delta*(j+1) )
        categorias[j]++;
    }
  }
  cout << "La distribución de los valores en las " << num_cat << " categorías es:" << endl;
  for(int i = 0; i < num_cat; i++)
    cout << "Entre " << vec_min + delta*i << " y " << vec_min + delta*(i+1) << " hay " << categorias[i] << " elementos." << endl;

}


double punto2( const double x[], const double y[], double r[], const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
  double acumula = 0.;
  for(int i =0; i < cant; i++){
    r[i] = x[i] * y[i];
    acumula += r[i];
  }

  return acumula;
}

int main(){
  srand(time(0));
  double v1[100], v2[100], vres[100];

  for(int i=0; i<100;i++){
    v1[i] = (10 + rand() % 100) / 10.;
    v2[i] = 50 + rand() % 100;
  }

  cout << "La suma total con punto2 es: " <<  punto2(v1, v2, vres, 100) << endl;

  for(int i = 0; i < 100; i++){
    cout << vres[i] <<  "\t" ;
    if( (i +1) % 10 == 0 ) cout << endl;
  }
  cout << endl;

  histo(vres, 100, 4);
  return 0;
}

