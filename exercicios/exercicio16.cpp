/*
 16) Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho
 em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é
 de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18
 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta
 a serem compradas e o preço total.
*/
#include <iostream>

using namespace std;

int main(){

  int m, x;
  float r;
  int y = 1;

 cout << "qual o tamanho em metros quadrados da área deve ser pintada?" << endl;
 cin >> m;
 x = m / 3;

for (int i = 18; i < x; i+=18 ){
  y++;
}

cout << "a quantidades de latas de tinta a serem compradas sao: " << y << endl;
r = 80.0 * y;
cout << "o preço total é de: " << r << endl;



  return 0;
}
