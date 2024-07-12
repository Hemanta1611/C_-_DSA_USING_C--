#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int glo = 7; // Global variable

// Function to print the global variable 'glo'
void call() {
    cout << glo; // Print the value of the global variable 'glo'
}

int main() {
    // Print introductory messages
    cout << "Hello World \nThis is Tutorial 4 Code with harry\n";

    // Documentation about variable types and scope
    // Variable types: int, float, char, double, boolean
    /*
    Based on scope, variables can be classified into two types:
    1. Local Variable
    2. Global Variable

    Data types:
    1. Built-in: int, float, char, double, boolean
    2. User-defined: Struct, Union, Enum
    3. Derived: array, function, pointers

    - float: decimal numbers of low precision
    - double: decimal numbers of high precision

    Note: Local variable takes precedence over global variable.
    */

    // Local variables
    int a = 2; // Local integer variable
    float b = 7.99; // Local float variable
    char c = 'h'; // Local character variable
    
    // Print values of local variables
    cout << "The value of a is " << a << ".\n";
    cout << "The value of b is " << b << ".\n";
    cout << b;
    cout << ".\nThe value of c is " << c << ".\n";

    // Local variable with the same name as the global variable
    int glo = 9;
    glo = 27; // Update local variable

    // Print the global variable value using the call function
    cout << "The value of glo after calling above function call is: ";
    call();
    cout << ".\nThe value of glo is now (i.e after normally printing is): " << glo << ".\n";

    // Boolean variables
    bool x = true; // Local boolean variable
    cout << x; // Print value of boolean variable x
    bool y = false; // Local boolean variable
    cout << ",\t" << y; // Print value of boolean variable y with a tab space

    return 0; // Return 0 to indicate successful execution
}
