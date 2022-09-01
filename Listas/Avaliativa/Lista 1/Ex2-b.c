#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int contMas = 0, contFem = 0, contNaoB = 0, contOutros = 0;
    char opcGenero;

    do
    {
        printf("\n\nDigite:\n M - Masculino \n F - Feminino \n N - Nao Binario \n O - Outro \n * Selecione a Opcao: ");
        scanf("%c", &opcGenero);

        if (opcGenero == 'M' || opcGenero == 'm')
        {
            contMas++;
        }
        else if (opcGenero == 'F' || opcGenero == 'f')
        {
            contFem++;
        }
        else if (opcGenero == 'N' || opcGenero == 'n')
        {
            contNaoB++;
        }
        else if (opcGenero == 'O' || opcGenero == 'o')
        {
            contOutros++;
        }
        else if (opcGenero == 'Q' || opcGenero == 'q')
        {
            break;
        }

    } while (opcGenero != 'Q' || opcGenero != 'q');

    printf("\n-----------|   Masculino: %d        |-----------\n", contMas);
    printf("-----------|   Feminino: %d         |-----------\n", contFem);
    printf("-----------|   Nao Binario: %d      |-----------\n", contNaoB);
    printf("-----------|   Outros generos: %d   |-----------\n\n\n\n\n\n", contOutros);
    return 0;
}