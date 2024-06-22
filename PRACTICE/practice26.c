#include <stdio.h>

// PROGRAM FOR PRINTING PRINCIPLE DIAGONAL

int main(){
    
    int i, j;
    int a[4][4];
    for( i = 0; i< 4; i++){
        for( j = 0; j< 4; j++){
            scanf("%d", &a[i][j]);
        }
    }    
    for( i = 0; i< 4; i++){
        for( j =0; j< 4; j++){
            i =j;
            printf("PRINCIPLE DIAGONALS ARE:%d\n", a[i][j]);

    }
    }
    return 0;
}