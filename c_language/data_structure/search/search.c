#include "search.h"
#include "../utils/utils.h"
#include <stdio.h>

int sequentialSearch(int arr[], int size, int target, int *count) {
    for(int i = 0; i< size; i++){
        counter(count);
        if(arr[i] == target){
            return i;
        }
    }
   
    return -1;
}

int binarySearch(int arr[], int left, int right, int target, int *count) {
    while(left <= right){
        counter(count);

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

