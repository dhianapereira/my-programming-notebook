#include <stdio.h>
int main()
{
    int distance;
    int average_speed;

    printf("Qual a distância do seu destino (Km)? ");
    scanf("%d", &distance);
    printf("Qual a velocidade média esperada para a viagem (Km/h)? ");
    scanf("%d", &average_speed);

    int time = distance / average_speed;

    printf("O tempo gastado da viagem de carro é de %dh\n", time);

    return 0;
}