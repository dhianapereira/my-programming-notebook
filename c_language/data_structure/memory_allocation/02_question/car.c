#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "car.h"

void printing(Car *cars[], int cars_size, int license_plate){
    for (int i = 0; i < cars_size; i++)
    {
        if(cars[i]->license_plate == license_plate){
            printf("Car Info\n");
            printf("License Plate: %d\n", cars[i]->license_plate);
            printf("Manufacturer: %s\n", cars[i]->manufacturer);
            printf("Price: %.2f\n", cars[i]->price);
            break;
        }
    }
}

int update(Car *cars[], int cars_size, int license_plate){
    for (int i = 0; i < cars_size; i++)
    {
        if(cars[i]->license_plate == license_plate){
            int new_license_price;
            char new_manufacturer[51];
            float new_price;

            printf("Edit Car\n");
            printf("Type new manufacturer (Actual %s): \n", cars[i]->manufacturer);
            scanf("%50s", new_manufacturer);
            printf("Type new price (Actual %.2f): \n", cars[i]->price);
            scanf("%f", &new_price);
            
            strcpy(cars[i]->manufacturer, new_manufacturer);
            cars[i]->price = new_price;
            
            break;
        }
    }
}
