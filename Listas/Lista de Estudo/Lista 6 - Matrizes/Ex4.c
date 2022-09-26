#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 4

int main(int argc, char const *argv[])
{
    int i, j, matriz[count][count], maiorVlr = -999999, menorVlr = 999999;

    srand(time(NULL));
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (matriz[i][j] > maiorVlr)
            {
                maiorVlr = matriz[i][j];
            }
            if (matriz[i][j] < menorVlr)
            {
                menorVlr = matriz[i][j];
            }
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
    printf("\nMaior valor: %d\nMenor valor: %d\n", maiorVlr, menorVlr);
    return 0;
}
