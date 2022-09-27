#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float hora, minutos, minutosTotais;

    printf("\nDigite a hora: ");
    scanf("%f", &hora);
    printf("Digite quantos minutos: ");
    scanf("%f", &minutos);

    minutosTotais = (hora*60)+minutos;

    printf("\nSe passaram %.f minutos\n\n", minutosTotais);

    return 0;
}