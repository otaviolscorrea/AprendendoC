#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, acumulaNota = 0, i = 1, j = 1;
    float media, acumulaMedia, mediaTurma;

    for (i; i < 3; i++)
    {
        printf("##########   %d Aluno   ###########\n", i);
        for (j; j < 5; j++)
        {
            printf(" Digite a %d nota: ", j);
            scanf("%d", &nota);
            acumulaNota += nota;
        }

        media = (float)acumulaNota / (j - 1);
        acumulaMedia += media;

        if (media >= 6)
        {
            printf("Aprovado com a media: %.2f\n\n ", media);
        }
        else
        {
            printf("Reprovado com a media: %.2f\n\n ", media);
        }

        j = 1;
        acumulaNota = 0;
    }

    mediaTurma = acumulaMedia / (i - 1);

    printf("A media final da Turma eh: %.2f", mediaTurma);

    return 0;
}