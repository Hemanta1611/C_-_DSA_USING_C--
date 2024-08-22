#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int leftLen = mid - s + 1;  // Length of the left subarray
    int rightLen = e - mid;     // Length of the right subarray

    // Dynamically allocate memory for left and right subarrays
    int *left = new int[leftLen];
    int *right = new int[rightLen];

    // Copy data into the left subarray
    int k = s;
    for (int i = 0; i < leftLen; i++) {
        left[i] = arr[k];
        k++;
    }

    // Copy data into the right subarray
    k = mid + 1;
    for (int i = 0; i < rightLen; i++) {
        right[i] = arr[k];
        k++;
    }

    // Merge the two subarrays back into the main array
    int leftIndex = 0, rightIndex = 0;
    int mainIndex = s;  // Start merging from index 's'

    // Merge while both subarrays have elements
    while (leftIndex < leftLen && rightIndex < rightLen) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        } else {
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }

    // pushing left array element to the main array:
    while(leftIndex < leftLen){
        arr[mainIndex] = left[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    while (rightIndex < rightLen)
    {
        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }
    
    // deallocating memmory
    delete[] left;
    delete[] right;
}

// Function to perform merge sort on an array
void mergeSort(int arr[], int start, int end) {
    // Base cases:
    if (start >= end) return;  // Single element or empty array

    // Divide the array into two halves
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);     // Recursively sort the left half
    mergeSort(arr, mid + 1, end);   // Recursively sort the right half

    // Merge the two sorted halves
    merge(arr, start, end);
}

int main() {
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int start = 0;
    int end = size - 1;

    // Call mergeSort to sort the array
    mergeSort(arr, start, end);

    // Print the sorted array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
