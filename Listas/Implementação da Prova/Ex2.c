#include <stdio.h>
#include <stdlib.h>

int main()
{  
    float pedro = 1.60, joao = 1.50;
    int cont = 0;

    do
    {
        pedro += 0.02;
        joao += 0.03;
        cont++;
    } while (joao <= pedro);   
    printf("Foram nescessarios %d anos para Joao ser maior que pedro!", cont);

    return 0;
}
