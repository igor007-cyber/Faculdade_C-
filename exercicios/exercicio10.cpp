#include <iostream>

/*
10) Faça um Programa que peça a temperatura em graus Celsius, transforme e
    mostre em graus Fahrenheit.
*/

using namespace std;

int main(){

  float f, c;


  cout << "digite a temperatura em graus Celsius: " << endl;
  cin >> c;

  f = (c * 9/5) + 32;

  cout << "A transformaçao da temperatura de Celsius pra Fahrenheit e " <<  f;

  return 0;
}
