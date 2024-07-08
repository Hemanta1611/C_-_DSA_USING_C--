#include <stdio.h> // Include the standard input-output library

int main() {
    int age; // Declare an integer variable age

    // Prompt the user to enter their age
    printf("Enter your age\n");
    
    // Read the user input and store it in the variable age
    scanf("%d", &age);

    // Print the entered age
    printf("You have entered %d as your age\n", age);

    // Check if the age is 18 or greater
    if (age >= 18) {
        // If age is 18 or greater, print a message indicating the user can vote
        printf("You can vote!");
    }
    // Check if the age is greater than 10 but less than 18
    else if (age > 10) {
        // If age is between 10 and 18, print a message indicating the user can vote for kids
        printf("You are between 10 to 18 and you can vote for kids ");
    }
    // If the age is 10 or less
    else {
        // Print a message indicating the user cannot vote
        printf("You can't vote");
    }

    return 0; // Return 0 to indicate successful program termination
}
