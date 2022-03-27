#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    float dec = metros / 10;
    float cem = metros / 100;
    float mil = metros / 1000;

    printf("\nDe metros pra decimetros fica: %.2f\n", dec);     
    printf("\nDe metros pra centimetro fica: %.2f\n", cem);
    printf("\nDe metros pra milimetro fica: %.2f\n", mil);

    return 0;
}
