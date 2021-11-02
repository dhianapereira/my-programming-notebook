#include <stdio.h>
int main()
{
    double house_value;
    double wage;
    int years;

    printf("Qual o valor da casa? ");
    scanf("%lf", &house_value);

    printf("Qual o valor do seu salário? ");
    scanf("%lf", &wage);

    printf("Em quanto tempo (anos) pretende pagar? ");
    scanf("%d", &years);

    double monthly_value = house_value / (years * 12);

    if (monthly_value < (wage * 0.3))
    {
        printf("Empréstimo aprovado!\n");
    }
    else
    {
        printf("Empréstimo não aprovado!\n");
    }

    return 0;
}