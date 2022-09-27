#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("\nDigite o numero 1: ");
    scanf("%d", &num1);
    printf("\nDigite o numero 2: ");
    scanf("%d", &num2);

    printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n\n", num1, num2, num1 + num2, num1, num2, num1 - num2, num1, num2, num1 * num2, num1, num2, num1 / num2);

    return 0;
}
