#include <stdio.h>
#include <stdlib.h>
#define TAM 20


int main()
{
    int i, numeros[TAM], contPar = 0, contImpar = 0;

    for (i = 0; i < TAM; i++)
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
