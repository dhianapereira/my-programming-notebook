#define CAR_VALUE 60.00
#define VALUE_KM 0.15

#include <stdio.h>
int main()
{
    int km;
    int days;

    printf("Qual a quantidade de Km percorridos? ");
    scanf("%d", &km);
    printf("Qual a quantidade de dias que o carro passou alugado? ");
    scanf("%d", &days);

    double total = (days * CAR_VALUE) + (km * VALUE_KM);

    printf("O valor à ser pago é de R$%.2lf.\n", total);

    return 0;
}