#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{
    int i, vetor[TAM], menor = 99999, maior = -99999, posMenor, posMaior;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            posMenor = i;
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posMenor = i;
        }
    }
    printf("\nO menor valor do vetor eh: %d  -- Posicao: %d", menor, posMenor);
    printf("\nO maior valor do vetor eh: %d  -- Posicao: %d", maior, posMaior);

    return 0;
}
