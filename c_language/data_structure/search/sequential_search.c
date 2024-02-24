#include "search.h"
#include "../utils/utils.h"
#include <stdio.h>

int sequentialSearch(int arr[], int size, int target) {
    for(int i = 0; i< size; i++){
        if(arr[i] == target){
            return i;
        }
    }
   
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 10, 8};    
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    printingArray(arr, size);
   
    int result = sequentialSearch(arr, size, target);
    if(result == -1){
        printf("The %d was not found. \n", target);
    }else{
        printf("The %d is at position %d in the list.\n", target, result);
    }

    return 0;
}
