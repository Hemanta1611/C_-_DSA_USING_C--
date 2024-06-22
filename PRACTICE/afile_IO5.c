#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    FILE * fptr;
    fptr = fopen("add.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    printf("a = %d\n", a);
    int b;
    fscanf(fptr, "%d", &b);
    printf("b = %d\n", b);
    int sum = a + b;
    
    fptr = fopen("add.txt", "a");
    fprintf(fptr, "\nsum = %d\n", sum);
    
    return 0;
}