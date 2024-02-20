#include <stdio.h>
int main() {
    float weight, height;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    float bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    printf("Situation: ");

    if (bmi < 20) {
        printf("Underweight\n");
    } else if (bmi >= 20 && bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Overweight\n");
    } else if (bmi >= 30 && bmi < 40) {
        printf("Obesity\n");
    } else {
        printf("Morbid Obesity\n");
    }

    return 0;
}
