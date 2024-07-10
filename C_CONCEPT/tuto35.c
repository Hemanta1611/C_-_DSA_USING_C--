// STRING FUNCTIONS AND STRING.H LIBRARY

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hii"; // Initialize string s with "hii"
    // char s[] = "108396"; // char string can also store numbers
    char z[] = "hello"; // Initialize string z with "hello"
    char a[34]; // Declare a character array a of size 34

    strcat(s, z);
    // This function concatenates string z to the end of string s
    printf("%s\n", s);
    // Or
    // puts(strcat(s, z));

    printf("The length of s is %d\n", (int)strlen(s)); // Find and print the length of s
    printf("The length of z is %d\n", (int)strlen(z)); // Find and print the length of z
    // strlen function is used to find the length of a string

    printf("The reversed of string s is %s\n", strrev(s)); // Reverse and print string s
    printf("The reversed of string z is %s\n", strrev(z)); // Reverse and print string z
    // Or
    // printf("the length of s is: ");
    // puts(strrev(s));
    // strrev function is used to reverse the string

    strcpy(a, s); // Copy string s to string a
    // strcpy function is used to copy a string into another string
    puts(a); // Print string a
    printf("\n");

    printf("The comparison of two strings s and z is %d", strcmp(s, z));
    // Compare strings s and z
    // Returns 0 if they are equal
    // Returns a positive value if the first differing character has a greater value in s
    // Returns a negative value if the first differing character has a greater value in z

    return 0;
}


/*
            IMPORTANT NOTE
    1. scanf() can't input multi-word strings with spaces
    2. gets() and puts() is used to print multi-word string with spaces only 
*/

