#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// recursion:
int fibonaci(int n){
    if(n == 0 || n == 1) return n;

    return fibonaci(n-1) + fibonaci(n-2);
}


// dp : top-down approach: (recursion + memorization)
int topDownFib(int n, vector<int>& dp){
    if(n == 0 || n == 1) return n;
    // step 3: don't need to find solution if its already present
    if(dp[n] != -1) return dp[n];

    // step 2: store the data / memorization of answer in dp array
    dp[n] = topDownFib(n-1, dp) + topDownFib(n-2, dp);
    return dp[n];
}

// dp : buttom-up approach: 
int buttomUpFib(int n){
    if(n <= 1) return n;
    vector<int> dp(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// dp: space optimization:
int sofib(int n){
    if(n < 2) return n;
    int prev = 0, curr = 1, ans;
    for(int i =2; i <= n; i++){
        ans = prev + curr;
        prev = curr;
        curr = ans;
    }
    return ans;
}


int main(){
    
    cout<<"1st fib value: "<<fibonaci(0)<<endl;
    cout<<"2nd fib value: "<<fibonaci(1)<<endl;
    cout<<"3rd fib value: "<<fibonaci(2)<<endl;
    cout<<"4th fib value: "<<fibonaci(3)<<endl;
    cout<<"5th fib value: "<<fibonaci(4)<<endl;

    // step 1: create dp array to store the answers
    int n; cin>>n;
    vector<int> dp(n+1, -1);
    cout<<"6th fib value: "<<topDownFib(5, dp);

    
    return 0;
}