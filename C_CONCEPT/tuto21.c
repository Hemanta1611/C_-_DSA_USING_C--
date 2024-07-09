#include <stdio.h>
// Recursive function to calculate the factorial of a number
int factorial(int num) {
    if (num == 1 || num == 0) {  // Base case: factorial of 1 or 0 is 1
        return 1;
    } else {
        return (num * factorial(num - 1));  // Recursive case: return num * factorial(num - 1)
    }
}

int main() {
    int num;  // Declare an integer variable 'num' to store user input

    // Prompt the user to enter a number for which they want the factorial
    printf("Enter the number you want the factorial of: \n");
    scanf("%d", &num);  // Read the user input and store it in 'num'

    // Print the factorial of 'num' using the factorial function
    printf("The factorial of %d is %d \n", num, factorial(num));

    return 0;  // Return 0 to indicate successful execution of the program
}

// easy metod available in (practice17.c)

