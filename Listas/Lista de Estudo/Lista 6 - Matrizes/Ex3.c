#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define countI 3
#define countJ 6

int main(int argc, char const *argv[])
{
    int i, j, matriz[countI][countJ], mult;

    srand(time(NULL));
    for (i = 0; i < countI; i++)
    {
        for (j = 0; j < countJ; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < countI; i++)
    {
        for (j = 0; j < countJ; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um valor para multiplicacao: ");
    scanf("%d", &mult);

    for (i = 0; i < countI; i++)
    {
        for (j = 0; j < countJ; j++)
        {
            matriz[i][j] *= mult;
        }
    }

    for (i = 0; i < countI; i++)
    {
        for (j = 0; j < countJ; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
