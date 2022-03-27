#include <iostream>
//questao 5
using namespace std;

int main(){

    int idade;

        cout << "digite sua idade: " << endl;
        cin >> idade;
        cout << " Sua idade e: " << idade << endl;
        cout << "Sua categoria e: ";
        if (idade >= 5 && idade <= 7)
            cout << "Infantil A" << endl;
            else if (idade >= 8 && idade <= 10)
                cout << "Infantil B" << endl;
                else if (idade >= 11 && idade <= 13)
                    cout << "Infanto-Juvenil" << endl;
                    else if (idade >= 14 && idade <= 17)
                        cout << "Juvenil" << endl;
                        else
                            cout << "Senior" << endl;

return 0;
}
