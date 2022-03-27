#include <iostream>
// questao 4
using namespace std;

int main(){

    float nota1, nota2, nota3, resultado;

        cout << "digite suas notas" << endl;
        cin >> nota1 >> nota2 >> nota3;
        cout << "--------------------------" << endl;
        resultado = (nota1 + nota2 + nota3)/3;
        cout << "seu resutado foi: " << resultado << endl;
        cout << "--------------------------"<< endl;
        if (resultado < 3.5)
            cout << "Voce esta reprovado" << endl;
        else if (resultado < 7)
            cout << "Voce esta recuperaçao" << endl;
        else
            cout << "voce esta aprovado" << endl;

return 0;
}
