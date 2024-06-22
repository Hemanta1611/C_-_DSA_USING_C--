#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// self referencing structure
struct Node{
    int data;
    struct Node * next;
};

void linkedlisttraversal(struct Node * ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element at index %d is: %d. \n",i, ptr->data);
    ptr = ptr->next; // ptr = (*ptr).next
    i++;
    }
}

int main(){
    
//  allocating memory for nodes in the linkedlist in Heap
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data  = 9;
    third->next = fourth;
    
    fourth->data = 99;
    fourth->next = NULL;

    linkedlisttraversal(head);

    return 0;
}