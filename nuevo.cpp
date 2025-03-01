// main.cpp
#include <iostream>
using namespace std;
// Necesario para que C++ entienda el nombre de la función

int* suma(int,int);
int main() {
/*
int number = 88; 
int * pNumber = &number;   // Declara y asigna la dirección de la variable number al puntero pNumber (0x22ccec) 
cout << pNumber<< endl;    // Imprime el contenido de la variable puntero, que contiene una dirección (0x22ccec) 
cout << *pNumber << endl; // Imprime el valor "apuntado" por el puntero, que es un int (88) 
* pNumber = 99;             // Asigna un valor a donde apunta el puntero, NO a la variable puntero 
cout << *pNumber << endl; // Imprime el nuevo valor "apuntado" por el puntero (99) 
cout << number << endl;    // El valor de la variable number también cambia (99)
*/

int number = 10;
int *punt= suma(2,4);
cout << punt << endl;

//int *ptrNumber = new int; // ptrNumber almacena la dirección de memoria de number
/*
int *ptrNumber ;
*ptrNumber = number;
cout << "numer es igual a:"<< &number <<endl;
cout << "valor de number que es igual a su direccion " << ptrNumber << endl; 


delete ptrNumber; // Libera la memoria
ptrNumber = nullptr; // Buena práctica: establece el puntero a nullptr después de liberar la memoria
*/
/*
long long int i = 88; 
double d = 55.66; 
long long int * iPtr; 
iPtr = i;   // Puede cambiar la dirección almacenada en un puntero
cout << iPtr <<endl;
delete iPtr;     // Libero la memoria
iPtr = nullptr;   // Indico que el puntero ya no es válido
*/
}

int* suma(int a, int b) {
  int resultado = a + b;
  return resultado; // Devuelve la dirección de memoria de 'resultado'
}
