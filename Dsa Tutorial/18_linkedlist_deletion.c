#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}

struct node * lldeletion_atfirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

struct node * lldeletion_atindex(struct node * head, int index)
{
    struct node * p = head;
    struct node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

    
int main(){
    
    struct node * head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * fourth = (struct node *) malloc(sizeof(struct node));
    struct node * fifth = (struct node *) malloc(sizeof(struct node));
    struct node * sixth = (struct node *) malloc(sizeof(struct node));
    struct node * seventh = (struct node *) malloc(sizeof(struct node));

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

    traversal(head);
    head = lldeletion_atfirst(head);
    printf("\n");
    traversal(head);
    head = lldeletion_atindex(head, 5);
    printf("\n");
    traversal(head);
    
    return 0;
}