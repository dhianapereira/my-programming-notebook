#include "sort.h"
#include "../utils/utils.h"
#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main() {
    int arr[] = {4, 50, 33, 125, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 125;
    printingArray(arr, size);

    bubbleSort(arr, size);
    printf("Sorted Array: \n");
    printingArray(arr, size);
    
    return 0;
}