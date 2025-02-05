#include <stdio.h>
#include <math.h>


int main(){
  double anterior, actual;
  anterior = actual = 0.;

  for(int i=0; i<100; i++){
    actual = sin(M_PI * 5 / 100 * i);
  }
  return 0;
}

