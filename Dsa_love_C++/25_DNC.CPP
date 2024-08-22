#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int s, int e){
    
}

void mergeSort(int arr[], int start, int end){
    // base case:
    if(start > end ) return ; // 0 size array
    if(start == end) return ; // single size array
    int mid = (start + end ) / 2;
    mergeSort(arr, start, mid); // left half
    mergeSort(arr, mid+1, end); // rignt half

    merge(arr, start, end); // merge two sorted array
}

int main(){
    
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);
    
    return 0;
}