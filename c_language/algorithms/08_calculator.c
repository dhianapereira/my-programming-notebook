#include <stdio.h>

void calculator(double first_number, double second_number, char operation);

int main()
{
    double first_number;
    double second_number;
    char operation;

    printf("Digite o primeiro número: ");
    scanf("%lf", &first_number);

    printf("Digite o segundo número: ");
    scanf("%lf", &second_number);

    printf("Qual a operação? soma (+), subtração (-), multiplicação (*) e divisão (/)\n");
    scanf("%s", &operation);

    calculator(first_number, second_number, operation);

    return 0;
}

void calculator(double first_number, double second_number, char operation)
{

    switch (operation)
    {
    case '+':
        printf("O resultado é: %.2lf\n", (first_number + second_number));
        break;
    case '-':
        printf("O resultado é: %.2lf\n", (first_number - second_number));
        break;
    case '*':
        printf("O resultado é: %.2lf\n", (first_number * second_number));
        break;
    case '/':
        printf("O resultado é: %.2lf\n", (first_number / second_number));
        break;
    default:
        printf("Operação inválida\n");
        break;
    }
}