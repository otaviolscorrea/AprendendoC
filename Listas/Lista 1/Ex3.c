#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    do
    {
        printf("\nDigite dois numeros inteiros:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
    }
    while (num1 != num2);
    printf("Os numeros digitados foram iguais\n");
    return 0;
}