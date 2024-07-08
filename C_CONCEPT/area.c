#include <stdio.h> // Include the standard input-output library

// This program calculates the area of a circle given its radius.
// If you want to calculate the area of a square instead, you can use integer or floating-point types for the side length.

// Main function: Entry point of the program
int main (){

    float radius; // Declare a floating-point variable to store the radius of the circle

    // Prompt the user to enter the radius
    printf("Enter radius: ");
    // Read and store the user input in the variable radius
    scanf("%f", &radius);

    // Calculate the area of the circle using the formula π * radius^2
    // Here, π is approximated as 3.14
    printf("Area is %f\n", 3.14 * radius * radius);

    return 0; // Return 0 to indicate successful program termination
}
