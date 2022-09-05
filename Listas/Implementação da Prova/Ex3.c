#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filhos, somaSal = 0, somaFilhos = 0, menor800 = 0, cont = 0;
    float salario = 1, menorSalario = 99999.9, mediaSalario, mediaFilhos, media800;

    while (salario >= 0)
    {
        printf("Digite o salario: R$ ");
        scanf("%f", &salario);

        if (salario < 0)
        {
            break;
        }

        printf("Digite o numero de Filhos: ");
        scanf("%d", &filhos);

        if (menorSalario > salario)
        {
            menorSalario = salario;
        }
        
        if (salario < 800)
        {
            menor800++;
        }
        somaSal += salario;
        somaFilhos += filhos;
        cont++;
    }

    mediaSalario = (float)salario / cont;
    mediaFilhos = (float)filhos / cont;
    media800 = (100 * menor800) / cont;

    printf("\nA media dos Salarios eh: R$ %.2f", mediaSalario);
    printf("\nA media dos Filhos eh: %.2f", mediaFilhos);
    printf("\nO menor Salario: R$ %.2f", menorSalario);
    printf("\nPorcentagem abaixo de 800: %.2f\n", media800);

    return 0;
}
