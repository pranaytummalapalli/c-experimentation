#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//for each integer in the list between the 

char* arr[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(){
    int a, b, i, maxVal;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if(!(a < 0 | b < 0)){ 
        if(a>b){
            i = b;
            maxVal = a;
        }
        else if(b > a){
            i = a; 
            maxVal = b;
        } 
        for(i; i < maxVal+1; i++){
            if(i <= 9) printf("%s\n", arr[i-1]);
            else if(i > 9) i%2 ? printf("odd\n") : printf("even\n");
        }
    }
    
    else{
        printf("invalid argument"); 
        return 0;    
    }
}