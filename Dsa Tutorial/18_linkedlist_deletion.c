#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
    int data;          // Data part of the node
    struct node* next; // Pointer to the next node
};

// Function to traverse and print the linked list
// Parameters:
// ptr: Pointer to the head node of the linked list
void traversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data); // Print current node's data
        ptr = ptr->next; // Move to the next node
    }
}

// Function to delete the first node of the linked list
// Parameters:
// head: Pointer to the head node of the linked list
// Returns: Pointer to the new head node
struct node* lldeletion_atfirst(struct node* head) {
    struct node* ptr = head; // Temporary pointer to the current head
    head = head->next; // Move head to the next node
    free(ptr); // Free the memory of the old head

    return head; // Return new head
}

// Function to delete a node at a specific index
// Parameters:
// head: Pointer to the head node of the linked list
// index: Index of the node to be deleted
// Returns: Pointer to the head node
struct node* lldeletion_atindex(struct node* head, int index) {
    struct node* p = head; // Pointer to traverse the list
    struct node* q = head->next; // Pointer to the next node
    for (int i = 0; i < index - 1; i++) {
        p = p->next; // Move p to the next node
        q = q->next; // Move q to the next node
    }
    p->next = q->next; // Bypass the node to be deleted
    free(q); // Free the memory of the deleted node
    return head; // Return head node
}

int main() {
    // Allocating memory for nodes in the linked list in Heap
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth = (struct node*)malloc(sizeof(struct node));
    struct node* fifth = (struct node*)malloc(sizeof(struct node));
    struct node* sixth = (struct node*)malloc(sizeof(struct node));
    struct node* seventh = (struct node*)malloc(sizeof(struct node));

    // Initializing the nodes
    head->data = 2;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 99;
    fourth->next = fifth;
    fifth->data = 21;
    fifth->next = sixth;
    sixth->data = 27;
    sixth->next = seventh;
    seventh->data = 29;
    seventh->next = NULL;

    // Display the linked list before deletion
    traversal(head);
    printf("\n");

    // Delete the first node
    head = lldeletion_atfirst(head);
    traversal(head);
    printf("\n");

    // Delete the node at index 5
    head = lldeletion_atindex(head, 5);
    traversal(head);

    return 0;
}
