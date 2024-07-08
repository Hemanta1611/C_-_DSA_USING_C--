/*#include <stdio.h>

int main(){

int num;

printf("Enter the number you want multiplication table of:\n");
scanf("%d", &num);

printf("Multiplication table of %d is as follows:\n", num);

printf("%d X 1 = %d\n", num, num*1);
printf("%d X 2 = %d\n", num, num*2);
printf("%d X 3 = %d\n", num, num*3);
printf("%d X 4 = %d\n", num, num*4);
printf("%d X 5 = %d\n", num, num*5);
printf("%d X 6 = %d\n", num, num*6);
printf("%d X 7 = %d\n", num, num*7);
printf("%d X 8 = %d\n", num, num*8);
printf("%d X 9 = %d\n", num, num*9);
printf("%d X 10 = %d\n", num, num*10);

    return 0;
}*/
#include <stdio.h> // Include the standard input-output library

int main() {

    int a; // Declare an integer variable a

    // Prompt the user to enter a number for which the multiplication table will be generated
    printf("Multiplication table of:\n");
    
    // Read the user input and store it in variable a
    scanf("%d", &a);

    // Print the header for the multiplication table
    printf("Multiplication table of %d:\n", a);

    // Print the multiplication table from 1 to 10
    printf("%d X 1 = %d\n", a, a * 1);
    printf("%d X 2 = %d\n", a, a * 2);
    printf("%d X 3 = %d\n", a, a * 3);
    printf("%d X 4 = %d\n", a, a * 4);
    printf("%d X 5 = %d\n", a, a * 5);
    printf("%d X 6 = %d\n", a, a * 6);
    printf("%d X 7 = %d\n", a, a * 7);
    printf("%d X 8 = %d\n", a, a * 8);
    printf("%d X 9 = %d\n", a, a * 9);
    printf("%d X 10 = %d\n", a, a * 10);

    return 0; // Return 0 to indicate successful program termination
}
