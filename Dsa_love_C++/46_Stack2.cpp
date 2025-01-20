#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// 2-stack using an array
class Stack {
public:
    int *arr;
    int size;
    int top1, top2;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int element) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = element;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }
    void push2(int element) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = element;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop1(){
        if(top1 >= 0){
            top1--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    void pop2(){
        if(top2 < size){
            top2++;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    void print(){
        cout<<endl<<"Stack 1: ";
        for(int i = top1; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"Stack 2: ";
        for(int i = top2; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

bool checkRedudantBrackets(string str) {
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            st.push(str[i]);
        }
        else if(str[i] == ')'){
            if(st.top() == '('){
                return true;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}

int main(){
    
    Stack st(6);
    st.print();

    st.push1(10);
    st.push1(20);
    st.print();

    st.push2(40);
    st.push2(50);
    st.print();

    string str = "((a+b)*(c-(d)))";
    bool ans = checkRedudantBrackets(str);

    if(ans){
        cout<<"Redundant"<<endl;
    }
    else{
        cout<<"Not Redundant"<<endl;
    }


    
    return 0;
}