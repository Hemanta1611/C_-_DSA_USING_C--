#include <iostream>
using namespace std;

class Employee{    // private and public are two specifiers 
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){ // Declaration and defination both at once
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
}hemanta;

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    
    // Employee hemanta;
    // hemanta.a = 2;     THIS CAN'T BE HAPPEN BECAUSE IT IS PRIVATE VARIABLE
    // hemanta.b = 7;     THIS CAN'T BE HAPPEN BECAUSE IT IS PRIVATE VARIABLE
    // hemanta.c = 9;     THIS CAN'T BE HAPPEN BECAUSE IT IS PRIVATE VARIABLE
    // hemanta.x = 2;     THIS CAN'T BE HAPPEN    
    // hemanta.y = 7;     THIS CAN'T BE HAPPEN     
    // hemanta.z = 9;     THIS CAN'T BE HAPPEN
    // hemanta.a1 = 2;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    // hemanta.b1 = 7;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    // hemanta.c1 = 9;     THIS CAN'T BE HAPPEN BECAUSE THESE ARE VARIABLE USED IN THE FUNCTION     
    hemanta.d = 79;
    hemanta.e = 97;
    hemanta.setData(2,7,9);
    hemanta.getData();
    
    return 0;
}