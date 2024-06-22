#include <iostream>
    
using namespace std;

int sum(int, int);
void g();
    
int main(){
    
    int n1,n2;
    cout<<"give a value to number a: ";
    cin>>n1;
    cout<<"give a value to number b: ";
    cin>>n2;
    
    cout<<"sum of these two number is: "<<sum(n1,n2)<<endl;
    g();

    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

void g(){
    cout<<"Hello Good Morning! G";
}

/*
Formal parameter:- a & b are formal parameters
Actual parameter:- n1 & n2 are actual parameters
*/