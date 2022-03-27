#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero pra fazer a tabuada: ");
    scanf("%d",&x);

    for (int i = 0; i <= 10; i++)
    {
       int r = x*i; 
       printf("%d x %d = %d\n", x, i, r);
       
    }
    
    return 0;
}