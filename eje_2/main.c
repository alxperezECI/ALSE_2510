#include <iostream>
#include <stdio.h>
#include <math.h>


int main(){
  int number = 88;
  int *pNumber = &number;
  
  std::cout << "Dirección de  number: " << &number << std::endl;
  std::cout << "Contenido de pNumber: " << pNumber << std::endl;
  std::cout << "La dirección de pNumber: " << &pNumber << std::endl;
  std::cout << "Contenido de a donde apunta pNumber: " << *pNumber << std::endl;
  
  *pNumber = 99;
  std::cout << *pNumber << std::endl;
  std::cout << number << std::endl;
  
  pNumber ++;
  std::cout << "Contenido siguiente a number: " << *pNumber << std::endl;
  
  return 0;
}

