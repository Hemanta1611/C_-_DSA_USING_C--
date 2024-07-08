/*
#include <stdio.h> // Include the standard input-output library

// For loop example
int main() {

    int i; // Declare an integer variable i

    // For loop that initializes i to 0; executes as long as i is less than 7; increments i by 1 after each iteration
    for (i = 0; i < 7; i++) {
        // Print the current value of i
        printf("%d\n", i);
    }

    return 0; // Return 0 to indicate successful program termination
}

*/

#include <stdio.h> // Include the standard input-output library

// For loop example to print characters from 'a' to 'z'
int main() {

    // Declare and initialize a character variable ch to 'a'
    for (char ch = 'a'; ch <= 'z'; ch++) {
        // Print the current character followed by a tab and two spaces
        printf("%c\t\t", ch);
    }

    return 0; // Return 0 to indicate successful program termination
}


// int i, j;
// for(i = 0, j = 0; i < 7, j < 9; i++, j++)
// {
//     printf("%d %d\n", i, j);
// }



/* in 'for loop' output consider only last condition 
i.e. here 'j' codition consider as last condition */
// i++ = post increment
// ++i = pre increment
// i-- = post decrement
// --i = pre decrement