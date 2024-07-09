#include <stdio.h>  // Include the standard input-output library for using printf function

// Function that takes two integers as arguments and returns their sum
// With argument and with return value
int sum(int a, int b) {
    return a + b;  // Return the sum of the two integers
}

int main() {

    // Declare three integer variables: a, b, and c
    int a, b, c;

    a = 34;  // Assign the value 34 to variable a
    b = 93;  // Assign the value 93 to variable b

    // Call the sum function with a and b as arguments and store the result in c
    c = sum(a, b);

    // Print the result of a + b
    printf("a + b = %d", c);

    return 0;  // Return 0 to indicate successful execution of the program
}
