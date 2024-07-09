#include <stdio.h>
// ARRAYS
int main() {
    int marks[4];  // Declare an integer array 'marks' of size 4 to store student marks

    // Commented code: Initializing array elements and printing each element individually
    /*
    marks[0] = 34;
    printf("marks of student 1 is %d \n", marks[0]);
    marks[1] = 45;
    printf("marks of student 2 is %d\n", marks[1]);
    marks[2] = 56;
    printf("marks of student 3 is %d\n", marks[2]);
    marks[3] = 67;
    printf("marks of student 4 is %d\n", marks[3]);
    */

    // Loop to input values into the array using scanf
    for (int i = 0; i < 4; i++) {
        printf("Enter the value of %d element of the array: \n", i);
        scanf("%d", &marks[i]);  // Read and store each element of the array
    }

    // Loop to print each element of the array
    for (int i = 0; i < 4; i++) {
        printf("The value of %d element of the array is %d \n", i, marks[i]);
    }

    return 0;
}
