#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fib_recursive(int n)
{
    if (n == 1 || n == 2) {
        return n - 1;  // Base cases for Fibonacci series
    } else {
        return fib_recursive(n - 1) + fib_recursive(n - 2);  // Recursive call to calculate Fibonacci number
    }
}

// Function to calculate Fibonacci number iteratively
int fib_iterative(int n)
{
    int a = 0;  // Initialize first Fibonacci number
    int b = 1;  // Initialize second Fibonacci number
    for (int i = 0; i < n - 1; i++) {
        b = a + b;  // Calculate next Fibonacci number
        a = b - a;  // Update values for next iteration
    }
    return a;  // Return the nth Fibonacci number
}

int main() {
    int number;
    printf("Enter the index to get the Fibonacci series: \n");
    scanf("%d", &number);  // Input the index of Fibonacci number to be calculated

    // Calculate and print Fibonacci number using recursive approach
    printf("The value of Fibonacci number at position %d using recursive approach: %d\n", number, fib_recursive(number));

    // Calculate and print Fibonacci number using iterative approach
    printf("The value of Fibonacci number at position %d using iterative approach: %d\n", number, fib_iterative(number));

    return 0;
}
