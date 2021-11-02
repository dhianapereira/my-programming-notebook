#include <stdio.h>
#include <stdlib.h>

void calculator(int operation);

int main()
{
    int operation;

    while (1)
    {
        printf("CALCULADORA - MENU\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");

        scanf("%d", &operation);

        calculator(operation);
    }

    return 0;
}

void calculator(int operation)
{
    switch (operation)
    {
    case 1:
        printf("\n");
        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                printf("%d + %d = %d\n", i, j, (i + j));
            }
            printf("\n");
        }
        printf("\n");
        break;
    case 2:
        printf("\n");
        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                printf("%d - %d = %d\n", i, j, (i - j));
            }
            printf("\n");
        }
        printf("\n");
        break;
    case 3:
        printf("\n");
        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                printf("%d * %d = %d\n", i, j, (i * j));
            }
            printf("\n");
        }
        printf("\n");
        break;
    case 4:
        printf("\n");
        for (float i = 0; i <= 9; i++)
        {
            for (float j = 0; j <= 9; j++)
            {
                printf("%.0f / %.0f = %.0f\n", i, j, (i / j));
            }
            printf("\n");
        }
        printf("\n");
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("Operação inválida\n");
        break;
    }
}