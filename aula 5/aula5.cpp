#include <iostream>

int main(){
using namespace std;

char  ch = 'M';
int i = ch;

cout << "o codigo ASCII para " << ch << ": " << i << endl;

cout << "adicionando 1 ao codigo caractere..." << endl;
ch = ch + 1;
i = ch;
cout << "O codigo ASCII para " << ch << ": " << i << endl;

system("pause");
return 0;
}
