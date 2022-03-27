#include <iostream>

using namespace std;

/*
  1) Escreva uma função que receba o nome de um vetor de double’s e o tamanho do
  vetor como argumento. Retorne o maior valor do vetor.


  void vetor1(int vetor2[],int);

int main(){

  const int x = 5;
  int vetor2[x]{55, 4, 6, 9, 50};

  vetor1(vetor2,x);


  return 0;
}

void vetor1(int vetor2[],int){

    if (vetor2[0] > vetor2[1] && vetor2[0] > vetor2[2] && vetor2[0] > vetor2[3] && vetor2[0] > vetor2[4]){
      cout << vetor2[0];
    }
    else if(vetor2[1] > vetor2[2] && vetor2[1] > vetor2[3] && vetor2[1] > vetor2[4]){
      cout << vetor2[1];
    }
    else if(vetor2[2] > vetor2[3] && vetor2[2] > vetor2[4]){
      cout << vetor2[2];
    }
    else if(vetor2[3] > vetor2[4]){
      cout << vetor2[3];
    }
    else
      cout << vetor2[4];

}
*/
/*
  2) Aqui está a declaração de um registro:
struct box{
char fabricante[40];
float altura;
float largura;
float comprimento;
float volume;
};

a. Escreva uma função que receba um registro box e que mostre o valor de cada
   membro.
b. Escreva um programa simples que use esta função

// a)--------------------------------------------------------------------------
  struct box{
    char fabricante[40];
    float altura;
    float largura;
    float comprimento;
    float volume;
};

void caixa(box fabricante[], int x);


int main(){
  int x = 40;
  box fabricante[x];

  caixa(fabricante, 40);


  return 0;
}

void caixa(box fabricante[], int x){

  cout << "digite o nome do fabricante:" << endl;
  cin >>  fabricante[x].fabricante;
  cout << "digite a altura do box:" << endl;
  cin >>  fabricante[x].altura;
  cout << "digite a largura do box:" << endl;
  cin >>  fabricante[x].largura;
  cout << "digite a comprimento do box:" << endl;
  cin >>  fabricante[x].comprimento;
  cout << "digite o volume do box:" << endl;
  cin >>  fabricante[x].volume;

  cout << "\n Pedido do fabricante \n";

  cout << "O seu nome é: " << fabricante[x].fabricante << endl;
  cout << "A altura do box foi: " << fabricante[x].altura << endl;
  cout << "A largura do box foi: " << fabricante[x].largura << endl;
  cout << "A comprimento do box foi: " << fabricante[x].comprimento << endl;
  cout << "O volume do box foi: " << fabricante[x].volume << endl;

}

// b)---------------------------------------------------------------------------

struct box{
  char fabricante[40];
  float altura;
  float largura;
  float comprimento;
  float volume;
};

void caixa(box fabricante[], int x);


int main(){
box fabricante[5];

cout << "digite o nome do fabricante:" << endl;
cin >>  fabricante[0].fabricante;
cout << "digite a altura do box:" << endl;
cin >>  fabricante[0].altura;
cout << "digite a largura do box:" << endl;
cin >>  fabricante[0].largura;
cout << "digite a comprimento do box:" << endl;
cin >>  fabricante[0].comprimento;
cout << "digite o volume do box:" << endl;
cin >>  fabricante[0].volume;

cout << "\n Pedido do fabricante \n";

cout << "O seu nome é: " << fabricante[0].fabricante << endl;
cout << "A altura do box foi: " << fabricante[0].altura << endl;
cout << "A largura do box foi: " << fabricante[0].largura << endl;
cout << "A comprimento do box foi: " << fabricante[0].comprimento << endl;
cout << "O volume do box foi: " << fabricante[0].volume << endl;


return 0;
}
*/

