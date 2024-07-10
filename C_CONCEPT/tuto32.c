// PASSING ARRAYS AS FUNCTION ARGUMENTS

#include <stdio.h>

// Function to modify and print elements of a 1D array
int func1(int array[]) {
    array[0] = 1234; // Change the first element of the array to 1234
    for (int i = 0; i < 4; i++) {
        printf("The value at %d is %d \n", i, array[i]); // Print the value at each index
    }
    return 0;
}

// Function to print elements of a 1D array using pointer arithmetic
int func2(int *ptr) {
    for (int i = 0; i < 4; i++) {
        printf("The value at %d is %d \n", i, *(ptr + i)); // Print the value at each index using pointer arithmetic
        // OR printf("The value at %d is %d \n", i, ptr[i]);
    }
    *(ptr + 2) = 6543; // Change the third element of the array to 6543
    return 0;
}

// Function to print elements of a 2D array
void func3(int arr[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("The value at %d, %d index is %d \n", i, j, arr[i][j]); // Print the value at each index
        }
    }
}

int main() {
    // Uncomment to test func1 and func2
    // int arr[] = {23, 13, 3, 4};
    // printf("The value of index 0 is %d \n", arr[0]);
    // func1(arr); // Call func1 with a 1D array
    // printf("The value of index 0 is %d \n", arr[0]);
    
    // func2(arr); // Call func2 with a 1D array
    // func2(arr); // Call func2 again to see changes

    int arr[][2] = {{10, 20}, {30, 40}}; // Initialize a 2D array
    func3(arr); // Call func3 with a 2D array

    return 0;
}
