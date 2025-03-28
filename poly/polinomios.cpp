#include <iostream>
#include <vector>
using namespace std;
// se define la clase que crea el polinomio
class polinomio {
public:
    vector<int> coeficientes; // el vector que almacena los coeficientes del polinomio

    //insertar un termino en el polinomio
    void insertar_polinomio(int coef, int exp) {
        if (exp >= coeficientes.size()) coeficientes.resize(exp + 1, 0);
        coeficientes[exp] += coef;
    }
 // muestra el polinomio
    void mostrarpolinomio() {
        bool primero = true;
        for (int exp = coeficientes.size() - 1; exp >= 0; --exp) { //recorre de mayor a menor grado del polinomio
            int coef = coeficientes[exp];
            if (coef) {
                if (!primero) cout << (coef > 0 ? "+" : ""); // agrega un signo + o - sino es el primer termino 
                cout << coef;
                if (exp > 0) cout << "x^" << exp;
                primero = false;
            }
        }
        cout << endl;
    }
// sobrecarga el + para sumar los 2 polinomios
    polinomio operator+(const polinomio &otro) {
        polinomio resultado;
        int maxExp = (coeficientes.size() > otro.coeficientes.size()) ? coeficientes.size() : otro.coeficientes.size();
        resultado.coeficientes.resize(maxExp, 0);
        for (int i = 0; i < coeficientes.size(); ++i) resultado.coeficientes[i] += coeficientes[i];
        for (int i = 0; i < otro.coeficientes.size(); ++i) resultado.coeficientes[i] += otro.coeficientes[i];
        return resultado;
    }
};

polinomio leepolinomio() {
    polinomio p;
    string entrada;
    cout << "ingresar polinomio: ";
    cin >> entrada;
    int coef = 0, exp = 0, signo = 1;
  // recorre la cadena del polinomio  
    for (size_t i = 0; entrada[i] != '\0'; i++) {
        if (entrada[i] == '-') signo = -1;
        else if (entrada[i] == '+') signo = 1;
        else if (entrada[i] >= '0' && entrada[i] <= '9') {
            coef = entrada[i] - '0';
            while (entrada[i + 1] >= '0' && entrada[i + 1] <= '9') {
                coef = coef * 10 + (entrada[++i] - '0');
            }
            coef *= signo;
            exp = 0;
            if (entrada[i + 1] == 'x') {
                i++;
                exp = 1;
                if (entrada[i + 1] == '^') {
                    i++;
                    exp = entrada[i + 1] - '0';
                    while (entrada[i + 2] >= '0' && entrada[i + 2] <= '9') {
                        exp = exp * 10 + (entrada[++i + 1] - '0');
                    }
                }
            }
            p.insertar_polinomio(coef, exp); // agrega el termino al polinomio
        }
    }
    return p;
}

int main() {
    polinomio p1 = leepolinomio(), p2 = leepolinomio();
    polinomio suma = p1 + p2;
    cout << "suma: ";
    suma.mostrarpolinomio();
    return 0;
}
