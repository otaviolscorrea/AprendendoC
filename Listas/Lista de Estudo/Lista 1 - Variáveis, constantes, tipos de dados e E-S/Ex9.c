#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int meses;
    float vlrInvestido, vlrRetorno, juros;

    printf("\nDigite o valor a ser investido: R$ ");
    scanf("%f", &vlrInvestido);

    printf("Quantos meses: ");
    scanf("%d", &meses);

    printf("Quanto de juros: ");
    scanf("%f", &juros);

    vlrRetorno = ((juros * meses) * vlrInvestido) + vlrInvestido;
    juros = vlrRetorno - vlrInvestido;
    
    printf("\nO valor invertido foi de: R$ %.2f", vlrInvestido);
    printf("\nO valor obtido com juros eh: R$ %.2f", juros);
    printf("\nO valor de retorno eh: R$ %.2f\n\n", vlrRetorno);

    return 0;
}