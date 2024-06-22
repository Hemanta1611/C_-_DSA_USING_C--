#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(int argc, char *argv[])
{
    
    char *operation;
    int n1, n2;
    operation = argv[2];
    n1 = atoi(argv[1]);
    n2 = atoi(argv[3]);// atoi function form stdlib help to make string as an integer

    // printf("operation is %s\n", operation);
    // printf("Number 1 is %d\n", n1);
    // printf("Number 2 is %d\n", n2);
    
    if(strcmp(operation, "+") == 0){
        printf("sum = %d\n", n1+n2);
    }
    else if(strcmp(operation, "-") == 0){
        printf("subtraction = %d\n", n1-n2);
    }
    else if(strcmp(operation, "multiply") == 0){
        printf("multiplication = %d\n", n1*n2);
    }
    else if(strcmp(operation, "/") == 0){
        printf("division = %d\n", n1/n2);
    }
    else{
        printf("WRONG OPTION CHOOSEN");
    }

    return 0;
}