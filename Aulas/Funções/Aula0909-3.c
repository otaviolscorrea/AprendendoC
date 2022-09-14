#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funDelta(int a, int b, int c, int delta)
{
    delta = (b * b) - (4 * a * c);
    return delta;
}

int x1(int a, int b, int c, int delta)
{
    int x1 = 0, rdelta;
    rdelta = funDelta(a, b, c, delta);
    if (rdelta > 0)
    {
        x1 = (-b + sqrt(rdelta)) / (2 * a);
    }
    else if (rdelta == 0)
    {
        x1 = -b / (2 * a);
    }
    else
    {
        x1 = 0;
    }
    return x1;
}

int x2(int a, int b, int c, int delta)
{
    int x2 = 0, rdelta;
    rdelta = funDelta(a, b, c, delta);
    if (rdelta > 0)
    {
        x2 = (-b - sqrt(rdelta)) / (2 * a);
    }
    else if (rdelta == 0)
    {
        x2 = -b / (2 * a);
    }
    else
    {
        x2 = 0;
    }
    return x2;
}

int main()
{
    int a, b, c, delta, rdelta, rx1, rx2;
    printf("\nDigite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    rdelta = funDelta(a, b, c, delta);
    rx1 = x1(a, b, c, delta);
    rx2 = x2(a, b, c, delta);

    if (rx1 == 0 && rx2 == 0)
    {
        printf("\nDelta: %d", rdelta);
        printf("\n(Delta Negativo) X nao tem valores reais\n\n");
    }
    else if (rx1 == rx2)
    {
        printf("\nDelta: %d", rdelta);
        printf("\n(Delta = 0) X e X' sao iguais: %d\n\n", rx1);
    }
    else
    {
        printf("\nDelta: %d", rdelta);
        printf("\nAs raizes sao: X = %d, X' = %d\n\n", rx1, rx2);
    }

    return 0;
}