/*
  3) Escreva uma função com o protótipo abaixo:

     int replace(char * str, char c1, char c2).

     Faça com que a função substitua toda ocorrência de c1 por c2 na string str,
     e retorne o número de substituições feitas.

     obs.: eu nao consegui entender.
*/
//------------------------------------------------------------------------------
/*
 4) Escreva um programa que peça ao usuário para entrar com até 10 resultados de
 um piloto de corridas. Estes valores devem ser armazenados em um vetor. Você
 deve fornecer um mecanismo para que o usuário possa parar de digitar antes de
 atingir os 10 valores. O programa deve apresentar todos os resultados lidos em
 uma linha e a média dos resultados em outra linha, como mostrado no exemplo
 abaixo. Construa três funções separadas: uma para tratar a entrada de dados do
 usuário, uma para a apresentação dos resultados e outra para o cálculo da
 média.


void resul(float vetor[], int i);
void apresentacao(float vector[], int i);
float media(float med[]);

int main(){

  float resultado[10];

  resul(resultado, 10);

  return 0;
}

void resul(float vetor[], int i){

  for(int j = 0; j < i; j++){

      cout << "digite um numero " << j << ":" << endl;
      cin >> vetor[j];

  }
apresentacao(vetor, i);

}

void apresentacao(float vector[], int i){

 float x = media(vector);

  for(int j = 0; j < i; j++){

      cout << "O numero " << j << " e: " << vector[j] << endl;

  }
  cout << "A media deles e: " << x;

}
float media(float med[]){

  float x = (med[0] + med[1] + med[2] + med[3] + med[4] + med[5] + med[6] + med[7] + med[8] + med[9])/10;

return x;
}
*/
//------------------------------------------------------------------------------
/*
  5) Altere o programa em anexo, adicionando duas funções, uma para cadastrar
  elementos no vetor e outra para imprimir os elementos do vetor.


struct Uf{
    int codigo;
    char nome[20];
    char sigla[3];

};

struct Cidade{
    int codigo;
    char nome[30];
    Uf estado;
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
};

Uf estados[] = {
    {0,"Ceara", "CE"},
    {1,"Rio Grande do Norte", "RN"},
    {2,"Paraiba", "PB"},
};

Cidade cidades[5] = {
    {0, "Cedro", {0,"Ceara", "CE"}},
    {1, "Ico", estados[0]},
    {2, "Lavras da Mangabeira", estados[1]},
    {3, "Iguatu", estados[0]},
    {4, "Fortaleza", estados[2]}
};

void cadastro(Pessoa pessoa[], int x);
void cadastrados(Pessoa cadastradas[], int x);
int codigoCidade;

int main(){


        const int tamPessoa = 2;
        Pessoa pessoas[tamPessoa];

cadastro(pessoas, tamPessoa);

return 0;
}

void cadastro(Pessoa pessoa[], int x){

  cout << "CADASTRANDO PESSOAS\n";

  for(int i = 0; i < x; i++){
      cout << "Digite o nome: ";
      cin >> pessoa[i].nome;
      cout << "Digite o cpf: ";
      cin >> pessoa[i].cpf;
      cout << "Digite o telefone: ";
      cin >> pessoa[i].telefone;
      cout << "Digite o email: ";
      cin >> pessoa[i].email;
      cout << "Digite a idade: ";
      cin >> pessoa[i].idade;
      cout << "Digite o logradouro: ";
      cin >> pessoa[i].logradouro;
      cout << "Digite o numero: ";
      cin >> pessoa[i].numero;
      cout << "Digite o codigo da cidade: ";
      cin >> codigoCidade;

      pessoa[i].cidade = cidades[codigoCidade];
      cout << "\n";
  }

  cadastrados(pessoa, x);
}
void cadastrados(Pessoa cadastradas[], int x){

  cout << "\n\nPESSOAS CADASTRAS\n\n";
  for(int i=0; i < x; i++){
      cout << "Nome: " << cadastradas[i].nome;
      cout << "\nCPF: " << cadastradas[i].cpf;
      cout << "\nTelefone: " << cadastradas[i].telefone;
      cout << "\nEmail: " << cadastradas[i].email;
      cout << "\nIdade: " << cadastradas[i].idade;
      cout << "\nLogradouro: " << cadastradas[i].logradouro;
      cout << "\nNumero: " << cadastradas[i].numero;
      cout << "\nCidade: " << cadastradas[i].cidade.nome;
      cout << "\nEstado: " << cadastradas[i].cidade.estado.nome;
      cout << "\n\n----------------------\n\n";
  }


}
*/
