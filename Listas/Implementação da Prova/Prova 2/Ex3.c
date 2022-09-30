#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i, j, cont = 0, contDP = 0;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    float matriz[n][n], k, somaMatriz = 0, somaDP = 0, mediaMaiorK, mediaDP;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Posicao I:%d J:%d: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nDigite o valor de k: ");
    scanf("%f", &k);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] > k)
            {
                somaMatriz += matriz[i][j];
                cont++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        somaDP += matriz[i][i];
        contDP++;
    }

    mediaMaiorK = somaMatriz / cont;
    mediaDP = somaDP / contDP;

    printf("\nA media dos valores maiores que K = %.2f", mediaMaiorK);
    printf("\nA media da Diagonal principal = %.2f\n\n", mediaDP);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] == k)
            {
                matriz[i][j] = mediaDP;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("  %.2f", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
