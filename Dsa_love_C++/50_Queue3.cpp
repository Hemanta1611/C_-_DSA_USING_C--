#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        if (nums.empty() || k == 0) return ans;

        // first step: first window solve
        for(int i = 0; i < k; i++){
            int element = nums[i];

            // small elements in deque-> remove it
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back(); // interesting , why we are doing pop back here becoz we are pushing smaller elements to dq, and so the right side element will obviosly smaller than the left side, so we can remove/pop that element when we want/need to pop 
            }
            // now insert
            dq.push_back(i);
        }

        // remaining window process
        for(int i = k; i < nums.size(); i++){
            // store ans
            ans.push_back(nums[dq.front()]);

            // removal
            // out of range
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            // remove small elements
            int element = nums[i];
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();
            }

            // addition
            dq.push_back(i);
        }

        // last window process
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};


int main(){
    
    string s = "ababc";
    
    queue<char> q;

    string ans = "";

    map<char, int> mp;
    /*
    if we use array:
    int freq[26] = {0};

    -> inside loop : freq[s[i] - 'a']++;
    
    */

    // 1st: traverse string
    for(int i = 0; i < s.length(); i++){
        // 2nd: count frequency table of characters in map
        mp[s[i]]++;

        // 3rd: push characters in queue
        q.push(s[i]);

        // 4th: find the answer
        while(!q.empty() && mp[q.front()] > 1){
            q.pop();
        }
        if(q.empty()){
            ans += '#';
        }
        else{
            ans += q.front();
        }
    }

    cout<<"Answer: "<<ans<<endl;
    
    return 0;
}