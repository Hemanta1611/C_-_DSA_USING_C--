#include <stdio.h>

// Function prototype
int sum(int a, int b);

// Function that prints a specified number of stars
void printstar(int n) {
    for (int i = 0; i < n; i++) {  // Loop to print 'n' number of stars
        printf("%c", '*');  // Print a star
    }
    printf("%c", '*');  // Print one additional star
}
// Line 3 to 11 no use because later we have not used above function if we use than it will work otherwise it won't interfere further

// Function that takes no arguments and returns an integer
// Without arguments and with return value
int takenumber() {
    int i;  // Declare an integer variable 'i'
    printf("Enter a number");  // Prompt the user to enter a number
    scanf("%d", &i);  // Read the user input and store it in the variable 'i'
    return i;  // Return the entered number
}

int main() {
    // Declare three integer variables: a, b, and c
    int a, b, c;

    a = 7;  // Assign the value 7 to variable a
    b = 9;  // Assign the value 9 to variable b

    c = takenumber();  // Call the takenumber function and store the returned value in c

    printf("The number entered is %d \n", c);  // Print the value of c

    return 0;  // Return 0 to indicate successful execution of the program
}
