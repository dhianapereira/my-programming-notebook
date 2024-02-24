#include "../utils/utils.h"
#include "./sort.h"
#include <stdio.h>

int main() {
    int bubbleSortCount = 0;    
    int quickSortCount = 0;
    int arr1[] = {4, 50, 33, 125, 8, 1};
    int arr2[] = {4, 50, 33, 125, 8, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target = 125;
    
    printf("Bubble Sort:\n");
    printf("Array: ");
    printingArray(arr1, size1);
    bubbleSort(arr1, size1, &bubbleSortCount);
    printf("Sorted Array: ");
    printingArray(arr1, size1);
    printf("Number of swaps: %d\n", bubbleSortCount);

    printf("\nQuick Sort:\n");
    printf("Array: ");
    printingArray(arr2, size2);
    quickSort(arr2, 0, size2 - 1, &quickSortCount);
    printf("Sorted Array: ");
    printingArray(arr2, size2);
    printf("Number of swaps: %d\n", quickSortCount);

    return 0;
}
