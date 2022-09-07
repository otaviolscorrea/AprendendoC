#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente)
{
    int i, resultado = 1;
    for (i = 1; i <= expoente; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int main()
{
    int base, expoente, resultado;
    printf("\nDigite o numero da base: ");
    scanf("%d", &base);
    printf("Digite o numero do expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);
    printf("\n\nResultado: %d\n\n", resultado);

    return 0;
}
