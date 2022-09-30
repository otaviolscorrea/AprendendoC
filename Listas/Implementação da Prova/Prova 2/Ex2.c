#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int codificarStr(char str[]);

int main(int argc, char const *argv[])
{
    int n, contPmain;

    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Digite o texto da String: ");
    scanf(" %[^\n]s", str);

    contPmain = codificarStr(str);

    printf("\nA string codificada eh: \n%s", str);
    printf("\nA quantidade de letras P: %d\n\n\n", contPmain);
    return 0;
}

int codificarStr(char str[])
{
    int i, j = strlen(str), contP = 0;

    for (i = 0; i < j; i++)
    {
        if (str[i] == 'f' || str[i] == 'F')
        {
            str[i] = 'W';
        }

        if (str[i] == 'j' || str[i] == 'J')
        {
            str[i] = 'K';
        }

        if (str[i] == 'm' || str[i] == 'm')
        {
            str[i] = 'Y';
        }

        if (str[i] == 'p' || str[i] == 'M')
        {
            contP++;
        }
    }
    return contP;
}