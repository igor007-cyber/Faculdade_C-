#include <iostream>
//questao 7
using namespace std;

int main(){

    float n1, n2, resultado;
    char operador;

        cout << "digite dois valores: " << endl;
        cin >> n1 >> n2;
        cout << "digite um operador (+,-,*,/): " << endl;
        cin >> operador;
        if (operador == '+'){
            resultado = n1 + n2;
            cout << resultado << endl;
            }else if (operador == '-'){
                resultado = n1 - n2;
                cout << resultado << endl;
                }else if (operador == '*'){
                    resultado = n1 * n2;
                    cout  << resultado << endl;
                    }else if (operador == '/' && n2 != 0){
                         resultado = n1 / n2;
                         cout << resultado << endl;
                        }else
                            cout << "ERRO" << endl;

return 0;
}
