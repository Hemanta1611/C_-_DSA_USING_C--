#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    // bool isPrime(int n){
    //     if(n <= 1){
    //         return false;
    //     }
    //     for(int i = 2; i <= sqrt(n); i++){
    //         if(n % i == 0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    bool isPrime(int n){
        if(n <= 1){
            return false;
        }
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int totalPrimeNumbers = 0;
        for(int i = 0; i < n; i++){
            if(isPrime(i)){
                totalPrimeNumbers++;
            }
        }
        return totalPrimeNumbers;
    }
};


int main(){
    
    
    
    return 0;
}