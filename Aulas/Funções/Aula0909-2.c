#include <stdio.h>
#include <stdlib.h>

int retornarImpares(int n1, int n2)
{
    int i, cont;

    if (n2 < n1)
    {
        for (i = n2; i <= n1; i++)
        {
            if (i % 2 != 0)
            {
                cont++;
            }
        }
    }
    else
    {
        for (i = n1; i <= n2; i++)
        {
            if (i % 2 != 0)
            {
                cont++;
            }
        }
    }
    return cont;
}

int main()
{
    int n1, n2;

    printf("Digite o valor do inicio: ");
    scanf("%d", &n1);
    printf("Digite o valor onde para o intervalo: ");
    scanf("%d", &n2);

    printf("Existem %d impares no intervalo\n", retornarImpares(n1, n2));
    return 0;
}