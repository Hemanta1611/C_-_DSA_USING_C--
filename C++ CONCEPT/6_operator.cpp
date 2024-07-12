#include <iostream> // System header file for input-output stream

/*
    There are two types of header files:
    1. System header files: It comes with the compiler.
       Example - #include <iostream>
    2. User-defined header files: It is written by the programmer.
       Example - #include "xyz.h" or #include "abc.cpp"
*/

using namespace std; // Use the standard namespace

int main() {

    // Declare and initialize integer variables
    int a = 7, b = 9;

    // Output introductory text
    cout << "Operator in C++:" << endl;
    cout << "Following are the types of operators in C++:" << endl;
    // Note: 'endl' is equivalent to '\n'

    // Arithmetic Operators - Uncomment the following lines to use them
    // cout << "The value of a + b is " << a + b << endl;
    // cout << "The value of a - b is " << a - b << endl;
    // cout << "The value of a * b is " << a * b << endl;
    // cout << "The value of a / b is " << a / b << endl;
    // cout << "The value of a % b is " << a % b << endl;
    // cout << "The value of a++ is " << a++ << endl;
    // cout << "The value of a-- is " << a-- << endl;
    // cout << "The value of ++a is " << ++a << endl;
    // cout << "The value of --a is " << --a << endl;
    // cout << endl;

    // Assignment Operator - Used to assign values to variables
    int x = 23, y = 12; // Assigning values to variables x and y
    char d = 'd'; // Assigning a character to variable d

    // Comparison Operators - Output the results of comparisons
    cout << "The value of a == b is " << (a == b) << endl; // Check if a is equal to b
    cout << "The value of a != b is " << (a != b) << endl; // Check if a is not equal to b
    cout << "The value of a > b is " << (a > b) << endl; // Check if a is greater than b
    cout << "The value of a < b is " << (a < b) << endl; // Check if a is less than b
    cout << "The value of a >= b is " << (a >= b) << endl; // Check if a is greater than or equal to b
    cout << "The value of a <= b is " << (a <= b) << endl; // Check if a is less than or equal to b

    // Logical Operators - Output the results of logical operations
    cout << "\n"; // New line for better readability
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical AND operator ((a==b) && (a<b)) is " << ((a == b) && (a < b)) << ".\n";
    cout << "The value of this logical OR operator ((a==b) || (a<b)) is " << ((a == b) || (a < b)) << ".\n";
    cout << "The value of this logical NOT operator (!(a==b)) is " << (!(a == b)) << ".\n";

    return 0; // Return 0 to indicate successful execution
}
