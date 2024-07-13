#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) { // Base case: factorial of 0 or 1 is 1
        return 1;
    }
    return n * factorial(n - 1); // Recursive case: n * factorial of (n-1)
}

/*
Factorial Calculation Explained:
factorial(4) = 4 * factorial(3);
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/

// Recursive function to calculate the nth term of the Fibonacci sequence
int fib(int n) {
    if (n == 1 || n == 2) { // Base case: the first two terms of Fibonacci sequence are 1
        return 1;
    }
    return fib(n - 2) + fib(n - 1); // Recursive case: sum of the two preceding terms
}

int main() {
    int a; // Declare an integer variable a
    cout << "Enter a number: "; // Prompt user to enter a number
    cin >> a; // Read the number from user input
    
    // Output the factorial of the entered number
    cout << "Factorial of " << a << " is: " << factorial(a) << endl;
    
    // Output the term in the Fibonacci sequence at the entered position
    cout << "The term in Fibonacci sequence at position " << a << " is " << fib(a) << endl;

    return 0; // Return 0 to indicate successful execution
}
