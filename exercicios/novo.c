#include <stdio.h>
#include <stdlib.h>]

//ESTRUTURA DE LISTA ENCADEADA
typedef struct elemento{
    int info;
    struct elemento *prox;
}Lista;

//FUNCAO
Lista *criarLista (){
  return NULL;
}

Lista *insereLista(Lista *l, int i){
     Lista novo = (Lista)malloc(sizeof(Lista));
     novo->info = i;
     novo->prox = l;
     return novo;
}
int main()
{
    //LSITA VAZIA
    Lista *Leitura=criarLista;
    //INSERE 1 ELEMENTO 11
    Leitura = insereLista(Leitura,11);
    Leitura = insereLista(Leitura,22);
    Leitura = insereLista(Leitura,33);
    Leitura = insereLista(Leitura,44);
    Leitura = insereLista(Leitura,55);
    imprimeElemento (Leitura, "|");
    return 0;
}
//FUNCAO IMPRIME LISTA
void imprimeElemento(Lista *l)
{
    Lista *p;
    for (p=l; p!=NULL; p=p->prox)
        printf ("info= %d | ", p->info);
}
