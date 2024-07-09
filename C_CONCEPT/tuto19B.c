#include <stdio.h>

// Function prototypes
int sum(int a, int b);  // Declare a function that takes two integers as arguments and returns their sum

// Function that prints a specified number of stars
// With arguments and without return value
void printstar(int n) {
    for (int i = 0; i < n; i++) {  // Loop to print 'n' number of stars
        printf("%c", '*');  // Print a star
    }
    printf("%c", '*');  // Print one additional star
}

int main() {
    // Declare three integer variables: a, b, and c
    int a, b, c;

    a = 9;  // Assign the value 9 to variable a
    b = 87;  // Assign the value 87 to variable b

    c = sum(a, b);  // Call the sum function with a and b as arguments and store the result in c

    printstar(7);  // Call the printstar function to print 7 stars

    return 0;  // Return 0 to indicate successful execution of the program
}

// Function that takes two integers as arguments and returns their sum
int sum(int a, int b) {
    return a + b;  // Return the sum of the two integers
}
