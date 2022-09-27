#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float vlProduto;

    printf("\nDigite o valor do produto: R$ ");
    scanf("%f", &vlProduto);

    printf("\nO valor com desconto eh: R$ %.2f\n\n", vlProduto-(vlProduto*0.09));

    return 0;
}
