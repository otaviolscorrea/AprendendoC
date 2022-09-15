#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main()
{
    int i, numeros[TAM], num;
    float media = 0.0;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);

        while (num < 0)
        {
            printf("Numero invalido, Digite novamente o %d numero: ", i + 1);
            scanf("%d", &num);
        }
        numeros[i] = num;
    }

    for (i = 0; i < TAM; i++)
    {
        media += numeros[i] / (float)TAM;
    }

    printf("\nA media eh: %.2f\n", media);

    for (i = 0; i < TAM; i++)
    {
        if (numeros[i] < media)
        {
            printf("\nAbaixo da media: %d", numeros[i]);
        }
    }
    return 0;
}
