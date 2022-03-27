#include <iostream>

using namespace std;

int main(){
    int n1

    cout << "digite um numero: ";
    cin >> n1;
    if (n1 > 0 && n1 % 2 == 0)
        cout <<"Positivo e Par" << endl;
    else if (n1 > 0 && n1 % 2 == 1)
        cout << "positivo impar" << endl;
        else if (n1 < 0 && n1 != 0)
            cout << "negativo e par" << endl;
    else (n1 < 0 && n1%2 == 1)
        cout << "negativo e imapar" << endl;

return 0;
}
