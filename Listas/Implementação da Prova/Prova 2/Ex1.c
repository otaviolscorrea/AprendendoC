#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, i, comparador, maiorPotencia = -999999, posVetor;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        comparador = powf(vetor[i], vetor[i + 1]);
        if (comparador > maiorPotencia)
        {
            maiorPotencia = comparador;
            posVetor = i;
        }
    }

    printf("\nA maior potencia encontrada eh: %d, indices i = %d e i + 1 = %d\n\n\n", maiorPotencia, posVetor, posVetor + 1);

    return 0;
}
