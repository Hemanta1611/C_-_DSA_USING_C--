#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to traverse and display the elements of the array
// Parameters:
// arr[]: The array to be displayed
// size: The current size of the array
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    printf("\n"); // Newline for better readability
}

// Function to insert an element at a specific index in the array
// Parameters:
// arr[]: The array where the element will be inserted
// size: The current size of the array
// capacity: The maximum capacity of the array
// element: The element to be inserted
// index: The position where the element should be inserted
// Returns: 1 if insertion is successful, -1 if insertion fails due to capacity limit
int indexinsertion(int arr[], int size, int capacity, int element, int index){
    if(size >= capacity){
        return -1; // Insertion not possible if the array is full
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // Shifting elements to the right to make space for the new element
        // arr[i + 1] is the new array, arr[i] is the old array
    }
    arr[index] = element; // Inserting the new element at the specified index

    return 1; // Insertion successful
}

int main(){
    int arr[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // Initial array with some elements
    int size = 9; // Current size of the array
    int element = 9; // Element to be inserted
    int index = 4; // Index at which the element will be inserted
    
    // Display the array before insertion
    printf("Array before insertion:\n");
    display(arr, size);
    
    // Insert the element at the specified index
    if(indexinsertion(arr, size, 100, element, index) == 1){
        size += 1; // Update the size after successful insertion
    } else {
        printf("Insertion failed due to capacity limit\n");
    }
    
    // Display the array after insertion
    printf("Array after insertion:\n");
    display(arr, size);    
    
    return 0;
}
