#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void imprimir();

int main(int argc, char const *argv[])
{
    // Declarando variaveis
    int i, numeros[MAX];

    // Definindo o Srand
    srand(time(NULL));

    // Sorteando numeros
    for (i = 0; i < MAX; i++)
    {
        numeros[i] = rand() % 10 + 10;
    }
    imprimir(numeros);

    return 0;
}

// Criando uma funçao para imprimir os numeros
void imprimir(int numeros[])
{
    int i;

    printf("Numeros sorteados:");

    for (i = 0; i < MAX; i++)
    {
        printf("\nNumero %d: %d", i + 1, numeros[i]);
    }
}
