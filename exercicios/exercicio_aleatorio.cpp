#include <iostream>
#include <math.h>


using namespace std;

int main(){

 float x,y,z,i;


 cout << "digite um numero x: " << endl;
 cin >> x;
 cout << "digite outro numero y: " << endl;
 cin >> y;
 cout << "digite outro numero z: " << endl;
 cin >> z;
 cout << "digite um numero i para elevar o numero x: " << endl;
 cin >> i;

 x = pow(x,i); // elevar algum numero
 y = sqrt(y); // raiz quadrada
 z = cbrt(z); // raiz cubica

 cout << "o x elevado ao numero i e: " << x << endl;
 cout << "a raiz de y e: " << y << endl;
 cout << "a raiz cubica de z e: " << z << endl;


  return 0;
}
