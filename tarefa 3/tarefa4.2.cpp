#include <iostream>
// questao 6
using namespace std;

int main(){

    float n1,n2;

        cout << "digite dois numeros:" << endl;
        cin >> n1 >> n2;

        if (n1 > n2)
            cout << n1 << " e maior que " << n2;
            else if (n2 > n1)
                cout << n2 << " e maior que " << n1;
                else
                    cout << "eles sao iguais!";

return 0;
}
