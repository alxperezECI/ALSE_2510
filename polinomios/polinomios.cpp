#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// GRUPO: JULIANA TUTA Y ANGEL FABIAN PEDREROS


//Separa los coefcientes y los suma en un arreglo donde su posición es el exponente al q pertenece
void sep_sumar(const char argv[], int pol[]){
    int exp=0, signo=1, coef=0, i=0;

    while ( i < strlen(argv)){
        if (argv[i] == '+'){
            signo=1;
            i++;
        }
        else if (argv[i] == '-'){
            i++;
            signo=-1;
        }
        else if (isdigit(argv[i])){
            coef = strtol(&argv[i], NULL, 10)*signo;
            while (isdigit(argv[i])) i++;
        }
        else
            coef = signo;
        if (argv[i] == 'x'){
            i++;
            if (argv[i] == '^'){
                i++;
                exp =strtol(&argv[i], NULL, 10);
                while (isdigit(argv[i])) i++;
            }
            else
                exp = 1;
        }
        else
            exp = 0;
        pol[exp] += coef;
        coef = 0;
 
    }
}


//Imprime el polinomio resultante
void imprimirres(const int pol[]){
    bool primerdigito = false;
    for(int i =9; i >= 0; i--){
        if (pol[i] != 0){
            if (!primerdigito){
                printf("%dx^%d ", pol[i], i);
                primerdigito= true;
            }
            else if(pol[i] > 0 && (i != 0))
                printf("+ %dx^%d ", pol[i], i);
            else if (pol[i] < 0 && (i != 0))
                printf("- %dx^%d ", -pol[i], i);
            else if(i == 0 && (pol[i] < 0))
                printf("- %d ", -pol[i]);
                else if(i == 0 && (pol[i] > 0))
                printf("+ %d ", pol[i]);
        }

    }

}


int main(int argc, char* argv[]){
    int pol[10] = {0};
    for(int i =1; i<argc; i++){
        sep_sumar(argv[i], pol);
    }
    imprimirres(pol);
    printf("\n");
}