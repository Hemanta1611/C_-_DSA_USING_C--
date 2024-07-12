#include <iostream>  // System header file for input-output stream
#include <iomanip>   // System header file for input-output manipulators

using namespace std;  // Use the standard namespace

int main() {
    /*
    // Commented out code for demonstrating variable reassignment
    int a = 34;
    char c = 'c';
    cout << "The value of a was: " << a << endl;
    a = 45;
    cout << "The value of a is: " << a << endl;
    c = '4';
    cout << "The value of c is: " << c << endl;
    cout << endl;
    */

    /*
    // Constants in C++
    const int a = 3;
    cout << "The value of a was: " << a << endl;
    // a = 45;  // This line would cause a compilation error because 'a' is a constant
    cout << "The value of a is: " << a << endl;
    */

    /*
    // Manipulators in C++
    // setw() sets the width of the next input/output field
    */
    int a = 2, b = 78, c = 1234;
    cout << "The value of a is: " << setw(7) << a << endl;    
    cout << "The value of b is: " << setw(7) << b << endl;    
    cout << "The value of c is: " << setw(7) << c << endl;

    /*
    // Operator Precedence in C++
    // The order of evaluation of operators is based on operator precedence rules
    */
    int x = 2, y = 4;
    int z = a * 5 + b;  // Evaluates as (a * 5) + b due to operator precedence (multiplication before addition)

    return 0;  // Return 0 to indicate successful execution
}
