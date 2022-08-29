#include <stdio.h>
#include <stdlib.h>

int main()
{
     float valor, vlcdes;
    
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    vlcdes=valor-(valor*0.09);

    printf("\nO valor com desconto eh de: R$ %.2f\n",vlcdes);
    
    return 0;
}