#include <stdio.h>
int main()
{
    double wage;
    double percentage;

    printf("Digite o valor do salário: ");
    scanf("%lf", &wage);
    printf("Digite a porcentagem do aumento: ");
    scanf("%lf", &percentage);

    double increase = (wage * (percentage / 100));
    double new_wage = wage + increase;

    printf("O valor do aumento foi de R$%.2lf\n", increase);
    printf("Com o aumento o novo salário é de R$%.2lf\n", new_wage);

    return 0;
}