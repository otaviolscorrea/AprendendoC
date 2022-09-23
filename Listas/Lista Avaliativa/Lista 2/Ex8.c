#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 5

int main(int argc, char const *argv[])
{

    // Declarando variaveis
    int i, j, matriz[count][count];

    // Definindo o Srand
    srand(time(NULL));

    // Gerando matriz semialeatoria 0-9
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            matriz[i][j] = rand() % 9;
        }
    }
    printf("\n");


    return 0;
}
