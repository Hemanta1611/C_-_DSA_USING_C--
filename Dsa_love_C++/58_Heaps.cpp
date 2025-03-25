#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *left, *right;

    Node(int v){
        val = v;
        left = nullptr;
        right = nullptr;
    }

    ~Node(){
        delete left;
        delete right;
    }
};

pair<int, bool> isHeap(Node *root){
    if(root == nullptr){
        pair<int, bool> temp;
        temp.first = INT_MIN;
        temp.second = true;
        return temp;
    }
    if(root->left == nullptr && root->right == nullptr){
        pair<int, bool> temp;
        temp.first = root->val;
        temp.second = true;
        return temp;
    }

    pair<int, bool> leftAns = isHeap(root->left);
    pair<int, bool> rightAns = isHeap(root->right);

    // solve 1 case:
    if(root->val > leftAns.first && root->val > rightAns.first && leftAns.second && rightAns.second){
        pair<int, bool> ans;
        ans.first = root->val;
        ans.second = true;
        return ans;
    }
    else{
        pair<int, bool> ans;
        ans.first = max(root->val, max(leftAns.first , rightAns.first));
        ans.second = false;
        return ans;
    }
}

void storeInorder(Node *root, vector<int>&inorder){
    if(root == nullptr) return;
    storeInorder(root->left, inorder);
    inorder.push_back(root->val);
    storeInorder(root->right, inorder);
}

void replaceUsingPostorder(Node *root, vector<int> inorder, int index){
    if(root == nullptr) return;
    replaceUsingPostorder(root->left, inorder, index);
    replaceUsingPostorder(root->right, inorder, index);
    root->val = inorder[index];
    index++;
}
Node* bstToMaxHeap(Node *root){
    // store inorder
    vector<int> inorder;
    storeInorder(root, inorder);

    // replace the node values with sorted inorder values, using postorder traversal
    int index = 0;
    replaceUsingPostorder(root, inorder, index);

    return root;
}

int main(){
    
    // create max-heap
    priority_queue<int> pq;
    // insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout<<"Top element of Heap: "<<pq.top()<<endl;

    pq.pop(); // root element / top element --> pop out

    cout<<"Top element after poping element: "<<pq.top()<<endl;

    cout<<"Size of max-heap: "<<pq.size()<<endl;

    // create min-heap
    priority_queue<int, vector<int>, greater<int>> min_pq; // default syntax
    // insertion
    min_pq.push(100);
    min_pq.push(70);
    min_pq.push(90);

    cout<<"Top element of min heap: "<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<"Top element of min heap after poping top element: "<<min_pq.top()<<endl;


    
    return 0;
}