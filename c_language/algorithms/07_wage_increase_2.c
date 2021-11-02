#include <stdio.h>
int main()
{
    double wage;
    double increase;

    printf("Digite o valor do salário: ");
    scanf("%lf", &wage);

    if (wage > 1250)
    {
        increase = wage * 0.1;
    }
    else
    {
        increase = wage * 0.15;
    }

    printf("O valor do aumento foi de R$%.2lf\n", increase);

    return 0;
}