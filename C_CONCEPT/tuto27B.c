#include <stdio.h>
    
int main(){

int arr[] = {1,2,3,4,5,34,45};
printf("Value at position 6 of the array is %d \n", arr[5]);
printf("The adress of first element of the array is %d \n", &arr[0]);
printf("The adress of first element of the array is %d \n", arr);
printf("The adress of second element of the array is %d \n", &arr[1]);
printf("The adress of second element of the array is %d \n", arr + 1);

printf("The value at adress of first element of the array is %d \n", *(&arr[0]));
printf("The value at adress of first element of the array is %d \n", *(arr));
printf("The value at adress of second element of the array is %d \n", *(&arr[1]));
printf("The value at adress of second element of the array is %d \n", *(arr + 1));

    return 0;
}

// arr + i = &arr[i] VERY VERY IMPORTANT
// *(&variable) = value of variable