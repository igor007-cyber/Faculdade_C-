#include <iostream>

/*
8) Faça um Programa que pergunte quanto você ganha por hora e o número de horas
  trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/

using namespace std;

int main(){

  float ganho_hora;
  int horas_trabalho;

  cout << "quanto voce ganha por hora de trabalho?" << endl;
  cin >> ganho_hora;
  cout << "quantas horas voce trabalhou no mes?" << endl;
  cin >> horas_trabalho;
  cout << "\n" << "Entao..." << "\n";

  cout << "Voce ganhou no mes: " <<  ganho_hora * horas_trabalho;


  return 0;
}
