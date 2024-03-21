#include <stdio.h>
#include <stdlib.h>
#include "../utils/utils.h"

int* getNegativeNumbers(int *array, int size, int* count);

int main()
{
    int size, count = 0;
    printf("What is the array size?\n");
    scanf("%d", &size);
    int* array = (int*)malloc(size * sizeof(int));
    
    for(int i=0; i<size; i++){
        printf("Type the numbers (%d/%d): \n", (i+1), size);
        scanf("%d", &array[i]);
    }
    
    int *negative_array = getNegativeNumbers(array, size, &count);
    if(count==0){
        free(array);
        printf("There are no negative numbers\n");
        return 0;
    }

    printf("The amount of negative number is %d\n", count);
    printf("Original Array: \n");
    printingArray(array, size);
    printf("Negative Array: \n");
    printingArray(negative_array, count);
    
    free(array);
        
    return 0;
}

int* getNegativeNumbers(int *array, int size, int* count) {
    for(int i=0; i<size; i++){
        if(array[i] < 0){
            (*count)++;
        }
    }

    int* negative_numbers = (int*)malloc((*count) * sizeof(int));
    int j = 0;
    
    for(int i=0; i<size; i++){
        if(array[i] < 0){
            negative_numbers[j++] = array[i];
        }
    }

    return negative_numbers;
}