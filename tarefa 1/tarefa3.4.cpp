#include <iostream>
// questao 5
using namespace std;

int main(){

    float hora_nomal, hora_extra,dias,total;

            cout << "quantos dias por semana voce trabalha: " << endl;
            cin >> dias;
            cout << "digite seu de horario nomal do dia: " << endl;
            cin >> hora_nomal;
            hora_nomal = hora_nomal * dias * 5 * 12;
            cout << "digite seu total de horario extra: " << endl;
            cin >> hora_extra;
            cout << "o salário anual deste trabalhador e de:" << endl;
            cout << (hora_nomal * 10) + (hora_extra * 15);

return 0;
}
