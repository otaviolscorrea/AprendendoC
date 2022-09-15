#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int main()
{
    int i, vetorX[TAM], vetorY[TAM], vetorR[TAM];
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d do vetor X: ", i + 1);
        scanf("%d", &vetorX[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d do vetor Y: ", i + 1);
        scanf("%d", &vetorY[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        vetorR[i] = vetorX[i] * vetorY[i];
    }
    for (i = 0; i < TAM; i++)
    {
        printf("Vetor resultante, %d posicao: %d\n", i + 1, vetorR[i]);
    }
    
    return 0;
}
