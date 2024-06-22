#include <stdio.h>
// ARRAYS
int main(){

int marks[4];
// marks[0] = 34;
// printf("marks of student 1 is %d \n", marks[0]);
// marks[1] = 45;
// printf("marks of student 2 is %d\n", marks[1]);
// marks[2] = 56;
// printf("marks of student 3 is %d\n", marks[2]);
// marks[3] = 67;
// printf("marks of student 4 is %d\n", marks[3]);

for(int i = 0; i < 4; i++)
{
    printf("Enter the value of %d element of the array \n", i);
    //OR printf("Element %d of the array is \n", i);
    scanf("%d", &marks[i]);
}

for(int i = 0; i < 4; i++)
{
    printf("the value of %d element of the array is %d \n", i, marks[i]);
}

    return 0;
}