#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>
//#define count 5

void maiorPar(int *vetor, int n)
{
    int i, maiorP = -999999;

    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            if (vetor[i] > maiorP)
            {
                maiorP = vetor[i];
            }
        }
    }
}
void menorImpar(int *vetor, int n)
{
    int i, menorI = 999999;

    for (i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            if (vetor[i] < menorI)
            {
                menorI = vetor[i];
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

    maiorP = maiorPar(vetor, n);
    menorI = menorImpar(vetor, n);

    printf("O maior Par eh: %d", maiorP);
    printf("O menor Impar eh: %d", menorI);

    return 0;
}
