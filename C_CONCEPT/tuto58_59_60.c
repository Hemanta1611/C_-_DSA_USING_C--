/*
PREPROCESSOR COMMANDS:
1. #include
2. #define
3. #undef
4. #ifdef
5. #ifndef
6. #if
7. #else
8. #elif
9. #pragma --> To issue some special commands to the compiler
*/

/*
--->> ".h" extension , indicating that they are header files
#define directive can be used for debugging

*/


#include <stdio.h>
#include "sum.c"  // Include the custom header file for the sum function
#define sq(x) (x)*(x)  // Macro to compute the square of a number

/**
 * @brief Main function to demonstrate the use of macros, custom header files, and preprocessor directives.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int a, b;

    // Reading two integers from the user
    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);

    // Using the sq macro to calculate the square of a number
    printf("Square of %d is %d\n", a, sq(a));

    // Using the sum function from sum.c to calculate the sum of two numbers
    printf("Addition of %d and %d is %d\n", a, b, sum(a, b));

    // Displaying predefined macros
    printf("File name: %s\n", __FILE__);       // Current file name
    printf("Today's date: %s\n", __DATE__);    // Current date
    printf("Time: %s\n", __TIME__);            // Current time
    printf("Line number: %d\n", __LINE__);     // Current line number
    printf("ANSI: %d\n", __STDC__);            // ANSI standard compliance

    return 0;
}
