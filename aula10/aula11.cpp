#include <iostream>

using namespace std;
/*
struct pessoa
{
  string nome;
  int idade;
};

void imprimir(pessoa Pessoas[])
{
  for (int i = 0; i < 5; i++)
  {
    cout << Pessoas[i].nome;
  }
}

int main()
{
  pessoa Pessoa[5];
  for (int i = 0; i < 5; i++)
  {
      cout << "nome: ";
      cin >> Pessoa[i].nome;
      cout << "\nidade: ";
      cin >> Pessoa[i].idade;
  }

  imprimir(Pessoa);

  return 0;
}
*/
/*
struct Aluno
{
  string nome;
  float n1,n2,media;
};

void IformaDados(Aluno * turma, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cout << "digite o seu nome: ";
    cin >> turma[i].nome;
    cout << "\ndigite a sua nota 1: ";
    cin >> turma[i].n1;
    cout << "\ndigite a sua nota 2: ";
    cin >> turma[i].n2;
    turma[i].media = (turma[i].n1 + turma[i].n2) / 2;

  }
}

void AcimaDaMedia(Aluno * turma, int tam)
{
    for (int i = 0; i < tam; i++)
    {
      if (turma[i].media >= 7){
        cout << turma[i].nome << " | ";
      }
    }
}

int main()
{
  int tam;
  cout << "Quantos alunos a na turma: ";
  cin >> tam;

  Aluno *turma = new Aluno[tam];

  IformaDados(turma, tam);
  AcimaDaMedia(turma, tam);

  return 0;
}
*/
struct participante
{
  string nome;
  float pontos;
};

void IformaDados(participante * lista, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cout << "digite o seu nome: ";
    cin >> lista[i].nome;
    lista[i].pontos = 0;
    float disparo;

    for (int d = 1; d <= 5; d++)
    {
      cout << "Digite o valor do " << d << " desparo: ";
      cin >> disparo;
      lista[i].pontos += disparo;
    }

  }
}

void imprimirVencedor(participante * lista, int tam)
{
  string MaiorNome;
  float maiorPontos = 0;
  for (int i = 0; i < tam; i++)
  {
    if(lista[i].pontos > maiorPontos)
    {
      MaiorNome = lista[i].nome;
      maiorPontos = lista[i].pontos;
    }
  }
  cout << "vencedor " << MaiorNome << " | pontos: " << maiorPontos;
}

int main() {

  int tam;
  cout << "Quantos paticipantes: ";
  cin >> tam;

  participante * lista = new participante[tam];

  IformaDados(lista, tam);
  imprimirVencedor(lista, tam);

  return 0;
}
