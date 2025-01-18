#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Creating a Node
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

// LinkedList Traversal
void PrintLL(Node *head){
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
        length++;
    }
    cout<<" Lenght: "<<length<<endl;
}
int NodeLength(Node *head){
    Node *temp = head;
    int length = 0;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

// Insertion at head
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
    // make new node as head node
    head = newNode;
}

// Insertion at Tail
void InsertionAtTail(Node *&head, Node *&tail, int data){
    if(head == NULL){
        head = new Node(data);
        return;
    }
    // create a new node
    Node *newNode = new Node(data);
    // link tail node with new node
    tail->next = newNode;
    // make new node as tail node
    tail = NULL;
}

// Insertion at Position
void InsertionAtPosition(Node * &head, Node * &tail, int position, int data){
    int length = NodeLength(head);
    if(position >= length || position < 0){
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
    // link previous node with new node
    temp->next = newNode;
}

// delete the head node
void deleteHead(Node * &head){
    if (head == NULL) return;
    Node * temp = head;
    head = head->next;
    delete temp;
}

// delete the tail node
void deleteTail(Node * &head, Node * &tail){
    if (head == NULL) return;
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
    Node * temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}

// delete the node at position
void deleteNode(Node * &head, int position, Node * &tail){
    int length = NodeLength(head);
    if(position > length || position < 0){
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
    delete toDelete;
}


int main(){
    
    // Creation of Node
    // Node a; // static object
    // Node *head = new Node(); // dynamic object // both static and dynamic object autometically call the default constructor
    
    // Node *head = NULL;  // LL is empty
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

    // Linked List Traversal
    // Node *temp = head;
    // while(temp != NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<"\n";

    // Insert at head
    // InsertionAtHead(head, 5);

    // Insert at tail
    // InsertionAtTail(head, tail, 70);

    // Insert at Position
    // InsertionAtPosition(head, tail, 6, 100);

    // Delete the head
    // deleteHead(head);

    // Delete the tail
    deleteTail(head, tail);

    // // Delete the node at position
    // deleteNode(head, 3, tail);

    PrintLL(head);

    return 0;
}

/*
1. Memory Management
Free Memory List:

A linked list can be used to manage free memory blocks in a system.
Each node in the list represents a block of free memory.
The system uses the linked list to track and allocate/deallocate memory dynamically.
Example: Buddy System or similar dynamic memory allocation schemes.
Fragmentation Management:

To minimize external fragmentation, a linked list helps by maintaining free memory chunks in a linked format.
Blocks can be merged or split as needed using pointers in the list.
2. File Systems
File Allocation Table (FAT):

In the FAT file system, files are stored as linked lists of clusters.
Each cluster points to the next cluster in the file using a pointer.
This structure enables efficient storage and retrieval but can suffer from fragmentation.
Index Nodes (Inodes):

In some file systems, inodes may use indirect pointers, effectively forming linked structures for large files.
Linked lists are used to handle file allocation for files that exceed the size of direct blocks.
3. Paging and Swapping
Page Replacement Algorithms:

Linked lists are often used to implement data structures like the Least Recently Used (LRU) algorithm.
Pages in memory are represented as nodes in a linked list, enabling efficient page replacement strategies.
Swapping Free Lists:

When memory is swapped to disk, linked lists can track free swap space or memory pages.
4. I/O Scheduling
Buffer Management:
Buffers in I/O systems are often organized in linked lists.
This allows dynamic allocation and deallocation of buffer space as data is read or written.
5. Process and Thread Management
Ready Queue and Waiting Queue:
Linked lists are used to maintain the ready queue or waiting queues for scheduling processes and threads.
Each process or thread is a node in the list, allowing dynamic insertion and deletion.
6. Dynamic Data Structures
Many kernel-level data structures (e.g., queues, stacks) are implemented using linked lists because they offer flexibility, especially when the size of the data is not fixed at compile time.
*/