#include <iostream>

using namespace std;


struct NoLista
{
  int dado;
  NoLista *prox;
};

int num = 0;

void inicializar(NoLista *& ini)
{
  ini = NULL;
}

void adicionarInicio(NoLista *& ini, int dado)
{
  cout << "digite um numero: ";
  cin >> dado;
  NoLista * novo = new NoLista;
  novo -> dado = dado;
  novo -> prox = NULL;
  if(ini == NULL)
  {
    ini = novo;
  }
  else
  {
    novo -> prox = ini;
    ini = novo;
  }
  num++;
}

bool removerInicio(NoLista *& ini)
{
  if(ini == NULL)
  {
    return false;
  }
  else
  {
    NoLista * aux = ini;
    ini = ini -> prox;
    delete aux;
    num--;
    return true;
  }
}

void adicionarFim(NoLista *& ini, int dado)
{
  cout << "digite um numero: ";
  cin >> dado;
  NoLista * novo = new NoLista;
  novo -> dado = dado;
  novo -> prox = NULL;
  if(ini == NULL)
  {
    ini = novo;
  }
  else
  {
    NoLista * aux = ini;
    while(aux -> prox != NULL)
    {
      aux = aux -> prox;
    }
    aux -> prox = novo;
  }
  num++;
}

bool removerFim(NoLista *& ini)
{
  if(ini == NULL)
  {
    return false;
  }
  else
  {
    NoLista * aux = ini;
    while (aux->prox->prox != NULL)
    {
      aux = aux -> prox;
    }
    delete aux -> prox;
    aux -> prox = NULL;
    num--;
    return true;
  }
}

void imprimir(NoLista * ini)
{
  system("clear");
  NoLista * aux = ini;
  while(aux != NULL)
  {
    cout << aux->dado << " - ";
    aux = aux->prox;
  }
  cout << "\n\n";
}

void TamanhoLista()
{
    cout << "O tamanho da lista e: " << num << "\n\n";
}

void ApagarTudo(NoLista *& ini)
{
  if (ini == NULL)
  {
    cout << "lista vazia";
  }
  else
  {
    delete ini;
    ini = NULL;
  }
  num = 0;
}

void InverterTudo(NoLista *& ini, NoLista *& inve)
{
  NoLista * aux = NULL;
  while(ini != NULL)
  {
    inve = ini;
    ini = ini -> prox;
    inve -> prox = aux;
    aux = inve;
  }
  ini = inve;
  imprimir(ini);

}

void menu(NoLista *& ini, NoLista *& inve, int dado)
{
  int escolha;

  cout << "(1) Voce quer adicionar um numero no inicio\n";
  cout << "(2) Voce quer adicionar um numero no final\n";
  cout << "(3) Voce quer imprimir\n";
  cout << "(4) Voce quer remover um numero no inicio\n";
  cout << "(5) Voce quer remover um numero no final\n";
  cout << "(6) Voce quer apagar tudo\n";
  cout << "(7) Voce quer inverter tudo\n";
  cout << "(8) Voce quer ver o tamnho de um lista\n";
  cin >> escolha;

  switch (escolha)
  {
    case 1: adicionarInicio(ini,dado);
            break;
    case 2: adicionarFim(ini, dado);
            break;
    case 3: imprimir(ini);
            break;
    case 4: removerInicio(ini);
            break;
    case 5: removerFim(ini);
            break;
    case 6: ApagarTudo(ini);
            break;
    case 7: InverterTudo(ini, inve);
             break;
    case 8: TamanhoLista();
            break;
  };
}

int main()

{
  NoLista * ini;
  inicializar(ini);
  NoLista * inve;
  inicializar(inve);
  int dado = 0;

  for (;;)
  {
    menu(ini, inve, dado);
  }

  return 0;
}
