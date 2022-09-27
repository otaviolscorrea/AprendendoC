#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float salarioMin, salario;

    printf("\nDigite o salario minimo: R$ ");
    scanf("%f", &salarioMin);
    printf("\nDigite o salario ganho: R$ ");
    scanf("%f", &salario);

    printf("\nVoce ganhar %.2f salarios minimos\n\n", salario/salarioMin);

    return 0;
}
