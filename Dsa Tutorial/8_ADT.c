// IMPLEMENTING ARRAY AS AN ABSTRACT DATA TYPE (ADT).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myArray
{
    int total_size; // memory to be reserved
    int used_size; // memory to be used!
    int *ptr; // its points 1st element of array
};

void createArray(struct myArray *a, int tsize, int usize){
    // struct myArray is a pointer so it expect address of a variable not the value of a variable 

    // DEREFERENCING
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *) malloc(tsize*sizeof(int));

    // OR

    // DEREFERENCING
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *) malloc(tsize*sizeof(int));
    
    // to feel it as an integer pointer; we will do it as follows:
    //int *ptr  = (int *) malloc(tsize*sizeof(int)); // this will return integer pointer
}

void setValue(struct myArray *a){
    
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
        // it will become wrong to write code like: n = (a->ptr)[i]; because it will not able to show the elements in show function
    }
    
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}
    
int main(){
    
    struct myArray marks;
    createArray(&marks, 100, 7);
    printf("Now we are running <-set value-> \n");
    setValue(&marks);
    printf("Now we are running <-show-> \n");
    show(&marks);
    
    return 0;
}

// * = value at
// & = address of

// $$$$$$$ V.IMP TRY TO DO SAME THING DIRECTLY BY DECLARING ARRAY OF ANY SIZE 


