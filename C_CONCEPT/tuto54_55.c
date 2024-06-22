// DANGLING POINTER { dangling meaning hanging}
// this pointer points towards freed or deleted memory location
#include <stdio.h>
#include <stdlib.h>
    
    int *function_dangling(){
        int a, b, sum;
        a = 34;
        b = 345;
        sum = a+ b;
        return &sum;
    }

int main(){
    
    // case 1 : deallocating
    int *ptr = (int *) malloc(7*sizeof(int));
    ptr[0] = 34;
    ptr[1] = 35;
    ptr[2] = 36;
    ptr[3] = 37;
    free(ptr); // ptr is now a dangling pointer

//  case 2: function returning local variable adress
    int *dangptr = function_dangling();

    // case 3: if a variable goes out of scope
    int *danglingptr3;
    {
        int a =12;
        danglingptr3 = &a;
    }
    // here variable a goes out of scope which means danglingptr3 is pointing to a location which is freed and 
    // hence danglingptr3 is now a dangling pointer
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