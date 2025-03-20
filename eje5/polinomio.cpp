#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// GRUPO: SAMUEL MORENO Y ANDRES RUBIO

void classifier(const char *polinomio, int pol[])
{
    int coef, exp, signo = 1;
    while (*polinomio)
    {
        if (*polinomio == '+' || *polinomio == '-')
        {
            signo = (*polinomio++ == '-') ? -1 : 1;
        }
        coef = isdigit(*polinomio) ? strtol(polinomio, (char **)&polinomio, 10) * signo : signo;

        exp = 0;
        if (*polinomio == 'x')
        {
            exp = 1;
            polinomio++;
            if (*polinomio == '^')
            {
                polinomio++;
                exp = strtol(polinomio, (char **)&polinomio, 10);
            }
        }
        pol[exp] += coef;
    }
}

void resultado(int pol[], int grado_max)
{
    int primero = 1;
    for (int i = grado_max; i >= 0; i--)
    {
        if (pol[i] == 0)
            continue;
        printf("%s%d%s", (primero ? "" : (pol[i] > 0 ? " + " : " - ")),
               abs(pol[i]), (i > 0 ? (i > 1 ? "x^" : "x") : ""));
        if (i > 1)
            printf("%d", i);
        primero = 0;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int pol[10] = {0};
    for (int i = 1; i < argc; i++)
    {
        classifier(argv[i], pol);
    }
    resultado(pol, 9);
    return 0;
}