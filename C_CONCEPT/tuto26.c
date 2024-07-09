#include <stdio.h>
int main() {
    int a = 26;         // Declare and initialize an integer variable 'a' with value 26
    int *ptra = &a;     // Declare a pointer variable 'ptra' and initialize it with the address of 'a'
    
    // Print statements to demonstrate pointers and addresses
    printf("The address of pointer to 'a' is %p\n", &ptra);   // Print the address of 'ptra' itself
    printf("The address of 'a' is %p\n", &a);                 // Print the address of 'a'
    printf("The value stored in 'ptra' (address of 'a') is %p\n", ptra);  // Print the value stored in 'ptra'
    printf("The value of 'a' (dereferenced pointer 'ptra') is %d\n", *ptra); // Print the value of 'a' using pointer 'ptra'
    printf("The address of 'a' is %d\n", &a);                 // Print the address of 'a' (incorrect format specifier)
    printf("The value of 'a' is %d\n", a);                    // Print the value of 'a'
    printf("The value of 'ptra' is %d\n", ptra);              // Print the value of 'ptra' (incorrect format specifier)
    printf("The value stored at address pointed by 'ptra' is %p\n", *ptra);  // Print the value stored at the address pointed by 'ptra' (incorrect format specifier)
    
    int *ptr2 = NULL;   // Declare a pointer variable 'ptr2' and initialize it to NULL

    printf("The address stored in 'ptr2' (which points to garbage) is %p\n", ptr2);  // Print the address stored in 'ptr2'

    return 0;
}
