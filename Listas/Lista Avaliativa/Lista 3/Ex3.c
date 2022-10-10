#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ehMultiplo(int x, int y, int vetor[], int *resp)
{
    int i;
    for (i = 0; i < y; i++)
    {
        if (vetor[i] % x == 0)
        {
            resp[i] = 1;
        }
        else
        {
            resp[i] = 0;
        }
    }
}

int main()
{
    int x, y, i;

    printf("\nDigite o verificador de multiplo: ");
    scanf("%d", &x);
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &y);

    int vetor[y], resp[y];

    printf("\n");
    for (i = 0; i < y; i++)
    {
        printf("Digite o %d numero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    ehMultiplo(x, y, vetor, resp);

    for (i = 0; i < y; i++)
    {
        printf("\n%d --> %d", vetor[i], resp[i]);
    }
    printf("\n\n");

    return 0;
}