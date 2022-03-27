#include <iostream>
#include <stdlib.h>

using namespace std;

/*
Com base no código de árvores binárias:

1. Escreva uma função recursiva que some todos os números de uma árvore binária;
2. Escreva uma função recursiva que calcule a altura de uma árvore binária;
3. Escreva uma função recursiva que imprime todos os nós folha de uma árvore binária.

*/

struct NoArvore{

	int dado;
	NoArvore *esq;
	NoArvore *dir;
};

NoArvore * Inicio(int dado){

	NoArvore *novo= new  NoArvore;

	novo->dado=dado;

	novo->esq=NULL;
	novo->dir=NULL;

	return novo;

}

void PreOrdem(NoArvore *raiz){

	if(raiz!=NULL){

	cout << raiz->dado << "-";

		PreOrdem(raiz->esq);
		PreOrdem(raiz->dir);


	}


}

int  Somar(NoArvore *raiz){

	if(raiz!=NULL){


	return raiz->dado+Somar(raiz->esq)+Somar(raiz->dir) ;

	};

  return 0;
}

int  Altura(NoArvore *raiz){

	int contador=0,altura;

	if(raiz!=NULL){

    contador++;
	Altura(raiz->esq);
	Altura(raiz->dir);

    if(Altura(raiz->esq)>Altura(raiz->dir)){

    	altura= contador+Altura(raiz->esq);

	}else{

		altura=contador+Altura(raiz->dir);

	}
	};

  return altura;
}

void  mostrar(NoArvore *raiz){

	if(raiz!=NULL){



	mostrar(raiz->esq);

	if (raiz->esq==NULL and raiz->dir==NULL){

		cout<< raiz->dado << "-";
	}
	mostrar(raiz->dir);





}

}
int main (){


	NoArvore *raiz=Inicio(50);

	NoArvore *n17=Inicio(17);

	raiz->esq=n17;

	NoArvore *n9=Inicio(9);

	n17->esq=n9;

	NoArvore *n23=Inicio(23);

	n17->dir=n23;

	NoArvore *n14=Inicio(14);

	n9->esq=n14;

	NoArvore *n19=Inicio(19);

	n23->esq=n19;

	NoArvore *n12=Inicio(12);

	n14->esq=n12;

	NoArvore *n100=Inicio(100);

	n12->esq=n100;

	NoArvore *n76=Inicio(76);

	raiz->dir=n76;

	NoArvore *n54=Inicio(54);

	n76->esq=n54;

	NoArvore *n72=Inicio(72);

	n54->dir=n72;

	NoArvore *n67=Inicio(67);

	n72->esq=n67;


	NoArvore *n354=Inicio(354);

	n67->esq=n354;


	NoArvore *n81=Inicio(81);

	n354->esq=n81;


	NoArvore *n90=Inicio(90);

	n81->dir=n90;


	PreOrdem(raiz);

	cout << endl ;
	int aux;
	aux=Somar(raiz);
	cout << aux;

	cout << endl ;

	aux=Altura(raiz)-1;
	cout << aux;

	cout << endl ;

	mostrar(raiz);


	return 0;
}
