#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define count 4

void lerMatriz(int matriz[][count])
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            matriz[i][j] = rand() % 10;
            /* printf("Posicao i: %d j: %d: ", i, j);
            scanf("%d", &matriz[i][j]); */
        }
    }
}

void imprimirMatriz(int matriz[][count])
{
    int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaLinha(int matriz[][count])
{
    int i, j, soma = 0, linha;

    printf("\nQual linha deseja somar: ");
    scanf("%d", &linha);

    for (i = 0; i < count; i++)
    {
        soma += matriz[(linha - 1)][i];
    }
    printf("A soma dos valores da linha eh: %d\n\n", soma);
}

void somaColuna(int matriz[][count])
{
    int i, j, soma = 0, coluna;

    printf("\nQual coluna deseja somar: ");
    scanf("%d", &coluna);

    for (i = 0; i < count; i++)
    {
        soma += matriz[i][(coluna - 1)];
    }
    printf("A soma dos valores da coluna eh: %d\n\n", soma);
}

void multLinha(int matriz[][count])
{
    int i, j, mult = 1, linha;

    printf("\nQual linha deseja operar: ");
    scanf("%d", &linha);

    for (i = 0; i < count; i++)
    {
        mult *= matriz[(linha - 1)][i];
    }
    printf("A multiplicacao dos valores da linha eh: %d\n\n", mult);
}

void multColuna(int matriz[][count])
{
    int i, j, mult = 1, coluna;

    printf("\nQual coluna deseja operar: ");
    scanf("%d", &coluna);

    for (i = 0; i < count; i++)
    {
        mult *= matriz[i][(coluna - 1)];
    }
    printf("A multiplicacao dos valores da coluna eh: %d\n\n", mult);
}

void somaDiaPrincipal(int matriz[][count])
{
    int i, soma = 0;

    for (i = 0; i < count; i++)
    {
        soma += matriz[i][i];
    }
    printf("A soma dos valores eh: %d\n\n", soma);
}

void multDiaPrincipal(int matriz[][count])
{
    int i, mult = 0;

    for (i = 0; i < count; i++)
    {
        mult *= matriz[i][i];
    }

    printf("A multiplicacao dos valores eh: %d\n\n", mult);
}

void somaDiaSecondaria(int matriz[][count])
{
    int i, j, soma = 0;

    for (i = 0; i < count; i++)
    {
        for (j = count; j > 0; j--)
        {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos valores eh: %d\n\n", soma);
}

void multDiaSecondaria(int matriz[][count])
{
    int i, j, mult = 0;

    for (i = 0; i < count; i++)
    {
        for (j = count; j > 0; j--)
        {
            mult *= matriz[i][j];
        }
    }
    printf("A multiplicacao dos valores eh: %d\n\n", mult);
}

int main(int argc, char const *argv[])
{
    int matriz[count][count], index = 0, opcao;
    srand(time(NULL));

    lerMatriz(matriz);
    imprimirMatriz(matriz);

    do
    {
        printf("\n=================================\n");
        printf("               Menu             \n");
        printf("   Somar                    <1> \n");
        printf("   Multiplicar              <2> \n");
        printf("   Diagonal principal       <3> \n");
        printf("   Diagonal secundaria      <4> \n");
        printf("   Borda externa            <5> \n");
        printf("   Quadrado interno         <6> \n");
        printf("   Imprimir a matriz        <7> \n");
        printf("              Sair          <8> \n");
        printf("=================================\n");
        scanf("%d", &index);
        system("cls");
        switch (index)
        {
        case 1:
            printf("\n1-Linha\n2-Coluna\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaLinha(matriz);
            }
            if (opcao == 2)
            {
                somaColuna(matriz);
            }
            break;
        case 2:
            printf("\n1-Linha\n2-Coluna\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                multLinha(matriz);
            }
            if (opcao == 2)
            {
                multColuna(matriz);
            }
            break;
        case 3:
            printf("\n1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaDiaPrincipal(matriz);
            }
            if (opcao == 2)
            {
                multDiaPrincipal(matriz);
            }
            break;
        case 4:
            printf("\n1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaDiaSecondaria(matriz);
            }
            if (opcao == 2)
            {
                multDiaSecondaria(matriz);
            }
            break;
        case 5:

            break;
        case 6:

            break;
        case 7:
            imprimirMatriz(matriz);
            break;
        default:

            break;
        }

    } while (index != 8);
    return 0;
}
