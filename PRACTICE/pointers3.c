#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printAddress(int n);
void _printAddress(int * n);
void dowork(int a, int b, int * sum, int * prod, int * avg);
    
int main(){
    
    int n = 7;
    printAddress(n);
    printf("address of n is %u.\n", &n);
    _printAddress(&n);
    
    int a = 2, b = 7;
    int sumation, product, average;
    dowork(a, b, &sumation, &product, &average);
    printf("sum = %d, prod = %d, avg = %d.\n", sumation, product, average);

    return 0;
}

// call by value
void printAddress(int n){
    printf("address of n is %u.\n", &n);
}
// Output will be different because we just pass the value in function we have not gone through address 
// thats why address of passed value and address of given value will be different. 😊

// call by reference --> Output will be going to same
void _printAddress(int * n){
    printf("address of n is %u.\n", n);
}

void dowork(int a, int b, int * sum, int * prod, int * avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}