#include <iostream>
/*
1) Escreva um programa que crie dois vetores de três elementos cada.
O primeiro vetor deve armazenar os preços dos produtos listados na tabela
abaixo. O segundo vetor deve armazenar a quantidade desejada de cada produto.
Essa quantidade deve ser informada pelo usuário. Calcule o total a pagar por
produto e o total final da compra.
*/
using namespace std;
int main ()
{
  float preco_produtos[3] = {1.50, 2.00, 1.00};
  float qut_produto[3];
  float alface,beterraba,cenoura;

   cout << "Digite a quantidade de quilos de Alface: ";
   cin >> qut_produto[0];
   cout << '\n' << "Digite a quantidade de quilos de beterraba: ";
   cin >> qut_produto[1];
   cout << '\n' << "Digite a quantidade de quilos de cenoura: ";
   cin >> qut_produto[2];
   cout << '\n';
   cout << "Voce Pagara pelos produtos: " << endl;
   alface = qut_produto[0] * preco_produtos[0];
   beterraba = qut_produto[1] * preco_produtos[1];
   cenoura = qut_produto[2] * preco_produtos[2];
   cout << "Alface = " << alface << endl;
   cout << "Beterraba = " << beterraba << endl;
   cout << "Cenoura = " << cenoura << endl;
   cout << "total = " << alface + beterraba + cenoura << endl;

system("PAUSE");
return 0;
}
