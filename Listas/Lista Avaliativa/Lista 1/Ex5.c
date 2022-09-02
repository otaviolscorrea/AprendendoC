#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0;
    float  x, t = 1.0, s;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    s = t;

    for (i ; i <= n; i++)
    {
        t = (t / i) * x;
        s = s + t;
    }

    printf("\n %.2f\n", s);

    return 0;
}