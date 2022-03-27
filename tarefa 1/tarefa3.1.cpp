#include <iostream>
// questao 2
using namespace std;

int main(){

    int cabeca, patas, coelhos, patos;

        cout << "digite um numero de cabeca: ";
        cin >> cabeca;
        cout << "digite um numero de patas: ";
        cin >> patas;
        coelhos = (patas - 2*cabeca)/2;
        patos = cabeca - coelhos;
        cout << "coelhos: " << coelhos << endl;
        cout << "patos: " << patos <<endl;


return 0;
}
