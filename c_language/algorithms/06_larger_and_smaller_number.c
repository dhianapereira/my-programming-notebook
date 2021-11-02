#include <stdio.h>
int main()
{
    int array[3];
    int larger_number;
    int smallest_number;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %dº número: ", (i + 1));
        scanf("%d", &array[i]);

        if (i != 0)
        {
            if (larger_number < array[i])
            {
                larger_number = array[i];
            }
            else
            {
                smallest_number = array[i];
            }
        }
        else
        {
            larger_number = array[i];
            smallest_number = array[i];
        }
    }

    printf("O MAIOR número é: %d\n", larger_number);
    printf("O MENOR número é: %d\n", smallest_number);

    return 0;
}