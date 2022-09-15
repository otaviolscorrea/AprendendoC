#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numeros[20], contPar = 0, contImpar = 0;

    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
        {
            contPar++;
        }
        else
        {
            contImpar++;
        }
    }


    printf("Pares: %d\n", contPar);
    printf("Impares: %d\n", contImpar);
    return 0;
}
