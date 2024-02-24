#include "../utils/utils.h"
#include "../sort/sort.h"
#include "./search.h"
#include <stdio.h>

int main() {
    int sequentialSearchCount = 0;
    int binarySearchCount = 0;    
    int arr[] = {4, 50, 33, 125, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 125;

    printf("Array: ");
    printingArray(arr, size);
    bubbleSort(arr, size);
    printf("Sorted Array: ");
    printingArray(arr, size);
   
    int firstResult = sequentialSearch(arr, size, target, &sequentialSearchCount);
    printf("\nSequential Search:\n");
    if (firstResult != -1) {
        printf("Element found at index %d\n", firstResult);
    } else {
        printf("Element not found\n");
    }
    printf("Number of searches: %d\n", sequentialSearchCount);
    
    int secondResult = binarySearch(arr, 0, size - 1, target, &binarySearchCount);
    printf("\nBinary Search:\n");
    if (secondResult != -1) {
        printf("Element found at index %d\n", secondResult);
    } else {
        printf("Element not found\n");
    }
    printf("Number of searches: %d\n", binarySearchCount);

    return 0;
}
