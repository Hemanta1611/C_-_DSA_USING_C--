#include <stdio.h>

// FILE I/O Operations

/**
 * @brief Main function to demonstrate file input/output operations.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
    FILE *ptr = NULL;  // Pointer to handle file operations
    char string[84] = "This content was produced by tuto62_64.c\n";  // String to write into the file

    // Reading a file (uncomment to use)
    // ptr = fopen("myfile.txt", "r");  // Open file for reading
    // if (ptr == NULL) {
    //     printf("The file does not exist.\n");
    //     return 1;
    // }
    // fscanf(ptr, "%s", string);  // Read content from the file
    // printf("The content of this file is: %s\n", string);
    // fclose(ptr);  // Close the file after reading

    // Writing to a file by deleting old content (uncomment to use)
    // ptr = fopen("myfile.txt", "w");  // Open file for writing
    // if (ptr == NULL) {
    //     printf("The file could not be opened.\n");
    //     return 1;
    // }
    // fprintf(ptr, "%s", string);  // Write content to the file
    // fclose(ptr);  // Close the file after writing

    // Writing to a file without deleting old content (Append mode)
    ptr = fopen("myfile.txt", "a");  // Open file in append mode
    if (ptr == NULL) {
        printf("The file could not be opened.\n");
        return 1;
    }
    fprintf(ptr, "%s", string);  // Append content to the file
    fclose(ptr);  // Close the file after writing

    // Note: If the file doesn't exist, it will be created in both write ("w") and append ("a") modes.

    return 0;
}
