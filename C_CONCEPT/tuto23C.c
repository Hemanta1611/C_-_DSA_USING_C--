#include <stdio.h>

int main(){

int marks[2][4] = {{12,23,78},{34,45,56,67}};

for ( int i = 0; i < 2 ; i++)
{
for (int j = 0; j < 4; j++)
{
    printf("The value of element %d, %d of the array is %d \n", i+1, j+1, marks[i][j]);
    // printf("%d", marks[i][j]);
}
// printf("\n");
}
    return 0;
}