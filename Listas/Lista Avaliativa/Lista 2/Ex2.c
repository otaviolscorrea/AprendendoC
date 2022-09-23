#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 100000

// Criando a função do dado
int dado()
{
    int dado;
    dado = rand() % 6 + 1;
    return dado;
}

// Criando a função principal
int main(int argc, char const *argv[])
{
    // Declaração de Variaveis
    int i, rdado[count];
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
    float r1, r2, r3, r4, r5, r6;

    // Definindo o Srand
    srand(time(NULL));

    // Rodando o Dado
    for (i = 0; i < count; i++)
    {
        rdado[i] = dado();
    }

    // Lendo o vetor e anotando os numeros que sairam.
    for (i = 0; i < count; i++)
    {
        if (rdado[i] == 1)
        {
            c1++;
        }
        if (rdado[i] == 2)
        {
            c2++;
        }
        if (rdado[i] == 3)
        {
            c3++;
        }
        if (rdado[i] == 4)
        {
            c4++;
        }
        if (rdado[i] == 5)
        {
            c5++;
        }
        if (rdado[i] == 6)
        {
            c6++;
        }
    }

    // Calculando os Resultados
    r1 = ((float)c1 / count) * 100;
    r2 = ((float)c2 / count) * 100;
    r3 = ((float)c3 / count) * 100;
    r4 = ((float)c4 / count) * 100;
    r5 = ((float)c5 / count) * 100;
    r6 = ((float)c6 / count) * 100;

    // Printando para o Usuario
    printf("\nPorcentagem de cada numero:\n");
    printf("\nNumero 1: %.2f %%", r1);
    printf("\nNumero 2: %.2f %%", r2);
    printf("\nNumero 3: %.2f %%", r3);
    printf("\nNumero 4: %.2f %%", r4);
    printf("\nNumero 5: %.2f %%", r5);
    printf("\nNumero 6: %.2f %%\n\n", r6);

    return 0;
}
