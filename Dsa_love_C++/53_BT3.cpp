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
            this->left = left;
            this->right = right;
        }
};

Node *createTree(){
    cout<<"Enter the data: ";
    int value;
    cin>>value;

    if(value== -1) return NULL;

    Node *root = new Node(value);

    cout<<"Enter the left child of "<<value<<endl;
    root->left = createTree();
    cout<<"Enter the right child of "<<value<<endl;
    root->right = createTree();

    return root;
}

void preOrder(Node *root){
    if(root == nullptr) return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){
    if(root == nullptr) return;

    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}
void postOrder(Node *root){
    if(root == nullptr) return;

    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * front = q.front();
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

void printleftView(Node *root, int level, vector<int> &leftView){
    if(root == nullptr) return;

    if(level == leftView.size()){ // this condition is important
        // means leftview ka node mil gaya
        leftView.push_back(root->data);
    }

    printleftView(root->left, level+1, leftView);
    printleftView(root->right, level+1, leftView);
}

void printrightView(Node *root, int level, vector<int> &rightView){
    if(root == nullptr) return;

    if(level == rightView.size()){ // this condition is important
        // means leftview ka node mil gaya
        rightView.push_back(root->data);
    }

    printrightView(root->right, level+1, rightView);
    printrightView(root->left, level+1, rightView);
}

void printTopView(Node *root){
    map<int, int> horizontalDistanceToMap;
    queue<pair<Node*, int>> q;

    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second; // hd = horizontal disatance

        // if there is no entry for hd in map, then create a new entry
        if(horizontalDistanceToMap.find(hd) == horizontalDistanceToMap.end()){
            horizontalDistanceToMap[hd] = frontNode->data;
        }

        // child ko dekhna hai
        if(frontNode -> left != NULL){
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode -> right != NULL){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    cout<<"printing top view: "<<endl;
    vector<int> ans;
    for(auto it: horizontalDistanceToMap){
        cout<<it.second<<" ";
        ans.push_back(it.second);
    }
}

void printButtomView(Node *root){
    map<int, int> horizontalDistanceToMap;
    queue<pair<Node*, int>> q;

    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second; // hd = horizontal disatance

        horizontalDistanceToMap[hd] = frontNode->data;

        // child ko dekhna hai
        if(frontNode -> left != NULL){
            q.push(make_pair(frontNode->left, hd-1));
        }
        if(frontNode -> right != NULL){
            q.push(make_pair(frontNode->right, hd+1));
        }
    }

    cout<<"printing bottom view: "<<endl;
    vector<int> ans;
    for(auto it: horizontalDistanceToMap){
        cout<<it.second<<" ";
        ans.push_back(it.second);
    }

}

void leftBoundry(Node *root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) return; // leaf node

    cout<<root->data<<" ";
    if(root->left != NULL){
        leftBoundry(root->left);
    }
    else if(root->right != NULL){
        leftBoundry(root->right);
    }
}

void leafNode(Node *root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr){ // leaf node
        cout<<root->data<<" ";
        return;
    }

    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundry(Node *root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) return; // leaf node

    if(root->right != NULL){
        rightBoundry(root->right);
    }
    else if(root->left != NULL){
        rightBoundry(root->left);
    }
    cout<<root->data<<" ";
}

void boundryTraversal(Node *root){
    if(root == nullptr) return;

    cout<<root->data<<" ";
    leftBoundry(root->left);
    leafNode(root);
    rightBoundry(root->right);
}

int main(){
    
    Node *root = createTree();

    // levelOrder(root);

    // vector<int> leftView;
    // cout<<"\n left view: ";
    // printleftView(root, 0, leftView);
    // for(int i=0; i<leftView.size(); i++){
    //     cout<<leftView[i]<<" ";
    // }

    // vector<int> rightView;
    // cout<<"\n right view: ";
    // printleftView(root, 0, rightView);
    // for(int i=0; i<rightView.size(); i++){
    //     cout<<rightView[i]<<" ";
    // }

    // printTopView(root);
    printButtomView(root);
    
    return 0;
}