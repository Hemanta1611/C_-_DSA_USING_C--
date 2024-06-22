#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node * head){
    struct node * ptr = head;
    do
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
    
int main(){
    
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
    fourth->next = head;    

    traversal(head);
    
    return 0;
}