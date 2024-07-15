#include <stdio.h>

// Function to traverse and display the elements of the array
// Parameters:
// arr[]: The array to be displayed
// n: The current size of the array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Newline for better readability
}

// Function to delete an element at a specific index in the array
// Parameters:
// arr[]: The array from which the element will be deleted
// size: The current size of the array
// index: The position of the element to be deleted
void indDeletion(int arr[], int size, int index) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shifting elements to the left to fill the gap
        // arr[i] is the new array, arr[i + 1] is the old array
    }
    // Note: The last element remains unchanged, but it is now outside the valid range
    // of the array elements after reducing the size.
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array with some elements
    int size = 5; // Current size of the array
    int index = 2; // Index of the element to be deleted
    
    // Display the array before deletion
    printf("Array before deletion:\n");
    display(arr, size);
    
    // Delete the element at the specified index
    indDeletion(arr, size, index);
    size -= 1; // Update the size after deletion
    
    // Display the array after deletion
    printf("Array after deletion:\n");
    display(arr, size);
    
    return 0;
}
