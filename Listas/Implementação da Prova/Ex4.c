#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, n, x;
    float dividendo = 0, divisor = 0, resultado = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        dividendo = ((pow(x, i)) + i);
        divisor = x + i;
    }

    resultado = 2.0 * (dividendo / divisor);

    printf("O resultado eh: %.2f", resultado);
    return 0;
}
