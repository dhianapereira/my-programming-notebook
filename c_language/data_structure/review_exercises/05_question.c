#include <stdio.h>
#define ARRAY_SIZE 10

int main() {
    int numbers[ARRAY_SIZE];
    int sum = 0, even_count = 0, odd_count = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];

        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    float average = (float)sum / ARRAY_SIZE;
    printf("Average of the entered numbers: %.2f\n", average);
    printf("Quantity of even numbers: %d\n", even_count);
    printf("Quantity of odd numbers: %d\n", odd_count);

    return 0;
}
