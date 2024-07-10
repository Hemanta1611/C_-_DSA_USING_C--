// STRINGS

#include <stdio.h>

// Function to print a string character by character
void printstr(char str[]) {
    int i = 0;
    while (str[i] != '\0') { // Loop until the null terminator is encountered
        printf("%c", str[i]); // Print the current character
        i++; // Move to the next character
    }
}

int main() {
    // Examples of different ways to initialize a string
    // char str[] = {'h', 'e', 'm', 'a', 'n', 't', 'a', '\0'}; // Character array with null terminator
    // char srr[8] = "hemanta"; // String literal (size of array is 8 to include null terminator)
    
    char str[34]; // Declare a character array to hold the input string
    gets(str); // Get a string input from the user
    printstr(str); // Print the string using the printstr function
    
    return 0;
}

/*
#include <stdio.h>
    
int main(){
    
    char name[123] = "Hemanta kumar Bhoi";
    printf("%s", name);
    char details[1234];
    scanf("%[^\n]s", details);
    printf("details are = %s", details);
    
    return 0;
}*/
