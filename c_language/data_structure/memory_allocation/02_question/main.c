#include <stdlib.h>
#include <stdio.h>
#include "car.h"

int main(){
    int size;
    printf("What is the array size?\n");
    scanf("%d", &size);

    Car** cars = (Car**)malloc(size * sizeof(Car*));
    if (cars == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        cars[i] = (Car*)malloc(sizeof(Car));
        if (cars[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        
        printf("Add cars (%d/%d)\n", (i+1), size);
        printf("Type the license plate: \n");
        scanf("%d", &(cars[i]->license_plate));
        printf("Type the manufacturer: \n");
        scanf("%50s", cars[i]->manufacturer);
        printf("Type the price: \n");
        scanf("%f", &(cars[i]->price));
    }

    printf("Type a license plate to printing and update: \n");
    int license_plate;
    scanf("%d", &license_plate);

    printf("Before Update: \n");    
    printing(cars, size, license_plate);
    update(cars, size, license_plate);   
    printf("After Update: \n");
    printing(cars, size, license_plate);

    for (int i = 0; i < size; i++) {
        free(cars[i]);
    }

    free(cars);

    return 0;
}