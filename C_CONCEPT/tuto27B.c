#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 34, 45};  // Declare and initialize an integer array 'arr'
    
    // Print statements to demonstrate array indexing and pointer arithmetic
    printf("Value at position 6 of the array is %d \n", arr[5]);  // Print the value at index 5 (6th position) of the array 'arr'
    printf("The address of the first element of the array is %d \n", &arr[0]);  // Print the address of the first element of 'arr'
    printf("The address of the first element of the array is %d \n", arr);  // Print the address of the first element using array name 'arr'
    printf("The address of the second element of the array is %d \n", &arr[1]);  // Print the address of the second element of 'arr'
    printf("The address of the second element of the array is %d \n", arr + 1);  // Print the address of the second element using pointer arithmetic

    printf("The value at the address of the first element of the array is %d \n", *(&arr[0]));  // Print the value at the address of the first element of 'arr'
    printf("The value at the address of the first element of the array is %d \n", *(arr));  // Print the value at the address of the first element using array name 'arr'
    printf("The value at the address of the second element of the array is %d \n", *(&arr[1]));  // Print the value at the address of the second element of 'arr'
    printf("The value at the address of the second element of the array is %d \n", *(arr + 1));  // Print the value at the address of the second element using pointer arithmetic

    return 0;
}


// arr + i = &arr[i] VERY VERY IMPORTANT
// *(&variable) = value of variable