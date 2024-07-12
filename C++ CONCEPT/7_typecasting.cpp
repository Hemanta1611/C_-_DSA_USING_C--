#include <iostream> // System header file for input-output stream

using namespace std; // Use the standard namespace

int c = 45; // Global variable

int main(){

    // Declare local variables
    int a, b, c;
    
    // Prompt the user to enter the value of 'a' and read the input
    cout << "Enter the value of a:" << endl;
    cin >> a;
    
    // Prompt the user to enter the value of 'b' and read the input
    cout << "Enter the value of b:" << endl;
    cin >> b;    
    
    // Calculate the sum of 'a' and 'b' and store it in local 'c'
    c = a + b;
    cout << "The sum is " << c << endl;

    // Output the global variable 'c' using the scope resolution operator (::)
    cout << "The global c is " << ::c << endl;
    cout << endl;

    // Declare and initialize floating-point variables
    float d = 34.4;
    long double e = 34.4;

    // Output the values and sizes of floating-point variables and literals
    cout << "The value of d is " << d << endl << "The value of e is " << e << endl;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    // ************Reference Variable*************
    // hemanta ----> babu -----> dada
    // Create a reference variable 'y' for 'x'
    float x = 455;
    float &y = x;
    cout << endl;
    cout << x << endl; // Output the value of 'x'
    cout << y << endl; // Output the value of 'y', which is a reference to 'x'

    // ************Typecasting*************
    // Declare and initialize integer and floating-point variables
    int p = 45;
    float q = 45.6;
    cout << endl;
    
    // Typecast 'p' to float and output the result
    cout << "The value of p is " << (float)p << endl;
    cout << "The value of p is " << float(p) << endl; // Alternative syntax

    // Typecast 'q' to int and output the result
    cout << "The value of q is " << (int)q << endl;

    cout << endl;

    // Store the typecasted value of 'q' in 'h'
    int h = int(q);

    // Output expressions involving typecasting
    cout << "The expression is " << p + q << endl; // Without typecasting
    cout << "The expression is " << p + int(q) << endl; // Typecasting 'q' to int
    cout << "The expression is " << p + (int)q << endl; // Alternative syntax

    return 0; // Return 0 to indicate successful execution
}
