#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char aluno[5];
    float nota[5][5];
    float soma = 0, media = 0;

    for (int ind=0; ind<5; ind++){
        printf("\n Digite o nome do(a) aluno(a): ");
        scanf("%s", &aluno[ind]);
        soma=0;
        for (int ind2=0; ind2<5; ind2++){
            printf("Digite a nota: ");
            scanf("%f", &nota[ind][ind2]);
            soma = soma+nota[ind][ind2];
            media = soma/5;
        }
        printf("A media do(a) Aluno(a): %s ", &aluno[ind]);
        printf("foi: %f \n", media);
    }

    printf("pause");
    return 0;
}