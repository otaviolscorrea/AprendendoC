#include <stdio.h>

int main()
{
    int n, j;
    float t = 1.0, s, x;

    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    
    s = t;

    for (j = 1; j <= n; j++)
    {
        t = (t / j) * x;
        s = s + t;
    }

    printf("%.2f\n", s);

    return 0;
}