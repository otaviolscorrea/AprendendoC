#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\nO antecessor eh: %d\nE o sucessor eh: %d\n\n", num - 1, num + 1);

    return 0;
}
