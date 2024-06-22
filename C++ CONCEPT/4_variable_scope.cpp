#include <iostream>
using namespace std;

int glo = 7;

void call(){
    cout<< glo;
}

int main(){

    cout<<"Hello World \nThis is Tutorial 4 Code with harry\n";
    // Variable_type:- int, float, char, double, boolen
    /*
    Based on scope, variable can be classified into two types:
    1 Local Variable
    2 Global Variable

    Datatype:-
    1 Built-in - int, float, char, double, boolen
    2 User-defined - Struct, Union, Enum
    3 Derived - array, function, pointers

    float- decimal numbers of low precision
    double- decimal numbers of high precision

    local variable takes precedence over global variable
    */

    int a = 2; 
    float b = 7.99;
    char c = 'h';
    
    cout<<"The value of a is "<<a<<".\n";
    cout<<"The value of b is "<<b<<".\n";
    cout<< b;
    cout<<".\nThe value of c is "<<c<<".\n";

    int glo = 9;
    glo = 27;
    
    cout<<"The value of glo after calling above fucntion call is: ";
    call();
    cout<<".\nThe value of glo is now (i.e after normally printing is): "<<glo<<".\n";

    bool x = true;
    cout<<x;
    bool y = false;
    cout<<",\t"<<y;
    
    return 0;
}