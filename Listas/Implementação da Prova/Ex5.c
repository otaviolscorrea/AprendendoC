#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, N = 1, den = 2, S = 3;

    printf("Informe o ULTIMO numero da sua matricula: ");
    scanf("%d", &A);

    while (N <= 5)
    {
        S = S + 3 * A + den + 2;
        den = den + 3;
        N = N + 1;
        A = A + 1;
    }

    printf("A   : %d\n", A);
    printf("S   : %d\n", S);
    printf("N   : %d\n", N);
    printf("DEN : %d\n", den);

    return 0;
}
