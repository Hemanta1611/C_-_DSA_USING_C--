#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printNumber(int arr[], int n);
    
int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    printNumber(arr, 7);
    int arr2[2][2] = {{11,22},{33,44}};
    printf("%d\t%d\t%d\t%d\n", arr2[0][0],arr2[0][1],arr2[1][0],arr2[1][1]);

    int marks[2][3]; // marks of two student of three subjects
    printf("Enter marks of two students of three subjects:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d", &marks[i][j]);
        } 
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("student[%d]: %d\t", i+1, marks[i][j]);
        } 
        printf("\n");
    }
    

    return 0;
}

void printNumber(int arr[], int n){
    for(int i=0; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}