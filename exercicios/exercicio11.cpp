#include <iostream>
#include <math.h>

/*
11) Faça um Programa que peça 2 números inteiros e um número real. Calcule
    e mostre:

  a)  o produto do dobro do primeiro com metade do segundo .
  b)  a soma do triplo do primeiro com o terceiro.
  c)  o terceiro elevado ao cubo.
*/

using namespace std;

int main(){

  int x,i;
  float y;

  cout << "digite um numero inteiro: " << endl;
  cin >> x;
  cout << "digite outro numero inteiro: " << endl;
  cin >> i;
  cout << "digite um numero real: " << endl;
  cin >> y;

// a)

  cout << "o produto do dobro do primeiro com metade do segundo: "
       << (2 * x) * (i / 2) << '\n';

// b)

  cout << " soma do triplo do primeiro com o terceiro: " << (3 * x) + y << endl;

// c)
  cout << "o terceiro elevado ao cubo: " << pow(y,3);


  return 0;
}
