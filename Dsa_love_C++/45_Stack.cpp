#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// stack using array
class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    int getTop(){
        if(top >= 0){
            return arr[top];
        }
        return -1;
    }

    int getSize(){
        return top + 1;
    }
};

int solve(stack<int> &st, int pos){
    // base case
    if(pos == 1){
        return st.top();
    }

    int num = st.top();
    st.pop();
    int ans = solve(st, pos - 1);
    st.push(num);
    return ans;
}
int getMiddleElement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
        return -1;
    }
    else{
        int pos = 0;
        // odd
        if(size & 1){
            pos = (size + 1) / 2;
        }
        // even
        else{
            pos = size / 2;
        }
        int ans = solve(st, pos);
        return ans;
    }
}

void insertAtBottom(stack<int> &st, int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int n = st.top();
    st.pop();
    insertAtBottom(st, num);
    st.push(n);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, num);
}

void inserAtSortedStack(stack<int> &st, int num){
    if(st.empty() || st.top() < num){
        st.push(num);
        return;
    }
    int n = st.top();
    st.pop();
    inserAtSortedStack(st, num);
    st.push(n);
}

void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    sortStack(st);
    inserAtSortedStack(st, num);
}


int main(){
    
    /*
    Stack using STL
    // creation:
    stack<int> st;

    // insertion:
    st.push(10);
    st.push(20);
    st.push(30);

    // size check:
    cout <<"Size of stack is: "<< st.size() << endl;

    // remove:
    st.pop();
    cout<<"Size of stack is: "<< st.size() << endl;

    // check empty:
    cout<<"Stack is empty: "<< st.empty() << endl;

    // check top element:
    cout<<"Top element is: "<< st.top() << endl;
    */

    /* Stack using array 
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Size of stack is: "<< st.getSize() << endl;

    st.pop();
    cout<<"Size of stack is: "<< st.getSize() << endl;

    cout<<"Top element is: "<< st.getTop() << endl;

    cout<<"Stack is empty: "<< st.isEmpty() << endl;

    st.push(60);
    st.push(70);
    cout<<"Top element is: "<< st.getTop() << endl;
    */
     
    /*
    string str = "hemanta";
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        st.push(str[i]);
    }
    // for (int i = 0; i < str.length(); i++) {
    //     str[i] = st.top();
    //     st.pop();
    // }
    string reverseStr = "";
    while(!st.empty()){
        reverseStr.push_back(st.top());
        st.pop();
    }
    cout << reverseStr << endl;
    */

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertAtBottom(st, 70);

    int mid = getMiddleElement(st);
    cout<<"Middle Element: "<<mid<<endl;

    // reverseStack(st);
    inserAtSortedStack(st, 25);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}