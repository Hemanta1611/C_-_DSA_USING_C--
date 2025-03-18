#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

        ~Node(){
            delete left;
            delete right;
        }
};

Node *bstFromInorder(int inorder[], int s, int e){
    // base case:
    if(s > e) return nullptr;

    // 1 case solve 
    int mid = (s+e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    // baaki recursion
    root->left = bstFromInorder(inorder, s, mid-1);
    root->right = bstFromInorder(inorder, mid+1, e);

    return root;
}

void inorder(Node *root){
    if(root == nullptr) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    
    int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node *root = bstFromInorder(inOrder, 0, 8);
    inorder(root);
    
    return 0;
}