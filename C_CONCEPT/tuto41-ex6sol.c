// HTML PARSER 
#include <stdio.h>
#include <string.h>

// Function to parse HTML-like strings and remove tags
void parser(char *string) {
    int in = 0; // Variable to track whether we are inside a tag
    int index = 0;
    
    // Iterate through each character in the string
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '<') {
            in = 1; // Entering a tag
            continue;
        }
        else if (string[i] == '>') {
            in = 0; // Exiting a tag
            continue;
        }
        
        // If not inside a tag, copy the character to the result
        if (in == 0) {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0'; // Null-terminate the result string

    // Remove leading spaces
    while (string[0] == ' ') {
        for (int i = 0; i < strlen(string); i++) {
            string[i] = string[i + 1]; // Shift the string to the left
        }
    }

    // Remove trailing spaces
    while (string[strlen(string) - 1] == ' ') {
        string[strlen(string) - 1] = '\0'; // Null-terminate one character earlier
    }
}

int main() {
    char string[] = "<hjhvkah>      this is a heading        <anything>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);

    return 0;
}
