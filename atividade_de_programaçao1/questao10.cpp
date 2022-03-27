#include <iostream>
/*
5) Escreva um programa que peça e mostre informações como mostrado no exemplo
abaixo. O número de caracteres para o primeiro e segundo nome deve ser definido
em uma constante.

Digite seu primeiro nome? José
Digite seu segundo nome? Dias
Bom dia, José Dias.
Seja bem vindo JD!
*/

using namespace std;

int main ()
{
  char primeiro_nome[30];
  char segundo_nome[30];

  cout << "Digite seu primeiro nome? " << endl;
  cin >> primeiro_nome;
  cout << "Digite seu segundo nome? " << endl;
  cin >> segundo_nome;
  cout << "Bom dia, " << primeiro_nome << " " << segundo_nome << endl;
  cout << "Seja bem vindo " << primeiro_nome[0] << segundo_nome[0] << endl;


system("PAUSE");
return 0;
}
