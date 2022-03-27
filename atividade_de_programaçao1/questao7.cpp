# include <iostream>
/*
 2)Escreva um programa que crie um vetor “vet1” de 5 elementos inteiros,
inicializando-os para os valores 10, 20, 30, 40 e 50. Crie um segundo vetor
“vet2” inicializando apenas os dois primeiros elementos para 10 e 20 e todos
os demais elementos para zero. Crie um terceiro vetor “vet3” inicializando
apenas o terceiro elemento para o valor 3 e os demais para zero. Imprima os
valores contidos em cada vetor para conferir os valores armazenados em cada
um deles.
*/
using namespace std;
int main()
{
  int vet1[5] = {10, 20, 30, 40, 50};
  int vet2[5] = {10, 20};
  int vet3[5] = {0, 0, 3, 0, 0};

  cout << "vet1: " << vet1[0] << " " << vet1[1] << " " << vet1[2] << " " << vet1[3] << " " << vet1[4] << endl;
  cout << "vet2: " << vet2[0] << " " << vet2[1] << " " << vet2[2] << " " << vet2[3] << " " << vet2[4] << endl;
  cout << "vet3: " << vet3[0] << " " << vet3[1] << " " << vet3[2] << " " << vet3[3] << " " << vet3[4] << endl;


    system("PAUSE");
    return 0;
}
