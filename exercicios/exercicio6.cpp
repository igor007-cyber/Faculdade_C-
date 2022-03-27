/*
6) Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
#include <iostream>

using namespace std;

int main(){

  float pi = 3.14;
  int x;
  float area;

  cout << "digite um numero do raio: " << endl;
  cin >> x;
  area = (x*x)*pi;

  cout << "a area do circulo e: " << area;

  return 0;
}
