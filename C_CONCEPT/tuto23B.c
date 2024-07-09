#include <stdio.h>

int main() {
    int marks[4] = {34, 45, 56, 67};  // Declare and initialize an integer array 'marks' of size 4

    // Loop to iterate through each element of the array and print its value
    for (int i = 0; i < 4; i++) {
        printf("The value of element %d of the array is %d \n", i + 1, marks[i]);
    }

    return 0;
}
