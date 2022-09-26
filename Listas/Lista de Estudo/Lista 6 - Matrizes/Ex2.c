#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 5

int main(int argc, char const *argv[])
{
    int i, j, matriz[count][count], soma = 0, mult = 1;

    srand(time(NULL));

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    printf("\n");
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("\nA soma dos valores eh: %d  ", soma);

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            mult *= matriz[i][j];
        }
    }
    printf("\nA multiplicacao dos valores eh: %d", mult);
    printf("\n");

    return 0;
}