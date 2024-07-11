#include <stdio.h>
#include <string.h>

/**
 * @brief Checks if a given number is a palindrome.
 * 
 * A palindrome is a number that reads the same forward and backward.
 * This function reverses the given number and compares it with the original number.
 * 
 * @param num The number to check.
 * @return int Returns 1 if the number is a palindrome, otherwise returns 0.
 */
int checkPalindrome(int num) {
    int reminder, reversed = 0;
    int temp = num;  // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        reminder = num % 10;  // Get the last digit
        reversed = reversed * 10 + reminder;  // Build the reversed number
        num = num / 10;  // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    if (reversed == temp) {
        return 1;
    } else {
        return 0;
    }
}

/**
 * @brief Main function to get user input and check if the input number is a palindrome.
 * 
 * Prompts the user to enter a number, then checks if that number is a palindrome
 * using the checkPalindrome function.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int n;
    printf("Enter a number to check if it is a palindrome or not: \n");
    scanf("%d", &n);

    // Check if the number is a palindrome and print the result
    if (checkPalindrome(n) == 1) {
        printf("%d is a palindrome number.\n", n);
    } else {
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}
