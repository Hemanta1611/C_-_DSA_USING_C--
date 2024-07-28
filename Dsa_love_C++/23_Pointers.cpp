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