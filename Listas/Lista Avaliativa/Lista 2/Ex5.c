#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 10

// Criando o procedimento que le as notas.
void notas(int notas1[], int notas2[], int i)
{
    printf("\n     Aluno %d\n", i + 1);
    printf("Digite a 1 nota: ");
    scanf("%d", &notas1[i]);
    printf("Digite a 2 nota: ");
    scanf("%d", &notas2[i]);
}

// Criando o procedimento que calcula a media.
void media(int notas1[], int notas2[], float mediaNotas[], int i)
{
    mediaNotas[i] = (notas1[i] + notas2[i]) / 2.0;
}

// Criando o procedimento de imprimir as medias.
void imprimirMedias(float mediaNotas[], int notas1[], int notas2[], int i)
{
    printf("\nAluno %d", i + 1);
    printf("\nNota 1: %d", notas1[i]);
    printf("\nNota 2: %d", notas2[i]);
    printf("\nMedia: %.2f pts\n", mediaNotas[i]);
}

// Criando a função principal.
int main(int argc, char const *argv[])
{
    // Delcarando as variaveis
    int i, notas1[count], notas2[count];
    float mediaNotas[count];

    // Criando o laço que le as notas de todos alunos.
    for (i = 0; i < count; i++)
    {
        notas(notas1, notas2, i);
    }

    //Criando o laço que calcula a media de todos alunos.
    for (i = 0; i < count; i++)
    {
        media(notas1, notas2, mediaNotas, i);
    }

    // Criando o laço que imprime as notas e medias de todos alunos.
    for (i = 0; i < count; i++)
    {
        imprimirMedias(mediaNotas, notas1, notas2, i);
    }
    printf("\n\n");

    return 0;
}
