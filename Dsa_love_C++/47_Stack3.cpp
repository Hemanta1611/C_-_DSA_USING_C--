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

// N-Stack in an array:
class NStack {
    public:
        int *arr;
        int *top;
        int *next;
        int n; // Number of stacks
        int s; // Size of the main array
        int freespot; // Points to the next free spot
    
        NStack(int N, int S) {
            n = N;
            s = S;
            arr = new int[s];
            top = new int[n];
            next = new int[s];
    
            // Initialize stack tops
            for (int i = 0; i < n; i++) {
                top[i] = -1;
            }
    
            // Initialize free spots
            freespot = 0;
            for (int i = 0; i < s - 1; i++) {
                next[i] = i + 1;
            }
            next[s - 1] = -1; // Last position
        }
    
        ~NStack() {
            delete[] arr;
            delete[] top;
            delete[] next;
        }
    
        bool push(int stackNum, int value) {
            if (freespot == -1) {
                return false; // Overflow
            }
    
            // Find the next free position
            int index = freespot;
    
            // Update free spot
            freespot = next[index];
    
            // Link current index to the previous top
            next[index] = top[stackNum - 1];
    
            // Update the top of the stack
            top[stackNum - 1] = index;
    
            // Store the value
            arr[index] = value;
            return true;
        }
    
        int pop(int stackNum) {
            if (top[stackNum - 1] == -1) {
                return -1; // Underflow
            }
    
            // Find the index to pop
            int index = top[stackNum - 1];
    
            // Update top to the next element
            top[stackNum - 1] = next[index];
    
            // Add this index back to the free list
            next[index] = freespot;
            freespot = index;
    
            // Return the popped value
            return arr[index];
        }
    };
    

int main(){
    
    // int arr[5] = {8, 4, 5, 2, 3};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // // vector<int> ans = nextSmallerElement(arr, n);
    // vector<int> ans = prevSmallerElement(arr, n);
    // for(auto i: ans) {
    //     cout << i << " ";
    // }cout<<endl;


    NStack st(3, 10);
    st.push(0, 10);
    st.push(0, 20);
    st.push(0, 30);
    st.pop(0);
    st.push(0, 40);
    
    
    return 0;
}