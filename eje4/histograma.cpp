#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
/** Esta función calcula el min y el max del vector x pasados como parámetros
*/
void vec_min_max(const double vec[], const int &cant, double  &min, double &max){
  min = max = vec[0];
  for(int i = 0; i < cant; i++){
    min = vec[i] < min ? vec[i] : min ;
    max = vec[i] > max ? vec[i] : max ;
  }
}

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

  vec_min_max(x, cant, vec_min, vec_max);  // Encuentra el mínimo y el máximo 
					   // dentro del vector x

  double delta = (vec_max - vec_min) / num_cat;
  for(int i = 0; i < cant; i++){
    for(int j = 0; j < num_cat; j++){
      if( x[i] <= vec_min + delta*(j+1) ){
        categorias[j]++;
        break;
      }
    }
  }
  cout << "La distribución de los valores en las " << num_cat << " categorías es:" << endl;
  for(int i = 0; i < num_cat; i++)
    cout << "Entre " << vec_min + delta*i << " y " << vec_min + delta*(i+1) << " hay " << categorias[i] << " elementos." << endl;

  delete categorias;
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

int main(int argc, char** argv){
  if( argc < 2 ) return 2;
  // imprimir los parámetros del main
  cout << "Número de argumentos: " << argc << endl;
  cout << "Primer argumento: " << argv[0] << endl;
  cout << "Segundo argumento: " << argv[1] << endl;

  int cat = atoi( argv[1] );
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

  histo(vres, 100, cat);
  return 0;
}

