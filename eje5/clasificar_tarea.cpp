#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <strings.h>

using namespace std;

int main(int argc, char *argv[])
{
    int cont = 0;
    int num_cad_text[argc];
    if (argc < 2)
    {
        cout << "Error: Debe ingresar al menos un argumento" << endl;
        return 1;
    }
    else
    {
        cout << "He recibido " << argc << " argumentos" << endl;
        for (int i = 0; i < argc; i++)
        {
            cout << "Argumento " << (i + 1) << " : " << argv[i] << endl;
        }
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; j < strlen(argv[i]); j++)
            {
                if (argv[i][j] >= '0' && argv[i][j] <= '9')
                    cont++;
                else if (argv[i][j] == '.')
                    cont++;
            }
            if (cont != strlen(argv[i]))
                num_cad_text[i] = 1;
            cont = 0;
        }
    }
    for (int i = 1; i < argc; i++)
    {
        if (num_cad_text[i] == 1)
            cout << "El argumento " << i + 1 << " es una cadena de texto" << endl;
        else
            cout << "El argumento " << i + 1 << " es un numero" << endl;
    }
    return 0;
}