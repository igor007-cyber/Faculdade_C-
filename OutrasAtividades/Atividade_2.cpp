#include <iostream>

using namespace std;

/*1. Faça uma função que receba um vetor e reverta a ordem do seu conteúdo.


void ReverteVetor(int *p, int num);

int main()
{
  int vetor[] = {1, 2, 3};


  for(int i = 0; i<=2; i++)
  {
      cout << "Os numeros em ordem: " << vetor[i] << endl;
  }

  ReverteVetor(vetor, 2);



  return 0;
}

void ReverteVetor(int *p, int num)
{
    int reverse[2];
    int j = 2;

    for(int i = 0; i<=2; i++)
    {
        reverse[j] = *(p+i);
        j--;
    }

    for(int i = 0; i<=2; i++)
    {
        cout << "Os numeros revertidos: " << reverse[i] << endl;
    }
}
--------------------------------------------------------------------------------
*/

/*2. Crie uma função para ler uma matriz. Uma função para imprimir uma matriz.
E uma função para somar todos os elementos de duas matrizes de mesmo tamanho e
retornar a matriz resultante. Ao final, crie o programa principal, peça ao
usuário o número de linhas e colunas e crie duas matrizes chamando a função para
povoar a matriz, some as duas colocando o resultado em uma terceira e imprima
todas.*/

  int **ColocarMatiz(int linha, int coluna);
  void imprimirMatriz(int **mat, int **mat1, int linha, int coluna);
  void ** SomaDaMatriz(int **mat, int **mat1, int linha, int coluna);

  int main()
  {
    int l;
    int c;
    cout << "Digite o numero de linhas: ";
    cin >> l;
    cout << "Digite o numero de colunas: ";
    cin >> c;

    int ** mat = ColocarMatiz(l,c);
    int ** mat1 = ColocarMatiz(l,c);
    imprimirMatriz(mat, mat1, l, c);
    SomaDaMatriz(mat, mat1, l, c);

    return 0;
  }

 int **ColocarMatiz(int linha, int coluna)
  {

    int ** mat = new int *[linha];

      for(int i = 0; i < linha; i++)
      {
          mat[i] = new int[coluna];
          for(int j = 0; j < coluna; j++)
          {
              cout << "Digite um numero: ";
              cin >> mat[i][j];
          }
      }
      return mat;

  }


void imprimirMatriz(int **mat, int **mat1, int linha, int coluna)
{
  for(int i = 0; i < linha; i++)
  {
      for(int j = 0; j < coluna; j++)
      {
          cout << mat[i][j] << " | ";
      }
  }
cout << "\n\n";
  for(int i = 0; i < linha; i++)
  {
      for(int j = 0; j < coluna; j++)
      {
          cout << mat1[i][j] << " | ";
      }
  }
}

void ** SomaDaMatriz(int **mat, int **mat1, int linha, int coluna)
{
  int **matriz = new int *[coluna];

  for(int i = 0; i < linha; i++)
  { 
      matriz[i] = new int [coluna];
      for(int j = 0; j < coluna; j++)
      {
         matriz[i][j] = mat[i][j] + mat1[i][j];
      }
  }

cout << endl;

  for(int i = 0; i < linha; i++)
  {
      for(int j = 0; j < coluna; j++)
      {
          cout << matriz[i][j] << " | ";
      }
  }


}
