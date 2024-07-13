#include <iostream>  // Includes the input-output stream library
using namespace std; // Use the standard namespace

// Function to calculate the sum of two integers
int sum(int a, int b) {
    int c = a + b; // Calculate the sum of a and b
    return c; // Return the sum
}

// Function to swap two integers (call by value, won't actually swap the original variables)
void swap(int a, int b) {
    int temp = a; // Store the value of a in a temporary variable
    a = b;        // Assign the value of b to a
    b = temp;     // Assign the value of the temporary variable (original a) to b
}

// Function to swap two integers using pointers (call by reference)
void swap_pointer(int *a, int *b) {
    int temp = *a; // Store the value pointed by a in a temporary variable
    *a = *b;       // Assign the value pointed by b to the location pointed by a
    *b = temp;     // Assign the value of the temporary variable (original *a) to the location pointed by b
}

// Function to swap two integers using C++ reference variables (call by reference)
void swap_reference(int &a, int &b) {
    int temp = a; // Store the value of a in a temporary variable
    a = b;        // Assign the value of b to a
    b = temp;     // Assign the value of the temporary variable (original a) to b
}

int main() {
    // Example of call by value
    cout << "The sum of 27 and 79 is: " << sum(27, 79) << endl;

    // Example of call by reference
    int x = 27, y = 79;
    cout << "The sum of 27 and 79 is: " << sum(x, y) << endl;

    cout << "The value of x is " << x << ". The value of y is " << y << endl;
    swap(27, 79); // OR // swap(x, y);
    cout << "The value of x is " << x << ". The value of y is " << y << endl;
    // Here, the actual arguments get copied into the formal arguments in the swap function
    // but the addresses of the actual arguments don't get copied into the formal arguments, so it won't swap

    // Call by reference using pointers
    swap_pointer(&x, &y);
    cout << "The value of x is " << x << ". The value of y is " << y << endl;

    // Call by reference using C++ reference variables
    swap_reference(x, y);
    cout << "The value of x is " << x << ". The value of y is " << y << endl;

    return 0; // Return 0 to indicate successful execution
}
