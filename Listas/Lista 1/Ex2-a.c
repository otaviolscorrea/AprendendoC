#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcGenero, contMas = 0, contFem = 0, contNaoB = 0, contOutros = 0, i = 0;

    for (i; i < 30; i++)
    {
        system("cls");
        printf("Digite:\n 1 - Masculino \n 2 - Feminino \n 3 - Nao Binario \n 4 - Outro \n * Selecione a Opcao: ");
        scanf("%d", &opcGenero);

        while (opcGenero != 1 && opcGenero != 2 && opcGenero != 3 && opcGenero != 4)
        {
            printf("Opcao invalida, Digite novamente: ");
            scanf("%d", &opcGenero);
        }
        while (opcGenero == 1 || opcGenero == 2 || opcGenero == 3 || opcGenero == 4)
        {
            if (opcGenero == 1)
            {
                contMas++;

                break;
            }
            else if (opcGenero == 2)
            {
                contFem++;

                break;
            }
            else if (opcGenero == 3)
            {
                contNaoB++;

                break;
            }
            else
            {
                contOutros++;

                break;
            }
        }
    }
    printf("\n-----------|   Masculino: %d        |-----------\n", contMas);
    printf("-----------|   Feminino: %d         |-----------\n", contFem);
    printf("-----------|   Nao Binario: %d      |-----------\n", contNaoB);
    printf("-----------|   Outros generos: %d   |-----------\n\n\n\n\n\n", contOutros);

    return 0;
}