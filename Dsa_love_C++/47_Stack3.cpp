#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class MinStack {
public:
    vector<pair<int, int>> st;
    //          val, min
    MinStack() {
        
    }
    
    // with each push a pair will added to stack vector with value and min value upto that pair
    void push(int val) {
        if(st.empty()){
            pair<int, int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
            pair<int, int> p;
            p.first = val;
            int prevMin = st.back().second;
            p.second = min(prevMin, val);
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int, int> rightMostPair = st.back();
        return rightMostPair.first;
    }
    
    int getMin() {
        pair<int, int> rightMostPair = st.back();
        return rightMostPair.second;
    }
};

vector<int> nextSmallerElement(int *arr, int n) {
    stack<int> st;
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--) {
        while(!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return ans;
}

vector<int> prevSmallerElement(int *arr, int n) {
    stack<int> st;
    vector<int> ans(n);
    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main(){
    
    int arr[5] = {8, 4, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // vector<int> ans = nextSmallerElement(arr, n);
    vector<int> ans = prevSmallerElement(arr, n);
    for(auto i: ans) {
        cout << i << " ";
    }cout<<endl;
    
    
    return 0;
}