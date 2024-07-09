#include <stdio.h>  // Include the standard input-output library for using printf

int main() {
    int marks[2][4] = {{12, 23, 78}, {34, 45, 56, 67}};  // Declare and initialize a 2D integer array 'marks' with 2 rows and 4 columns

    // Nested loops to iterate through each element of the 2D array and print its value
    for (int i = 0; i < 2; i++) {  // Outer loop for rows
        for (int j = 0; j < 4; j++) {  // Inner loop for columns
            printf("The value of element %d, %d of the array is %d \n", i + 1, j + 1, marks[i][j]);
            // printf("%d", marks[i][j]);  // Commented-out code to print individual elements
        }
        // printf("\n");  // Commented-out code to print a newline after each row
    }

    
    return 0;  // Return 0 to indicate successful execution of the program
}
