#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the circular linked list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) return;

    if (*head == NULL) {
        // If the list is empty, point the new node to itself
        *head = newNode;
        newNode->next = *head;
    } else {
        struct Node* temp = *head;
        // Traverse to the last node
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head; // Make it circular
    }
}

// Function to display the circular linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Function to delete a node from the circular linked list
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) return;

    struct Node *temp = *head, *prev;

    // If the node to be deleted is the head node
    if ((*head)->data == key) {
        // Find the last node in the list
        while (temp->next != *head) {
            temp = temp->next;
        }

        // If the list contains only one node
        if (temp == *head) {
            free(*head);
            *head = NULL;
            return;
        }

        // Make the last node point to the next of head
        temp->next = (*head)->next;
        free(*head);
        *head = temp->next;
    } else {
        // Traverse to find the node to be deleted
        while (temp->next != *head && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If node was found
        if (temp->data == key) {
            prev->next = temp->next;
            free(temp);
        } else {
            printf("Node not found\n");
        }
    }
}

// Main function to test the circular linked list implementation
int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Circular Linked List: ");
    display(head);

    deleteNode(&head, 20);
    printf("After deleting 20: ");
    display(head);

    deleteNode(&head, 10);
    printf("After deleting 10: ");
    display(head);

    deleteNode(&head, 40);
    printf("After deleting 40: ");
    display(head);

    return 0;
}
