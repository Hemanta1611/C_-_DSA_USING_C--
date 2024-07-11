// FUNCTION POINTERS
#include <stdio.h>

// Function definition for sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    // Calling the sum function directly
    printf("The sum of 2 and 7 is %d\n", sum(2, 7));

    // Declaring a function pointer for the sum function
    int (*fptr)(int, int); // fptr is a pointer to a function that takes two ints and returns an int

    // Assigning the address of sum function to fptr
    fptr = &sum; // Alternatively, you can simply write fptr = sum;

    // Using the function pointer to call sum function
    int d = (*fptr)(4, 6); // Dereferencing and calling through the function pointer

    // Printing the result obtained from function pointer call
    printf("The value of d is %d\n", d);

    return 0;
}
