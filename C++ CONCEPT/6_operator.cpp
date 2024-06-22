#include <iostream>
    /*
    There are two types of header files:
    1. System header files: it comes with compiler
    ex - iostream
    2. User defined header files: it is written by programmer.
    ex - #include "xyz.h" or #include "abc.cpp"
    */
using namespace std;

int main(){

    int a = 7, b = 9;
    cout<< "Operator in C++:"<<endl;
    cout<< "Following are the types of operators in C++:"<<endl;
    // endl == \n

    // Arithmatic Operator
    // cout<<"The value of a + b is "<< a+b<<endl;
    // cout<<"The value of a - b is "<< a-b<<endl;
    // cout<<"The value of a * b is "<< a*b<<endl;
    // cout<<"The value of a / b is "<< a/b<<endl;
    // cout<<"The value of a % b is "<< a%b<<endl;
    // cout<<"The value of a++ is "<< a++<<endl;
    // cout<<"The value of a-- is "<< a--<<endl;
    // cout<<"The value of ++a is "<< ++a<<endl;
    // cout<<"The value of --a is "<< --a<<endl;
    // cout<<endl;

    // Assignment Operator --> used to assign values to variables
    int x = 23, y = 12;
    char d = 'd';

    // Comparision Operators
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;

    // Logical Operators
    cout<<"\n";
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<".\n";
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<".\n";
    cout<<"The value of this logical NOT operator (!(a==b)) is "<<(!(a==b))<<".\n";

    return 0;
}