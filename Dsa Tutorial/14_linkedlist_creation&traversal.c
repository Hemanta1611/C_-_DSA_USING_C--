#include <stdio.h>
#include <stdlib.h>

// Self-referencing structure for a Node in a linked list
struct Node {
    int data;           // Data part of the node
    struct Node* next;  // Pointer to the next node
};

// Function to traverse a linked list and print its elements
// Parameters:
// ptr: Pointer to the head node of the linked list
void linkedlisttraversal(struct Node* ptr) {
    int i = 0; // Index for tracking position in the linked list
    while (ptr != NULL) {
        printf("Element at index %d is: %d.\n", i, ptr->data); // Print the current node's data
        ptr = ptr->next; // Move to the next node
        i++;
    }
}

int main() {
    // Allocating memory for nodes in the linked list in the heap
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

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
    linkedlisttraversal(head);

    // Free the allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
