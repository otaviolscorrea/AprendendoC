#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTAM 10000

//Definindo a estrutua que irá armazenar os dados do proprietario.
typedef struct
{
    char nome[99];
    char telefone[20];
} dadosProprietario;

//Definindo a estrutura que vai armazenar as informaçoes do imovel.
typedef struct
{
    char tipo[20];
    char situacao[10];
    float valor;
    char rua[99];
    char bairro[20];
    int num;
    dadosProprietario proprietario;
} Timovel;

//Criando a função que vai cadastrar os imoveis.
Timovel cadastrarImoveis()
{
    Timovel imovel;
    int opcTipo, opcSituacao;

    printf("Imovel\n");
    printf("Digite:\n 1 - Casa \n 2 - Loja \n 3 - Apartamento \n 4 - Kitnet \n * Selecione a Opcao: ");
    scanf("%d",&opcTipo);

    while(opcTipo != 1 && opcTipo!=2 && opcTipo!=3 && opcTipo!=4)
    {
        printf("Opcao invalida, Digite novamente: ");
        scanf("%d",&opcTipo);
    }
    while(opcTipo == 1 || opcTipo == 2 || opcTipo == 3 || opcTipo == 4)
    {
        if (opcTipo == 1)
        {
            strcpy(imovel.tipo, "Casa");
            break;
        }
        else if (opcTipo == 2)
        {
            strcpy(imovel.tipo, "Loja");
            break;
        }
        else if (opcTipo == 3)
        {
            strcpy(imovel.tipo, "Apartamento");
            break;
        }
        else
        {
            strcpy(imovel.tipo, "Kitnet");
            break;
        }
    }

    printf("\nDigite:\n 1 - Venda \n 2 - Alugar \n * Selecione a Opcao: ");
    scanf("%d",&opcSituacao);

    while(opcSituacao != 1 && opcSituacao != 2)
    {
        printf("Opcao invalido, Digite novamente: ");
        scanf("%d",&opcSituacao);
    }
    while(opcSituacao == 1 || opcSituacao == 2)
    {
        if (opcSituacao == 1)
        {
            strcpy(imovel.situacao, "Venda");
            break;
        }
        else
        {
            strcpy(imovel.situacao, "Alugar");
            break;
        }
    }
    printf("\nDigite o valor do imovel: R$ ");
    scanf("%f",&imovel.valor);
    fflush(stdin);//Utilizado para
    printf("\nDigite o Endereco\n");
    printf("Logradouro: ");
    scanf("%[^\n]s",&imovel.rua);
    fflush(stdin);
    printf("Bairro: ");
    scanf("%[^\n]s",&imovel.bairro);
    fflush(stdin);
    printf("Numero: ");
    scanf("%d",&imovel.num);
    fflush(stdin);
    printf("\nProprietario: ");
    fflush(stdin);
    scanf("%[^\n]s",&imovel.proprietario.nome);
    printf("Telefone: ");
    fflush(stdin);
    scanf("%[^\n]s",&imovel.proprietario.telefone);
    system("cls");
    return imovel;
}

//Criando a função que irá imprimir os imoveis quando o usuario solicitar com os parametros definidos pelo mesmo
void imprimir(Timovel imovel)
{
    printf("Tipo: %s",imovel.tipo);
    printf("\nSituacao: %s",imovel.situacao);
    printf("\nValor: %.2f", imovel.valor);
    printf("\nRua: %s", imovel.rua);
    printf("\nBairro: %s", imovel.bairro);
    printf("\nNumero: %d", imovel.num);
    printf("\nProprietario: %s", imovel.proprietario.nome);
    printf("\nTelefone: %s\n", imovel.proprietario.telefone);
}

//Criando a função para listar todos os imoveis.
void listarImoveis(Timovel imovel[])
{
    int comparadorSituacao;
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        comparadorSituacao=strcmp(imovel[i].tipo, "naoImp");
        if(comparadorSituacao != 0)
        {
            printf("\n================== Imovel %d ==================\n", j);
            imprimir(imovel[i]);
            j++;
        }

    }

}

