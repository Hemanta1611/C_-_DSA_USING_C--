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

Node *deleteNodeFromBST(Node *root, int target){
    if(root == nullptr) return nullptr;

    if(root->data == target){
        // 4 cases:
        // case1: leaf node
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return NULL;
        }

        // case2: leftnode is null
        else if(root->left != nullptr && root->right == nullptr){
            Node *childSubTree = root->left;
            delete root;
            return childSubTree;
        }

        // case3: rightnode is null
        else if(root->left == nullptr && root->right != nullptr){
            Node *childSubTree = root->right;
            delete root;
            return childSubTree;
        }

        // case4:
        else{
            // left subtree max value:
            Node* leftMax = maxValue(root->left);
            // replacement
            root->data = leftMax->data;
            // delete actual 
            root->left = deleteNodeFromBST(root->left, leftMax->data);
            return root;
        }
    }
    else if(root->data > target){
        root->left = deleteNodeFromBST(root->left, target);
    }
    else{
        root->right = deleteNodeFromBST(root->right, target);
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

void inorder(Node *root){
    if(root == nullptr) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// minimum value of 
int minValue(Node *root){
    if(root == nullptr) cout<<"no min value"<<endl;
    Node *temp = root;

    while(temp->left != nullptr){
        temp = temp->left;
    }
    return temp->data;
}

Node *maxValue(Node *root){
    if(root == nullptr) cout<<"no max value"<<endl;

    Node *temp = root;
    while(temp->right != nullptr){
        temp = temp->right;
    }
    return temp;
}

bool searchInBST(Node *root, int target){
    // base case:
    if(root == nullptr) return false;
    if(root->data == target) return true;

    bool ans;
    if(root->data < target){
        ans = searchInBST(root->right, target);
    }
    else{
        ans = searchInBST(root->left, target);
    }
    return ans;
}

void levelOrderTraversal(Node *root){
    if(root == nullptr){ cout<<"empty tree"<<endl; return;}
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout<<"LEVEL ORDER TRAVERSAL"<<endl;

    while(!q.empty()){
        Node *front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}




int main(){
    
    Node *root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    cout<<"present or not: "<<searchInBST(root, 5)<<endl;
    delete root;
    
    return 0;
}