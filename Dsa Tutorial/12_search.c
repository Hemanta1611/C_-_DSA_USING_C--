#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to perform linear search on an array
// Parameters:
// arr[]: The array to search within
// size: The size of the array
// element: The element to search for
// Returns: The index of the element if found, otherwise -1
int linear_search(int arr[], int size, int element) {
    // FOR BOTH SORTED AND UNSORTED ARRAY
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found in the array
}

// Function to perform binary search on a sorted array
// Parameters:
// arr[]: The sorted array to search within
// size: The size of the array
// element: The element to search for
// Returns: The index of the element if found, otherwise -1
int binary_search(int arr[], int size, int element) {
    // FOR SORTED ARRAY 
    int low = 0, high = size - 1, mid_term;

    // Loop to perform the binary search
    while (low <= high) {
        mid_term = (low + high) / 2; // Calculate the mid-term index
        if (arr[mid_term] == element) {
            return mid_term; // Return the index if the element is found
        } else if (arr[mid_term] > element) {
            high = mid_term - 1; // Adjust the high index for the left half
        } else {
            low = mid_term + 1; // Adjust the low index for the right half
        }
    }
    return -1; // Return -1 if the element is not found in the array
}

int main() {
    // Initialize the array and the element to search for
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int element = 7;

    // Perform linear search and display the result
    int indexL = linear_search(arr, size, element);
    printf("The element %d is found at index no %d using linear search.\n", element, indexL);

    // Perform binary search and display the result
    int indexB = binary_search(arr, size, element);
    printf("The element %d is found at index no %d using binary search.\n", element, indexB);

    return 0;
}
