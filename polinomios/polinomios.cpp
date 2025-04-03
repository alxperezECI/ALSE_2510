// By: Juan Esteban Cortés Y Dickson Trujillo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Máximo exponente permitido en el polinomio (0 a MAX_EXP-1)
#define MAX_EXP 101

// Función para separar y sumar coeficientes en el arreglo de polinomios
void procesar_termino(const char *termino, int pol[])
{
    int exp = 0, signo = 1, coef = 0, i = 0;
    int len = strlen(termino);

    while (i < len)
    {
        if (termino[i] == '+')
        {
            signo = 1;
            i++;
        }
        else if (termino[i] == '-')
        {
            signo = -1;
            i++;
        }

        if (isdigit(termino[i]))
        {
            coef = strtol(&termino[i], NULL, 10) * signo;
            while (isdigit(termino[i]))
                i++;
        }
        else
        {
            coef = signo; // Si no hay número explícito, coeficiente es 1 o -1
        }

        if (termino[i] == 'x')
        {
            i++;
            if (termino[i] == '^')
            {
                i++;
                exp = strtol(&termino[i], NULL, 10);
                while (isdigit(termino[i]))
                    i++;
            }
            else
                exp = 1;
        }
        else
            exp = 0;

        if (exp >= 0 && exp < MAX_EXP)
        {
            pol[exp] += coef;
        }
    }
}

// Función para imprimir el polinomio de manera legible
void imprimir_polinomio(const int pol[])
{
    int primer_termino = 1;

    for (int i = MAX_EXP - 1; i >= 0; i--)
    {
        if (pol[i] != 0)
        {
            if (!primer_termino)
            {
                printf(" %c ", (pol[i] > 0) ? '+' : '-');
            }
            else if (pol[i] < 0)
            {
                printf("-");
            }

            printf("%d", abs(pol[i]));
            if (i > 0)
            {
                printf("x");
                if (i > 1)
                {
                    printf("^%d", i);
                }
            }
            primer_termino = 0;
        }
    }

    if (primer_termino)
    {
        printf("0"); // Si no hubo términos, imprimimos "0"
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    int pol[MAX_EXP] = {0}; // Inicializa todos los coeficientes en 0

    for (int i = 1; i < argc; i++)
    {
        procesar_termino(argv[i], pol);
    }

    imprimir_polinomio(pol);
    return 0;
}
