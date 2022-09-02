#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, somar = 0, i = 0;
    float mediaIdade;

    while (idade != -1)
    {
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        if (idade != -1)
        {
            somar += idade;
            i++;
        }
    }

    mediaIdade = (float)somar / i;
    printf("A media das idades eh: %.2f\n", mediaIdade);

    return 0;
}