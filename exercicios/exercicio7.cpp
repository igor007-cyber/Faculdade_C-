#include <iostream>

/*
7) Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro
desta área para o usuário.
*/

using namespace std;

int main(){

  int x,y;

  cout << "digite algum numero da base do quadrado: " << endl;
  cin >> x;
  cout << "digite algum numero da altura do quadrado: " << endl;
  cin >> y;

  cout << "o dobro da area do quadrado e: " << x * y * 2 << endl;  

  return 0;
}
