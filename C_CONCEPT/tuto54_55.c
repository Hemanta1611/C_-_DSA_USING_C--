// DANGLING POINTER { dangling meaning hanging}
// this pointer points towards freed or deleted memory location
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief This function demonstrates a dangling pointer by returning the address of a local variable.
 * 
 * @return int* Pointer to a local variable that will go out of scope after the function returns.
 */
int* function_dangling() {
    int a, b, sum;
    a = 34;
    b = 345;
    sum = a + b;
    return &sum;  // Returning the address of a local variable
}

int main() {
    // Case 1: Deallocating memory using free()
    int *ptr = (int *) malloc(7 * sizeof(int));  // Allocate memory for an array of 7 integers
    ptr[0] = 34;
    ptr[1] = 35;
    ptr[2] = 36;
    ptr[3] = 37;
    free(ptr);  // Free the allocated memory. ptr is now a dangling pointer.

    // Accessing ptr after free() is dangerous as it is now a dangling pointer.
    // Uncommenting the next line will cause undefined behavior.
    // printf("%d\n", ptr[0]); 

    // Case 2: Function returning address of a local variable
    int *dangptr = function_dangling();  // dangptr is a dangling pointer as it points to a local variable of the function which no longer exists.

    // Accessing dangptr will cause undefined behavior as it is a dangling pointer.
    // Uncommenting the next line will cause undefined behavior.
    // printf("%d\n", *dangptr); 

    // Case 3: Variable going out of scope
    int *danglingptr3;
    {
        int a = 12;
        danglingptr3 = &a;  // danglingptr3 points to a local variable 'a'
    }
    // Here, variable 'a' goes out of scope, making danglingptr3 a dangling pointer.

    // Accessing danglingptr3 will cause undefined behavior as it is a dangling pointer.
    // Uncommenting the next line will cause undefined behavior.
    // printf("%d\n", *danglingptr3); 

    return 0;
}


// DANGLING CASES:

// deallocation of memory
// example
// int a;
// int *ptr = (int *) malloc(sizeof(int));
// free(ptr);// ptr now becomes a dangling pointer
// ptr = NULL; // ptr no longer a dangling

// returning local variable in functions calls
// example
// int *myfunc(){
// // a is local variable and goes out of scope on function return over.
// int a =34;
// return &a;
// }
// int main(){
//     int *ptr = myfunc();// ptr points to invalid location
//     printf("%d", *ptr);
//     return 0;
// }

// WE CAN AVOID THIS ISSUE BY ASSIGNING NULL VALUE

// WILD POINTER = uninitialized pointer is called as wild pointer
// these pointer point to some arbitrary location in memory and may cause program to crash
// dereferencing wild pointers can cause nasty bugs
// example
// int a = 334;
// int *ptr; // wild pointer
// *ptr = 334; // this is not a good things to do
// ptr = &a; // ptr no longer wild pointer