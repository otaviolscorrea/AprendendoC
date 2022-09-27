#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float tempC, tempF;

    printf("\nDigite o valor da temperatura em C: ");
    scanf("%f", &tempF);

    tempC = ((tempF - 32) / 9)*5.0;

    printf("\nA temperatura em F: %.f\n\n", tempC);

    return 0;
}