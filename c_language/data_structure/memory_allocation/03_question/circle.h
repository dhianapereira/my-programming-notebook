#ifndef CIRCLE_H
#define CIRCLE_H

typedef struct circle{
    float radius;
} Circle;

Circle* create(float radius);
void printing(Circle *circle);
void freeMemory(Circle *circle);
float getArea(Circle *circle);
float getPerimeter(Circle *circle);

#endif