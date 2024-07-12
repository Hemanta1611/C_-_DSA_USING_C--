#include <iostream> // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() {
    // Declare two integer variables to store user input
    int num1, num2;

    // Prompt the user to enter the first number
    cout << "Enter the value of num1: \n";
    // Read the user input and store it in num1
    cin >> num1;

    // Comment: << is the insertion operator, >> is the extraction operator
    // cout is used for output (similar to printf in C)
    // cin is used for input (similar to scanf in C)

    // Prompt the user to enter the second number
    cout << "Enter the value of num2: \n";
    // Read the user input and store it in num2
    cin >> num2;

    // Calculate the sum of num1 and num2 and display the result
    cout << "The sum is: " << num1 + num2 << ".\n";

    // Return 0 to indicate successful execution
    return 0;
}
