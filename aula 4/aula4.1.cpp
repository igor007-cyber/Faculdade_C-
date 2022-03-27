#include <iostream>
#include <climits>

int main(){

using namespace std;
short sam = SHRT_MAX;
unsigned short sue = sam;

cout << "Sam tem " << sam << " reais." << endl;
cout << "Sue tem " << sue << " reais." << endl;

cout << endl << "adicionando 1 real para cada um..." << endl << endl;

sam = sam + 2;
sue = sue + 2;

cout << "agora sam tem " << sam << "reais." << endl;
cout << "agora sue tem " << sue << "reais." << endl;

system("pause");
return 0;
}
