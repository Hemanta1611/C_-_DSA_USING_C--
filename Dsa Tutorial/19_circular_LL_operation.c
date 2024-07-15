#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
struct node {
    int data;          // Data part of the node
    struct node* next; // Pointer to the next node
};

// Function to traverse and print the circular linked list
// Parameters:
// head: Pointer to the head node of the circular linked list
void traversal(struct node* head) {
    struct node* ptr = head; // Pointer to traverse the list
    do {
        printf("Element: %d \n", ptr->data); // Print current node's data
        ptr = ptr->next; // Move to the next node
    } while (ptr != head); // Continue until we reach the head node again
}

int main() {
    // Allocating memory for nodes in the circular linked list in Heap
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
    fourth->next = head; // Last node points back to the head to form a circular linked list

    // Traverse and display the circular linked list
    traversal(head);

    return 0;
}
