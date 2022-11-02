#include <stdio.h>
#include <stdlib.h>

void maiorPar(int *vetor, int n, int *maiorP)
{
    int i, valor = -999999;
    *maiorP = valor;

    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            if (vetor[i] > *maiorP)
            {
                *maiorP = vetor[i];
            }
        }
    }
}
void menorImpar(int *vetor, int n, int *menorI)
{
    int i, valor = 999999;
    *menorI = valor;

    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            if (vetor[i] < *menorI)
            {
                *menorI = vetor[i];
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, maiorP, menorI;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int i, vetor[n];

    for (i = 0; i < n; i++)
    {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    maiorPar(vetor, n, &maiorP);
    menorImpar(vetor, n, &menorI);

    printf("\nO maior Par eh: %d", maiorP);
    printf("\nO menor Impar eh: %d\n\n", menorI);

    return 0;
}
