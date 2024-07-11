#include <stdio.h>

/**
 * @brief This program demonstrates the use of void pointers in C.
 *        Void pointers, also known as general-purpose pointers, can point to any data type.
 *        However, dereferencing a void pointer requires explicit casting to the appropriate data type.
 *
 * @return int Returns 0 upon successful execution.
 */

int main() {
    int a = 345;       // Integer variable
    float b = 9.4;     // Float variable
    void *ptr;         // Void pointer (general-purpose pointer)

    // Assign the address of integer variable 'a' to void pointer 'ptr'
    ptr = &a;

    // Dereference the void pointer 'ptr' as an integer pointer to access the value of 'a'
    printf("The value of a is %d\n", *((int *)ptr));

    // Assign the address of float variable 'b' to void pointer 'ptr'
    ptr = &b;

    // Dereference the void pointer 'ptr' as a float pointer to access the value of 'b'
    printf("The value of b is %f\n", *((float *)ptr));

    return 0;  // Exit successfully
}
