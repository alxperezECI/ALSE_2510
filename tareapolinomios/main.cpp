#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAX_EXPONENTE = 100; // Máximo grado permitido

// Función para recorrer el polinomio y convertirlo en un arreglo de coeficientes
void recorrerpolinomio(const char* polinomio, int* coeficientes) {
    memset(coeficientes, 0, MAX_EXPONENTE * sizeof(int)); // Inicializa el arreglo en 0
    int i = 0, signo = 1, coef = 0, exponente = 0;
    bool hayCoeficiente = false;
    int n = strlen(polinomio);

    while (i < n) {
        switch (polinomio[i]) {
            case '-':
                if (hayCoeficiente) {
                    coeficientes[exponente] += signo * coef;
                }
                signo = -1;
                coef = 0;
                exponente = 0;
                hayCoeficiente = false;
                i++;
                break;
            case '+':
                if (hayCoeficiente) {
                    coeficientes[exponente] += signo * coef;
                }
                signo = 1;
                coef = 0;
                exponente = 0;
                hayCoeficiente = false;
                i++;
                break;
            case 'x':
                if (!hayCoeficiente) coef = 1;
                exponente = 1;
                i++;
                if (i < n && polinomio[i] == '^') {
                    i++;
                    exponente = 0;
                    while (i < n && isdigit(polinomio[i])) {
                        exponente = exponente * 10 + (polinomio[i] - '0');
                        i++;
                    }
                }
                hayCoeficiente = true;
                break;
            default:
                if (isdigit(polinomio[i])) {
                    coef = 0;
                    while (i < n && isdigit(polinomio[i])) {
                        coef = coef * 10 + (polinomio[i] - '0');
                        i++;
                    }
                    hayCoeficiente = true;
                } else {
                    i++;
                }
                break;
        }
    }
    if (hayCoeficiente) {
        coeficientes[exponente] += signo * coef;
    }
}

// Función para sumar polinomios
void SumarPolinomios(int* resultado, int** polinomios, int numPolinomios) {
    memset(resultado, 0, MAX_EXPONENTE * sizeof(int)); // Inicializa el resultado en 0
    for (int i = 0; i < numPolinomios; i++) {
        for (int j = 0; j < MAX_EXPONENTE; j++) {
            resultado[j] += polinomios[i][j];
        }
    }
}

// Función para imprimir el polinomio resultante
void imprimir(const int* polinomio) {
    bool PrimerTermino = true;
    for (int i = MAX_EXPONENTE - 1; i >= 0; i--) {
        if (polinomio[i] != 0) {
            if (!PrimerTermino) {
                cout << (polinomio[i] > 0 ? " + " : " - ");
            } else {
                if (polinomio[i] < 0) cout << "-";
                PrimerTermino = false;
            }
            if (abs(polinomio[i]) != 1 || i == 0) {
                cout << abs(polinomio[i]);
            }
            if (i > 0) {
                cout << "x";
                if (i > 1) {
                    cout << "^" << i;
                }
            }
        }
    }
    if (PrimerTermino) cout << "0";
    cout << endl;
}

// Programa principal
int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Uso: ./sumapolinomios \"polinomio1\" \"polinomio2\" ... \"polinomioN\"" << endl;
        return 1;
    }

    cout << "He recibido " << argc - 1 << " polinomios" << endl;

    int* polinomios[argc - 1];

    for (int i = 1; i < argc; i++) {
        polinomios[i - 1] = new int[MAX_EXPONENTE];
        recorrerpolinomio(argv[i], polinomios[i - 1]);
    }

    int resultado[MAX_EXPONENTE];
    SumarPolinomios(resultado, polinomios, argc - 1);

    cout << "\nEl resultado de la suma es: ";
    imprimir(resultado);

    for (int i = 0; i < argc - 1; i++) {
        delete[] polinomios[i];
    }

    return 0;
}
