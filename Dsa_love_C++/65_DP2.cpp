#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    int ans = INT_MAX;
    int count = 0;

    vector<int> dp(amount+1, INT_MAX);
    dp[0] = 0; // Base case: 0 coins needed to make amount 0

    for (int value = 1; value <= amount; value++) {
        for (int j = 0; j < coins.size(); j++) {
            if (value - coins[j] >= 0 && dp[value - coins[j]] != INT_MAX) {
                dp[value] = min(dp[value], 1 + dp[value - coins[j]]);
            }
        }
    }
    ans = dp[amount];
    return ans == INT_MAX ? -1 : ans;
}

/*
 Dynamic Programming Logic
We use bottom-up dynamic programming to solve this problem.

🧩 Key Idea:
Let dp[i] be the minimum number of coins needed to make amount i.

Initialize dp[0] = 0 → 0 coins needed to make amount 0.

For each amount from 1 to amount, and for each coin, update:

dp[value] = min(dp[value], 1 + dp[value - coin])
if value - coin >= 0 and dp[value - coin] is not INT_MAX (i.e., it’s reachable).

🧪 Test Case
Let’s use this test case:

vector<int> coins = {1, 2, 5};
int amount = 11;
We want to find the minimum number of coins to make 11.

🔧 Step-by-Step DP Table Building
Initialize:

dp = [0, INT_MAX, INT_MAX, ..., INT_MAX] // length = 12
Now loop from value = 1 to 11:

value = 1:
Try coin 1 → 1 is reachable from 0 → dp[1] = min(INT_MAX, 1 + dp[0]) = 1

coins 2 and 5 too big → skip

dp = [0, 1, INT_MAX, ..., INT_MAX]

value = 2:
coin 1 → from dp[1] = 1 → dp[2] = 2

coin 2 → from dp[0] = 0 → dp[2] = 1 (better)

coin 5 → skip

dp = [0, 1, 1, INT_MAX, ...]

value = 3:
coin 1 → dp[2] = 1 → dp[3] = 2

coin 2 → dp[1] = 1 → dp[3] = min(2, 2) = 2

coin 5 → skip

dp = [0, 1, 1, 2, INT_MAX, ...]

Continue like this…
Eventually: dp = [0, 1, 1, 2, 2, 1, 2, 2, 3, 3, 2, 3]

So dp[11] = 3, meaning minimum 3 coins to make 11.

✅ One valid combination: 5 + 5 + 1

🔚 Return Value
ans = dp[amount]; // dp[11] = 3
return ans == INT_MAX ? -1 : ans; // return 3
*/

int main(){
    
    
    
    return 0;
}