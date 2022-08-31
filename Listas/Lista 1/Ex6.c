#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, f, n, x, somar = 1;
    float termo, seno, fatorial = 1.0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    //printf("Digite o valor de n (Ate onde vai a seguencia): ");
    //scanf("%d", &n);
    
    seno = x;

    for (i = 1; i <= 5; i += 2)
    {
        termo = pow(x, i);
        for (f = 1; f <= i; f++)
        {
            fatorial = fatorial * f;
        }

        termo /= fatorial;

        if (somar == 1)
        {
            seno -= termo;
            somar = 0;
        }
        else
        {
            seno += termo;
            somar = 1;
        }
    }

    printf("\n Sen(x): %.2f\n", seno);

    return 0;
}