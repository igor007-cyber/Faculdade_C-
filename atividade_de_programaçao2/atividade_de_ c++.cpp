#include <iostream>

using namespace std;
/*
1) Construa a declaração de um registro que descreve um peixe. O registro deve
incluir o tipo (string), o peso em gramas (inteiro), e o comprimento em
centímetros (ponto-flutuante).
*/
/*
struct peixe
{
    char nome_do_peixe[50];
    int peso_gramas;
    float comprimento_do_peixe;
};

*/
//------------------------------------------------------------------------------
/*
2) Declare uma variável do tipo criado na questão anterior e inicialize-o.

*/
/*
struct peixe
{
    char nome_do_peixe[50];
    int peso_gramas;
    float comprimento_do_peixe;
};

int main()
{
  peixe primeiro_peixe = {"peixe espada", 10, 2.5};

  cout << "o peixe que eu peguei foi o: "
       << primeiro_peixe.nome_do_peixe;
       << " e o peso dele e de " << primeiro_peixe.peso_gramas
       << " e o comprimento dele e de " << primeiro_peixe.comprimento_do_peixe;


  system ("PAUSE");
  return 0;
}
*/
//-----------------------------------------------------------------------------
/*
3) Considerando as declarações abaixo responda dizendo o que é e qual o tipo do
elemento referenciado:

a) proVolley ----> é uma vetor do tipo ball e tem referencia a todos os
                  registros do ball
b) proVolley[4] --> é uma vetor do tipo ball e declara um vetor da posiçao 4
c) proVolley[1].name ----> e do tipo char e coloca na variavel 1 da proVolley
d) proVolley[1].name[2] --> e do tipo char e e coloca na variavel 1 da proVolley
                            e tambem só um caractere na posiçao 2
e) proVolley[0].dir -----> o tipo e orientation que representa a orientaçao dos
                          planos e ele aponta a variavel {N}
f) proVolley[9].posX -----> e do tipo int, e esta chamando a posiçao do eixo x
                            no registro da varivel proVolley[9];
g) proVolley[9].acel -----> e do tipo float e esta chamando a aceleraçao da
                            no registro da varivel proVolley[9];
*/
//-----------------------------------------------------------------------------
/*
4) O registro CandyBar contém três membros. O primeiro guarda a marca da barra e
chocolate. O segundo membro guarda o peso (que deve ter uma parte fracionária)
da barra de chocolate, e o terceiro membro guarda o número de calorias
(um valor inteiro) na barra de chocolate. Escreva um programa que declare tal
registro e crie uma variável chamada snack, inicializando seus membros para
“Mocha Munch”, 2.3, e 350, respectivamente. A inicialização deve ser parte da
declaração da variável. Finalmente, o programa deve mostrar o conteúdo da
variável snack.
*/
/*
struct CandyBar
{
  char marca_chocolate[40];
  float peso_chocolate;
  int calorias_choco;
};

int main()
{
  CandyBar snack = {"Mocha Munch", 2.30, 350};

  cout << "A marca do chocolate e " << snack.marca_chocolate << endl;
  cout << "O peso do chocolate e " << snack.peso_chocolate << endl;
  cout << "A quantidade de calorias do chocolate e " << snack.calorias_choco << endl;

  system ("PAUSE");
  return 0;
}
*/
//-----------------------------------------------------------------------------
/*
5) O registro CandyBar contém três membros, como descrito na questão anterior.
Escreva um programa para criar um vetor de três registros CandyBar.
Inicialize-os para valores de sua escolha, e então mostre o conteúdo de cada
registro.
*/
/*
struct CandyBar
{
  char marca_chocolate[40];
  float peso_chocolate;
  int calorias_choco;
};

int main()
{
  CandyBar snack[3] = {
    {"snickers", 5.0, 350},
    {"cacau", 2.0, 350},
    {"kit kat", 2.5, 350}
  };

  cout << "A marca do chocolate e " << snack[0].marca_chocolate << endl;
  cout << "O peso do chocolate e " << snack[0].peso_chocolate << " gramas" << endl;
  cout << "A quantidade de calorias do chocolate e " << snack[0].calorias_choco << endl;
  cout << "---------------------------------------------------------------------------\n";
  cout << "A marca do chocolate e " << snack[1].marca_chocolate << endl;
  cout << "O peso do chocolate e " << snack[1].peso_chocolate << " gramas" << endl;
  cout << "A quantidade de calorias do chocolate e " << snack[1].calorias_choco << endl;
  cout << "---------------------------------------------------------------------------\n";
  cout << "A marca do chocolate e " << snack[2].marca_chocolate << endl;
  cout << "O peso do chocolate e " << snack[2].peso_chocolate << " gramas" << endl;
  cout << "A quantidade de calorias do chocolate e " << snack[2].calorias_choco << endl;

  system ("PAUSE");
  return 0;
}
*/
//------------------------------------------------------------------------------
/*
6) Utilizando o código da aula prática de registros (11.09), faça com o Estado o
que foi feito com cidade, visto que cidade e estado compartilham da mesma
condição, ou seja, são dados comuns que podem se repetir em vários cadastros.
*/
/*
struct Estado
{
    int codigo;
    char Nome[30];
};
struct cidade
{
    char nome1[30];
    Estado estado;
};

int main()
{
  Estado estados[5] = {
            {0, "Ceara"},
            {1, "Sao Paulo"},
            {2, "Rio de Janeiro"},
            {3, "Minas Gerais"},
            {4, "Pernambuco"}
        };
    cidade cidades[30];
    int codigoEstado;

    cout << "Ceara o codigo e (0)" << endl;
    cout << "Sao Paulo o codigo e (1)" << endl;
    cout << "Rio de Janeiro o codigo e (2)" << endl;
    cout << "Minas Gerais o codigo e (3)" << endl;
    cout << "Pernambuco o codigo e (4)" << endl << endl;

    cout << "Digite o codigo do seu estado: ";
    cin >> codigoEstado;
    cidades[0].estado = estados[codigoEstado];
    cout << "digite o nome da sua cidade:" << endl;
    cin >> cidades[0].nome1;
    cout << "\n seu estado e " << cidades[0].estado.Nome << endl;
    cout << "sua cidade e " << cidades[0].nome1 << endl;
cout << "------------------------------------------------------------";

    cout << "\n\nCeara o codigo e (0)" << endl;
    cout << "Sao Paulo o codigo e (1)" << endl;
    cout << "Rio de Janeiro o codigo e (2)" << endl;
    cout << "Minas Gerais o codigo e (3)" << endl;
    cout << "Pernambuco o codigo e (4)" << endl << endl;

    cout << "Digite o codigo do seu estado: ";
    cin >> codigoEstado;
    cidades[1].estado = estados[codigoEstado];
    cout << "digite o nome da sua cidade:" << endl;
    cin >> cidades[1].nome1;
    cout << "\nseu estado e " << cidades[1].estado.Nome << endl;
    cout << "sua cidade e " << cidades[1].nome1 << endl;


  system ("PAUSE");
  return 0;
}
*/
//-----------------------------------------------------------------------------
/*
7) A empresa Wingate roda um serviço de análise de pizzas. Para cada pizza, ela
 precisa guardar as seguintes informações:
a) O nome da pizzaria
b) O nome da pizza
c) O diâmetro da pizza
d) O preço da pizza
Monte um registro que possa guardar essas informações e escreva um programa que
use uma variável desse tipo. O programa deve pedir ao usuário que entre com
cada um dos itens de informação anteriores, e então o programa deve mostrar essa
informação (use cin e cout).
*/
/*
struct pizza
{
  float codigo;
  char nome[30];
};

struct Pizza
{
  char nome_pizzaria[50];
  float diamentro_pizz;
  pizza preco;
  pizza sabor;
};

int main()
{
  Pizza piza [5];
  int CodigodaPizza;

  pizza pizzas[5]
  {
    {19.0, "Portuquesa"},
    {15.0, "Chocolate"},
    {20.0, "Calabresa"},
    {15.0, "4 queijo"},
    {18.50, "Siciliana"}
  };

  cout << "Digite qual a pizzaria que voce deseja ir: " << endl;
  cin >> piza[0].nome_pizzaria;

  cout << "Digite o codigo da pizza que voce quer: " << "\n"
       << "Portuquesa o codigo é 0" << "\n"
       << "Chocolate o codigo é 1" << "\n"
       << "Calabresa o codigo é 2" << "\n"
       << "4 queijo o codigo é 3" << "\n"
       << "Siciliana o codigo é 4" << endl;
  cin >> CodigodaPizza;
  piza[0].sabor = pizzas[CodigodaPizza];
  piza[0].preco = pizzas[CodigodaPizza];

  cout << "digite o diamentro que voce deseja(obs:.só nao pode passar de 50 cm):" << endl;
  cin >> piza[0].diamentro_pizz;

  cout << "\nA pizzaria que voce quer e " << piza[0].nome_pizzaria << endl;
  cout << "O sabor da pizza e " << piza[0].sabor.nome << endl;
  cout << "O dimatro da pizza e " << piza[0].diamentro_pizz << endl;
  cout << "O preço da pizza e " << piza[0].preco.codigo << endl;


system("PAUSE");
return 0;
}
*/
