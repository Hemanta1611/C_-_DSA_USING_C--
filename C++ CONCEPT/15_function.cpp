#include <iostream>  // Includes the input-output stream library

using namespace std;  // Use the standard namespace

// Function prototypes
int sum(int, int);  // Declares the 'sum' function that takes two integers as parameters and returns an integer
void g();           // Declares the 'g' function that takes no parameters and returns nothing

int main() {
    // Variable declarations
    int n1, n2;

    // Prompt the user to enter a value for n1
    cout << "Give a value to number a: ";
    cin >> n1;  // Read the value from the user and store it in n1

    // Prompt the user to enter a value for n2
    cout << "Give a value to number b: ";
    cin >> n2;  // Read the value from the user and store it in n2

    // Call the 'sum' function with n1 and n2 as arguments and output the result
    cout << "Sum of these two numbers is: " << sum(n1, n2) << endl;

    // Call the 'g' function
    g();

    return 0;  // Return 0 to indicate successful execution
}

// Definition of the 'sum' function
// Takes two integers as parameters and returns their sum
int sum(int a, int b) {
    int c;  // Variable to store the sum
    c = a + b;  // Calculate the sum of a and b
    return c;  // Return the sum
}

// Definition of the 'g' function
// Prints a greeting message
void g() {
    cout << "Hello, Good Morning! G" << endl;
}

/*
Formal parameter: a & b are formal parameters
Actual parameter: n1 & n2 are actual parameters
*/
