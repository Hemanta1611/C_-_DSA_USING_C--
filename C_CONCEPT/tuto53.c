// NULL POINTER
#include <stdio.h>
    
int main(){
    
    int a = 34;
    // int *ptr = &a; OR 
    int *ptr;
    ptr = &a;
    printf("The address of a is %d \n", ptr);
    printf("The value of a is %d \n", *ptr);
    ptr = NULL;
    // we use NULL pointer for not dereferencing further
    printf("The address of a is %d \n", ptr);// address of null pointer is zero 
    printf("The value of a is %d \n", *ptr);// THIS WILL NOT RUN BECAUSE NULL POINTER CAN'T BE dereference

    return 0;
}