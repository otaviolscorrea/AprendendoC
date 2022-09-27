#include <Stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("\nDigite o valor para A: ");
    scanf("%d", &a);
    printf("\nDigite o valor para A: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("\nO valor de A era: %d, agora eh: %d", b, a);
    printf("\nO valor de B era: %d, agora eh: %d\n\n", a, b);
    
    return 0;
}
