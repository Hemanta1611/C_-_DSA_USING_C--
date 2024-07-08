#include <stdio.h> // Include the standard input-output library

int main() {

    int age, marks; // Declare integer variables age and marks

    // Prompt the user to enter their age
    printf("Enter your age\n");
    // Read the user input and store it in the variable age
    scanf("%d", &age);

    // Prompt the user to enter their marks
    printf("Enter your marks\n");
    // Read the user input and store it in the variable marks
    scanf("%d", &marks);

    // Use a switch statement to check the value of age
    switch (age) {
        case 3:
            // If age is 3, print "The age is 3"
            printf("The age is 3\n");
            // Use a nested switch statement to check the value of marks
            switch (marks) {
                case 45:
                    // If marks are 45, print "Your marks are 45"
                    printf("Your marks are 45");
                    break; // Exit the inner switch statement
                
                default:
                    // If marks are not 45, print "Your marks are not 45"
                    printf("Your marks are not 45");
                    break; // Exit the inner switch statement
            }
            break; // Exit the outer switch statement for case 3

        case 13:
            // If age is 13, print "The age is 13"
            printf("The age is 13\n");
            // No break here, so execution will continue to the next case

        case 23:
            // If age is 23, print "The age is 23"
            printf("The age is 23\n");
            break; // Exit the switch statement for case 23

        default:
            // If age is not 3, 13, or 23, print "The age is not 3, 13, or 23"
            printf("The age is not 3, 13, or 23\n");
            break; // Exit the switch statement for default case
    }
    
    return 0; // Return 0 to indicate successful program termination
}

/* Explanation:
If we don't use a break statement in a switch case,
all statements will execute sequentially until a break statement is reached.
This is known as fall-through behavior. */