//Criando a função para listar os imoveis cadastrados para venda
void listarVender(Timovel imovel[])
{
    int comparadorSituacao;
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        comparadorSituacao=strcmp(imovel[i].situacao, "Venda");
        if(comparadorSituacao == 0)
        {
            printf("\n================== Imovel %d ==================\n", j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar os imoveis cadastrados para alugar.
void listarAlugar(Timovel imovel[])
{
    int comparadorSituacao;
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        comparadorSituacao=strcmp(imovel[i].situacao, "Alugar");
        if(comparadorSituacao == 0)
        {
            printf("\n================== Imovel %d ==================\n", j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar os imoveis cadastrados para venda por bairro.
void listaVenderBairro(Timovel imovel[])
{
    int comparadorSituacao, comparadorBairro,bairroPesquisado[20];

    fflush(stdin);
    printf("Digite o bairro a qual deseja ver os imoveis: \n");
    scanf("%s",&bairroPesquisado);
    system("cls");
    printf("\n            Bairro inserido: %s\n",bairroPesquisado);
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        comparadorSituacao=strcmp(imovel[i].situacao,"Venda");
        comparadorBairro=strcmpi(imovel[i].bairro,bairroPesquisado);
        if(comparadorSituacao == 0 && comparadorBairro == 0)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar os imoveis cadastrados para alugar por bairro.
void listaAlugarBairro(Timovel imovel[])
{
    int comparadorSituacao, comparadorBairro,bairroPesquisado[20];

    fflush(stdin);
    printf("Digite o bairro a qual deseja ver os imoveis: \n");
    scanf("%s",&bairroPesquisado);
    system("cls");
    printf("\n            Bairro inserido: %s\n",bairroPesquisado);
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        comparadorSituacao=strcmp(imovel[i].situacao,"Alugar");
        comparadorBairro=strcmpi(imovel[i].bairro,bairroPesquisado);
        if(comparadorSituacao == 0 && comparadorBairro == 0)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }

}

//Criando a função para listar imoveis de valores inferior a 600.
void listarAte600(Timovel imovel[])
{
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        if(imovel[i].valor!=0 && imovel[i].valor< 600)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar imoveis de valores entre 600 e 1500.
void listar600a1500(Timovel imovel[])
{
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        if(imovel[i].valor!=0 && imovel[i].valor>= 600 && imovel[i].valor< 1500)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar imoveis de valores entre 1500 e 2500.
void listar1500a2500(Timovel imovel[])
{
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        if(imovel[i].valor!=0 && imovel[i].valor>= 1500 && imovel[i].valor< 2500)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar imoveis de valores entre 2500 e 4000.
void listar2500a4000(Timovel imovel[])
{
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        if(imovel[i].valor!=0 && imovel[i].valor>= 2500 && imovel[i].valor< 4000)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando a função para listar imoveis de valores acima 4000.
void listarAcima4000(Timovel imovel[])
{
    for(int i=0, j=1; i<MAXTAM; i++)
    {
        if(imovel[i].valor!=0 && imovel[i].valor>= 4000)
        {
            printf("\n================== Imovel %d ==================\n",j);
            imprimir(imovel[i]);
            j++;
        }
    }
}

//Criando o prompt para interação do usuario.
int main()
{
    Timovel imovel[MAXTAM];
    for (int i=0; i<MAXTAM; i++)
    {
        strcpy(imovel[i].tipo, "naoImp"); //Atribuindo um parametros para não imprimir valores vazios
        imovel[i].valor=0;
    }

    int index=0, index2=0;
    do
    {
        printf("\n================================================\n");
        printf("                     Menu                       \n");
        printf("    Cadastrar Imoveis                        <1>\n");
        printf("    Todos Imoveis Cadastrados                <2>\n");
        printf("    Todos Imoveis p/ Vender                  <3>\n");
        printf("    Todos Imoveis p/ Alugar                  <4>\n");
        printf("    Todos Imoveis p/ Vender por Bairro       <5>\n");
        printf("    Todos Imoveis p/ Alugar por Bairro       <6>\n");
        printf("    Todos Imoveis por Preco                  <7>\n");
        printf("                     Sair                    <8>\n");
        printf("================================================\n");
        scanf("%d",&index);
        system("cls");
        switch (index)
        {
        case 1:
            for(int i = 0; i< MAXTAM; i++)
            {
                if(imovel[i].valor == 0)
                {
                    imovel[i] = cadastrarImoveis();
                    break; //Para sair do laço e permitir o usuario escolher quando quer cadastrar mais imoveis.
                }
            }
            break;
        case 2:
            listarImoveis(imovel);
            break;
        case 3:
            listarVender(imovel);
            break;
        case 4:
            listarAlugar(imovel);
            break;
        case 5:
            listaVenderBairro(imovel);
            break;
        case 6:
            listaAlugarBairro(imovel);
            break;
        case 7:
            while(index != 6 )
            {
                printf("\n================================================\n");
                printf("              Busca por Valores                   \n");
                printf("  Imoveis ate R$ 600,00                        <1>\n");
                printf("  Imoveis entre R$ 600,00 e R$ 1.500,00        <2>\n");
                printf("  Imoveis entre R$ 1.500,00 e R$ 2.500,00      <3>\n");
                printf("  Imoveis entre R$ 2.500,00 e R$ 4.000,00      <4>\n");
                printf("  Imoveis acima de R$ 4.000,00                 <5>\n");
                printf("                    Voltar                     <6>\n");
                printf("=================================================\n");
                scanf("%d",&index2);
                system("cls");
                switch (index2)
                {
                case 1:
                    listarAte600(imovel);
                    break;
                case 2:
                    listar600a1500(imovel);
                    break;
                case 3:
                    listar1500a2500(imovel);
                    break;
                case 4:
                    listar2500a4000(imovel);
                    break;
                case 5:
                    listarAcima4000(imovel);
                    break;
                case 6:
                    index=6;
                    break;
                default:
                    printf("\n          Voce digitou uma opcao invalida\n");
                }
            }
        case 8:
            break;
        default:
            printf("\n        Voce digitou uma opcao invalida\n");
        }
    }
    while(index != 8);
}
