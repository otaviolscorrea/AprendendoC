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
    scanf("%d", &quantL);
    printf("Digite o numero de Colunas: ");
    scanf("%d", &quantC);

    int matriz[quantL][quantC], i, j;
    for (i = 0; i < quantC; i++)
    {
        for (j = 0; j < quantL; j++)
        {
            printf("Posicao I=%d J=%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    for (i = 0; i < quantC; i++)
    {
        for (j = 0; j < quantL; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                soma += matriz[i][j];
            }
        }
    }

    int produto = 1;
    for (i = 0; i < quantC; i++)
    {
        for (j = 0; j < quantL; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                produto *= matriz[i][j];
            }
        }
    }

    int mult3 = 999999;
    for (i = 0; i < quantC; i++)
    {
        for (j = 0; j < quantL; j++)
        {
            if (matriz[i][j] % 3 == 0)
            {
                if (matriz[i][j] < mult3)
                {
                    mult3 = matriz[i][j];
                }
            }
        }
    }

    int cont = 0;
    float mediaS = 0.00;
    for (i = quantC, j = quantL; i <= 0, j <= 0; i--, j--)
    {
        mediaS += matriz[i][j];
        cont++;
    }
    mediaS = mediaS / cont;

    printf("\nA soma eh: %d", soma);
    printf("\nO produto eh: %d", produto);
    printf("\nMenor elemento mult de 3: %d", mult3);
    printf("\nMedia diagonal scundaria: %.2f\n\n", mediaS);
    return 0;
}
