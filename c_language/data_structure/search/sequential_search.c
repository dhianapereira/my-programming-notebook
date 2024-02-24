/*
    A function that simulates a 
    sequential search in a vector of integers.
*/

#include <stdio.h>

int sequentialSearch(int arr[], int size, int target);

int main() {
    int arr[] = {2, 3, 5, 10, 8};    
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
   
    int result = sequentialSearch(arr, size, target);
    if(result == -1){
        printf("O %d não foi encontrado.", target);
    }else{
        printf("O %d está na posição %d da lista.", target, result);
    }

    return 0;
}

int sequentialSearch(int arr[], int size, int target) {
    for(int i = 0; i< size; i++){
        if(arr[i] == target){
            return i;
        }
    }
   
    return -1;
}