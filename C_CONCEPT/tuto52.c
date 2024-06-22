// VOID POINTERS also known as general purpose pointer
#include <stdio.h>

int main(){
    
    int a = 345;
    float b = 9.4;
    void *ptr;
    ptr = &a;
// printf("The value of a is %d\n", *ptr)); wrong because we dont know which datatype it is
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of a is %f\n", *((float *)ptr));
    
    
    return 0;
}