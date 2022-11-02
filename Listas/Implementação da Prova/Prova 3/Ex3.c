#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>
//#define count 5

int main(int argc, char const *argv[])
{
    int quantL, quantC;

    printf("Digite o numero de Linhas: ");
    scanf("%d", quantL);
    printf("Digite o numero de Colunas: ");
    scanf("%d", quantC);

    int matriz[quantL][quantC], i, j;

    for (i = 0; i < quantC; i++)
    {
        for (j = 0; j < quantL; j++)
        {
            printf("Posicao I: %d J: %d ", i ,j );
            scanf("%d", matriz[i][j]);
        }
    }

    return 0;
}
