#include <stdio.h>
#include <stdlib.h>

/*64 25 12 22 11*/
#define SIZE 5



void print(int* arr){
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}

int* input_arr(int *arr, int size){
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    return arr;
}

int main(int argc, char** argv){
    int *nums = (int*)malloc(SIZE*sizeof(int));
    
    int temp, min, min_ind;

    nums = input_arr(nums, SIZE);

    for(int i = 0; i < SIZE -1; i++){
        min = nums[i];
        min_ind = i;
        for(int j = i+1; j < SIZE; j++){
            if(nums[j] < min){
                min = nums[j];
                min_ind = j;
            }
        }

        temp = nums[i];
        nums[i] = min;
        nums[min_ind] = temp;
        // if( i == atoi(argv[1])) break;
    }

    print(nums);
    return 0;
}