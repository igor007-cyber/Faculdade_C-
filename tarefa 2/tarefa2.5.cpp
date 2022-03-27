#include <iostream>
// questao 5
using namespace std;

int main (){
 float L, KM, R;

    cout << "quantos quilometros voce percorreu: " << endl;
    cin >> KM;
    cout << "quantos LItros de gasolina voce gastou: " << endl;
    cin >> L;
    R = KM / L;
    cout << "vove gastou R$ " << R << endl;

return 0;
}

