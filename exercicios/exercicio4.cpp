/*
4) Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>

using namespace std;

int main(){

  float nota1,nota2,nota3,nota4;

  cout << "digite a sua primeira nota: " << endl;
  cin >> nota1;
  cout << "digite a sua segunda nota: " << endl;
  cin >> nota2;
  cout << "digite a sua terceira nota: " << endl;
  cin >> nota3;
  cout << "digite a sua quarta nota: " << endl;
  cin >> nota4;

  cout << "a sua media ficou com: " << (nota1 + nota2 + nota3 + nota4)/4 << endl;


  return 0;
}
