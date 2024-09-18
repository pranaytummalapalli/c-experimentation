#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define DIGIT 5



int digitizer(int* num){
    int out = *num%10;
    *num = (*num - out)/10;
    return out;
}
int sum(int *arr){
    int sum = 0;
    for(int i=0;i<DIGIT; i++) sum += arr[i];
    return sum;
}

int main() {
	
    int n;
    
    int digits[DIGIT]; 
    scanf("%d", &n);
    int temp = n;
    //Complete the code to calculate the sum of the five digits on n.
    for(int i=0; i<DIGIT;i++){
        digits[i] = digitizer(&temp);
    }
    
    
    // for(int i = 0; i < DIGIT; i++) printf("%d ", digits[i]);
    printf("%d", sum(digits));
    return 0;
}