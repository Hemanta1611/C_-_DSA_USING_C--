#include <stdio.h>
#include <stdlib.h>
#include "sum.c" // Including the file for sum function

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to greet and execute a function pointer for multiplication
void greet_hello_and_execute(int (*fptr)(int, int)) {
    printf("Hello User\n");
    printf("The multiplication of 7 & 9 is %d\n", fptr(7, 9));
}

// Function to greet and execute a function pointer for multiplication
void greet_gm_and_execute(int (*fptr)(int, int)) {
    printf("Good Morning User\n");
    printf("The multiplication of 7 & 9 is %d\n", fptr(7, 9));
}

int main() {
    // Calling the sum function directly from sum.c
    printf("sum of two number: 34 & 78 is %d\n", sum(34, 78));

    // Declaring a function pointer for int function(int, int)
    int (*ptr)(int, int);

    // Assigning address of multiply function to ptr
    ptr = multiply;

    // Calling functions with ptr as argument to demonstrate function pointers
    greet_gm_and_execute(ptr);
    greet_hello_and_execute(ptr);

    return 0;
}
