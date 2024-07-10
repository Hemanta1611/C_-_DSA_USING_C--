// REVERSE OF AN ARRAY
#include <stdio.h>

//1,2,3,4,56
//56,2,3,4,1
//56,4,3,2,1 like this

// Function to reverse an array
// This function takes an array of integers and reverses its elements.
// It assumes the array has 5 elements.
void arrayrev(int arr[]) {
    int temp; // Temporary variable to hold values during swap
    for (int i = 0; i < 5 / 2; i++) {
        // Swap item i with item (4 - i)
        // 5 / 2 because swapping all elements would revert to the original array
        temp = arr[i]; 
        arr[i] = arr[4 - i];
        arr[4 - i] = temp; 
    }
}

// Function to print an array
// This function takes an array of integers and prints its elements.
// It assumes the array has 5 elements.
void arrayprint(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}

    
int main(){
    
    // int arr[] = {1,2,3,4,56};
    // printf("Before reversing the array\n");
    // for(int i = 0; i < 5; i++){
    //     printf("The value of element %d is %d\n", i , arr[i]);
    // }
    // arrayrev(arr);
    // printf("\nAfter reversing the array\n");
    // for(int i = 0; i < 5; i++){
    //     printf("The value of element %d is %d\n", i , arr[i]);
    // }

    // OR

    int arr[] = {1,2,3,4,56};
    printf("Before reversing the array\n");
    arrayprint(arr);
    arrayrev(arr);

    printf("\nAfter reversing the array\n");
    arrayprint(arr);

    return 0;
}