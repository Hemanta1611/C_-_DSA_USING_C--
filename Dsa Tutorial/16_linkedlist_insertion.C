#include <stdio.h>
#include <stdlib.h>

// Self-referencing structure for a node in a linked list
struct node {
    int data;           // Data part of the node
    struct node* next;  // Pointer to the next node
};

// Function to traverse a linked list and print its elements
// Parameters:
// ptr: Pointer to the head node of the linked list
void traversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data); // Print the current node's data
        ptr = ptr->next; // Move to the next node
    }
}

// Function to insert a node at the beginning of the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// data: Data to be inserted
// Returns: Pointer to the new head node
struct node* llinsertion_atfirst(struct node* head, int data) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node)); // Allocate memory for new node
    ptr->data = data;  // Set the data
    ptr->next = head;  // Point to the old head
    return ptr;        // Return new head
}

// Function to insert a node at a specific index in the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// index: Index at which the new node is to be inserted
// data: Data to be inserted
// Returns: Pointer to the head node
struct node* llinsertion_atindex(struct node* head, int index, int data) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node)); // Allocate memory for new node
    struct node* p = head; // Pointer to traverse the list
    int i = 0;
    while(i != index-1) { // Traverse to the node before the index
        p = p->next;
        i++;
    }
    ptr->data = data;  // Set the data
    ptr->next = p->next; // Point to the next node
    p->next = ptr; // Link the previous node to the new node
    return head; // Return head node
}

// Function to insert a node at the end of the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// data: Data to be inserted
// Returns: Pointer to the head node
struct node* llinsertion_atlast(struct node* head, int data) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node)); // Allocate memory for new node
    struct node* p = head; // Pointer to traverse the list
    while(p->next != NULL) { // Traverse to the last node
        p = p->next;
    }
    ptr->data = data; // Set the data
    p->next = ptr;    // Link the last node to the new node
    ptr->next = NULL; // Mark the new node as the last node
    return head; // Return head node
}

// Function to insert a node after a given node in the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// prev_node: Pointer to the previous node after which the new node is to be inserted
// data: Data to be inserted
// Returns: Pointer to the head node
struct node* llinsertion_afternode(struct node* head, struct node* prev_node, int data) {
    struct node* ptr = (struct node*) malloc(sizeof(struct node)); // Allocate memory for new node
    ptr->data = data;  // Set the data
    ptr->next = prev_node->next; // Point to the next node
    prev_node->next = ptr; // Link the previous node to the new node
    return head; // Return head node
}

int main() {
    // Allocating memory for nodes in the linked list in the heap
    struct node* head = (struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*) malloc(sizeof(struct node));
    struct node* third = (struct node*) malloc(sizeof(struct node));
    struct node* fourth = (struct node*) malloc(sizeof(struct node));

    // Assigning data and linking the nodes
    head->data = 2;     // Head node data
    head->next = second; // Link head node to second node
    second->data = 7;   // Second node data
    second->next = third; // Link second node to third node
    third->data = 9;    // Third node data
    third->next = fourth; // Link third node to fourth node
    fourth->data = 99;  // Fourth node data
    fourth->next = NULL; // End of linked list

    // Traverse and display the linked list
    traversal(head);

    // Insert a node at the beginning
    head = llinsertion_atfirst(head, 21);
    printf("\n");
    traversal(head);

    // Insert a node at a specific index
    head = llinsertion_atindex(head, 2, 27);
    printf("\n");
    traversal(head);

    // Insert a node at the end
    head = llinsertion_atlast(head, 29);
    printf("\n");
    traversal(head);

    // Insert a node after a specific node
    head = llinsertion_afternode(head, third, 79);
    printf("\n");
    traversal(head);
    
    return 0;
}
