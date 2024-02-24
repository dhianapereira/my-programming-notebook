#include "sort.h"
#include "../utils/utils.h"
#include <stdio.h>

void bubbleSort(int arr[], int size, int *count) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                counter(count);
            }
        }
    }
}

int partition(int arr[], int initial, int final, int *count) {
    int middle = (initial + final) / 2;
    int pivot = arr[middle];
    int i = initial - 1;
    int j = final + 1;

    while (1) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        swap(&arr[i], &arr[j]);
        counter(count);
    }
}

void quickSort(int arr[], int initial, int final, int *count) {
    if (initial < final) {
        int index = partition(arr, initial, final, count);
        quickSort(arr, initial, index, count);
        quickSort(arr, index + 1, final, count);
    }
}
