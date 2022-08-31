#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num2;

    do
    {
        printf("\nDigite dois numeros inteiros:\n");
        scanf("%d", &num);
        scanf("%d", &num2);
    } while (num != num2);
    printf("Os numeros digitados foram iguais\n\n\n");
    return 0;
}