#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
// inline function used when a function is small and used repeadely to reduce compile type and compile size
// don't use inline function in recursion function and also when static variable used 

float moneyreceived(int currentmoney, float factor = 1.04){
    return currentmoney * factor;
    // here int currentmoney is compulsury argument
    // and float factor is default argument and it always written after compulsury argument
}

int main(){
    
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<".\n";
    int money = 100000;
    cout<<"if you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: if you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money, 1.1)<<" Rs after 1 year"<<endl;

    return 0;
}