#include <iostream>
#include <string>

using namespace std;
/*
Crie uma agenda telefônica com as seguintes funcionalidades:
1-Adicionar contato
2-Pesquisar contato pelo nome
3-Listar agenda

Use como base o seguinte struct:
struct Contato{
string nome;
string telefone;
}
*/

struct Contato{
  string nome;
  string telefone;
};

void Adicionar_contato(Contato *contatos, int Qtd);
void Listar_agenda(Contato *contatos, int Qtd);
void Pesquisar_contato(Contato *contatos, Contato *pesquisa, int Qtd);

int main()
{
  int Qtd;
  cout << "Digite a quantidade de pessoas que voce quer adicionar em seus contatos: ";
  cin >> Qtd;

  Contato *contatos = new Contato[Qtd];
  Contato *pesquisa = new Contato[Qtd];
  cout << "\n\n";
  Adicionar_contato(contatos, Qtd);
  Listar_agenda(contatos, Qtd);
  Pesquisar_contato(contatos, pesquisa, Qtd);

  return 0;
}

void Adicionar_contato(Contato *contatos, int Qtd)
{
  cout << "------------ADICIONAR PESSOA------------\n\n";
  for(int p = 0; p < Qtd; p++)
  {
      cout << "Digite o nome da pessoa - ("<< p << "): ";
      cin >> contatos[p].nome;
      cout << "Digite o telefone da pessoa: ";
      cin >> contatos[p].telefone;
      cout << endl;
  }
  cout << "\n\n";
}

void Listar_agenda(Contato *contatos, int Qtd)
{
  cout << "------------LISTAS DAS PESSOA------------\n\n";
  for(int p = 0; p < Qtd; p++)
  {
    cout << "\nNome - (" << p <<"): " << contatos[p].nome;
    cout << "\nTelefone: " << contatos[p].telefone;
    cout << "\n\n";
  }
}

void Pesquisar_contato(Contato *contatos, Contato *pesquisa, int Qtd)
{
  bool verdade_mentira;
  string name;

  cout << "Dite o nome da pessoa voce quer: \n\n";
  cin >> name;

  for(int p = 0; p < Qtd; p++)
  {
      if( name == contatos[p].nome){
        cout << "------------PESSOA QUE VOCE ESCOLHEU PRA PESQUISAR------------\n\n";
        cout << p << "\n\nNome:" << contatos[p].nome;
        cout <<"\nTelefone: " << contatos[p].telefone;
        cout <<"\n\n";
        pesquisa[p].nome = contatos[p].nome;
        pesquisa[p].telefone = contatos[p].telefone;
        verdade_mentira = true;
      }
      else
      {
        verdade_mentira = false;
      }
  }
  if(verdade_mentira == false){
    cout << "------------digite novamente------------\n\n";
    Pesquisar_contato(contatos, pesquisa, Qtd);
  }

}
