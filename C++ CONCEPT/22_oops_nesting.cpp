#include <iostream>
#include <string>
#include <cstdlib> // For exit(0)
using namespace std;

// Class definition for handling binary operations
class binary {
    string s; // Private member variable to store binary number

public:
    // Function declarations
    void ones_complement(void); // Computes the one's complement of the binary number
    void read(void); // Reads a binary number from the user
    void chk_bin(void); // Checks if the binary number is valid
    void display(void); // Displays the binary number
};

// Reads a binary number from the user
void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

// Checks if the binary number is valid (contains only '0' and '1')
void binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format " << endl;
            exit(0); // Exit the program if invalid binary format found
        }
    }
}

// Computes the one's complement of the binary number
void binary::ones_complement(void) {
    chk_bin(); // Validate the binary number
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1'; // Flip '0' to '1'
        } else {
            s.at(i) = '0'; // Flip '1' to '0'
        }
    }
}

// Displays the modified binary number
void binary::display(void) {
    cout << "Displaying your binary number: " << endl;
    cout << s << endl;
}

// Main function to test the binary class
int main() {
    binary b;
    
    // Interaction with the user
    b.read(); // Read binary number from user
    b.ones_complement(); // Compute one's complement
    b.display(); // Display the modified binary number
    
    return 0;
}

// to run program in terminal
// g++ .\1_intro.cpp
// .\a.exe