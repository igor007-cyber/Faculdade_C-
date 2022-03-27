#include <iostream>
#include <cstring>
/*
Construa um programa que contenha um vetor inicializado dessa forma:
char nome[]="C++ Primer Plus";
Utilize as funções strlen e sizeof para descobrir e imprimir o tamanho do vetor
nome.
*/
using namespace std;

int main ()
{
char nome[]="C++ Primer Plus";

cout << "a quantidade de caracteres dessa frase e de: " << strlen(nome) << endl;
cout << "o tamanho dele em bytes e de: " << sizeof(nome) << endl;

system("PAUSE");
return 0;
}
