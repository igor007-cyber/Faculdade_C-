/*
  13) Tendo como dado de entrada a altura (h) de uma pessoa, construa um
  algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7
*/

#include <iostream>

using namespace std;

int main(){

  float h;

  cout << "digite a uma altura: ";
  cin >> h;
  cout << "\n";
  cout << "Para homens: " << (72.7 * h) - 58 << endl;
  cout << "Para mulheres: " << (62.1 * h) - 44.7 ;

  return 0;
}
