#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Function to add two integers
int add(int a, int b) {
    cout << "Using function with 2 arguments" << endl;
    return a + b; // Return the sum of two integers
}

// Function to add three integers (function overloading)
int add(int a, int b, int c) {
    cout << "Using function with 3 arguments" << endl;
    return a + b + c; // Return the sum of three integers
}

// Function to calculate the volume of a cylinder
float volume(double r, int h) {
    return 3.14 * r * r * h; // Volume formula: π * r^2 * h
}

// Function to calculate the volume of a cube
float volume(int a) {
    return a * a * a; // Volume formula: side^3
}

// Function to calculate the volume of a cuboid (function overloading)
float volume(int l, int b, int h) {
    return l * b * h; // Volume formula: length * breadth * height
}

int main() {
    int a = 2, b = 7, c = 9;
    
    // Demonstrate function overloading with add functions
    cout << "The sum of a and c is: " << add(a, c) << endl; // Calls add(int, int)
    cout << "The sum of a, b and c is: " << add(a, b, c) << endl; // Calls add(int, int, int)
    
    // Demonstrate function overloading with volume functions
    cout << "The volume of cuboid is: " << volume(5, 5, 5) << endl; // Calls volume(int, int, int)
    cout << "The volume of cylinder is: " << volume(5, 5) << endl; // Calls volume(double, int)
    cout << "The volume of cube is: " << volume(5) << endl; // Calls volume(int)
    
    return 0; // Return 0 to indicate successful execution
}
