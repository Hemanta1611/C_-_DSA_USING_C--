#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(){
        data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    TreeNode(int val){
        data = val;
        this->left = NULL;
        this->right = NULL;
    }

    TreeNode(int val, TreeNode* l, TreeNode* r){
        data = val;
        left = l;
        right = r;
    }

};

TreeNode *createTree(){
    cout<<"Enter the data: ";
    int data;
    cin>>data;

    // base case + edge case + stop case 
    if(data == -1){
        return NULL;
    }

    // step 1: create a new node
    TreeNode *root = new TreeNode(data);

    // step 2: create left subtree
    cout<<"Enter the left child of "<<data<<endl;
    root->left = createTree();

    // step 3: create right subtree
    cout<<"Enter the right child of "<<data<<endl;
    root->right = createTree();

    return root;
}

void printTree(TreeNode *root){
    if(root == NULL){
        return;
    }
    cout << root->data << ": ";
    
    // Print left child info
    if(root->left != NULL) {
        cout << "L->" << root->left->data;
    } else {
        cout << "L->NULL";
    }
    
    // Print right child info
    if(root->right != NULL) {
        cout << " R->" << root->right->data;
    } else {
        cout << " R->NULL";
    }
    
    cout << endl;

    // Recursively print left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

void preOrderTraversal(TreeNode *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTranversal(TreeNode *root){
    if(root == NULL){
        return;
    }

    inOrderTranversal(root->left);
    cout<<root->data<<" ";
    inOrderTranversal(root->right);
}

void postOrderTraversal(TreeNode *root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(TreeNode *root){
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode *front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl; // to move to next level
            if(!q.empty()){ // if we don't set if condition here, then it will be an infinite loop of front = NULL
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";// visit the node
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
    
    TreeNode *root = createTree();
    printTree(root);
    // preOrderTraversal(root);
    // inOrderTranversal(root);
    // postOrderTraversal(root);
    levelOrderTraversal(root);


    
    
    return 0;
}