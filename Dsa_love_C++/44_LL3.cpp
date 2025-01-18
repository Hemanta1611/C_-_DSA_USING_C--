#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(){
        this->next = NULL;
        cout<<"Default Ctor"<<endl;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        cout<<"Parameterized Ctor"<<endl;
    }
    ~Node(){
        cout<<"Dtor called for "<<this->data<<endl;
    }
};

void PrintLL(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int LengthLL(Node *head){
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

void reverseLL(Node * &head){
    Node *curr = head;
    Node *prev = NULL;
    Node *nextNode = NULL;
    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

Node* reverseRecursion(Node *head){
    // base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void addOne(Node *&head) {
    reverseLL(head);
    int carry = 1; // Initialize carry as 1 because we're adding 1.
    Node *temp = head;

    while (temp != NULL) {
        int totalSum = temp->data + carry;
        temp->data = totalSum % 10; // Update the current node's data.
        carry = totalSum / 10; // Calculate the new carry.

        // If there's no carry, we can stop early.
        if (carry == 0) break;

        // Move to the next node or create a new node if we're at the last one.
        if (temp->next == NULL && carry != 0) {
            temp->next = new Node(carry);
            carry = 0; // Reset carry since it's handled.
        }
        temp = temp->next;
    }
    reverseLL(head); // Reverse the list back to its original order.
}

int main(){
    
    Node *head = new Node(9);
    Node *second = new Node(9);
    Node *third = new Node(9);
    Node *fourth = new Node(9);
    Node *fifth = new Node(9);
    Node *tail = new Node(9);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = tail;

    // print normal LL
    // PrintLL(head);

    // reverse LL
    // reverseLL(head);
    // PrintLL(head);

    // reverse using recursion
    // head = reverseRecursion(head);

    addOne(head);
    PrintLL(head);
    
    return 0;
}