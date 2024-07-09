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
        for (int j = rows; j >= i; j--) // Loop through each column from rows down to i
        {
            printf("*");             // Print a star for each column
        }
        printf("\n");                // Move to the next line after each row
    }
}

int main() {
    int rows, haha;

    printf("Enter 0 for star pattern and 1 for reversed star pattern \n");
    scanf("%d", &haha);             // Read user's choice (0 or 1)
    printf("How many rows do you want? \n");
    scanf("%d", &rows);             // Read number of rows from user input

    switch (haha)
    {
    case 0:
        starpattern(rows);          // Call the function to print triangular star pattern
        break;

    case 1:
        reverse_starpattern(rows);  // Call the function to print reverse triangular star pattern
        break;

    default:
        printf("You have entered an invalid choice.");  // Handle invalid input
        break;
    }

    return 0;                    
}
