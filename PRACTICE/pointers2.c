#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void square(int n);
void _square(int * n);
void swap(int a, int b);
void _swap(int *a, int *b);
    
int main(){
    
    int number = 7;
    square(number);
    printf("number = %d.\n", number);
    _square(&number);
    printf("number = %d.\n", number);
    int a = 2, b = 7;
    swap(a,b);
    printf("a = %d, b = %d.\n", a, b);
    _swap(&a,&b);
    printf("a = %d, b = %d.\n", a, b);
    
    return 0;
}

// call by vallue
void square(int n){
    n = n * n;
    printf("square = %d.\n", n);
}
// call by reference
void _square(int * n){
    *n = (*n) * (*n);
    printf("square = %d.\n", *n);
}
// call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, a = %d.\n", a, b);
}
// call by reference
void _swap(int *a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}