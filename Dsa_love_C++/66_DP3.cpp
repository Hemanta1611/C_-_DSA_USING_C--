#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/*
Description
There is a fence with n posts, each post can be painted with one of the k colors.
You have to paint all the posts such that no more than two adjacent fence posts have the same color.
Return the total number of ways you can paint the fence.

n and k are non-negative integers.

Example
Given n=3, k=2 return 6

post 1,   post 2, post 3
way1    0         0       1 
way2    0         1       0
way3    0         1       1
way4    1         0       0
way5    1         0       1
way6    1         1       0

*/

int solveUsingRecursion(int n, int k){
    // base case:
    if(n == 1) return k;
    if(n == 2) return (k + k*(k-1));

    int ans = (k-1)*(solveUsingRecursion(n-1, k) + solveUsingRecursion(n-2, k));
    return ans;
}

int solveUsingMemorization(int n, int k, vector<int> &dp){
    // base case:
    if(n == 1) return k;
    if(n == 2) return (k + k*(k-1));
    if(dp[n] != 0) return dp[n];

    int ans = (k-1)*(solveUsingMemorization(n-1, k, dp) + solveUsingMemorization(n-2, k, dp));
    dp[n] = ans;
    return dp[n];
}

int knapsackRecursion(int capacity, int weight[], int profit[], int index, int n){
    // base-case:
    // if(index == n-1){
    //     if(weight[index] <= capacity){
    //         return profit[index];
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    // OR:
    if(index >= n) return 0;

    int include = 0;
    if(weight[index] <= capacity){
        include = profit[index] + knapsackRecursion(capacity - weight[index], weight, profit, index+1, n);
    }
    int exclude = 0;
    exclude = 0 + knapsackRecursion(capacity, weight, profit, index+1, n);
    int ans = max(include, exclude);
    return ans;
}

int knapsackMemorization(int capacity, int weight[], int profit[], int index, int n, vector<vector<int>> &dp){
    if(index >= n) return 0;

    if(dp[capacity][index] != -1){
        return dp[capacity][index];
    }

    int include = 0;
    if(weight[index] <= capacity){
        include = profit[index] + knapsackMemorization(capacity - weight[index], weight, profit, index+1, n, dp);
    }
    int exclude = 0;
    exclude = 0 + knapsackMemorization(capacity, weight, profit, index+1, n, dp);
    int ans = max(include, exclude);
    dp[capacity][index] = ans;

    return dp[capacity][index]; // how do we know: coz, capacity and index are only changed and thats why we have created dp
}

int knapsackTabulation(int capacity, int weight[], int profit[], int index, int n){
    vector<vector<int>> dp(capacity+1, vector<int>(n+1, -1));

    for(int row = 0; row <= capacity; row++){
        dp[row][n] = 0;
    }

    for(int i = 0; i <= capacity; i++){
        for(int j = n-1; j>= 0; j--){
            int include = 0;
            if(weight[j] <= i){
                include = profit[j] + dp[i-weight[j]][j+1];
            }
            int exclude = dp[i][j+1];
            dp[i][j] = max(include, exclude);
        }
    }
    return dp[capacity][0];
}


int main(){
    
    // int n = 3;
    // int k = 2;
    // int ans = solveUsingRecursion(n, k);
    // vector<int> dp(n+1, 0);
    // int ans = solveUsingMemorization(n, k, dp);
    // cout<<"ans: "<<ans<<endl;

    // solve using tabulation:
    // dp[1] = k;
    // dp[2] = k + k*(k-1);

    // for(int i = 3; i <= n; i++){
    //     dp[i] = (dp[i-1] + dp[i-2])*(k-1); 
    // }
    // cout<<"ans: "<<dp[n]<<endl;

    // solve using optimization:
    // int prevPrev = k;
    // int prev = (k + k*(k-1));
    // int curr;
    // for(int i = 3; i <= n; i++){
    //     curr = (prev + prevPrev)*(k-1);
    //     prevPrev = prev;
    //     prev = curr;
    // }
    // cout<<"ans: "<<curr<<endl;


    // 0/1 knapsack problem:
    int capacity = 50;
    int weight[] = {10, 20, 30};
    int profit[] = {60, 100, 120};
    int index = 0;
    int n = 3;

    // int ans = knapsackRecursion(capacity, weight, profit, index, n);

    vector<vector<int>> dp(capacity+1, vector<int>(n+1, -1));
    // int ans = knapsackMemorization(capacity, weight, profit, index, n, dp);
    int ans = knapsackTabulation(capacity, weight, profit, index, n);
    cout<<"Max Profit: "<< ans<<endl;

    
    return 0;
}