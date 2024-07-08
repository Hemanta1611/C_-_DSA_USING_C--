#include <stdio.h>

int main() {
    // Print the size of the int data type in bytes
    // %lu is the format specifier for an unsigned long integer
    // sizeof(int) returns the size of the int type in bytes
    printf("%lu", sizeof(int));
    
    return 0;
}