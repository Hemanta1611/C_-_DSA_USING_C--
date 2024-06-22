// CALLBACK FUNCTIONS USING FUNCTION POINTER

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "sum.c"

int multiply(int a, int b){
    return a*b;
}

void greet_hello_and_execute(int (*fptr)(int, int)){
    printf("Hello User\n");
    printf("The multiplication of 7 & 9 is %d\n", fptr(7,9));
}

void greet_gm_and_execute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The multiplication of 7 & 9 is %d\n", fptr(7,9));
}
    
int main(){
    
    printf("sum of two number: 34 & 78 is %d\n", sum(34,78));

    int (*ptr)(int, int);
    ptr = multiply; // if we use "&" or not, it won't matter as function is already an address
    greet_gm_and_execute(ptr);
    greet_hello_and_execute(ptr);
    
    return 0;
}