/*
    A function that simulates a 
    binary search in a vector of integers.
*/

#include <stdio.h>
#include "../utils/utils.h"

int binarySearch(int arr[], int left, int right, int target);

int main(){
    int arr[] = {1, 4, 8, 33, 50, 125};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 125;
    printingArray(arr, size);
   
    int result = binarySearch(arr, 0, size - 1, target);
    if(result == -1){
        printf("O %d não foi encontrado.\n", target);
    }else{
        printf("O %d está na posição %d da lista.\n", target, result);
    }

    return 0;
}

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
