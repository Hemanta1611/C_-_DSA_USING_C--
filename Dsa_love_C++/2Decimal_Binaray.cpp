#include <iostream>
using namespace std;
#include <cmath>

int decimalTObinary1(int n){
    int binary = 0;
    int i = 0;
    int rem;
    while(n > 0){
        rem = n % 2;
        binary += rem * pow(10, i++);
        n = n / 2;
    }
    return binary;
}

int decimalTObinary2(int n){
    int binary = 0;
    int i = 0;
    int rem;
    while(n > 0){
        rem = (n & 1); 
    // bitwise operator here we add one by AND method (always either 0 or 1 comes when we add one to its binary form)
        binary += rem * pow(10, i++);
        n = n >> 1;
    }
    return binary;
}

int binaryTOdecimal(int n){
    int decimal = 0;
    int i = 0, rem;
    while(n){
        rem = n % 10;
        decimal += rem * pow(2, i++);
        n = n / 10;
    }
    return decimal;
}


int main(){
    
    int n;
    cin>> n;
    // int binary_num = decimalTObinary1(n);
    int binary_num = decimalTObinary2(n);
    cout<<"binary number = "<< binary_num<<endl;
    
    int bin;
    cin>>bin;
    int deci = binaryTOdecimal(bin);
    cout<<"decimal number = "<< deci;
    
    return 0;
}
