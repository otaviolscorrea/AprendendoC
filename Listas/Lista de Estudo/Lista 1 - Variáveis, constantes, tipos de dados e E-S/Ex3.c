#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float valorGasto, gorjeta;

    printf("\nDigite o valor consumido no restaurante: R$ ");
    scanf("%f", &valorGasto);

    gorjeta = valorGasto * 0.1;

    printf("\nGorjeta: R$ %.2f\nValor total: R$ %.2f\n\n", gorjeta, valorGasto + gorjeta);

    return 0;
}
