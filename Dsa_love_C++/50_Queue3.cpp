#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <map>
using namespace std;

class MyCircularDeque {
public:
    int size, front, rear, *arr;
    MyCircularDeque(int k) {
        size = k;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    
    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
        return true;
    }
    
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        return front == -1 && rear == -1;
    }
    
    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == front - 1);
    }
};

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


class KQueue{
public:
    int n, k, freeSpot;
    int *arr, *front, *rear, *next;

    KQueue(int _n, int _k) : n(_n), k(_k), freeSpot(0){
        arr = new int[n]; // array
        next = new int[n]; // it will point the next index of rear and also the free spot
        front = new int[k]; // array for storing front index of all k queues: i.e. k[0] = front index of q0, k[1] = front index of q1, like that
        rear = new int[k]; // array for storing rear index of all k queues
        for(int i = 0; i < k; i++){
            front[i] = rear[i] = -1;
        }
        for(int i = 0; i < n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
    }

    bool push(int x, int qIth){
        // overflow
        if(freeSpot == -1) return false;

        // find first free index
        int index = freeSpot;

        // update freespot
        freeSpot = next[index];

        // if first element in qith
        if(front[qIth] == -1){
            front[qIth] = index;
        }
        else{
            // link new element to that Q's rearest element
            next[rear[qIth]] = index;
        }

        // update next
        next[index] = -1; // it means this index is now the last element in the queue and hence can't have any further index in next

        // update rear
        rear[qIth] = index;
        arr[index] = x;
        return true;
    }

    int pop(int qIth){
        // underflow
        if(front[qIth] == -1) return -1;

        // find index to pop
        int index = front[qIth];

        // front update
        front[qIth] = next[index];

        // update freespots
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }

    ~KQueue(){
        delete[] arr;
        delete[] next;
        delete[] front;
        delete[] rear;
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