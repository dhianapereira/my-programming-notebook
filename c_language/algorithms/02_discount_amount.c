#include <stdio.h>
int main()
{
    double product_value;
    double discount_percentage;

    printf("Digite o valor da mercadoria: ");
    scanf("%lf", &product_value);
    printf("Digite o percentual de desconto: ");
    scanf("%lf", &discount_percentage);

    double payment = product_value - (product_value * (discount_percentage / 100));

    printf("O valor do desconto é de %.2lf%%\n", discount_percentage);
    printf("Com o desconto o valor à ser pago é de R$%.2lf\n", payment);

    return 0;
}