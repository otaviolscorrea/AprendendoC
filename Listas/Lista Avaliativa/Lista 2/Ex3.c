#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 10

// Declarando um cabeçario de função para a main conhecer.
void imprimir();

// Criando a função principal.
int main(int argc, char const *argv[])
{
    // Declarando variaveis.
    int i, numeros[count];

    // Definindo o Srand.
    srand(time(NULL));

    // Sorteando numeros.
    for (i = 0; i < count; i++)
    {
        numeros[i] = rand() % 10 + 10;
    }
    imprimir(numeros);

    return 0;
}

// Criando uma funçao para imprimir os numeros.
void imprimir(int numeros[])
{
    int i;

    printf("Numeros sorteados:");

    for (i = 0; i < count; i++)
    {
        printf("\nNumero %d: %d", i + 1, numeros[i]);
    }
}
