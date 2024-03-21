#ifndef CAR_H
#define CAR_H

typedef struct car{
    int license_plate;
    char manufacturer[51];
    float price;
} Car;

void printing(Car *cars[], int cars_size, int license_plate);

int update(Car *cars[], int cars_size, int license_plate);

#endif