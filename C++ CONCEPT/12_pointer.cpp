#include <iostream>

using namespace std;

int main(){

    // pointer is just an another data type which stores adress of other datatype variable
    int a = 3;
    int * b = &a;// pointer variable b is pointing towards address of variable a
    // * - dereferencing operator
    // & - adress of operator - referencing operator
    cout<<"Adress of a: "<<&a<<".\n";
    cout<<"Adress of a: "<<b<<endl;
    cout<<"Value at adress b is: "<<*b<<endl;
    cout<<"Value at adress b is: "<<*(&a)<<endl;

    int ** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The address of c is: "<<*c<<endl;
    cout<<"The value at address of c is:"<<**c<<endl;
    cout<<"The value at address of c is:"<<*(*(&b))<<endl;
    // *(&b) = dereferencing adress of b = pointer b = value of b = which stores address of a
    // *(*(&b)) = dereferencing pointer b = dereferencing adress of a = value of a
    // this pointer to pointer variable in which a new pointer stores adress of other pointer 
    // we can do this by assigning two stars

    return 0;
}