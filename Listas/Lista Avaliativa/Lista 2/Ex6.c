#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void strinv(char str[])
{
    int count, i;

    count = strlen(str);
    
    printf("\nString invertida: ");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main(int argc, char const *argv[])
{
    char str[TAM];

    printf("Digite a String a ser invertida: ");
    fgets(str, TAM, stdin);

    strinv(str);

    return 0;
}
