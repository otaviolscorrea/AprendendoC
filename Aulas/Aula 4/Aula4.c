#include <stdio.h>

int main()
{
    int num, fatorial=1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (int i = 1; i <= num; i++)
        {
            fatorial *= i;
        }
        printf("O resultado do fatorial eh: %d", fatorial);

    } 
    else
    {
        printf("O numero digitado é menor que zero");
    };
    return 0;
}