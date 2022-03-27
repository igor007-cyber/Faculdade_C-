#include <iostream>

using namespace std;

/*
1) Construa protótipos de funções compatíveis com as seguintes descrições:

a. torta() não recebe argumentos e não tem valor de retorno;
b. tofu() recebe um int e retorna um float;
c. mpg() recebe dois valores double e retorna um double;
d. somatorio() recebe o nome de um vetor de valores tipo long e o tamanho do
   vetor como argumento e retorna um valor long;
e. logica() recebe um registro chefe como argumento e não retorna nada;


a) void torta()

b) float tofu(int)

c) double mpg(double, double)

d) long somatorio(vetor[vetor1])

e) void logica(struct)

*/
/*
2) Escreva um programa que produza a saída abaixo. Crie uma função que imprima
“Sorria!” uma vez e use a função quantas vezes for preciso para gerar a saída
pedida.

Sorria! Sorria! Sorria! Sorria!
Sorria! Sorria!
Sorria!

void sorria(int x);
int main(){

  int quantas;

  cout << "quantas vezes que voce quer a palavra 'Sorria!' apareca: ";
  cin >> quantas;

  sorria(quantas);


  return 0;
}

void sorria(int x){

  for (int g = 1; g <= x; g++){


    for (int j = 1; j <= x - g; j++) {

        cout << "Sorria!";
    }

  cout << "\n";

  }

}
*/
/*
3) Escreva um programa que produza a saída abaixo. Utilize duas funções
   definidas por você, além da função main(). Uma função deve imprimir a frase
   “Ele é um bom camarada!” uma vez. A outra função deve imprimir a frase
   “Ninguém pode negar!” uma vez.

Ele é um bom camarada!
Ele é um bom camarada!
Ele é um bom camarada!
Ninguém pode negar!

void frase1 (char);
void frase (char);
int main(){

char nome[50];


 frase (nome[50]);
 cout << "\n";
 frase1 (nome[50]);


  return 0;
}

void frase (char){

char frase2[] = "Ele é um bom camarada!";


cout << frase2;

}

void frase1 (char){

char frase2[] = "Ninguém pode negar!";

cout << frase2;

}
*/
/*
4) Escreva um programa que chame uma função de nome umTres(). Esta função deve
imprimir na tela a palavra “Um”, chamar a função de nome dois(), e então
imprimir a palavra “Três”. A função dois() deve imprimir a palavra “Dois” na
tela. A função main() deve imprimir a frase “Começando agora:” , chamar a função
umTres() e em seguida imprimir a palavra “Pronto!”. A saída deve ser a seguinte:

Começando agora:
Um Dois Três Pronto!


void umTres();
void dois();
int main() {

  cout << "Começando agora:" << endl;

  umTres();

  cout << "Pronto!";

  return 0;
}

void umTres(){

cout << "Um ";
dois();
cout << "Tres ";

}

void dois(){

cout << "Dois ";

}
*/
/*
5) Escreva um programa que repetidamente peça ao usuário para entrar com pares
de números até que pelo menos um dos números seja zero. Para cada par, o
programa deve usar uma função para calcular a média harmônica dos números. A
função deve retornar o resultado para a função main(), que deve então apresentar
resultado na tela. A média harmônica é igual a 2.0 * x * y / (x+y).

float media(float,float);

int main(){

float a,b,c;
int x = 0;
int y = 0;

  for(int i = 0; 5; i++){

    cout << "digite um numero: " << endl;
    cin >> a;
    x = x + a;
    cout << "digite um outro numero: " << endl;
    cin >> b;
    y = y + b;

    if(a == 0 || b == 0){

      break;
    }

  }
  c = media(x,y);
  cout << "\n";

  cout  << c;

  return 0;
}

float media(float x,float y){

  return (2.0 * x * y) / (x+y);
}
*/
