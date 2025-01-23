#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void reverseRecursively(queue<int> &q){
    if(q.empty()) return;

    int x = q.front();
    q.pop();
    reverseRecursively(q);
    q.push(x);
}

void reverseK(queue<int> &q, int k) {
    if (k <= 1 || q.empty() || k >= q.size()) return;

    int n = q.size();
    stack<int> s;

    // Reverse the first k elements
    for (int i = 0; i < k && i < n; i++) {
        s.push(q.front());
        q.pop();
    }

    // Push the reversed elements back into the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Move the remaining elements (if any) to the end of the queue
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
}

void interLeaveQueue(queue<int> &q){
    queue<int> q2;
    int n = q.size();
    for(int i = 0; i < n /2; i++){
        q2.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n/2; i++){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
}

void printFirstNegative(int *arr, int n, int k){
    queue<int> dq;

    // first process the first k elements
    for(int i = 0; i < k; i++){
        if(arr[i] < 0) dq.push(i);
    }

    // Process the remaining windows
    for (int i = k; i < n; i++) {
        // Print the first negative number in the current window
        if (!dq.empty()) {
            cout << arr[dq.front()] << " ";
        } else {
            cout << "0 "; // If no negative number in the window, print 0
        }

        // Remove indices that are out of the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop();
        }

        /*
        if we use "deque" instead of "queue" then we can use use "if" statement instead of "while" by:
        if(!dq.empty() && dq.front() <= i - k)
        then time complexity become: O(1)
        */

        // Add the current element's index if it is negative
        if (arr[i] < 0) {
            dq.push(i);
        }
    }

    // Print the first negative number for the last window
    if (!dq.empty()) {
        cout << arr[dq.front()] << " ";
    } else {
        cout << "0 ";
    }
}

int main(){
    
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    // cout<<"Before reverse: ";
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }cout<<endl;
    // cout<<"After reverse: ";
    // reverseQueue(q);
    // reverseRecursively(q);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }cout<<endl;

    // int k = 3;
    // reverseK(q, k);

    // interLeaveQueue(q);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }cout<<endl;

    int arr[] = {2, -5, 4, -1, -2, 0, 5};
    int size = sizeof(arr) / sizeof(int);
    int k = 3;
    printFirstNegative(arr, size, k);
    
    return 0;
}