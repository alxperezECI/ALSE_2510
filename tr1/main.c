#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_GRADO 10
// Juan nova Jostin Cetina
// Función para extraer y sumar coeficientes de un polinomio
void extraerCoeficientes(char *expresion, int *coef, int sumar) {
    char *token = strtok(expresion, " +");
    while (token != 0) {
        int coeficiente = 0, exponente = 0;

        if (strstr(token, "x^")) {
            sscanf(token, "%dx^%d", &coeficiente, &exponente);
        } else if (strchr(token, 'x')) {
            sscanf(token, "%dx", &coeficiente);
            exponente = 1;
        } else {
            sscanf(token, "%d", &coeficiente);
            exponente = 0;
        }

        if (sumar) {
            coef[exponente] += coeficiente;  // Sumar coeficientes
        } else {
            coef[exponente] = coeficiente;   // Reemplazar coeficientes
        }

        token = strtok(0, " +");
    }
}

// Función para imprimir el polinomio sumado
void imprimirPolinomio(int *coef) {
    int primero = 1;
    for (int i = MAX_GRADO; i >= 0; i--) {
        if (coef[i] != 0) {
            if (!primero) {
                printf(" + ");
            }
            if (i == 0) {
                printf("%d", coef[i]);
            } else if (i == 1) {
                printf("%dx", coef[i]);
            } else {
                printf("%dx^%d", coef[i], i);
            }
            primero = 0;
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Uso: %s \"polinomio1\" \"polinomio2\"\n", argv[0]);
        return 1;
    }

    int coef[MAX_GRADO + 1] = {0};

    // Extraer coeficientes del primer polinomio (sin sumar)
    extraerCoeficientes(argv[1], coef, 0);
    // Extraer coeficientes del segundo polinomio (sumando)
    extraerCoeficientes(argv[2], coef, 1);

    // Imprimir la suma de los polinomios
    imprimirPolinomio(coef);

    return 0;
}
