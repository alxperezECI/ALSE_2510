// Cristian Bello - Samuel Jimenez

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void suma_coef(const char argv[], int poli[])                   // separar coeficientes y sumar
{                  
    int expo = 0, signo_mult = 1, coef = 0, i = 0;

    for(int i = 0; i<strlen(argv); i++)
    {         

        if (argv[i] == '+'){                                    // identificar signo del coeficiente
            signo_mult = 1;
            i++;
        }

        else if (argv[i] == '-'){
            i++;
            signo_mult = -1;
        }

        else if (isdigit(argv[i])){                             // determinar coeficiente con su signo  
            coef = strtol(&argv[i], NULL, 10) * signo_mult;
            while (isdigit(argv[i])){
                i++;
            };
        }

        else
            coef = signo_mult;                                  // coef = 1 o -1


        if (argv[i] == 'x'){                                    // determinar exponente
            i++;
            if (argv[i] == '^'){
                i++;
                expo = strtol(&argv[i], NULL, 10);
                while (isdigit(argv[i])){
                    i++;
                };
            }
            else
                expo = 1;
        }

        else
            expo = 0;
            poli[expo] += coef;                                 // sumar coeficientes y se ubican en un vector
            coef = 0;
    }
}
    
void impres(const int pol[])
{
    for(int i = 10; i >= 0; i--)
    {
        if (pol[i] != 0)                                        // condiciones para imprimir el resultado
        {
            if(i == 1 && (pol[i] < 0))
                printf("-%dx", -pol[i]);
            else if(i == 1 && (pol[i] > 0))
                printf("+%dx", pol[i]);
            else if(pol[i] > 0 && (i != 0))
                printf("+%dx^%d", pol[i], i);
            else if(pol[i] < 0 && (i != 0))
                printf("-%dx^%d", -pol[i], i);
            else if(i == 0 && (pol[i] < 0))
                printf("-%d", -pol[i]);
            else if(i == 0 && (pol[i] > 0))
                printf("+%d", pol[i]);
        }    
    }    
}

int main(int argc, char* argv[]){
    int pol[11] = {0};                                          // máximo grado 10
    for(int i =1 ; i < argc; i++){
        suma_coef(argv[i], pol);
    }
    impres(pol);
    printf("\n");
}
