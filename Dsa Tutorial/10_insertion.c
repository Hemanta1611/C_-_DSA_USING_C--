#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TRAVERSAL
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

// INSERTION AT ANY INDEX
int indexinsertion(int arr[], int size, int capacity, int element, int index){

    if(size >= capacity){
        return -1;// return -1 means do not execute or error
    }
    for (int i = size -1; i >= index; i--)
    {
        arr[i+1] = arr[i];
        // arr[i+a] = new array, arr[i] = old array
    }
    arr[index] = element;

    return 1;// return 1 means success
}
    
int main(){
    
    int arr[100] = {0,1,2,3,4,5,6,7,8};
    int size = 9, element = 9, index = 12;
    
    display(arr,size);
    indexinsertion(arr,size,100,element,index);
    size = size + 4;
    display(arr,size);    
    
    return 0;
}