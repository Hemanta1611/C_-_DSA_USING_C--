// NULL POINTER
#include <stdio.h>

/**
 * @brief This program demonstrates the use of null pointers in C.
 *        A null pointer is a special pointer that does not point to any valid memory location.
 *        Null pointers are useful for indicating that a pointer is not currently assigned to any object.
 *
 * @return int Returns 0 upon successful execution.
 */

int main() {
    int a = 34;       // Integer variable
    int *ptr;         // Integer pointer

    // Assign the address of integer variable 'a' to the pointer 'ptr'
    ptr = &a;

    // Print the address stored in pointer 'ptr' (address of 'a')
    printf("The address of a is %p \n", (void *)ptr);

    // Print the value of integer variable 'a' by dereferencing pointer 'ptr'
    printf("The value of a is %d \n", *ptr);

    // Set the pointer 'ptr' to NULL, indicating it no longer points to any valid memory location
    ptr = NULL;

    // Print the address stored in pointer 'ptr' (NULL, which is typically represented as 0)
    printf("The address of ptr is %p \n", (void *)ptr);

    // Attempting to dereference a null pointer will cause undefined behavior
    // Uncommenting the next line will result in a runtime error
    // printf("The value of a is %d \n", *ptr);

    return 0;  // Exit successfully
}
