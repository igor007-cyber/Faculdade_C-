#include <iostream>
//questao 4
using namespace std;

int main(){

    int idade, tempo_servico;

        cout << "digite sua idade: " << endl;
        cin >> idade;
        cout << "digite o tempo de serviço que voce trabalhou: " << endl;
        cin >> tempo_servico;
        if ( idade>=65 || tempo_servico >=30 || (idade >= 60 && tempo_servico >= 25))
            cout << "ele pode se aposentar" << endl;
            else
                cout << "ele nao pode se aposetar" << endl;

return 0;
}
