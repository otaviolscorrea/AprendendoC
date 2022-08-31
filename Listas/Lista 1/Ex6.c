#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fatorial = 1, termo;
    int i, f, n, seno, somar = 1;

    printf("Digite o valor de x (seno): ");
    scanf("%d", &seno);
    printf("Digite o valor de n (Ate onde vai a seguencia): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        termo = pow(x, i);
        fatorial = 1;
        for (f = 1; f < i; f++)
        {
            fatorial *= f;
        }
    }

    termo /= fatorial;

    if (somar == 1)
    {
        seno += termo;
        somar = 0;
    }
    else
    {
        seno -= termo;
        somar = 1;
    }

    printf("\n %.2f\n", seno);

    return 0;
}