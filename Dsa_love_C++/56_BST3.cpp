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

Node *insertIntoBST(Node *root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data > data){
        // left
        root->left = insertIntoBST(root->left, data);
    }
    else{
        // right
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void createBST(Node *&root){
    cout << "Enter the data: " << endl;
    int data; cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

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


// convert BST to sorted doubly linked list:
void BSTtoDLL(Node *root, Node *&head){
    if(root == nullptr) return ;

    BSTtoDLL(root->right, head);
    // current node
    root->right = head;
    if(head != nullptr) head->left = root; // update head and create DLL
    head = root;
    BSTtoDLL(root->left, head);

}

void printLL(Node *head){
    Node *temp = head;
    cout<<"\nDLL: ";
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->right;
    }
}

// convert sorted doubly linked list to BST:
Node *bstFromDLL(Node *&head, int n){
    // base case:
    if(head == nullptr || n <= 0) return nullptr;

    // recursion using inorder:
    Node *leftSubtree = bstFromDLL(head, n / 2);
    Node *root = head;
    root->left = leftSubtree;
    head = head->right; // traverse the DLL
    Node *rightSubtree = bstFromDLL(head, n - (n/2) -1);
    root->right = rightSubtree;

    return root;
}


int main(){
    
    int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Node *root = bstFromInorder(inOrder, 0, 8);
    cout<<"bst from inorder: ";
    inorder(root);
    Node *head = nullptr;

    BSTtoDLL(root, head);
    printLL(head);

    Node *root2 = bstFromDLL(head, 9);
    cout<<"\nbst from dll: ";
    inorder(root2);
    
    return 0;
}