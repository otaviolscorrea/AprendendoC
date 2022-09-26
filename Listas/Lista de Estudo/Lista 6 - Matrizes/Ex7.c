#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 3

// Funçoes
void lerMatriz();
void verificarMatriz();
void imprimirMatriz();

int main(int argc, char const *argv[])
{
    int matriz[count][count];

    lerMatriz(matriz);
    imprimirMatriz(matriz);
    verificarMatriz(matriz);
    return 0;
}

void lerMatriz(int matriz[][count])
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("Posicao i: %d j: %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[][count])
{
    int i, j;
    printf("\n");

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void verificarMatriz(int matriz[][count])
{
    int i, j, somaL[count] = {0, 0, 0}, somaC[count] = {0, 0, 0}, somaDP = 0, somaDS = 0, verificador = 0;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            somaL[i] += matriz[i][j];
            somaC[i] += matriz[j][i];
        }
    }

    for (i = 0, j = count - 1; i < count, j >= 0; i++, j--)
    {
        somaDP += matriz[i][i];
        somaDS += matriz[i][j];
    }

    /* for (i = 0; i < count; i++)
    {
        printf("Soma Linha %d: %d\nSoma Coluna %d: %d\n", (i + 1), somaL[i], (i + 1), somaC[i]);
    } 
    printf("\nSoma diagonal principal: %d\nSoma diagonal secundaria: %d\n", somaDP, somaDS); */

    for (i = 0; i < count; i++)
    {
        if ((somaL[i] == somaC[i]) && (somaDP == somaDS))
        {
            verificador++;
        }
    }
    if (verificador == count)
    {
        printf("\n=========================");
        printf("\n== E uma Matriz Magica ==");
        printf("\n=========================\n\n\n");
    }
}