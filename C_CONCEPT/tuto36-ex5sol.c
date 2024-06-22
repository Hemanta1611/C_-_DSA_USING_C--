// REVERSE OF AN ARRAY
#include <stdio.h>

//1,2,3,4,56
//56,2,3,4,1
//56,4,3,2,1 like this

void arrayrev(int arr[]){
    int temp;
    for(int i = 0; i < 5/2 ; i++){
// 5 / 2 becoz if we swap all than it will interchange to original
// so we have to inter change the half than it will automatically reversed
// Swap item i with item (4-i)
        temp = arr[i]; 
        arr[i] = arr[4-i];
        arr[4-i] = temp; 
    }
}

void arrayprint(int arr[]){
    for(int i = 0; i < 5; i++){
        printf("The value of element %d is %d\n", i , arr[i]);
    }
}
    
int main(){
    
    // int arr[] = {1,2,3,4,56};
    // printf("Before reversing the array\n");
    // for(int i = 0; i < 5; i++){
    //     printf("The value of element %d is %d\n", i , arr[i]);
    // }
    // arrayrev(arr);
    // printf("\nAfter reversing the array\n");
    // for(int i = 0; i < 5; i++){
    //     printf("The value of element %d is %d\n", i , arr[i]);
    // }

    // OR

    int arr[] = {1,2,3,4,56};
    printf("Before reversing the array\n");
    arrayprint(arr);
    arrayrev(arr);

    printf("\nAfter reversing the array\n");
    arrayprint(arr);

    return 0;
}