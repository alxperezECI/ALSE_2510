#include <iostream>
#include <string>
using namespace std;

// GRUPO: SAMUEL MORENO Y ANDRES RUBIO

bool letras(const string &palabra)
{
  for (char c : palabra)
  {
    if (!isalpha(c))
      return false;
  }
  return true;
}

int main(int argc, char *argv[])
{
  cout << "Hay " << argc - 1 << " argumentos de los cuales: " << endl;

  for (int i = 1; i < argc; i++)
  {
    string argumento = argv[i];

    if (letras(argumento))
    {
      cout << "La longitud es " << argumento.length()
           << " y el argumento es " << argumento << endl;
    }
  }
  return 0;
}