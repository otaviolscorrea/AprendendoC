#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 5


int main(int argc, char const *argv[])
{

    // Declarando variaveis
    int i, j, matriz[count][count];
    int somaL = 0, somaC = 0, menorL = 999999, maiorC = -999999, menorLinha = 0, maiorColuna = 0;

    // Definindo o Srand
    srand(time(NULL));

    // Gerando matriz semialeatoria 0-9
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    // Printando a Matriz para verificar.
    printf("\nMatriz: \n");
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Verificando qual linha é a menor linha
    // printf("\nSoma das linhas: \n");
    for (i = 0; i < count; i++)
    {
        somaL = 0;
        for (j = 0; j < count; j++)
        {
            somaL += matriz[i][j];
        }
        if (somaL < menorL)
        {
            menorLinha = i;
            menorL = somaL;
        }
        // printf("Soma linha %d: %d\n", i, somaL);
    }

    // Verificando qual coluna é a menor
    // printf("\nSoma das colunas: \n");
    for (i = 0; i < count; i++)
    {
        somaC = 0;
        for (j = 0; j < count; j++)
        {
            somaC += matriz[j][i];
        }
        if (somaC > maiorC)
        {
            maiorC = somaC;
            maiorColuna = i;
        }
        // printf("Soma coluna %d: %d\n", i, somaC);
    }

    // Printando a menor linha
    printf("\nMenor Linha: %d\n", menorLinha);
    for (i = 0; i < count; i++)
    {
        printf("%d ", matriz[menorLinha][i]);
    }
    printf("\n");

    // Printando a maior coluna
    printf("\nMaior coluna: %d\n", maiorColuna);
    for (i = 0; i < count; i++)
    {
        printf("%d\n", matriz[i][maiorColuna]);
    }
    printf("\n");

    return 0;
}
