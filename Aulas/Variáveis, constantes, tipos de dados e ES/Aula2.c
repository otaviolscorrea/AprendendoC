#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero, oposto;
    float inverso;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);
    oposto = numero*(-1);
    inverso = 1.0/numero;
    
    printf("O oposto do numero eh: %d\nE seu inverso: %.2f\n", oposto, inverso);
    return 0;
}