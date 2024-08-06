#include <iostream>
#include <vector>
using namespace std;

int twoToThePowerN(int n){
    // base case
    if(n == 0){
        return 1;
    }
    int ans = 2 * twoToThePowerN(n - 1);
    return ans;
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    
    cout<<"2 To the power 10: "<< twoToThePowerN(10)<<endl;
    cout<<"7th term in fibonacci series: "<<fibonacci(7)<<endl;
    

    
    return 0;
}