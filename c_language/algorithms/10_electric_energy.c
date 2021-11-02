#include <stdio.h>

void energyValue(double kwh, char type_of_installation);

int main()
{
    double kwh;
    char type_of_installation;

    printf("Qual a quantidade de Kwh consumida? ");
    scanf("%lf", &kwh);

    printf("Qual o tipo de instalação? (R para residências, I para indústrias e C para comércios)\n");
    scanf("%s", &type_of_installation);

    energyValue(kwh, type_of_installation);

    return 0;
}

void energyValue(double kwh, char type_of_installation)
{

    double value;

    switch (type_of_installation)
    {
    case 'R':
        if (kwh <= 500)
        {
            value = kwh * 0.4;
        }
        else
        {
            value = kwh * 0.65;
        }

        printf("O valor da energia é de R$%.2lf\n", value);
        break;
    case 'C':
        if (kwh <= 1000)
        {
            value = kwh * 0.55;
        }
        else
        {
            value = kwh * 0.6;
        }

        printf("O valor da energia é de R$%.2lf\n", value);
        break;
    case 'I':
        if (kwh <= 5000)
        {
            value = kwh * 0.55;
        }
        else
        {
            value = kwh * 0.6;
        }

        printf("O valor da energia é de R$%.2lf\n", value);
        break;

    default:
        printf("Operação inválida");
        break;
    }
}
