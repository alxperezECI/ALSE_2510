#include <iostream>
#include <cstdlib>
#include <cctype>

#define MAX_GRADO 10

using namespace std;

void parsear(const char *entrada, int polinomio[]) {
    int coef, exp, signo = 1;

    while (*entrada) {
        // SIGNO
        if (*entrada == '+') { signo = 1; entrada++; }
        else if (*entrada == '-') { signo = -1; entrada++; }

        // COEFICIENTE
        if (isdigit(*entrada)) {
            coef = strtol(entrada, (char**)&entrada, 10) * signo;
        } else {
            coef = signo;
        }

        // EXPONENTE
        if (*entrada == 'x') {
            entrada++;  
            if (*entrada == '^') {
                entrada++;
                exp = strtol(entrada, (char**)&entrada, 10);
                while (isdigit(*entrada)) entrada++;  // Avanzar tras leer exponente
            } else {
                exp = 1;
            }
        } else {
            exp = 0;
        }

        polinomio[exp] += coef;

        // Asegurar que `entrada` avance para evitar bucles infinitos
        while (*entrada && !isdigit(*entrada) && *entrada != '+' && *entrada != '-') {
            entrada++;
        }
    }
}

void imprimirPolinomio(const int polinomio[]) {
    bool primerTermino = true;

    for (int i = MAX_GRADO; i >= 0; i--) {
        if (polinomio[i] != 0) {
            if (!primerTermino) cout << (polinomio[i] > 0 ? "+" : "") << polinomio[i];
            else {
                cout << polinomio[i];
                primerTermino = false;
            }
            if (i > 0) {
                cout << "x";
                if (i > 1) cout << "^" << i;
            }
        }
    }
    if (primerTermino) cout << "0";
    cout << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Uso: " << argv[0] << " \"<polinomio1>\" \"<polinomio2>\"" << endl;
        return 1;
    }

    int polinomio[MAX_GRADO + 1] = {0};
    int polinomio2[MAX_GRADO + 1] = {0};

    parsear(argv[1], polinomio);
    parsear(argv[2], polinomio2);

    for (int i = 0; i <= MAX_GRADO; i++) {
        polinomio[i] += polinomio2[i];
    }

    cout << "Resultado de la suma: ";
    imprimirPolinomio(polinomio);

    return 0;
}
