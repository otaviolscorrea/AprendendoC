#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcGen, contMas = 0, contFem = 0, contNaoB = 0, contOutros = 0, i = 0;

    for (i; i < 30; i++)
    {
        system("cls");
        printf("Digite:\n 1 - Masculino \n 2 - Feminino \n 3 - Nao Binario \n 4 - Outro \n * Selecione a Opcao: ");
        scanf("%d", &opcGen);

        while (opcGen != 1 && opcGen != 2 && opcGen != 3 && opcGen != 4)
        {
            printf("Opcao invalida, Digite novamente: ");
            scanf("%d", &opcGen);
        }
        while (opcGen == 1 || opcGen == 2 || opcGen == 3 || opcGen == 4)
        {
            if (opcGen == 1)
            {
                contMas++;

                break;
            }
            else if (opcGen == 2)
            {
                contFem++;

                break;
            }
            else if (opcGen == 3)
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