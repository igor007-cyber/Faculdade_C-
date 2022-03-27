#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL,"portuguese");
  int x = 1;
  int *pt = &x;
  int **ptr = &pt;

  cout << "Endereço de x: " << &x << endl;
  cout << "Endereço de apontado de pt: " << pt << endl;
  cout << "Endereço de pt " << &pt << endl;
  cout << "Endereço de ptr " << &ptr << endl;
  cout << "Endereço de apontade de ptr " << ptr << endl;
  cout << "Endereço de apontade de ptr " << *ptr << endl;
  
  cout << "\nx: " << x;
  cout << "\n*pt: " << *pt;
  cout << "\n**ptr: " << **ptr << endl;



  **ptr = **ptr + 1;

  cout << "\nx: " << x;
  cout << "\n*pt: " << *pt;
  cout << "\n**ptr: " << **ptr << endl;

  *pt = *pt + 1;

  cout << "\nx: " << x;
  cout << "\n*pt: " << *pt;
  cout << "\n**ptr: " << **ptr;

  return 0;
}
