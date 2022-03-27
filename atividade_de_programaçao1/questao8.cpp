#include <iostream>
/*
3) Descubra o que acontece quando tentamos imprimir um vetor de caracteres que
não é uma string. Para isso inicialize dois vetores, um sendo uma string e
outro sendo apenas um vetor de caracteres. Imprima ambos com cout.
*/

using namespace std;

int main ()
{
char caractere[3] = {'i','g','o'}; //nao e uma string
char string[4] = {'i','a','n',\0'};// e uma string

cout << "string: " << string[0] << " " << string[1] << " " << string[2] << " " << string[3] << endl;
cout << "string: " << caractere[0] << " " << caractere[1] << " " << caractere[2] << endl;

// por causa que tem sempre que incluir '\0' dentro das chaves se nao o codigo
//nao funciona.

system("PAUSE");
}
