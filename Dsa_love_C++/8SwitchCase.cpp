#include <iostream>
using namespace std;



int main(){
    
    float a, b;
    cout<<"Enter two number two perfom operation: "<<endl;
    cin>>a>>b;
    char ch;
    cout<<"Which type of operation you want to perform: ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout<<"sumation = "<<a+b<<endl;
        break;
    case '-':
        cout<<"subtraction = "<<a-b<<endl;
        break;
    case '*':
        cout<<"multiplication = "<<a*b<<endl;
        break;
    case '/':
        cout<<"division = "<<a/b<<endl;
        break;
    case '%':
        cout<<"remainder = "<<a+b<<endl;
        break;
    
    default:
        cout<<"Invalid Operation!!"<<endl;
        break;
    }
    
    return 0;
}