#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int *i2;

    // Loop to demonstrate continuous memory allocation and freeing
    while (i < 4555) {
        printf("Welcome to code with Harry");

        // Allocate memory dynamically
        i2 = malloc(34444 * sizeof(int));

        // Pause after every 100 iterations for user input
        if (i % 100 == 0) {
            getchar(); // Wait for user input
        }

        // Free the allocated memory to prevent memory leaks
        free(i2);

        i++; // Increment loop counter
    }

    return 0;
}
