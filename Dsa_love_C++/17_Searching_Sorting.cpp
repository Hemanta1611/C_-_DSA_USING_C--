#include <iostream>
#include <vector>

using namespace std;

// Function to search for a target in a nearly sorted array
int searchNearlySorted(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate the middle index
        if (arr[mid] == target) {
            return mid; // Target found at mid
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == target) {
            return mid - 1; // Target found at mid - 1
        }
        else if (mid + 1 < size && arr[mid + 1] == target) {
            return mid + 1; // Target found at mid + 1
        }
        else if (target > arr[mid]) {
            s = mid + 2; // Move the start to mid + 2
        }
        else {
            e = mid - 2; // Move the end to mid - 2
        }
    }
    return -1; // Target not found
}

// Function to find the index of the element that occurs odd number of times in a sorted array
int findOddOccurringElement(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate the middle index
        if (s == e) {
            return s; // Single element found
        }
        if (mid % 2 == 0) { // Check if mid is even
            if (mid + 1 < size && arr[mid] == arr[mid + 1]) {
                s = mid + 2; // Move the start to mid + 2
            } else {
                e = mid; // Move the end to mid
            }
        } else { // Mid is odd
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1]) {
                s = mid + 1; // Move the start to mid + 1
            } else {
                e = mid - 1; // Move the end to mid - 1
            }
        }
    }
    return -1; // No such element found
}

int main() {
    // Test the searchNearlySorted function
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 20;

    int index = searchNearlySorted(arr, n, target);
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << index << endl;
    }

    // Test the findOddOccurringElement function
    int arr1[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 8, 8};
    int size1 = 11;
    int index1 = findOddOccurringElement(arr1, size1);
    if (index1 == -1) {
        cout << "There is no such element." << endl;
    } else {
        cout << "Element present at index: " << index1 << endl;
    }

    return 0;
}
