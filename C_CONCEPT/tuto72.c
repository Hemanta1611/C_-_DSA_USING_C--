// FUNCTION POINTERS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int sum(int a, int b){
    return a+b;
}

int main(){
    

    printf("the sum of 2 and 7 is %d\n", sum(2,7));// testing the function


    int (*fptr) (int, int); // declaring a function pointer
    fptr = &sum; //creating a function pointer
    int d = (*fptr)(4,6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d); // 


    return 0;
}