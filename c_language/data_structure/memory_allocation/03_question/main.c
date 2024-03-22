#include <stdio.h>
#include "circle.h"

int main(){
    Circle* circle;
    circle = create(7);
    printf("Circle Info\n");
    printing(circle);

    float area = getArea(circle);
    float perimeter = getPerimeter(circle);
    printf("The area is %.2f\n", area);
    printf("The perimeter is %.2f\n", perimeter);

    freeMemory(circle);

    return 0;
}