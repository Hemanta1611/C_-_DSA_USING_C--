#include <iostream>    
using namespace std;
    
int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){
    int temp = a; // first we give value to temp as a
    a = b; // then we give value a = b
    b = temp; // then we give value b = temp (which is a declared above)
}

// This will swap a and b 
// call by reference using pointer
void swap_pointer(int * a, int * b){
    int temp = *a; 
    *a = *b;
    *b = temp; 
}

// call by reference using C++ reference variable
void swap_reference(int &a, int &b){
    int temp = a; 
    a = b; 
    b = temp; 
}

int main(){
    
    // call by value 
    cout<<"The sum of 27 and 79 is: "<<sum(27,79)<<endl;

    // call by reference
    int x = 27, y = 79;
    cout<<"The sum of 27 and 79 is: "<<sum(x,y)<<endl;

    cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;
    swap(27,79); // OR // swap(x,y);
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;
    // here, the actual arguments get copied in formal argument in swap function
    // but the adress of actual arguments don't copied in formal arguments thats why it won't swap

    // call by reference 
    swap_pointer(&x,&y);
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;
    
    // call by reference using c++ reference variable
    swap_reference(x,y);
    cout<<"The value of x is "<<x<<". The value of y is "<<y<<endl;

    return 0;
}