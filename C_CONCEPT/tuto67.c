#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief Main function demonstrating file I/O operations in C.
 * 
 * This function shows how to read and write to files using various modes
 * in C. It includes examples of reading characters and strings from a file,
 * and writing characters and strings to a file.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {

    // 6 MODES: r, w, a, r+, w+, a+
    // r  = read, file must exist
    // w  = write, creates a new file if not exist, and erases existing content if file exists
    // a  = append, creates a new file if not exist, and appends to existing content if file exists
    // r+ = read + write, file must exist, does not erase existing content
    // w+ = read + write, creates a new file if not exist, erases existing content if file exists
    // a+ = read + write + append, creates a new file if not exist, appends to existing content if file exists

    // fgets reads a null-terminated string from a file in C.
    // Syntax: fgets(str, n, filePtr)
    // str: array where string will be stored
    // n: maximum number of characters to read
    // filePtr: pointer to the file

    FILE *ptr = NULL;

    // Example of reading characters from a file using fgetc
    // ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    // Example of reading a string from a file using fgets
    // char str[34];
    // fgets(str, 3, ptr); // Reads up to 2 characters + null terminator
    // printf("The string is: %s\n", str);

    // Example of writing a character to a file using fputc
    // ptr = fopen("myfile.txt", "w");
    // fputc('o', ptr);
    // fclose(ptr);

    // Example of writing a string to a file using fputs
    // ptr = fopen("myfile.txt", "w");
    // fputs("hello ramlal", ptr);
    // fclose(ptr);

    // Example of appending a string to a file using fputs
    ptr = fopen("myfile.txt", "a"); // Opens file for appending
    if (ptr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    fputs("hello ramlal", ptr);
    fclose(ptr); // Close the file to free resources

    return 0;
}
