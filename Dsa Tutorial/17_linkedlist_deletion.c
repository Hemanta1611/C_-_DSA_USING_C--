#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

void llt(node * ptr){
    int i = 0;
    while(ptr != NULL){
        printf("Element at index %d is: %d.\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

node * deletionatfirst(node * head){
    node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
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

node * deletionatindex(node * head, int index){
    node * p = head;
    node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

node * deletionatlast(node * head){
    node * p = head;
    node * q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

node * deletionatvalue(node * head, int value){
    node * p = head;
    node * q = head->next;
    while (q->data != value && q->next != NULL) // q->next not equal to NULL because if there is not such value than we will keep running till the end of linked list 😆
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}



int main(){
    
    //  allocating memory for nodes in the linkedlist in Heap
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    struct node * fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data  = 9;
    third->next = fourth;
    
    fourth->data = 99;
    fourth->next = NULL;

    printf("Linked list before deletion: \n");
    llt(head);
    // head = deletionatfirst(head);
    // head = deletionatindex(head, 2);
    // head = deletionatlast(head);
    head = deletionatvalue(head, 19);
    printf("Linded list after deletion: \n");
    llt(head);

    return 0;
}