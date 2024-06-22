#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    
int main(){
    
    FILE * fptr;
    fptr = fopen("oddnumber.txt", "w");

    int n;
    printf("Enter a number till which you want to print odd numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            fprintf(fptr, "%d\t", i);
        }
    }
    
    
    return 0;
}