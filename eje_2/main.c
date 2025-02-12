
#include <iostream>
#include <math.h>


int main(){
  int number = 88;
  int *pNumber = &number;   // Declare and assign the address of variable number to pointer pNumber (0x22ccec)
  
  std:: cout << "Dirección de number: " << &number << std::endl;
  std::cout << "El contenido de pNumber: " << pNumber<< std::endl;   // Print the content of the pointer variable, which contain an address (0x22ccec)
  std::cout << "La dirección de pNumber: " << &pNumber << std::endl;
  std::cout << "Contenido de a donde apunta pNumber: " <<*pNumber << std::endl; // Print the value "pointed to" by the pointer, which is an int (88)
  
  *pNumber = 99;            // Assign a value to where the pointer is pointed to, NOT to the pointer variable
  std::cout << *pNumber << std::endl; // Print the new value "pointed to" by the pointer (99)
  std::cout << number << std::endl;   // The value of variable number changes as well (99)

    // Peligro voy a mover a donde apunta el puntero
  pNumber++;
  std::cout << "Contenido siguente a number: " << *pNumber << std::endl;
  pNumber++;
  std::cout << "Contenido siguente a number: " << *pNumber << std::endl;
  pNumber++;
  std::cout << "Contenido siguente a number: " << *pNumber << std::endl;
  
  return 0;
}

