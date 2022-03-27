#include <iostream>

using namespace std;

/*
1) Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela
   possui.


int main() {


  int x = 4;
  int y = 4;
  int g = 0;
  int matriz[x][y]{

      { 9, 8, 7, 6},
      { 10, 0, 2, 1},
      { 11, 44, 9, 6},
      { 66, 5, 3, 1}

  };

for (int i = 0; i < x ; i++){

    for(int j = 0; j < y ; j++){

         if (matriz[i][j] > 10){

              g++;
              cout <<  "os numeros sao: " << matriz[i][j] << endl;

         }
    }


}
cout << "\n a quantidade de numeros sao: " << g << "\n";

  return 0;
}
*/
/*
2) Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna)
ou uma mensagem de “nao encontrado”.

int main(){

    int num;
    int linha = 5;
    int coluna = 5;
    int matriz[linha][coluna]{

      {0,1,2,3,4},
      {10,11,12,13,14},
      {20,21,22,23,24},
      {30,31,32,33,34},
      {40,41,42,43,44}

    };

    cout << "digite qualquer numero: " << endl;
    cin >> num;

    for ( int i =0; i < linha; i++){

        for ( int j = 0; j < coluna; j++){

          if(num == matriz [i][j]){
            cout << "o valor esta na linha: " << i << endl;
            cout << "o valor esta na coluna: " << j << endl;
            break;
          }
        };
    };
    cout << "se nao aparecer o resultado, ele nao existe." << endl;

  return 0;
}
*/
/*
3) Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3
números inteiros. Em seguida, gere um array unidimensional pela soma dos números
de cada coluna da matriz e mostrar na tela esse array.
Por exemplo, a matriz:

5    -8   10
1      2  15
25 10   7

Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira
posição será 5 + 1 + 25, e assim por diante: 31 4 32.


int main(){

  int matriz[3][3], y;
  int vetor [3]= {0,0};

  for(x = 0; x < 3; x++){

    for(y = 0; y < 3; y++){
        cout << "digite a posiçao da matriz " << x << " e " << y << endl;
        cin >> matriz[x][y];

     }

  }

    for(y = 0; y < 3; y++){

      for(x = 0; x < 3; x++){

        vetor[y] = vetor[y] + matriz[x][y];

      }

    }
    for (y = 0; y < 3; y++){

      cout << "os numeros sao " << vetor[y] << endl;
    }


  return 0;
}
*/
/*
4)Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as
seguintes informações sobre alunos de uma disciplina, sendo todas as informações
do tipo inteiro:

• Primeira coluna: número de matrícula (use um inteiro);
• Segunda coluna: média das provas;
• Terceira coluna: média dos trabalhos;
• Quarta coluna: nota final;

Elabore um programa que:
Leia as três primeiras informações de cada aluno;
Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos;
Imprima a matrıcula do aluno que obteve a maior nota final (assuma que só existe uma maior nota);
Imprima a média aritmética das notas finais;


int main(){

  float arit;
  float nota, trabalho;
  const int x = 5;
  const int y = 4;
  float matriz[x][y];

  for(int i = 0; i < x; i++)
  {
    int j = 0;
    cout << "número de matrícula do aluno: " << i << " e " << j << endl;
    cin >> matriz[i][j];
    j++;
    cout << "média das provas do aluno: " << i << " e " << j<< endl;
    cin >> matriz[i][j];
    nota = matriz[i][j];
    j++;
    cout << "média dos trabalhos do aluno: " << i << " e " << j<< endl;
    cin >> matriz[i][j];
    trabalho = matriz[i][j];
    j++;
    matriz[i][j] = (nota + trabalho)/2;
  }


    if(matriz[0][3] > matriz[1][3] && matriz[0][3] > matriz[2][3] && matriz[0][3] > matriz[3][3] && matriz[0][3] > matriz[4][3] ){
      cout << "A maior nota da sala, e sua matricula e: " << matriz[0][0] << endl;

    }
    else if (matriz[1][3] > matriz[2][3] && matriz[1][3] > matriz[3][3] && matriz[1][3] > matriz[4][3]){
      cout << "A maior nota da sala, e sua matricula e: " << matriz[1][0] << endl;
    }
    else if ( matriz[2][3] > matriz[3][3] && matriz[2][3] > matriz[4][3]){
      cout << "A maior nota da sala, e sua matricula e: " << matriz[2][0] << endl;
    }
    else if (matriz[3][3] > matriz[4][3]){
      cout << "A maior nota da sala, e sua matricula e: " << matriz[3][0] << endl;
    }
    else
      cout << "A maior nota da sala, e sua matricula e: " << matriz[4][0] << endl;


  cout << "a média aritmética das notas finais e: " << endl;
  arit = matriz[0][3] + matriz[1][3] + matriz[2][3] + matriz[3][3] + matriz[4][3];
  cout << arit / 5;




  return 0;
}
*/
/*
5) Faça programa que leia uma matriz 3 x 6 com valores reais.

a) Imprima a soma de todos os elementos das colunas ímpares.
b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
d) Imprima a matriz modificada

int main()
{
  int o;
  float r = 0;
  int g = 0;
  const int x = 3;
  const int y = 6;
  int matriz[x][y]
  {
    {6, 46, 9, 156, 22, 19},
    {8, 547, 10, 489, 72, 58},
    {12, 798, 44, 987, 2, 36}
  };

  for (int i = 0; i < x; i++) {

    for (int j = 0; j < y; j+=2) {
      g = g + matriz[i][j];
    }
    for (int j = 2; j < y; j+=2) {
      r = r + matriz[i][j];
    }
  }
  for (int i = 0; i < x; i++) {

    for (int j = 0; j < y - 4; j++) {
        o = matriz[i][j + 1] + matriz[i][j];
        matriz[i][5] = o;
        cout << matriz[i][5] << '\n';
        break;
    }
  }
  // a)
  cout << "a soma de todos os elementos das colunas ímpares: " << g << endl;
  // b)
  cout << "a média aritmética dos elementos da segunda e quarta colunas: " << r / 6 << endl;

  // d)
  cout << "matriz modificada: " << endl;
  for (int i = 0; i < x; i++) {

    for (int j = 0; j < y; j++) {
        cout << matriz[i][j] << endl;
    }
  }



return 0;
}
*/
/*
6) Faça um programa que implemente o jogo da velha. Use uma matriz de caracteres
para representar as jogadas. Inicialize a matriz com um valor que represente as
posições livres para serem jogadas. Controle as jogadas de forma que não seja
possível jogar em uma posição que já tenho sido escolhido. Utilizando-se as
regras do jogo da velha, informe quando houver um vencedor.
*/

int main(){





    //  ? // Nao conseguir fazer




  return 0;
}
