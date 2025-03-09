#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        data = 0;
        this->left = NULL;
        this->right = NULL;
    }

    TreeNode(int val)
    {
        data = val;
        this->left = NULL;
        this->right = NULL;
    }

    TreeNode(int val, TreeNode *l, TreeNode *r)
    {
        data = val;
        left = l;
        right = r;
    }
};

TreeNode *createTree()
{
    cout << "Enter the data: ";
    int data;
    cin >> data;

    // base case + edge case + stop case
    if (data == -1)
    {
        return NULL;
    }

    // step 1: create a new node
    TreeNode *root = new TreeNode(data);

    // step 2: create left subtree
    cout << "Enter the left child of " << data << endl;
    root->left = createTree();

    // step 3: create right subtree
    cout << "Enter the right child of " << data << endl;
    root->right = createTree();

    return root;
}

void printTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ": ";

    // Print left child info
    if (root->left != NULL)
    {
        cout << "L->" << root->left->data;
    }
    else
    {
        cout << "L->NULL";
    }

    // Print right child info
    if (root->right != NULL)
    {
        cout << " R->" << root->right->data;
    }
    else
    {
        cout << " R->NULL";
    }

    cout << endl;

    // Recursively print left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

void preOrderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTranversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrderTranversal(root->left);
    cout << root->data << " ";
    inOrderTranversal(root->right);
}

void postOrderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        TreeNode *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout << endl; // to move to next level
            if (!q.empty())
            { // if we don't set if condition here, then it will be an infinite loop of front = NULL
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " "; // visit the node
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int searchInorder(int inorder[], int size, int element){
    for(int i = 0; i < size; i++){
        if(inorder[i] == element){
            return i;
        }
    }
    return -1;
}

void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap){
    for(int i = 0; i < size; i++){
        valueToIndexMap[inorder[i]] = i;
    }
}

TreeNode * constructTreeUsingPreAndInOrderTraversal(map<int, int> &valueToIndexMap, int inorder[], int preOrder[], int inorderStart, int &preOrderIndex, int inorderEnd, int size) {
    // base case: // very important: preOrderIndex pass always as reference.
    if(preOrderIndex >= size || inorderStart > inorderEnd) return nullptr;

    // 1 case:
    int element = preOrder[preOrderIndex];
    preOrderIndex++;
    TreeNode *root = new TreeNode(element);
    // int position = searchInorder(inorder, size, element);
    int position = valueToIndexMap[element];

    // recursion:
    root->left = constructTreeUsingPreAndInOrderTraversal(valueToIndexMap, inorder, preOrder, inorderStart, preOrderIndex, position-1, size);
    root->right = constructTreeUsingPreAndInOrderTraversal(valueToIndexMap, inorder, preOrder, position+1, preOrderIndex, inorderEnd, size);

    return root;
}

TreeNode * constructTreeUsingInAndPostOrderTraversal(int inorder[], int postOrder[], int size, int &postOrderIndex, int inorderStart, int inorderEnd, map<int, int> &valueToIndexMap){
// base case: // very important: preOrderIndex pass always as reference.
    if(postOrderIndex < 0 || inorderStart > inorderEnd) return nullptr;

    // 1 case:
    int element = postOrder[postOrderIndex];
    postOrderIndex--;
    TreeNode *root = new TreeNode(element);
    // int position = searchInorder(inorder, size, element);
    int position = valueToIndexMap[element];

    // recursion:
    // ** first right will call then left will called **
    root->right = constructTreeUsingInAndPostOrderTraversal(inorder, postOrder,  size, postOrderIndex, position+1, inorderEnd, valueToIndexMap);
    root->left = constructTreeUsingInAndPostOrderTraversal(inorder, postOrder,  size,  postOrderIndex, inorderStart, position - 1, valueToIndexMap);

    return root;
}

int main()
{

    // Tree using : inorder and preOrder
    int inorder[] = {10, 8, 6, 2, 4, 12};
    int preOrder[] = {2, 8, 10, 6, 4, 12};
    int postOrder[] = {10, 6, 8, 12, 4, 2};
    int size = 6;
    int inorderIndex = 0;
    int preOrderIndex = 0;
    int postOrderIndex = 5;
    int inorderEnd = 5;
    map<int, int> valueToIndexMap;
    // createMapping(inorder, size, valueToIndexMap);
    createMapping(inorder, size, valueToIndexMap);

    // TreeNode *root = constructTreeUsingPreAndInOrderTraversal(valueToIndexMap, inorder, preOrder, inorderIndex, preOrderIndex, inorderEnd, size);
    TreeNode *root = constructTreeUsingInAndPostOrderTraversal(inorder, postOrder, size, postOrderIndex, inorderIndex, inorderEnd, valueToIndexMap);

    levelOrderTraversal(root);

    return 0;
}