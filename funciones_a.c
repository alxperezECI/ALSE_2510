#include <iosteam>

int main(){
int number = 88; 
int * pNumber = &number;   // Declara y asigna la dirección de la variable number al puntero pNumber (0x22ccec) 
cout << pNumber<< endl;    // Imprime el contenido de la variable puntero, que contiene una dirección (0x22ccec) 
cout << *pNumber << endl; // Imprime el valor "apuntado" por el puntero, que es un int (88) 
* pNumber = 99;             // Asigna un valor a donde apunta el puntero, NO a la variable puntero 
cout << *pNumber << endl; // Imprime el nuevo valor "apuntado" por el puntero (99) 
cout << number << endl;    // El valor de la variable number también cambia (99)
}
