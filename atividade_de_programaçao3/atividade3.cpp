#include <iostream>

using namespace std;

/*
1) O que o código abaixo iria imprimir se ele fosse parte de um programa válido?
     int i;
     for (i = 0; i < 5; i++)
         cout  << i;
         cout  << endl;

resposta: ele iria contar e mostrar os numeros de 0 até 4.
*/
/*
2) O que o código abaixo iria imprimir se ele fosse parte de um programa válido?
     int j;
     for (j = 0; j < 11; j += 3)
     cout << j;
     cout << endl << j << endl;

resposta: ele iria contar de três em três, so que ele ia mostrar o mesmo numero
          duas vezes, como  0,0,3,3,6,6,9,9
*/
/*
3) Escreva um loop for que imprima os valores 1 2 4 8 16 32 64 pelo incremento
de uma variável contador por um fator de 2 em cada ciclo.
resposta:

int main(){

  int j;
    for (j = 1; j < 65 ; j *= 2)
        cout << "\n" <<j;


return 0;

}
*/
/*
4) Escreva um programa que peça ao usuário para digitar dois valores inteiros. O
programa deve então calcular e mostrar a soma de todos os inteiros entre, e
incluindo, os dois valores inteiros. Assuma que o menor inteiro é digitado
primeiro.
resposta:

int main(){
   int i;
   int num = 0;
   int num1;
   int num2;

    cout << "digite o valor inferior: " << endl;
    cin >> num1;
    cout << "digite o valor superior: " << endl;
    cin >> num2;
    cout << "\n";

    for (i = num1; num2 >= i; i++){

        cout << i << endl;
        num = num + i;
        cout << num << endl;

    }
cout << "A soma de todos os valores entre " << num1 << " e " << num2 << ": " << num;

return 0;
}
*/
/*
5)Escreva um programa que peça ao usuário para digitar números. Após cada entrada,
o programa deve mostrar o valor acumulado da soma dos números até o momento. O
programa deve encerrar quando o usuário digitar o número zero.


int main(){

  float num;
  float num1 = 0;

  for (;;)
  {
    cout << "digite um numero: " << endl;
    cin >> num;
    if (num == 0) {
      cout << "codigo encerrado" << endl;
      break;
   }

    num1 = num1 + num;

  }
cout << "A soma total dos numeros acumulados e " << num1 << endl;

return 0;
}
*/
/*
6) Daiane investiu R$100 com 10% de rendimento. Isto é, a cada ano, o rendimento
é de 10% do valor original investido, ou seja, R$10 de ganho todo ano:

rendimento = 0.10 x investimento original

No mesmo instante, Cleo investiu R$100 com 5% de rendimento combinado. Isto é, o
rendimento é 5% do saldo atual, incluindo os rendimentos passados:

rendimento = 0.05 x saldo atual

Célia ganha 5% de R$100 no primeiro ano, dando a ela R$105 de saldo. No ano
seguinte ela ganha 5% de R$105, ou R$5.25, e assim por diante. Escreva um
programa que ache quantos anos leva para o saldo de Célia ultrapassar o saldo de
Daiane e mostre o valor dos saldos neste instante.

int main()
{
 float invest_Daiane = 0.10*100;
 int ano = 0;
 float rendimento = 0;
 float invest_Celia = 100;

 while (1)
 {
   ano++;
   rendimento =  invest_Celia * 0.05;
   invest_Celia = invest_Celia + rendimento;
   cout << invest_Celia << endl;
   if ( rendimento > invest_Daiane){
     cout << "chegou!!" << endl;
     break;

   }

 }
 cout << "o tempo leva para o saldo de Célia ultrapassar o saldo de Daiane e de: "<< ano
      << " anos"<< "\n"<< " e o seu saldo atual e: " << rendimento;

return 0;
}
*/
/*
7) Projete um registro chamado carro que guarde as seguintes informações sobre
um automóvel: o fabricante, como uma string em um vetor de caracteres, e o ano
de construção, como um inteiro. O programa deve criar um vetor para armazenar
carros. Em seguida, o programa deve pedir ao usuário para entrar com as
informações de pelo menos 2 carros. Por fim, o programa deve imprimir o conteúdo
de cada registro.


struct carros{

  char marca_carro [50];
  int ano;
};

int main (){
    int i;
    carros carro[i];

for (i = 0; i <= 1; i++)
{

    cout << "digite a marca do carro: " << endl;
    cin >> carro[i].marca_carro;
    cout << "digite o ano de fabricacao: " << endl;
    cin >> carro[i].ano;

}
cout << "a marca do primeiro carro e: " << carro[0].marca_carro
<< " e o ano: " << carro[0].ano << endl << endl;
cout << "a marca do segundo carro e: " << carro[1].marca_carro
<< " e o ano: " << carro[1].ano << endl;

return 0;
}
*/
/*
8) Use o programa da aula prática para gerar um laço que imprime as informações
das pessoas cadastradas.

struct Cidade{
    int codigo;
    char nome[30];
};

struct Pessoa{
    int codigo;
    char nome[30];
    char cpf[14];
    char telefone[15];
    char email[30];
    int idade;
    char logradouro[20];
    int numero;
    Cidade cidade;
    char estado[20];
};


int main(){

        Cidade cidades[5] = {
            {0, "Cedro"},
            {1, "Ico"},
            {2, "Lavras da Mangabeira"},
            {3, "Iguatu"},
            {4, "Fortaleza"}
        };

        int i;
        Pessoa pessoas[i];
        int codigoCidade;



for (i = 0; i <= 1; i++){
        cout << "CADASTRANDO A PESSOA\n";
        cout << "Digite o nome: ";
        cin >> pessoas[i].nome;
        cout << "Digite o cpf: ";
        cin >> pessoas[i].cpf;
        cout << "Digite o telefone: ";
        cin >> pessoas[i].telefone;
        cout << "Digite o email: ";
        cin >> pessoas[i].email;
        cout << "Digite a idade: ";
        cin >> pessoas[i].idade;
        cout << "Digite o logradouro: ";
        cin >> pessoas[i].logradouro;
        cout << "Digite o numero: ";
        cin >> pessoas[i].numero;
        cout << "Digite o codigo da cidade: ";
        cin >> codigoCidade;

        pessoas[i].cidade = cidades[codigoCidade];

        cout << "Digite o estado: ";
        cin >> pessoas[i].estado;
}

        cout << "\n\nCADASTROS DAS PESSOAS\n\n";
        cout << "Nome: " << pessoas[0].nome;
        cout << "\nCPF: " << pessoas[0].cpf;
        cout << "\nTelefone: " << pessoas[0].telefone;
        cout << "\nEmail: " << pessoas[0].email;
        cout << "\nIdade: " << pessoas[0].idade;
        cout << "\nLogradouro: " << pessoas[0].logradouro;
        cout << "\nNumero: " << pessoas[0].numero;
        cout << "\nCidade: " << pessoas[0].cidade.nome;
        cout << "\nEstado: " << pessoas[0].estado;

        cout << "\n\n----------------------\n\n";

        cout << "Nome: " << pessoas[1].nome;
        cout << "\nCPF: " << pessoas[1].cpf;
        cout << "\nTelefone: " << pessoas[1].telefone;
        cout << "\nEmail: " << pessoas[1].email;
        cout << "\nIdade: " << pessoas[1].idade;
        cout << "\nLogradouro: " << pessoas[1].logradouro;
        cout << "\nNumero: " << pessoas[1].numero;
        cout << "\nCidade: " << pessoas[1].cidade.nome;
        cout << "\nEstado: " << pessoas[1].estado;

return 0;
      }
*/
/*
9) Escreva um programa que peça ao usuário para entrar com o número de linhas
amostrar. O programa deve então imprimir essa quantidade de linhas usando
asteriscos, com um asterisco na primeira linha, dois na segunda, e assim por
diante. Em cada linha, os asteriscos devem ser precedidos por uma quantidade de
pontos necessários para fazer todas as linhas terem o mesmo número de caracteres.
O número total de caracteres em cada linha deve ser igual ao número de linhas.
Use loops aninhados na solução do problema.
Entre com o número de linhas: 5
....*
...**
..***
.****
*****


int main(){

  int linha;
  int g, j;

  cout << "Quantas linhas voce quer?" << endl;
  cin >> linha;

for (g = 1; g <= linha; g++){


  for (j = 1; j <=linha - g; j++) {

        cout << ".";
  }

  for (j = 1; j <= g; j++) {

      cout << "*";
}

  cout << "\n";

}

return 0;
}
*/
