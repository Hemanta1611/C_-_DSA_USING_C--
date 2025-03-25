#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Heap{
public:
    int *arr, size, capacity;

    Heap(int capacity){
        this->arr = new int[capacity + 1]; // we are using 1 based indexing
        this->capacity = capacity;
        // size = current number of elements in heap
        this->size = 0;
    }

    void insert(int val){
        if(size == capacity){
            cout<<"Heap overflow"<<endl;
        }
        size++;
        int index = size;
        arr[index] = val;

        // take the val to its correct position, until root
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }

    void printHeap(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int deleteHeapRoot(){
        int answer = arr[1];
        // replacement
        arr[1] = arr[size];
        // delete last element
        size--;

        int index = 1;
        while(index < size){
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;

            int largestIndex = index;
            if(leftIndex <= size && arr[largestIndex] < arr[leftIndex]){
                largestIndex = leftIndex;
            }
            if(rightIndex <= size && arr[largestIndex] < arr[rightIndex]){
                largestIndex = rightIndex;
            }

            if(largestIndex == index){
                break;
            }
            else{
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return answer;
    }

    ~Heap(){
        delete[] arr;
    }
};

void heapify(int *arr, int n, int index){
    int leftIndex = 2 *index;
    int rightIndex = 2 *index + 1;
    int largestIndex = index;

    if(leftIndex <= n && arr[leftIndex] > arr[largestIndex]){
        largestIndex = leftIndex;
    }
    if(rightIndex <= n && arr[rightIndex] > arr[largestIndex]){
        largestIndex = rightIndex;
    }

    if(index != largestIndex){
        swap(arr[index], arr[largestIndex]);
        // recursion
        index = largestIndex;
        heapify(arr, n, index);
    }
}

void arrayToHeap(int *arr, int n){
    for(int i = n / 2; i > 0; i--){
        heapify(arr, n, i);
    }
}

void heapSort(int *arr, int n){
    while(n != 1){
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main(){
    
    // Heap h(20);
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout<<"printing the content of heap: "<<endl;
    // h.printHeap();

    // cout<<"deleted value: "<<h.deleteHeapRoot()<<endl;

    // cout<<"printing the content of heap: "<<endl;
    // h.printHeap();

    int arr[] = {0, 5, 10, 15, 20, 15, 12};
    arrayToHeap(arr, 6);
    heapSort(arr, 6);

    cout << "Sorted array: ";
    for(int i = 1; i <= 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
        
    return 0;
}