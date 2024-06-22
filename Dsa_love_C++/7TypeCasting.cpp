#include <iostream>
using namespace std;



int main(){
    
    int a = 7;
    float b = 7.7;
    cout<<int(b)<<endl;
    cout<<(int)b<<endl;
    // int c =  a + b;
    // float c = a + b;
    // cout<<c<<endl;
    cout<<a + b<<endl; // compiler try to maximum precision
    float d = 7.4;
    int e = b + d; 
    cout<<e<<endl;

    char ch = 'A';
    int f = ch + 1;
    char g = ch + 1;
    cout<< f <<endl; 
    cout<< g <<endl;

    int x = 10;
    int y = 3;
    cout<< x/y <<endl;

    
    
    return 0;
}