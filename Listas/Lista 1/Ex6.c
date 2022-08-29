#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, aux=0;

    printf("Digite os valores de A e B(respectivamente)\n");
    scanf("%d",&a);
    scanf("%d",&b);

    aux=a;
    a=b;
    b=aux;
    aux=0;

    printf("\nO valor de A era: %d e passou para: %d\n", b, a);
    printf("\nO valor de B era: %d e passou para: %d\n", a, b);

    return 0;
}