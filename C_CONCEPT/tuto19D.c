/*
#include <stdio.h>

// Function Declaration
void add();

int main() {
    // Function calling
    add();
    return 0;  // Return 0 to indicate successful execution of the program
}

// Function Definition
void add() {
    int a, b, c;  // Declare integer variables a, b, and c

    // Prompt the user to enter values for a and b
    printf("\n Enter the value of A & B : ");
    scanf("%d %d", &a, &b);  // Read the user input for a and b

    c = a + b;  // Calculate the sum of a and b

    // Print the result of the addition
    printf("\n Total : %d", c);
}
*/


#include <stdio.h>

// Function Declaration
void Star_Pattern();

int main() {
    int a;  // Declare an integer variable 'a' to store the number of stars

    // Prompt the user to enter the number of stars
    printf("Enter how many stars(*) you want : \n ");
    scanf("%d", &a);  // Read the user input and store it in 'a'

    // Loop to print '*' 'a' times
    for (int i = 0; i < a; i++) {
        printf("*");  // Print a single star '*'
    }

    return 0;
}