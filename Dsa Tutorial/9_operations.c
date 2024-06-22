// Operations on Array:-

// 1. traversal
// 2. insertion
// 3. deletion
// 4. searching
// 5. sorting

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
void traversal(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("element at position %d (index %d) is: %d\n", i+1, i, arr[i]);
    }
}   
int insertion(int arr[], int size, int capacity, int element, int index){
    if(size >= capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int deletion(int arr[], int size, int index){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    return 0;
}
int linear_search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[], int size, int element){
    int low, mid, high;
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] > element){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    
    int arr[100] = {7, 8, 9, 10, 11};
    int size = 5;
    int index = 4;
    int element = 11;
    int capacity = 100;
    traversal(arr, size);
    deletion(arr, size, index);
    size = size-1;
    traversal(arr, size);
    insertion(arr, size, capacity, element, index);
    size += 1;
    traversal(arr, size);

    
    return 0;
}