#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
typedef struct node {
    int data;         // Data part of the node
    struct node* next; // Pointer to the next node
} node;

// Function to traverse and print the linked list
// Parameters:
// ptr: Pointer to the head node of the linked list
void llt(node* ptr) {
    int i = 0; // Initialize index counter
    while(ptr != NULL) {
        printf("Element at index %d is: %d.\n", i, ptr->data); // Print current node's data and index
        ptr = ptr->next; // Move to the next node
        i++; // Increment index counter
    }
}

// Function to delete the first node of the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// Returns: Pointer to the new head node
node* deletionatfirst(node* head) {
    node* ptr = head; // Temporary pointer to the current head
    head = head->next; // Move head to the next node
    free(ptr); // Free the memory of the old head
    return head; // Return new head
}

/*
node * deletionatindex(node * head, int index){
    node * p = head;
    node * q;
    int i = 0; 
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
*/

// Function to delete a node at a specific index
// Parameters:
// head: Pointer to the head node of the linked list
// index: Index of the node to be deleted
// Returns: Pointer to the head node
node* deletionatindex(node* head, int index) {
    node* p = head; // Pointer to traverse the list
    node* q = head->next; // Pointer to the next node
    for (int i = 0; i < index-1; i++) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    p->next = q->next; // Bypass the node to be deleted
    free(q); // Free the memory of the deleted node
    return head; // Return head node
}

// Function to delete the last node of the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// Returns: Pointer to the head node
node* deletionatlast(node* head) {
    node* p = head; // Pointer to traverse the list
    node* q = head->next; // Pointer to the next node
    while (q->next != NULL) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    p->next = NULL; // Set the second last node's next to NULL
    free(q); // Free the memory of the last node
    return head; // Return head node
}

// Function to delete a node with a specific value
// Parameters:
// head: Pointer to the head node of the linked list
// value: Value of the node to be deleted
// Returns: Pointer to the head node
node* deletionatvalue(node* head, int value) {
    node* p = head; // Pointer to traverse the list
    node* q = head->next; // Pointer to the next node
    while (q->data != value && q->next != NULL) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    if (q->data == value) { // If the node with the value is found
        p->next = q->next; // Bypass the node to be deleted
        free(q); // Free the memory of the deleted node
    }
    return head; // Return head node
}

int main() {
    // Allocating memory for nodes in the linked list in Heap
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth = (struct node*)malloc(sizeof(struct node));

    // Initializing the nodes
    head->data = 2;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 9;
    third->next = fourth;
    
    fourth->data = 99;
    fourth->next = NULL;

    // Display the linked list before deletion
    printf("Linked list before deletion: \n");
    llt(head);

    // Uncomment one of the following lines to test deletion functions:
    // head = deletionatfirst(head); // Delete the first node
    // head = deletionatindex(head, 2); // Delete the node at index 2
    // head = deletionatlast(head); // Delete the last node
    head = deletionatvalue(head, 19); // Delete the node with value 19

    // Display the linked list after deletion
    printf("Linked list after deletion: \n");
    llt(head);

    return 0;
}
