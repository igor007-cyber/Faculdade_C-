/*
 15) Faça um Programa que pergunte quanto você ganha por hora e o número de
 horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido
 mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o
 INSS e 5% para o sindicato, faça um programa que nos dê:

    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
    calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

    Obs.: Salário Bruto - Descontos = Salário Líquido.
*/

#include <iostream>

using namespace std;

int  main(){

  float salario, horas, sala_liguido, ir, inss, sindicato;

  cout << "quanto você ganha por hora?" << endl;
  cin >> salario;
  cout << "o número de horas trabalhadas no mês?" << endl;
  cin >> horas;
  salario = salario * horas;

  cout << "\n" << "Salário Bruto : R$ " << salario;
  ir = (salario * 0.11);
  cout << "\n" << "IR (11%) : R$ " << ir;
  inss = (salario * 0.08);
  cout << "\n" << "INSS (8%) : R$ " << inss;
  sindicato = (salario * 0.05);
  cout << "\n" << "Sindicato ( 5%) : R$ " << sindicato;
  sala_liguido = salario - ir - inss - sindicato;
  cout << "\n" << "Salário Liquido : R$ " << sala_liguido;



  return 0;
}
