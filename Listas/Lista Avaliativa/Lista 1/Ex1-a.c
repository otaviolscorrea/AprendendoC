#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, somar = 0, i = 0;
    float mediaIdade;

    for (i; i < 30; i++)
    {
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        somar += idade;
    }

    mediaIdade = (float)somar / i;
    printf("-----------| A media das idades dos alunos eh: %.2f   |-----------\n", mediaIdade);

    return 0;
}