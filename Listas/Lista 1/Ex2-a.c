#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int contMas = 0, contFem = 0, contNaoB = 0, contOutros = 0, i;
    char opGen;

    for (i = 0; i < 30; i++)
    {
        printf("\n\nDigite:\n M - Masculino \n F - Feminino \n N - Nao Binario \n O - Outro \n * Selecione a Opcao: ");
        scanf("%c", &opGen);
        fflush(stdin);

        if (opGen == 'M' || opGen == 'm')
        {
            contMas++;
        }
        else if (opGen == 'F' || opGen == 'f')
        {
            contFem++;
        }
        else if (opGen == 'N' || opGen == 'n')
        {
            contNaoB++;
        }
        else if (opGen == 'O' || opGen == 'o')
        {
            contOutros++;
        }
    }
    printf("\n-----------|   Masculino: %d        |-----------\n", contMas);
    printf("-----------|   Feminino: %d         |-----------\n", contFem);
    printf("-----------|   Nao Binario: %d      |-----------\n", contNaoB);
    printf("-----------|   Outros generos: %d   |-----------\n\n\n\n\n\n", contOutros);

    return 0;
}