#include <stdio.h>

int main()
{
    int n, i = 1;
    float t = 1.0, s = 1.0, x;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    for (i; i <= n; i++)
    {
        t = (t / i) * x;
        s = s + t;
    }

    printf("%.2f\n", s);

    return 0;
}