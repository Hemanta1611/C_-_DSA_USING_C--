#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    printf("\n");
    int age = 19;
    int * ptr = &age;
    printf("Address of age is: %d.\n", ptr);
    printf("Address of age is: %d.\n", &age);
    printf("The value of age is: %d.\n", age);
    int ** p = &ptr;
    printf("adress of pointer {ptr} is: %d.\n", p);
    printf("The value at address ptr is %d.\n", *ptr);
    printf("The address at value at address p is %d.\n", *p);
    int *** q = &p;
    printf("adress of pointer {p} is: %d.\n", q);
    printf("The value at address q is %d.\n", *(*(*q)));
    printf("Value = %d.\n", ***q);
    // q = address of p -> *q = dereference address of p = p -> **q = dereference of *q( = p) = dereference address ptr = ptr -> ***q = dereference of **q( = ptr) = value at address ptr = value of age
    printf("Value = %d.\n", **p);
    printf("Value = %d.\n", *ptr);

    printf("\n");
    printf("hii : %p.\n", &age);
    printf("hii : %p.\n", ptr);
    printf("hii : %p.\n", &ptr);
    printf("hello : %u.\n", &age);
    printf("hello : %u.\n", ptr);
    printf("hello : %u.\n", &ptr);   

    printf("\n");
    return 0;
}