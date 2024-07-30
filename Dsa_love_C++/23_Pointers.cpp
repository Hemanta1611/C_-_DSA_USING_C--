#include <iostream>
#include <vector>
using namespace std;



int main(){
    
    /*
    int a = 10;
    cout<<"a: "<< a<< endl;
    cout<<"Address of a: "<< &a<<endl;

    int* ptr = &a;
    cout<<"a: "<< *ptr<<endl;
    cout<<"Address of a: "<< ptr<< endl;

    cout<<"Size of int pointer: "<< sizeof(ptr)<<endl;

    char ch = 'H';
    char * cptr = &ch;
    cout<<"Address of ch: "<< cptr<<"Size of char pointer: "<<sizeof(cptr) <<endl;
    */

    int arr[5] = {1, 2, 3, 4, 5};
    cout<<"arr = "<< arr<<endl;
    cout<<"arr[0] = "<< arr[0]<<endl;
    cout<<"&arr[0] or &arr  = "<< &arr<<" "<<&arr[0]<<endl;
    cout<<"*arr = "<< *arr<<endl;
    cout<<"*arr[3] = "<< *arr + 3<<endl;

    
    
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