#include "search.h"
#include "../utils/utils.h"
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while(left <= right){
        int middle = left + (right - left) / 2;
       
        if(arr[middle] == target){
            return middle;
        }
       
        if(arr[middle] < target){
            left = middle + 1;
        }else{
            right = middle - 1;   
        }
    }
   
    return -1;
}

int main() {
    int arr[] = {1, 4, 8, 33, 50, 125};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 125;
    printingArray(arr, size);
   
    int result = binarySearch(arr, 0, size - 1, target);
    if(result == -1){
        printf("The %d was not found. \n", target);
    }else{
        printf("The %d is at position %d in the list.\n", target, result);
    }

    return 0;
}
