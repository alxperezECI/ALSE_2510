#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;


void imprimir_polinomio(const vector<vector<pair<float, int>>>& polinomio) {
    for (int i = 0; i < polinomio.size();i++) {
        for (int j = 0; j < polinomio[i].size();j++) {
            cout << polinomio[i][j].first; // Imprime el coeficiente con 2 decimales.
            if (polinomio[i][j].second != 0) {
                cout << "x^" << polinomio[i][j].second; // Imprime el exponente.
            }
            
            if(i < polinomio.size() - 1 && j > polinomio[j].size()){
                cout << " + ";
            }
        }
        cout << endl;
    }
}
int main(int argc, char const** argv)
{
    if(argc < 3)
    {
        cout << "No hay sufientes polinomios" << endl;
    
        return 1;
        
    }
    vector<vector <pair<float,int >>> polinomios(argc-1);
    
    string cof,exp;
    int i,j,inicio,k,m,exp_int;
    float cof_float;
    inicio=0;
    string pos_signo;
    for (i=1;i<argc; i++){ 
        string argv_string = argv[i];
        for (j=0; j<strlen(argv[i]);j++){   
            if((j== 0 && isdigit(argv[i][j]))|| (argv[i][j] == '+' || argv[i][j] == '-')){
                for (k=inicio; k<strlen(argv[i]);k++){
                    if(argv_string[k] == 'x'|| argv_string[k]  == 'X'){
                        if(argv_string[k+1]  != '^'){
                            return 1;
                        }
                        else{
                            m=k+2;
                            while (isdigit(argv[i][m])){
                                m++;
                            }
                            exp=argv_string.substr(k+2,m-(k+2));
                        }
                        if(inicio==0){
                            cof=argv_string.substr(inicio,k-inicio);
                            inicio=m+1;
                            cof_float=stoi(cof);
                            exp_int=stoi(exp);
                            polinomios[i-1].push_back(make_pair(cof_float,exp_int));  
                        }
                        else{
                            
                            cof=argv_string.substr(inicio-1,k-inicio+1);
                            inicio=m+1;
                        cof_float=stoi(cof);
                        exp_int=stoi(exp);
                        polinomios[i-1].push_back(make_pair(cof_float,exp_int));  // 3x^2

                        }
                    }
                }
            }
        }
    k=0;
    inicio=0;
    } 
    imprimir_polinomio(polinomios);
    
    return 0;
}

