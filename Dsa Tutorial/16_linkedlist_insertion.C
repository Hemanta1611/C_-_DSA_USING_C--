#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node *ptr){
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
    
struct node * llinsertion_atfirst(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node * llinsertion_atindex(struct node * head, int index, int data ){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node * llinsertion_atlast(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    while(p->next != NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node * llinsertion_afternode(struct node * head, struct node *prev_node, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prev_node->next;
    prev_node->next = ptr;
    return head;
}

int main(){
    
    struct node * head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * fourth = (struct node *) malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 99;
    fourth->next = NULL;

    traversal(head);
    head = llinsertion_atfirst(head, 21);
    printf("\n");
    traversal(head);
    head = llinsertion_atindex(head, 2, 27);
    printf("\n");
    traversal(head);
    head = llinsertion_atlast(head, 29);
    printf("\n");
    traversal(head);
    head = llinsertion_afternode(head, third, 79);
    printf("\n");
    traversal(head);
    
    return 0;
}