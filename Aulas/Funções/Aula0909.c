#include <stdio.h>
#include <stdlib.h>

int somaintervalo(int n1, int n2)
{
    int soma = 0, i;

    if (n2 < n1)
    {
        for (i = n2; i <= n1; i++)
        {
            soma += i;
        }
    }
    else
    {
        for (i = n1; i <= n2; i++)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int n1, n2;

    printf("Digite o valor do inicio: ");
    scanf("%d", &n1);
    printf("Digite o valor onde para o intervalo: ");
    scanf("%d", &n2);

    printf("O resultado eh: %d\n", somaintervalo(n1, n2));
    return 0;
}
