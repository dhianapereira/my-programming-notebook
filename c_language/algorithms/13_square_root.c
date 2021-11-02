#define SMALLEST 0.00001

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number;
    double b = 2;
    double p;

    printf("Digite um numero: \n");
    scanf("%lf", &number);

    while (abs(number - (b * b)) > SMALLEST)
    {
        p = (b + (number / b)) / 2;
        b = p;
    }

    printf("O resultado aproximado da raiz quadrada de %.2lf é %.2lf", number, p);

    return 0;
}