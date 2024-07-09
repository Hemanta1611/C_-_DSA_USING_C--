#include <stdio.h>

// Function to print a triangular star pattern
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)   // Loop through each row from 0 to rows-1
    {
        for (int j = 0; j <= i; j++) // Loop through each column from 0 to i
        {
            printf("*");             // Print a star for each column
        }
        printf("\n");                // Move to the next line after each row
    }
}

// Function to print a reverse triangular star pattern
void reverse_starpattern(int rows)
{
    for (int i = 0; i < rows; i++)   // Loop through each row from 0 to rows-1
    {
        for (int j = 0; j < rows - i; j++) // Loop through each column from 0 to rows-i
        {
            printf("*");             // Print a star for each column
        }
        printf("\n");                // Move to the next line after each row
    }
}

int main() {
    int rows;
    printf("How many rows do you want? \n");
    scanf("%d", &rows);             // Read number of rows from user input

    starpattern(rows);              // Call the function to print triangular star pattern
    reverse_starpattern(rows);      // Call the function to print reverse triangular star pattern
    
    return 0;                       
}
