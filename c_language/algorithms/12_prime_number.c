#include <stdio.h>

int main()
{
    int number;

    printf("Digite um número: \n");
    scanf("%d", &number);

    if (number == 1 || number == 0)
    {
        printf("Não é um número primo!\n");
        return 0;
    }
    else if (number == 2)
    {

        printf("É um número primo!");
        return 0;
    }
    else
    {
        if (number % 2 != 0)
        {
            for (int i = 3; i < number; i += 2)
            {
                if (number % i == 0)
                {
                    printf("Não é um número primo!\n");
                    return 0;
                }
            }

            printf("É um número primo!");
        }
        else
        {
            printf("Não é um número primo!\n");
        }
    }

    return 0;
}