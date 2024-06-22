#include <iostream>

using namespace std;

int c = 45; // global variable
    
int main(){
    
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>> a;
    cout<<"Enter the value of b:"<<endl;
    cin>> b;    
    
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    // :: == scope resolution operator
    cout<<"The global c is "<< ::c<< endl ;
    cout<<endl;

    float d = 34.4;
    long double e = 34.4;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout<<"The size of 34.4 is "<< sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<< sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<< sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<< sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<< sizeof(34.4L)<<endl;

    // ************Reference Variable*************
    // hemanta ----> babu -----> dada
    float x = 455;
    float &y = x;
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    // ************Typecasting************* force conversion of data type
    int p = 45;
    float q = 45.6;
    cout<<endl;
    cout<<"The value of p is "<<(float)p<<endl;
    cout<<"The value of p is "<<float(p)<<endl;
    // above two line are same thing

    cout<<"The value of q is "<<(int)q<<endl;

    cout<<endl;

    int h = int(q);
    cout<<"The expression is "<< p + q<<endl;
    cout<<"The expression is "<< p+ int(q)<<endl;
    cout<<"The expression is "<< p+ (int)q<<endl;


    return 0;
}