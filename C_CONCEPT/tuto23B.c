#include <stdio.h>

int main(){

int marks[4] = {34,45,56,67};

for(int i = 0; i < 4; i++)
{
    printf("the value of element %d of the array is %d \n", i+1, marks[i]);
}

    return 0;
}