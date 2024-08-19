#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

// Function to calculate 2 raised to the power of n
int twoToThePowerN(int n) {
    // Base case: 2^0 = 1
    if(n == 0) {
        return 1;
    }
    // Recursive case: 2^n = 2 * 2^(n-1)
    int ans = 2 * twoToThePowerN(n - 1);
    return ans;
}

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if(n == 0) return 0;
    if(n == 1) return 1;
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n-1) + fibonacci(n-2);
}

// Function to print elements of an array recursively
void printArray(int arr[], int size, int index) {
    // Base case: If the index reaches the size, stop recursion
    if(index >= size) return;

    // Print the current element
    cout << arr[index] << " ";

    // Recursive call to print the next element
    printArray(arr, size, index+1);
}

// Function to find the minimum element in an array recursively
void findMini(int arr[], int size, int index, int &mini) {
    if(index >= size) return;

    // Update the minimum if current element is smaller
    mini = min(mini, arr[index]);

    // Recursive call to check the next element
    findMini(arr, size, index+1, mini);
}

// Function to double the elements of an array recursively
void doubleArray(int arr[], int index, int size) {
    if(index >= size) return;

    // Double the current element
    arr[index] = 2 * arr[index];

    // Recursive call to double the next element
    doubleArray(arr, index + 1, size);
}

// Function to print digits of a number recursively
void printDigits(int num) {
    if(num == 0) return;

    // Extract the last digit
    int remainder = num % 10;
    // Remove the last digit from the number
    num = num / 10;

    // Recursive call to print the remaining digits
    printDigits(num);

    // Print the extracted digit after recursion to print in the correct order
    cout << remainder << " ";
}

// Function to check if an array is sorted in non-decreasing order
bool isSorted(int arr[], int index, int size) {
    if(index >= size) return true;

    // Check if current element is greater than or equal to the previous one
    if(arr[index] >= arr[index-1]) {
        // Recursive call to check the rest of the array
        bool nextAns = isSorted(arr, index + 1, size);
        return nextAns;
    }
    return false;
}

// Function to perform binary search recursively
int binarySearch(int arr[], int start, int end, int target) {
    int mid = start + (end - start) / 2;

    // Base case: If the start index exceeds the end index, the target is not found
    if(start > end) return -1;

    // Check if the target is found
    if(arr[mid] == target) return mid;

    // If the target is smaller than the middle element, search the left half
    else if(arr[mid] > target) {
        int ans = binarySearch(arr, start, mid-1, target);
        return ans;
    }
    // Otherwise, search the right half
    else {
        int ans = binarySearch(arr, mid+1, end, target);
        return ans;
    }
}

int main() {
    // Demonstrating the twoToThePowerN function
    // cout << "2 To the power 10: " << twoToThePowerN(10) << endl;

    // Demonstrating the fibonacci function
    // cout << "7th term in fibonacci series: " << fibonacci(7) << endl;

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;

    // Demonstrating the printArray function
    // printArray(arr, size, index);

    // Finding the minimum value in the array
    int mini = INT_MAX;
    // findMini(arr, size, index, mini);
    // cout << "\nMinimum value of array: " << mini << endl;

    // Doubling the values in the array
    // doubleArray(arr, index, size);
    // for(int num : arr) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // Printing digits of a number
    // printDigits(1234);

    // Checking if the array is sorted
    index = 1;
    bool ans = isSorted(arr, index, size);
    cout << "array is sorted or not: " << ans << endl;

    // Performing binary search for a target value
    int target = 60;
    int location = binarySearch(arr, 0, 4, target);
    cout << "target found at index: " << location << endl;

    return 0;
}


/*
Key Points
Base Case: 
    It is essential for terminating the recursive calls and preventing infinite loops.
Recursive Case: 
    This is where the function calls itself with a modified argument, moving towards the base case.
Stack Memory: 
    Each recursive call uses stack memory. Too many recursive calls can lead to a stack overflow. 

*/