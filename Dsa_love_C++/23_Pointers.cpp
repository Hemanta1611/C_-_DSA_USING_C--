#include <iostream>
#include <vector>
using namespace std;



int main(){
    
    int a = 10;
    cout<<"a: "<< a<< endl;
    cout<<"Address of a: "<< &a<<endl;

    int* ptr = &a;
    cout<<"a: "<< *ptr<<endl;
    cout<<"Address of a: "<< ptr<< endl;


    
    return 0;
}

/*
Summary
Declaration: int *ptr; declares a pointer to an integer.
Assignment: ptr = &var; assigns the address of var to ptr.
Dereferencing: *ptr accesses the value at the address stored in ptr.
Dynamic Memory Allocation: int *ptr = new int; allocates memory and delete ptr; deallocates it.
Array Access: Pointers can be used to access array elements.
Pointer to Pointer: int **pptr = &ptr; allows a pointer to another pointer.
*/