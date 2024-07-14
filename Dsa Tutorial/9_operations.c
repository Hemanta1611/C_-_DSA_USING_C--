#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to traverse and print the elements of the array
void traversal(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Element at position %d (index %d) is: %d\n", i + 1, i, arr[i]);
    }
}

// Function to insert an element into the array
// Parameters:
// arr[]: The array
// size: The current size of the array
// capacity: The maximum capacity of the array
// element: The element to be inserted
// index: The position where the element should be inserted
// Returns: 1 if insertion is successful, -1 if insertion fails due to capacity limit
int insertion(int arr[], int size, int capacity, int element, int index){
    if(size >= capacity){
        return -1; // Insertion not possible if the array is full
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // Shifting elements to the right to make space for the new element
    }
    arr[index] = element; // Inserting the new element at the specified index
    return 1;
}

// Function to delete an element from the array
// Parameters:
// arr[]: The array
// size: The current size of the array
// index: The position of the element to be deleted
// Returns: 0 after deletion
int deletion(int arr[], int size, int index){
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shifting elements to the left to fill the gap left by the deleted element
    }
    return 0;
}

// Function to perform linear search on the array
// Parameters:
// arr[]: The array
// size: The current size of the array
// element: The element to be searched for
// Returns: The index of the element if found, otherwise -1
int linear_search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

// Function to perform binary search on the array (assuming the array is sorted)
// Parameters:
// arr[]: The array
// size: The current size of the array
// element: The element to be searched for
// Returns: The index of the element if found, otherwise -1
int binary_search(int arr[], int size, int element){
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == element){
            return mid; // Element found at index mid
        }
        else if(arr[mid] > element){
            high = mid - 1; // Search in the left half
        }
        else{
            low = mid + 1; // Search in the right half
        }
    }
    return -1; // Element not found
}

int main(){
    int arr[100] = {7, 8, 9, 10, 11}; // Initial array with some elements
    int size = 5; // Current size of the array
    int index = 4; // Index at which an element will be deleted or inserted
    int element = 11; // Element to be inserted
    int capacity = 100; // Maximum capacity of the array

    // Display the array before deletion
    printf("Array before deletion:\n");
    traversal(arr, size);

    // Deleting an element
    deletion(arr, size, index);
    size = size - 1;

    // Display the array after deletion
    printf("\nArray after deletion:\n");
    traversal(arr, size);

    // Inserting an element
    insertion(arr, size, capacity, element, index);
    size += 1;

    // Display the array after insertion
    printf("\nArray after insertion:\n");
    traversal(arr, size);

    return 0;
}
