#include <iostream>
#include <climits>

int main(){
using namespace std;
int n_int = INT_MAX;
short n_short = SHRT_MAX;
long n_long = LONG_MAX;

cout << "int tem" << sizeof(int) << "bytes." << endl;
cout << "short tem" << sizeof n_short << "bytes." << endl;
cout << "long tem" << sizeof n_long << "bytes." << endl;

cout << "Valores Maximos: \n";
cout << "int: " << n_int << "\n";
cout << "short: " << n_short << "\n";
cout << "long: " << n_long << "\n\n";

cout << "valor minimo do int = " << INT_MIN << endl;
cout << "bits por bytes = " << CHAR_BIT << endl;
system ("pause");

return 0;
}
//
