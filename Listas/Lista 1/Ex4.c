#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, acumulaNota = 0, i = 1;
    float media;

    for (i; i < 5; i++)
    {
        printf("Digite a %d nota: ", i);
        scanf("%d", &nota);

        acumulaNota += nota;
    }

    media = (float)acumulaNota / (i - 1);

    printf("A media da nota do Aluno eh: %.2f", media);

    return 0;
}