#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcSel;
    float saldoInicial, saldo, saque, deposito;
    printf("Digite o saldo inicial da conta: R$ ");
    scanf("%f", &saldoInicial);
    system("cls");
    saldo = saldoInicial;

    printf("Digite:\n 1 - Deposito \n 2 - Saque \n 3 - Fim \n * Selecione a Opcao: ");
    scanf("%d", &opcSel);

    while (opcSel != 1 && opcSel != 2 && opcSel != 3)
    {
        printf("Opcao invalida, Digite novamente: ");
        scanf("%d", &opcSel);
    }
    while (opcSel == 1 || opcSel == 2 || opcSel == 3)
    {
        if (opcSel == 1)
        {
            printf("Qual o valor para deposito: R$ ");
            scanf("%f", &deposito);
            saldo += deposito;
            system("cls");
            printf("Novo saldo: R$ %.2f\n\n", saldo);
            printf("Efetuar outra opercao:\n 1 - Deposito \n 2 - Saque \n 3 - Fim \n * Selecione a Opcao: ");
            scanf("%d", &opcSel);
        }
        else if (opcSel == 2)
        {
            printf("Qual o valor para saque: R$ ");
            scanf("%f", &saque);
            saldo += -(saque);
            system("cls");
            printf("Novo saldo: R$ %.2f\n\n", saldo);
            printf("Efetuar outra opercao:\n 1 - Deposito \n 2 - Saque \n 3 - Fim \n * Selecione a Opcao: ");
            scanf("%d", &opcSel);
        }
        else if (opcSel == 3)
        {
            break;
        }
    }
    printf("\n\nSaldo final: R$ %.2f\n\n", saldo);
    return 0;
}