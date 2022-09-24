#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

// Criando o procedimento que inverte uma string.
void strinv(char str[])
{
    // Declarando variaveis a serem utilidadas no processo de inverter a string.
    int count, i;
    count = strlen(str);

    printf("\nString invertida: ");
    // Invertendo a instring.
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

// Criando a função principal que le a string a ser invertida.
int main(int argc, char const *argv[])
{
    char str[TAM];

    printf("Digite a String a ser invertida: ");
    fgets(str, TAM, stdin);

    //Chamando a funçao que inverte a string.
   strinv(str);

    return 0;
}
