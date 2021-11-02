#include <stdio.h>
#include <string.h>
int main()
{
    char number[10];

    printf("Digite o numero: \n");
    scanf("%s", number);

    int size = strlen(number) - 1;
    int i = 0;

    if ((size + 1) < 3)
    {
        printf("É necessário um número de até três dígitos!\n");

        return 0;
    }

    for (i; i < size; i++)
    {
        if (number[i] != number[size])
        {
            break;
        }

        size--;
    }

    if (number[i] == number[size])
    {
        printf("É um número palíndromo\n");
    }
    else
    {
        printf("Não é um número palíndromo\n");
    }

    return 0;
}