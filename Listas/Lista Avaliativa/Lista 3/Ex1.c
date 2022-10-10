#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <string.h>
//#include <math.h>

int procV(int v[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    if (v[i] == k)
    {
        return i;
    }
    return procV(v, n, i + 1, k);
}

int main(int argc, char const *argv[])
{
    int n, i, k;

    srand(time(NULL));

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 10;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d  ", i);
    }
    printf("->  Indices do Vetor\n");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", v[i]);
    }

    printf("\n\nDigite o numero: ");
    scanf("%d", &k);

    printf("\nA primeira ocorrencia no Vetor eh na posicao: %d\n\n", procV(v, n, 0, k));

    return 0;
}
