// ARRAYS & POINTER IN ARITHMATIC IN C
#include <stdio.h>

int main() {
    char a = '3';        // Declare and initialize a character variable 'a' with value '3'
    char *ptra = &a;     // Declare a pointer variable 'ptra' and initialize it with the address of 'a'
    
    printf("%d\n", ptra);   // Print the address stored in 'ptra' (as an integer)
    ptra--;                 // Decrement the pointer 'ptra' by one position
    printf("%d\n", ptra);   // Print the updated address stored in 'ptra' after decrementing
    printf("%d", ptra - 1); // Print the address calculated by subtracting 1 from 'ptra'

    return 0;
}

// arr[i] == *(arr + i)  same thing
// &arr[i] == arr + i    same thing