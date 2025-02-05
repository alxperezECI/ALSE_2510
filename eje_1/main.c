#include <stdio.h>
#include <math.h>


int main(){
  double anterior, actual, constante;
  anterior = actual = 0.;
  constante = 1.1*M_PI*5/100;

  for(int i=0; i<100; i++){
    actual = sin(constante*i);
    if((anterior >= 0 && actual < 0) || (anterior < 0 && actual >= 0)){
    	printf("Hay un cruce por cero en: %d\n", i);
	anterior = actual;
    }
  }
  return 0;
}

