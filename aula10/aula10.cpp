#include <iostream>

using namespace std;

void armazenar(int *vet, int tam)
{
  for(int i = 0; i<tam;i++)
  {
    cout << "digite um numero: ";
    cin >> vet[i];
  }
}

void copiar(int *vet1, int *vet2, int *vetc, int tam)
{
  for(int i = 0; i<tam+tam;i++)
  {
    vetc[i] = vet1[i];
  }

  for(int i = 0; i<tam;i++)
  {
    vetc[tam + i] = vet2[i];
  }
}

void imprimir(int *vet, int tam)
{
  for(int i = 0; i < tam; i++)
  {
    cout << vet[i] << " | ";
  }
}


int main(int argc, char const *argv[])
{
  // int * p, *q;
  // p = new int;
  // *p = 10;
  //
  // q=p;
  //
  // p = new int;
  // *p = 20;
  // cout << *p << endl;
  // cout << *q <<endl;

  int tam;
  cout << "Digite o tamanho: ";
  cin >> tam;

  int *vet1, *vet2, *vetc;

  vet1 = new int[tam];
  vet2 = new int[tam];
  vetc = new int[tam + tam];

  cout << "dados do vetor 1: \n";
  armazenar(vet1, tam);

  cout << "dados do vetor 2: \n";
  armazenar(vet2, tam);

  //cout << "copiando dados do vetor 3: \n";
  copiar(vet1, vet2, vetc, tam);

  cout << "\nimprimindo o vetor 3: \n";
  imprimir(vetc, tam+tam);

  cout << "\nimprimindo o vetor 2: \n";
  imprimir(vet2, tam);

  cout << "\nimprimindo o vetor 1: \n";
  imprimir(vet1, tam);

  return 0;
}
