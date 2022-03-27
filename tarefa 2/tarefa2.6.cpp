#include <iostream>
// questao 6
using namespace std;

int main (){
    float molecula_de_agua, galao_de_agua;

        cout << "digite a quantidade de galao de agua: " << endl;
        cin >> galao_de_agua;
        galao_de_agua = galao_de_agua * 3800;
        molecula_de_agua = galao_de_agua / 3.0;

        cout << "galao de agua e de " << galao_de_agua << " gramas" << endl;
        cout << "molecula de agua e de " << molecula_de_agua << " 10^-23 gramas" <<endl;
        system("pause");

return 0;
}

