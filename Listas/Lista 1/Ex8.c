#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcSelecionada;
    float saldoInicial, saldo, saque, deposito;
    printf("Digite o saldo inicial da conta: R$ ");
    scanf("%f", &saldoInicial);
    system("cls");
    saldo = saldoInicial;

    printf("Digite:\n 1 - Deposito \n 2 - Saque \n 3 - Fim \n * Selecione a Opcao: ");
    scanf("%d", &opcSelecionada);

    while (opcSelecionada != 1 && opcSelecionada != 2 && opcSelecionada != 3)
    {
        printf("Opcao invalida, Digite novamente: ");
        scanf("%d", &opcSelecionada);
    }
    while (opcSelecionada == 1 || opcSelecionada == 2 || opcSelecionada == 3)
    {
        if (opcSelecionada == 1)
        {
            printf("Qual o valor para deposito: R$ ");
            scanf("%f", &deposito);
            saldo += deposito;
            printf("Novo saldo: R$ %.2f\n", saldo);
            break;
        }
        else if (opcSelecionada == 2)
        {
            printf("Qual o valor para saque: R$ ");
            scanf("%f", &saque);
            saldo += -(saque);
            printf("Novo saldo: R$ %.2f\n", saldo);

            break;
        }
        else if (opcSelecionada == 3)
        {
            break;
        }
    }
    return 0;
}