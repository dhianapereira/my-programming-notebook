#include <stdlib.h>
#include <stdio.h>
#include "circle.h"

#define PI 3.14

Circle* create(float radius){
    Circle *circle = (Circle*)malloc(sizeof(Circle));
    circle->radius = radius;
    return circle;
}

void printing(Circle *circle){
    printf("Radius: %.2f\n", circle->radius);
}

void freeMemory(Circle *circle){
    free(circle);
    printf("Free memory...\n");
}

float getArea(Circle *circle){
    return PI * (circle->radius * circle->radius);
}

float getPerimeter(Circle *circle){
    return 2 * PI * circle->radius;
}