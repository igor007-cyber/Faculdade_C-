#include <iostream>
// 3) Escreva uma instrução que atribua a soma do primeiro e último elemento do vetor
//na questão 2 para a variável par.

using namespace std;

int main ()
{
int vetor[4] = {1,3,5,7,9};
int soma;
soma = vetor[0] + vetor [4];
cout << "a soma do primeiro e o ultimo : " << soma << endl;

system("PAUSE");
}
