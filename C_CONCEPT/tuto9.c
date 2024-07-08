#include <stdio.h> // Include the standard input-output library

#define PI 3.14 // Define a constant named PI with the value 3.14

int main() {

    int a = 8; // Declare an integer variable a and initialize it with the value 8
    const float b = 7.333; // Declare a constant float variable b and initialize it with the value 7.333
    
    // The following line is commented out because b is a constant and its value cannot be changed
    // b = 7.22;

    // The following line is commented out. It would print "Hello World" to the console.
    // printf("Hello World\n");

    // The following line is commented out. It would print the values of a and b with specified formatting.
    // printf("The value of a = %d\n and The value of b = %10.4f\n", a, b);

    // Print the value of b with a width of 8 characters and 4 decimal places
    printf("%8.4f\n", b);

    // Print the value of the constant PI
    printf("%f\n", PI);

    // Escape sequences in C:
    // \a = Alarm or beep
    // \b = Backspace
    // \n = New line
    // \t = Tab
    // \\ = Backslash
    // \' = Single quote
    // \" = Double quote

    return 0; // Return 0 to indicate successful program termination
}
