#include <stdio.h>
#include <stdlib.h>

int contaimpar(int n1, int n2)
{
    int inicio, fim, i, cont = 0;

    if (n2 < n1)
    {
        inicio = n2;
        fim = n1;
    }
    else
    {
        inicio = n1;
        fim = n2;
    }

    for (i = inicio; i <= fim; i++)
    {
        if (i % 2 != 0)
        {
            cont++;
        }
    }

    return cont;
}

int main()
{
    int n1, n2, impares;

    printf("Digite o valor de inicio do intervalo: ");
    scanf("%d", &n1);
    printf("Digite o valor de termino do intervalo: ");
    scanf("%d", &n2);

    impares = contaimpar(n1, n2);

    printf("\nO numero de impares no intervalo eh: %d\n\n", impares);

    return 0;
}
