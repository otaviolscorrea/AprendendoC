#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 10

void notas(int notas1[], int notas2[], int i)
{
    printf(" Digite a nota 1 do %d aluno: ", i + 1);
    scanf("%d", &notas1[i]);
    printf(" Digite a nota 2 do %d aluno: ", i + 1);
    scanf("%d", &notas2[i]);
    printf("\n");
}

void media(int notas1[], int notas2[], float mediaNotas[], int i)
{
    mediaNotas[i] = (notas1[i] + notas2[i]) / 2.0;
}

void imprimirMedias(float mediaNotas[], int i)
{
    printf("\nMedia do %d Aluno: %.2f pts", i + 1, mediaNotas[i]);
}

int main(int argc, char const *argv[])
{
    int i, notas1[count], notas2[count];
    float mediaNotas[count];

    for (i = 0; i < count; i++)
    {
        notas(notas1, notas2, i);
    }

    for (i = 0; i < count; i++)
    {
        media(notas1, notas2, mediaNotas, i);
    }

    printf("\nMedia dos alunos: ");

    for (i = 0; i < count; i++)
    {
        imprimirMedias(mediaNotas, i);
    }

    return 0;
}
