#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 10

int main(int argc, char const *argv[])
{
    // Declaração de vetores e variaveis.
    int i, vetorX[count], vetorY[count], vetorR[count];

    // Atribuindo valores aos vetores.
    for (i = 0; i < count; i++)
    {
        printf("Digite o valor %d numero do vetor X: ", i + 1);
        scanf("%d", &vetorX[i]);
    }

    printf("\n");

    for (i = 0; i < count; i++)
    {
        printf("Digite o valor %d numero do vetor Y: ", i + 1);
        scanf("%d", &vetorY[i]);
    }

    // Multiplicando vetorX por VetorY e armazenando no vetorR.
    for (i = 0; i < count; i++)
    {
        vetorR[i] = vetorX[i] * vetorY[i];
    }

    // Imprimindo os valores do VetorR.
    printf("\nResultados: ");
    for (i = 0; i < count; i++)
    {
        printf("\nPosicao %d: %d", i + 1, vetorR[i]);
    }

    return 0;
}
