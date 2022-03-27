#include <iostream>
//questao 6
using namespace std;

int main(){

    int login, senha, login1, senha1;

        cout << "Crie seu login: " << endl;
        cin >> login;
        cout << "Crie sua senha: " << endl;
        cin >> senha;
        cout << "------------------------------------" << endl;
        cout << "Digite seu login: " << endl;
        cin >> login1;
        cout << "Digite sua senha: " << endl;
        cin >> senha1;
        cout << "------------------------------------" << endl;
        if (login == login1 && senha == senha1)
            cout << "Acesso permitido" << endl;
            else
                cout << "Acesso negado" << endl;

return 0;
}
