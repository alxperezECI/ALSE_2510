/*
Fecha: 17/02/2025
Modificado por: Daniel Alejandro Garzon Espitia
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

double punto2( const double x[], const double y[], double r[], const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
  double  SumaVector = 0.0;
  for(int i = 0; i < cant; i++){
	r[i] = x[i]*y[i];
	SumaVector += r[i];
  }
  return SumaVector;
}

double punto1( double *x, double *y, double *r, const int &cant ){
  // En esta función se hace el producto elemento a elemento de los dos vectores y se devuelve
  // la suma de todos los valores del vector de resultados.
  double  SumaVector = 0.0;
  for(int i = 0; i < cant; i++){
        r[i] = x[i]*y[i];
        SumaVector += r[i];
  }
  return SumaVector;
}


int main(){
  srand(time(0));
  double v1[100]={3.}, v2[100], vres[100];

  for(int i=0; i < 100; i++){
    v2[i] = 50 + rand() % 100;
//    printf("%f\n",v2[i]); //test que si se actualicen valores en v2
    v1[i] = 3.0;
//    printf("%f\n",v1[i]); //test valores de v1
  }

  printf("La suma total con punto1 es: %f \n",  punto1(v1, v2, vres, 100));
  printf("La suma total con punto2 es: %f \n",  punto2(v1, v2, vres, 100));
  for(int i=0; i<100;i++)
    printf( "vres[%d]=%f\n",i,vres[i]);

  return 0;
}
