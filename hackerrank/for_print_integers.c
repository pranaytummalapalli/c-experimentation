#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* arr[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};

void checkformat(int* input){
    for(int i=0; i < sizeof(arr); i++){
        if(*input <= 9){
            if(*input == i+1){
                printf("%s \n", arr[i]);
                break;
            }
        }
        else if(*input > 9){
            if(*input%2 == 0){
                printf("%s\n", arr[9]);
                break;
            }
            else printf("%s\n", arr[10]);
        }
        else continue;
    }
}
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if(!(a < 0 | b < 0)){ 
        checkformat(&a);
        checkformat(&b);
    }
    
    else{
        printf("invalid argument"); 
        return 0;    
    }
   

    return 0;
}

