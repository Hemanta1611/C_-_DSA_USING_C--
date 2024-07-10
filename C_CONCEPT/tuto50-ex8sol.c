#include <stdio.h>
#include <stdlib.h>

/**
 * @brief This program manages employee IDs using dynamic memory allocation.
 *        It prompts the user for the number of characters in the ID, two additional
 *        characters, and then allows the user to enter the employee ID string.
 *        Memory allocation is used to store each employee ID temporarily.
 * 
 * @return int Returns 0 upon successful execution.
 */

int main() {
    int chars, i = 0;
    char *ptr;
    char a, b;

    // Loop to handle three employees
    while (i < 3) {
        // Prompt for number of characters in the employee ID
        printf("Employee %d: Enter the number of characters in your employee id: ", i + 1);
        scanf("%d", &chars);
        
        // Consume newline character left in the input buffer
        getchar();
        
        // Prompt for and read two additional characters
        printf("Enter the value of a: ");
        scanf(" %c", &a);  // Include space before %c to skip whitespace
        
        getchar();  // Consume newline character left in the input buffer
        
        printf("Enter the value of b: ");
        scanf(" %c", &b);  // Include space before %c to skip whitespace
        
        // Allocate memory dynamically for the employee ID string
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        
        // Check if memory allocation was successful
        if (ptr == NULL) {
            printf("Memory allocation failed. Exiting...\n");
            return 1;
        }
        
        // Prompt for and read the employee ID string
        printf("Enter your Employee id: ");
        scanf(" %s", ptr);  // Include space before %s to skip whitespace
        
        // Display the entered employee ID
        printf("Your Employee id is %s\n", ptr);
        
        // Free dynamically allocated memory
        free(ptr);
        i++;  // Move to the next employee
    }

    return 0;  // Exit successfully
}
