#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{
    char nome[40];

    printf("Digite seu nome: ");
    fgets(nome, 40, stdin);

    printf("Nome: %s", nome);
    return 0;
}
