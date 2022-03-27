#include <iostream>
using namespace std;
const int Fav = 27;
int main(){

    int n;

        cout << "digite um numero entre 0 e 100 para" << endl;
        cout << "descobrir meu favorito: ";
        cin >> n;
        if (n < Fav){
            cout << "muito baixo, tente nob=vamente: ";
        }
        else if (n > Fav){
            cout << "muito alto, tente novamente: ";
        }
        else{
            cout << Fav << " é o meu favorito !\n";
        }
        system("color A");
return 0;
}
