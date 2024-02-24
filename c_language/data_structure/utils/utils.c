#include "utils.h"
#include <stdio.h>

void printingArray(int arr[], int size) {
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* positionX, int* positionY) {
    int temp = *positionX;
    *positionX = *positionY;
    *positionY = temp;
}

void counter(int* count) {
    (*count)++;
}
