#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief Simple calculator program using command-line arguments.
 * 
 * This program takes three command-line arguments:
 *  - The first argument (argv[1]) is the first number (integer).
 *  - The second argument (argv[2]) is the operation ('+', '-', 'multiply', '/').
 *  - The third argument (argv[3]) is the second number (integer).
 * 
 * It performs the specified arithmetic operation and prints the result.
 * 
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 4) {
        printf("Usage: %s <number1> <operation> <number2>\n", argv[0]);
        return 1; // Exit with error code 1
    }

    // Variables to store command-line arguments
    char *operation = argv[2];
    int n1 = atoi(argv[1]); // Convert first argument to integer
    int n2 = atoi(argv[3]); // Convert third argument to integer

    // Perform arithmetic operations based on the specified operation
    if (strcmp(operation, "+") == 0) {
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
    }
    else if (strcmp(operation, "-") == 0) {
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
    }
    else if (strcmp(operation, "multiply") == 0) {
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
    }
    else if (strcmp(operation, "/") == 0) {
        if (n2 != 0) {
            printf("%d / %d = %d\n", n1, n2, n1 / n2);
        } else {
            printf("Error: Division by zero\n");
        }
    }
    else {
        printf("Error: Invalid operation '%s'\n", operation);
    }

    return 0;
}
