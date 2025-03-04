#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TERMS 20
#define MAX_LENGTH 100

typedef struct {
    int coef;
    int grado;
} Termino;


int extraerTerminos(char *polinomio, Termino terminos[]) {
    int count = 0;
    char *token = strtok(polinomio, " +");

    while (token != NULL) {
        Termino t;
        t.coef = 0;
        t.grado = 0;

        if (strchr(token, 'x')) {
            char *ptr = strchr(token, 'x');
            if (ptr == token) {
                t.coef = 1;
            } else {
                t.coef = atoi(token);
            }

            if (*(ptr + 1) == '^') {
                t.grado = atoi(ptr + 2);
            } else {
                t.grado = 1;
            }
        } else {
            t.coef = atoi(token);
            t.grado = 0;
        }

        terminos[count++] = t;
        token = strtok(NULL, " +");
    }

    return count;
}


void sumarPolinomios(Termino p1[], int n1, Termino p2[], int n2, Termino resultado[], int *nResultado) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (p1[i].grado == p2[j].grado) {
            resultado[k].coef = p1[i].coef + p2[j].coef;
            resultado[k].grado = p1[i].grado;
            i++;
            j++;
        } else if (p1[i].grado > p2[j].grado) {
            resultado[k] = p1[i];
            i++;
        } else {
            resultado[k] = p2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        resultado[k++] = p1[i++];
    }

    while (j < n2) {
        resultado[k++] = p2[j++];
    }

    *nResultado = k;
}


void imprimirPolinomio(Termino terminos[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0 && terminos[i].coef > 0) {
            printf(" + ");
        }
        if (terminos[i].grado == 0) {
            printf("%d", terminos[i].coef);
        } else if (terminos[i].grado == 1) {
            printf("%dx", terminos[i].coef);
        } else {
            printf("%dx^%d", terminos[i].coef, terminos[i].grado);
        }
    }
    printf("\n");
}

int main() {
    char polinomio1[MAX_LENGTH], polinomio2[MAX_LENGTH];

    printf("Introduce el primer polinomio: ");
    fgets(polinomio1, MAX_LENGTH, stdin);
    polinomio1[strcspn(polinomio1, "\n")] = '\0';  

    printf("Introduce el segundo polinomio: ");
    fgets(polinomio2, MAX_LENGTH, stdin);
    polinomio2[strcspn(polinomio2, "\n")] = '\0';  

    Termino p1[MAX_TERMS], p2[MAX_TERMS], resultado[MAX_TERMS];
    int n1, n2, nResultado;

   
    n1 = extraerTerminos(polinomio1, p1);
    n2 = extraerTerminos(polinomio2, p2);

    
    sumarPolinomios(p1, n1, p2, n2, resultado, &nResultado);

  
    printf("Suma: ");
    imprimirPolinomio(resultado, nResultado);

    return 0;
}
