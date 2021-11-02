#define LOST_MINUTES_LIFE 10
#define DAYS_IN_A_YEAR 365
#define MINUTES_IN_A_DAY 1440

#include <stdio.h>
int main()
{
    int amount_cigarettes;
    int years;

    printf("Quantos cigarros você fuma por dia? ");
    scanf("%d", &amount_cigarettes);
    printf("Há quantos anos você fuma? ");
    scanf("%d", &years);

    int life_time = (amount_cigarettes * LOST_MINUTES_LIFE) * (years * DAYS_IN_A_YEAR);

    printf("Você perdeu %d dias de vida.\n", (life_time / MINUTES_IN_A_DAY));

    return 0;
}