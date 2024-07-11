#include <stdio.h>

/**
 * @brief Main function demonstrating the use of command-line arguments in C.
 * 
 * This function prints the number of command-line arguments and each argument
 * passed to the program. The command-line arguments are passed to the program 
 * when it is executed.
 * 
 * @param argc Argument count: the number of command-line arguments.
 * @param argv Argument vector: an array of strings representing the command-line arguments.
 * @return int Returns 0 upon successful execution.
 */
int main(int argc, char const *argv[]) {
    // argc: Argument count (number of command-line arguments)
    // argv: Argument vector (array of strings representing the command-line arguments)
    
    // Print the number of command-line arguments
    printf("The value of argc is %d\n", argc);
    
    // Loop through each command-line argument and print its index and value
    for(int i = 0; i < argc; i++) {
        printf("The argument at index number %d has the value: %s\n", i, argv[i]);
    }

    return 0;
}
