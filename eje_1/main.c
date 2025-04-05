#include <stdio.h>
#include <math.h>

int funeval2(const &x){
	return sin(10*x)+ cos(3*x);
}
int funeval()<

void  cruces_cero( double xl,double xu){
  double anterior=0., actual;

  for(int i=xl; i< xu; i++){
    actual = funeval((double) i);
    if((anterior >= 0 && actual < 0 ) || (anterior < 0 && actual >= 0))
      printf("Hay un cruce por cero en: %d\n",i);
    anterior = actual;
  }
}

int main(){
	cruces_cero(0,100);
	return 0;
}


