#include <iostream>  // Includes the input-output stream library

using namespace std;  // Use the standard namespace

int main() {
    // Declare and initialize an array 'marks' with 7 elements
    int marks[7] = {23, 34, 45, 56, 67, 78, 89};

    // Output the elements of the 'marks' array
    cout << "These are marks:" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << marks[5] << endl;
    cout << marks[6] << endl;

    // Declare an array 'mathmarks' and assign values to its elements
    int mathmarks[2];
    mathmarks[0] = 69;
    mathmarks[1] = 96;

    // Output the elements of the 'mathmarks' array
    cout << "These are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;

    // Output the elements of the 'marks' array using a for loop
    cout << "Using for loop" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Marks obtained by " << i + 1 << " student: " << marks[i] << endl;
    }

    // Output the elements of the 'marks' array using a while loop
    cout << "Using while loop" << endl;
    int a = 0;
    while (a < 7) {
        cout << "Marks obtained by " << a + 1 << " student: " << marks[a] << endl;
        a++;
    }

    // Pointers and arrays
    // Declare a pointer 'p' and assign it the address of the first element of the 'marks' array
    // int *p = marks; OR
    int *p = &marks[0];

    // Output the elements of the 'marks' array using pointer arithmetic
    cout << "The value of marks[0] is " << *(p) << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;
    cout << "The value of marks[2] is " << *(p + 2) << endl;
    cout << "The value of marks[3] is " << *(p + 3) << endl;
    cout << "The value of marks[4] is " << *(p + 4) << endl;

    // Demonstrate the use of post-increment and pre-increment with pointers
    cout << *(p++) << endl;  // Post-increment: prints the value at 'p' then increments 'p'
    cout << *(++p) << endl;  // Pre-increment: increments 'p' then prints the value at 'p'

    return 0;  // Return 0 to indicate successful execution
}
