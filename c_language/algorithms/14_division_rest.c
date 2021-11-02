#include <stdio.h>

int main()
{
    int number_1;
    int number_2;

    printf("Digite o primeiro número (inteiro): \n");
    scanf("%d", &number_1);

    printf("Digite o segundo número (inteiro): \n");
    scanf("%d", &number_2);

    int i = number_1;
    int quotient = 0;

    while (i >= number_2)
    {
        i -= number_2;
        quotient++;
    }

    printf("O resto da divisão é %d\n", i);

    return 0;
}