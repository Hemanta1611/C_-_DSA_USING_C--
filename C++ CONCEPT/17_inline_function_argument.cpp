#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Inline function to calculate the product of two integers
inline int product(int a, int b) {
    return a * b; // Return the product of a and b
}

// Explanation: 
// Inline functions are used when a function is small and called repeatedly to reduce the compile time and size.
// Avoid using inline functions in recursive functions and when static variables are used.

// Function to calculate money received after a year with a default interest factor
float moneyReceived(int currentMoney, float factor = 1.04) {
    return currentMoney * factor; // Return the money received after applying the factor
    // Here, int currentMoney is a compulsory argument
    // float factor is a default argument and it is always written after the compulsory argument
}

int main() {
    int a, b; // Declare integer variables a and b
    cout << "Enter the value of a and b: " << endl; // Prompt user to enter values for a and b
    cin >> a >> b; // Read the values for a and b from user input
    cout << "The product of a and b is: " << product(a, b) << ".\n"; // Output the product of a and b

    int money = 100000; // Declare and initialize the money variable
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
    // Output the money received after 1 year with the default interest factor

    cout << "For VIP: if you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year" << endl;
    // Output the money received after 1 year with a custom interest factor for VIP

    return 0; // Return 0 to indicate successful execution
}
