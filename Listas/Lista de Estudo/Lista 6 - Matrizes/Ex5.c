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

    for (i = 0, j = count - 1; i < count, j >= 0; i++, j--)
    {
        soma += matriz[i][j];
    }
    printf("A soma dos valores eh: %d\n\n", soma);
}

void multDiaSecondaria(int matriz[][count])
{
    int i, j, mult = 1;

    for (i = 0, j = count - 1; i < count, j >= 0; i++, j--)
    {
        mult *= matriz[i][j];
    }
    printf("A multiplicacao dos valores eh: %d\n\n", mult);
}

void somaBordaExt(int matriz[][count])
{
    int i, j, soma = 0;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (i == 0 || j == 0 || i == 3 || j == 3)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("A soma da borda: %d", soma);
}

void multBordaExt(int matriz[][count])
{
    int i, j, mult = 1;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (i == 0 || j == 0 || i == 3 || j == 3)
            {
                mult *= matriz[i][j];
            }
        }
    }
    printf("A multiplicacao da borda: %d", mult);
}

void somaBordaInt(int matriz[][count])
{
    int i, j, soma = 0;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (i == 1 && j == 1 || i == 1 && j == 2 || i == 2 && j == 1 || i == 2 && j == 2)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("A soma interna: %d", soma);
}

void multBordaInt(int matriz[][count])
{
    int i, j, mult = 1;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            if (i == 1 && j == 1 || i == 1 && j == 2 || i == 2 && j == 1 || i == 2 && j == 2)
            {
                mult *= matriz[i][j];
            }
        }
    }
    printf("A multiplicacao interna: %d", mult);
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
        printf("   Linha                    <1> \n");
        printf("   Coluna                   <2> \n");
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
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaLinha(matriz);
            }
            if (opcao == 2)
            {
                multLinha(matriz);
            }
            break;
        case 2:
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaColuna(matriz);
            }
            if (opcao == 2)
            {
                multColuna(matriz);
            }
            break;
        case 3:
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
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
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
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
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaBordaExt(matriz);
            }
            if (opcao == 2)
            {
                multBordaExt(matriz);
            }
            break;
        case 6:
            printf("1-Soma\n2-Multiplicacao\nQual opcao: ");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                somaBordaInt(matriz);
            }
            if (opcao == 2)
            {
                multBordaInt(matriz);
            }
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
