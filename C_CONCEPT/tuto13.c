#include <stdio.h> // Include the standard input-output library

// Do-while loop example
int main() {

    int a, i = 0; // Declare integer variables a and i, initializing i to 0

    // Prompt the user to enter a number
    printf("Enter a number\n");
    // Read the user input and store it in the variable a
    scanf("%d", &a);

    // Do-while loop
    do {
        // Print the current value of i + 1
        printf("%d\n", i + 1);
        // Increment i by 1
        i++;
    } while (i < a); // Continue the loop while i is less than a

    return 0; // Return 0 to indicate successful program termination
}


/*#include <stdio.h> 
//Do-while loop
int main (){

int num, index=0;
printf("Enter a number\n");
scanf("%d", &num);

do
{
    printf("%d\n", index+1);
    index = index + 1;
} while (index < num);

return 0;
}*/