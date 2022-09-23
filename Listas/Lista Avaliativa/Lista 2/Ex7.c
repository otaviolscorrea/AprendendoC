#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Criando programa
int main(int argc, char const *argv[])
{
    // Declarando variaveis
    int i, j, mult, matriz[3][6];
    
    // Definindo o Srand
    srand(time(NULL));
    
    // Gerando matriz Semialeatoria
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriz[i][j] = rand() % 9;
        }
    }
    printf("\n");
    
    // Printando para o Usuario a matriz que foi gerada
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Solicitando o numero multiplicador
    printf("Digite o valor para multiplicacao: ");
    scanf("%d", &mult);
    
    // Executando a multiplicação de todos elemento pelo numero escolhido
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriz[i][j] *= mult;
        }
    }
    
    // Printando o resultando final para o usuario.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
