#include <iostream>
using namespace std;

void incrementBy1(int x){
    x = x + 1;
}
void IncrementBy1(int &x){
    x = x + 1;
}

void swap(int &x, int &y){
// void swap(int x, int y){ //  --> it will not swap the actual variable
    int temp = x;
    x = y;
    y = temp;
    cout<<"Inside Swap:\t"<<"address of b: "<< &x<< "\taddress of c: "<< &y<<endl;
}

/*
    swap(int x, int y) --> call by value, value change inside the func, it don't change the value of actual variable
    swap(int &x, int &y) --> call by reference, change the actual value in actual variable
*/

int main(){
    
    /*
    int n = 5;  // normal / actual / real name
    int &k = n;  // reference variable / nick name
    int &c = n;  // reference variable / nick name
    cout<<"k: "<< k<<"\tn: "<< n<<"\tc:"<< c<<endl;
    cout<<"Address of k is: "<< &k<< "\tAddress of n is: "<< &n <<endl;

    k++;
    // c++;
    cout<<"k: "<< k<<"\tn: "<< n<<"\tc:"<< c<<endl;

    // int &t = 6; // can't be done because 6 is not a variable, its a constant, reference variabel is another/nick name of a variable
    */

    int n;
    cin>>n;
    incrementBy1(n);
    cout<<"With call by value:\t" << "n: "<< n << endl;
    IncrementBy1(n);
    cout<<"With call by reference:\t" << "n: "<< n << endl;

    // int b = 7;
    // int c = 9;
    // cout<<"Before Swap:\t"<<"address of b: "<< &b<< "\taddress of c: "<< &c<<endl;
    // swap(b, c);
    // cout<<"b: "<<b<< "\tc: "<<c<<endl;
    // cout<<"After Swap:\t"<<"address of b: "<< &b<< "\taddress of c: "<< &c<<endl;
    



    return 0;
}