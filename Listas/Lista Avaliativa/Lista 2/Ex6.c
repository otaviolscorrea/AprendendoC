#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

// Criando o procedimento que inverte uma string.
void strinv(char str[])
{
    // Declarando variaveis a serem utilidadas no processo de inverter a string.
    int i, n = strlen(str), j = n - 1;
    char strInv[n];

    // Invertendo a instring.
    for (i = 0; i < n; i++)
    {
        strInv[i] = str[j];
        j--;
    }
    printf("\nStrInv: %s\n", strInv);
    strcpy(str, strInv);
}

// Criando a função principal que le a string a ser invertida.
int main(int argc, char const *argv[])
{
    char str[TAM];

    printf("\nDigite a String a ser invertida: ");
    fgets(str, TAM, stdin);

    // Chamando a funçao que inverte a string.
    strinv(str);

    printf("\nString invertida: %s\n\n", str);

    return 0;
}
