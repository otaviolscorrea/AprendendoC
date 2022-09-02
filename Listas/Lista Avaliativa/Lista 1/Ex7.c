#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, f, n, x, somar = 1;
    float termo, cos, fatorial = 1.0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    // printf("Digite o valor de n (Ate onde vai a seguencia): ");
    // scanf("%d", &n);

    cos = 1;

    for (i = 2; i <= 4; i += 2)
    {
        termo = pow(x, i);
        for (f = 1; f <= i; f++)
        {
            fatorial = fatorial * f;
        }

        termo /= fatorial;

        if (somar == 1)
        {
            cos -= termo;
            somar = 0;
        }
        else
        {
            cos += termo;
            somar = 1;
        }
    }
    printf("\n Cos(x): %.2f\n", cos);

    return 0;
}