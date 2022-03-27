#include <iostream>

using namespace std;/*

Uma clínica lhe contratou para desenvolver um sistema que gerencia a lista de
clientes a serem atendidos.
Cada cliente possui nome, sexo e o tipo de atendimento(normal ou preferencial).
Os clientes são atendidos de acordo com a ordem e chegada, sendo os preferenciais
atendidos antes dos normais.

O sistema deve:
1. Adicionar cliente (normal)
2. Adicionar cliente (preferencial)
3. Atender cliente
4. Consultar quantos faltam
0. Sair

Obs.: É obrigatório o uso de fila com prioridade.
Obs.: O Consultar quantos faltam recebe a fila e o nome da pessoa que quer
consultar e retorna quantas pessoa faltam para ela ser atendida.
*/
struct Clinica_preferencial
{
  string nome;
  Clinica_preferencial* prox;
};
struct Clinica_normal
{
  string nome;
  Clinica_normal *prox;
};

void inicializar(Clinica_preferencial *& cliente_P, Clinica_normal *& cliente_N)
{
  cliente_P = NULL;
  cliente_N = NULL;
}

void adicionarNomal(Clinica_normal *& cliente_N, string nome)
{
  cout << "Digite o seu nome: ";
  cin >> nome;
  Clinica_normal * novo = new Clinica_normal;
  novo -> nome = nome;
  novo -> prox = NULL;
  if(cliente_N == NULL)
  {
    cliente_N = novo;
  }
  else
  {
    Clinica_normal * aux = cliente_N;
    while(aux -> prox != NULL)
    {
      aux = aux -> prox;
    }
    aux -> prox = novo;
  }
}

void adicionarPreferencial(Clinica_preferencial *& cliente_P, string nome)
{
  cout << "Digite o seu nome: ";
  cin >> nome;
  Clinica_preferencial * novo = new Clinica_preferencial;
  novo -> nome = nome;
  novo -> prox = NULL;
  if(cliente_P == NULL)
  {
    cliente_P = novo;
  }
  else
  {
    Clinica_preferencial * aux = cliente_P;
    while(aux -> prox != NULL)
    {
      aux = aux -> prox;
    }
    aux -> prox = novo;
  }
}

 bool atenderCliente(Clinica_preferencial *& cliente_P, Clinica_normal *& cliente_N)
{
  if(cliente_P == NULL)
  {
    return false;
  }
  else
  {
    Clinica_preferencial * aux = cliente_P;
    cliente_P = cliente_P -> prox;
    delete aux;
    return true;
  }

  if(cliente_N == NULL)
  {
    return false;
  }
  else
  {
    Clinica_normal * aux = cliente_N;
    cliente_N = cliente_N -> prox;
    delete aux;
    return true;
  }
}

void Consultar_faltam(Clinica_preferencial * cliente_P, Clinica_normal * cliente_N, string nome)
{
  system("clear");
  cout << "----------------Preferecial-----------------";
  Clinica_preferencial * aux = cliente_P;
  while(aux != NULL)
  {
    cout << aux->nome << " - ";
    aux = aux->prox;
  }
  cout << "\n\n----------------Normal-------------------";

  Clinica_normal * axu = cliente_N;
  while(axu != NULL)
  {
    cout << axu->nome << " - ";
    axu = axu->prox;
  }
  cout << "\n\n";
}


int main()
{
  Clinica_preferencial * cliente_P;
  Clinica_normal * cliente_N;
  inicializar(cliente_P, cliente_N);
  string nome;
  int escolha;
for (;;) {


  cout << "1. Adicionar cliente (normal)\n";
  cout << "2. Adicionar cliente (preferencial)\n";
  cout << "3. Atender cliente\n";
  cout << "4. Consultar quantos faltam\n";
  cout << "0. Sair\n";
  cin >> escolha;
  switch (escolha)
  {
    case 1: adicionarNomal(cliente_N, nome);
            break;
    case 2: adicionarPreferencial(cliente_P, nome);
            break;
    case 3: atenderCliente(cliente_P, cliente_N);
            break;
    case 4:Consultar_faltam(cliente_P, cliente_N, nome);
            break;
    case 0: break;
  }
}

  return 0;
}
