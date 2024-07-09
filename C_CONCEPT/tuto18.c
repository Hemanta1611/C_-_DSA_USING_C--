#include <stdio.h>  // Include the standard input-output library for using printf function

// Typecasting
int main() {

    int a;  // Declare an integer variable 'a'

    // Perform integer division and typecast one operand to float to get a float result
    float b = (float)54 / 5;

    // Print the value of 'b' using the format specifier for float
    printf("the value of a is %f\n", b);

    return 0;  // Return 0 to indicate successful execution of the program
}

// int int calculation always give int results, for float result use atleast float once
