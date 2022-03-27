#include <iostream>
// questao 3
using namespace std;

int main (){
 int s , m , h, n1;

 cout << "digite um numero: " << endl;
 cin >> n1;

 h = n1 / 3600;
 m = (n1 % 3600)/60;
 s = n1 % 60;

 cout  << "deu " << h << "h" << endl;
 cout  << "deu " << m  << "min" << endl;
 cout  << "deu " << s << "s" << endl;

return 0;
}

