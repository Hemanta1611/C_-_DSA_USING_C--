#include <stdio.h>

int main() {
    int n, c;  // Declare variables n (number of terms) and c (temporary variable)
    int a = 0, b = 1;  // Initialize variables a (first Fibonacci number) and b (second Fibonacci number)

    printf("Enter number of terms: \n");
    scanf("%d", &n);  // Input the number of terms for the Fibonacci series

    for (int i = 1; i <= n; i++) {
        printf("%d \t", a);  // Print the current Fibonacci number 'a'

        c = a + b;  // Calculate the next Fibonacci number
        a = b;      // Update 'a' to the next Fibonacci number
        b = c;      // Update 'b' to the next Fibonacci number
    }

    return 0;
}
