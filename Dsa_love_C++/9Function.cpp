#include <iostream>
using namespace std;

// Function to print a given name 7 times
// Parameters:
// - name: the string to be printed
void printName(string name) {
    for (int i = 0; i < 7; i++) {
        cout << name << endl; // Print the name
    }
}

// Function to print the maximum of three numbers
// Parameters:
// - n1: first number
// - n2: second number
// - n3: third number
void printMax(int n1, int n2, int n3) {
    int ans = max(n1, n2); // Find the maximum between n1 and n2
    int ans1 = max(ans, n3); // Find the maximum between the previous result and n3
    cout << "Greatest Number of given three numbers = " << ans1 << endl;
}

// Function to check if a number is prime
// Parameters:
// - n: the number to be checked
// Returns:
// - true if n is prime, false otherwise
bool checkPrime(int n) {
    for (int i = 2; i <= n / 2; i++) { // Iterate from 2 to half of n
        if (n % i == 0) { // If n is divisible by i
            return false; // n is not a prime number
        }
    }
    return true; // n is a prime number
}

// Function to check if a number is even or odd
// Parameters:
// - n: the number to be checked
void evenORodd(int n) {
    if (n & 1) { // Check the least significant bit
        cout << "Given number is odd." << endl;
    } else {
        cout << "Given number is even." << endl;
    }
}

int main() {
    // Example usage of the functions
    // string name;
    // cin >> name;
    // printName(name);
    // char name1[35];
    // cin >> name1;
    // printName(name1);

    // Finding and printing the maximum of three numbers
    printMax(2, 7, 7);

    // Checking if a number is prime
    bool check = checkPrime(97);
    if (check) {
        cout << "It's a prime number." << endl;
    } else {
        cout << "It's not a prime number." << endl;
    }

    // Checking if a number is even or odd
    evenORodd(7);

    // Printing the minimum and maximum values of a 32-bit integer
    cout << INT32_MIN << endl;
    cout << INT32_MAX << endl;

    return 0;
}
