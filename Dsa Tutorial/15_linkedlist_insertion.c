#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// node is what ?
// it is element of linked list in which it contains " a data " and " a pointer " which pointing towards next node

// self referencing structure
// like int is a data type, " struct node " is also user defined data type
// this is what we have just a data type we have not yet created a linked list
struct node{
    int data; // -> 4 bytes
    struct node * next; // -> 8 bytes for 64 bit and 4 bytes for 32 bit computer
    // next is a pointer which link or points to next node and it is a struct node type of variable
    // next is a pointer which link or points to next node
    // next pointer is ponter of struct data type of name called node
    // if it was c++ then we can just declare pointer using just "node"
};

void linkedlisttraversal(struct node * ptr){
    // ptr is a pointer of data type struct node
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element at index %d is: %d. \n",i, ptr->data);
    ptr = ptr->next; // ptr = (*ptr).next
    i++;
    }
}

struct node * insertatfirst(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    // OR
    // head = ptr;
    return ptr;
}

struct node * insertatindex(struct node * head, int data, int index){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    // to keep head as head and use for go throuh linked list and reach certain index and make any change
    int i = 0;
    while (i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    /*
    From down below data (linked list data) lets understand this concept
    lets say we want to insert at index = 2 then index - 1 = 2-1 = 1    here we have done (index -1) because we started from index = 0.
    so lets go inside this while loop 
    1st step:  i = 0  not equal to 1    condition is true so    p = p->next = head->next = second  and i++ so i = 1
    2nd step:  i = 1  not equal to 1    condition is false so   p not equal to p->next i.e. we just stayed there only i.e. p = second
    so now condition is false and we are out of loop and exactly we gone throuh index 0 and 1 and finally reach index 2

    now we will provide data to new node with our defining pointer ptr    by ptr->data = data
    then we link our ptr pointer (new node)  to next node like {ptr->next} = {p->next} = {third pointer} and this is the index 2 where we wand add node
    {from third pointer onwards all pointers are linked with them selves we have not create any change in them so we don't need to worry about them and they are already linked like before}
    
    by this we linked new node with data in requried index
    then the old third node or node at index two will     became fourth node or node at index three and so on 
    and at last we will linked ptr node pointer with previous node by  declaring {p->next} = {ptr} 
    */
}

struct node * insertatend(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    while(p->next != NULL){
            p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
    /*
    again from below data lets understand this topic
    lets go to while loop
    when p->next = null  ---->> this becomes when p = fourth pointer (i.e. fourth -> next = null)
    so we became out of loop when pointer  p = fourth
    now we assign data to our dynamically allocated new node pointer
    now p->next = ptr   (new node pointer)
    now ptr->next = NULL   then linked list became end
    */
}

struct node * insertafternode(struct node * head, struct node * prevNode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

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

    printf("Linked list before insertion: \n");
    linkedlisttraversal(head);
    // head = insertatfirst(head, 56); // This is because this function is returning new head(automatically it became new linked list) so we have to assign head = new head
    // head = insertatindex(head, 56, 2); // This is because this function is returning new head(automatically it became new linked list) so we have to assign head = new head
    head = insertatend(head, 56); // This is because this function is returning new head(automatically it became new linked list) so we have to assign head = new head
    // head = insertafternode(head, second, 56); // This is because this function is returning new head(automatically it became new linked list) so we have to assign head = new head

    printf("Linded list after insertion: \n");
    linkedlisttraversal(head);

    return 0;
}