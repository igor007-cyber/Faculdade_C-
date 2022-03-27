#include <stdio.h>
#include <stdlib.h>


void OredemHoraria(int x[10], int qtd);
void OredemAntiHoraria(int j[10],int qtd);

int main(){

    int x[10];
    int j[10];

    for (int i = 1; i < 11; i++)
    {
        x[i] = i;  
    }
    int l = 10;
    
    for (int i = 1; i < 11; i++)
    {
        j[i] = x[l];  
        l--;
    }

     OredemHoraria(x,10);

     OredemAntiHoraria(j,10);

    return 0;
}

void OredemHoraria(int x[10],int qtd){
    printf("\nordem: \n");

    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", x[i]); 
    }  
}

void OredemAntiHoraria(int j[10], int qtd){
    printf("\nordem reversa: \n");

    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", j[i]); 
    }  
}