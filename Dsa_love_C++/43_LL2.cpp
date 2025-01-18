#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Doubly Linked List
class Node{
public:
    int data;
    Node *prev;
    Node *next;
    Node(){
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Dtor called for "<<this->data<<endl;
    }
};

void PrintDLL(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int LengthDLL(Node *head){
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

void InsertionAtHead(Node * &head, int data){
    // for empty LL
    if(head == NULL){
        head = new Node(data);
        return;
    }
    // create a new node
    Node *newNode = new Node(data);
    // link new node with head node
    newNode->next = head;
    head->prev = newNode;
    // make new node as head node
    head = newNode;
}

void InsertionAtTail(Node * &head, Node * &tail, int data){
    // for empty LL
    if(head == NULL){
        head = new Node(data);
        return;
    }
    // create a new node
    Node *newNode = new Node(data);
    // link tail node with new node
    tail->next = newNode;
    newNode->prev = tail;
    // make new node as tail node
    tail = newNode;
}

void InsertionAtPosition(Node * &head, Node * &tail, int position, int data){
    int length = LengthDLL(head);
    if(position > length || position < 0){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(position == 0){
        InsertionAtHead(head, data);
        return;
    }
    if(position == length){
        InsertionAtTail(head, tail, data);
        return;
    }
    // insert at middle
    Node *temp = head;
    int count = 1; // count = 1 because head node is already traversed or position = 0 is handled already
    while(count < position){
        temp = temp->next;
        count++;
    }
    // create a new node
    Node *newNode = new Node(data);
    // link new node with current position node
    newNode->next = temp->next;
    newNode->prev = temp;
    // link previous node with new node
    temp->next = newNode;
    newNode->next->prev = newNode;
}

void deleteHead(Node * &head){
    if(head == NULL) return;
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void deleteTail(Node * &head, Node * &tail){
    if(head == NULL) return;
    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}

void deleteNodeAtPosition(Node * &head, int position, Node * &tail){
    int length = LengthDLL(head);
    if(position >= length || position < 0){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(position == 0){
        deleteHead(head);
        return;
    }
    if(position == length - 1){
        deleteTail(head, tail);
        return;
    }
    // delete in middle
    Node *temp = head;
    int count = 1; // count = 1 because head node is already traversed or position = 0 is handled already
    while(count < position){
        temp = temp->next;
        count++;
    }
    // link previous node with next node
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    temp->next->prev = temp;
    delete toDelete;
}
int main(){
    
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *tail = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = tail;

    tail->prev = fifth;
    fifth->prev = fourth;
    fourth->prev = third;
    third->prev = second;
    second->prev = head;

    // Insertion at head
    // InsertionAtHead(head, 5);

    // Insertion at tail
    // InsertionAtTail(head, tail, 65);

    // Insertion at position
    // InsertionAtPosition(head, tail, 3, 35);

    // Deletion at head
    // deleteHead(head);

    // Deletion at tail
    // deleteTail(head, tail);

    // Deletion at position
    deleteNodeAtPosition(head, 3, tail);

    // printing the linked list
    PrintDLL(head);
    int length = LengthDLL(head);
    cout<<"\nLength of the linked list is "<<length<<endl;
    
    return 0;
}