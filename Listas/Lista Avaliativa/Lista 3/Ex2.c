#include <stdio.h>

int somar(int n)
{
    int soma = 0;
    if (n == 1)
    {
        return (1);
    }
    else
    {
        soma = n + somar(n - 1);
    }
    return (soma);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nA soma eh: %d\n\n", somar(n));

    return 0;
}
