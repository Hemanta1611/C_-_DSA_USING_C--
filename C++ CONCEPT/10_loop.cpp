#include <iostream>  // Includes the input-output stream library

using namespace std;  // Use the standard namespace

int main() {

    // For Loop in C++
    // This loop runs from i = 0 to i < 9, incrementing i by 1 in each iteration
    for (int i = 0; i < 9; i++) {
        cout << i << "--ILU-IHU\n";  // Print the value of i followed by "--ILU-IHU" and a newline
    }

    // \n is faster than endl because endl is a function that flushes the buffer

    // While Loop in C++
    int a;
    cout << "Enter value of a: ";
    cin >> a;  // Input value of a from the user

    // This loop runs as long as a is less than 19
    while (a < 19) {
        cout << a << "\n";  // Print the value of a followed by a newline
        a++;  // Increment a by 1
    }

    // Infinite while loop example (commented out)
    /*
    int c = 0;
    while (true) {
        cout << c << endl;  // Print the value of c followed by a newline
        c++;  // Increment c by 1
    }
    */

    // Do-While Loop in C++
    int b;
    cout << "Enter value of b: ";
    cin >> b;  // Input value of b from the user

    // This loop runs at least once and then continues as long as b is less than 19
    do {
        cout << b << "\n";  // Print the value of b followed by a newline
        b++;  // Increment b by 1
    } while (b < 19);

    return 0;  // Return 0 to indicate successful execution
}
