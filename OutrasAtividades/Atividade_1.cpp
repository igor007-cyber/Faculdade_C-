#include <iostream>

using namespace std;

/* 1) Dados três números, imprimi-los em ordem crescente.

int main()
{

  for(int i = 1; i <= 3; i++)
  {
    cout << i << endl;
  }

  return 0;
}
-------------------------------------------------------------------------------
*/

/* 2) Dado os número P e Q, verifique se p é divisível por Q.

int main()
{
  setlocale(LC_ALL,"portuguese");
  int P, Q, p;

  cout << "Digite um numero: ";
  cin >> P;
  cout << "Digite outro numero: ";
  cin >> Q;

  if (Q % P == 0)
  {
    cout << "Ele é divisível!!";
  }
  else
    cout << "Ele não é divisível!!";



  return 0;
}
//------------------------------------------------------------------
*/
/*
//3) Escreva um programa que calcule o salário de um profissional liberal baseado
//no valor da hora de serviço e da quantidade de horas trabalhadas, deduzidos os
//descontos com INSS. O programa deve ler os dados exigidos, calcular o valor do
//salário bruto e do salário líquido, descontados os impostos e exibir todos os
//valores lidos e calculados no final.

int main()
{
  float hora_salario, salario,total_salario_com_desconto,hora_total;
  setlocale(LC_ALL,"portuguese");

  cout << "Quanto voce ganha por hora trabalhada?\n";
  cin >> hora_salario;
  cout << "Quantas horas voce trabalha?\n";
  cin >> hora_total;

  salario = hora_salario * hora_total * 30;
  cout << "Seu salario sem desconto e de " << salario << "\n\n";

  if(salario <= 1100.00)
  {
   // 7,5% para até um salário mínimo (R$1.100);
      total_salario_com_desconto = salario * 0.075;
      cout << "O seu desconto vai ser de " << total_salario_com_desconto;
      total_salario_com_desconto = salario - total_salario_com_desconto;
      cout << "\nEntao seu salario vai ser de " << total_salario_com_desconto;
  }
  else if(salario >= 1100.01 && salario <= 2203.48)
  {
    // 9% para salários entre R$ 1.100,01 e R$ 2.203,48
      total_salario_com_desconto = salario * 0.09;
      cout << "O seu desconto vai ser de " << total_salario_com_desconto;
      total_salario_com_desconto = salario - total_salario_com_desconto;
      cout << "\nEntao seu salario vai ser de " << total_salario_com_desconto;
  }
  else if(salario >= 2203.49 && salario <= 3305.22)
  {
   // 12% para salários entre R$ 2.203,49 e R$ 3.305,22
      total_salario_com_desconto = salario * 0.12;
      cout << "O seu desconto vai ser de " << total_salario_com_desconto;
      total_salario_com_desconto = salario - total_salario_com_desconto;
      cout << "\nEntao seu salario vai ser de " << total_salario_com_desconto;
  }
  else if(salario >= 3305.23 && salario <= 6433.57)
  {
   // 14% para salários entre R$ 3.305,23 e R$ 6.433,57
      total_salario_com_desconto = salario * 0.14;
      cout << "O seu desconto vai ser de " << total_salario_com_desconto;
      total_salario_com_desconto = salario - total_salario_com_desconto;
      cout << "\nEntao seu salario vai ser de " << total_salario_com_desconto;
  }

  return 0;
}
--------------------------------------------------------------------------------
*/
//4. A sequência de Fibonacci é calculada pela soma dos dois últimos valores,
//ex.: 1, 1, 2, 3, 5, 8, 13, etc. Crie uma função que receba do usuário um
//número N e imprima os N primeiros números da sequência.
/*
int main()
{

  unsigned int sequencia = 0;
  unsigned int a = 0 , b = 1;
  unsigned int limite = 0;

  cout << "Quantos numeros Fibonacci deseja gerar?" << endl;
  cin >> limite;

  cout << endl;
  cout << a << endl;
  cout << b << endl;


        for( int n = 0; n < limite; n++)
             {
                 sequencia = (a + b);
                 cout << sequencia  << endl;
                 a = b;
                 b = sequencia;
              }


  return 0;
}
*/
//-----------------------------------------------------------------------------
//5)  Faça uma função que leia um inteiro e calcule o seu fatorial.

int main(){
    int n,r = 0;
    cout << "digite um numero: ";
    cin >> n;
  for(int fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
      r = fat;
  }
  cout << endl << "o resultado e: " << r;
}
