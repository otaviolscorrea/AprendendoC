#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float tempC, tempF;

    printf("\nDigite o valor da temperatura em C: ");
    scanf("%f", &tempC);

    tempF = (9*tempC+160) / 5;

    printf("\nA temperatura em F: %.f\n\n", tempF);

    return 0;
}
