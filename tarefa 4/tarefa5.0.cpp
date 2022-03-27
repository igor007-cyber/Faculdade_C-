#include <iostream>
//questao 1
using namespace std;

int main(){

    float Salario_Trabalhador, emprestimo, prestacao,qtdeParcelas;

        cout << "digite seu salario: " << endl;
        cin >> Salario_Trabalhador;
        cout << "digite a quantidade de parcelas: " << endl;
        cin >> qtdeParcelas;
        cout << "digite seu emprestimo: " << endl;
        cin >> emprestimo;
        prestacao = emprestimo/qtdeParcelas;
        cout << "sua pretaçao foi: " << prestacao << endl;
        if (prestacao <= Salario_Trabalhador*0.2)
            cout << "Empréstimo não concedido" << endl;
            else
                cout << "Empréstimo autorizado" << endl;

return 0;
}
