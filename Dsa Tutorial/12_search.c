#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int linear_search(int arr[], int size, int element){

    // FOR BOTH SORTED AND UNSORTED ARRAY
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
    return i;
    }
}
return -1;
// return -1 means element not found on array
}

int binary_search(int arr[], int size, int element){

    // FOR SORTED ARRAY 
    int low, high, mid_term;
    low = 0, high = size -1;

    // LOOP
    while(low <= high){
    mid_term = (low + high)/2;
    if(arr[mid_term] == element){
        return mid_term;
    }
    else if (arr[mid_term] > element)
    {
        high = mid_term - 1;
        // it can be also happen that we can find index number by just assigning value of 
        // high = midterm and low = midterm , but it will be smarter to skip midterm which 
        // is already not found on first if condition so, it will be smarter or faster to 
        // assign high = midterm - 1 and low = midterm + 1...😊 
    }
    else{
        low = mid_term + 1;
    }
}
    return -1;
// return -1 means element not found on array
}
    
int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int), element = 7;
    int indexL = linear_search(arr, size, element);
    printf("The element %d is found at index no %d.\n", element, indexL);

    int indexB = binary_search(arr, size, element);
    printf("The element %d is found at index no %d.\n", element, indexB);

    
    return 0;
}